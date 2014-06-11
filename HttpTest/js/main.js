var RootUrl='http://desktop.61read.com/';
function img_error(){
	var img=event.srcElement;
	img.src="images/no_image.jpg"; 
	img.onerror=null;
};

$(function() {
	Index.init();
	DataAction.init();

	$('.CppJsHub').on('click',
	function() {
		var action = $(this).attr('action');
		var data = $(this).attr('data');
		switch (action) {
		case 'video':
			CppJsHub.playVideo(data);
			break;
		case 'flv':
			CppJsHub.playFlv(data);
			break;
		default:
			break;
		}
	});
	
	$('img').error(function(){
		$(this).attr('src','images/no_image.jpg');
		$(this)[0].onerror=null;
	});
	
});


var Index={
	init:function(){
		jQuery(".slideBox").slide({
			mainCell: ".bd>ul",
			titCell: "#index_nav li",
			effect: "left",
			autoPlay: false,
			trigger: "click"
		});
		
		$(window).resize(function() {
			Index.setNavPosition();
		});
		$(document).scroll(function() {
			Index.setNavPosition();
		});
		this.setNavPosition();
		this.searchTip();
		this.avatarTip();
		
		$('#search_btn').live('click',function(){
			$('#search_result_dialog').dialog('open');
		});
		this.slideNav();
		
	},
	setNavPosition:function(){
		
		var _wHeight = $(window).height();
		var _wWidth=$(window).width();
		var _lNavW=$('#index_nav').width();
		$('#index_nav,#index_right').css('height', _wHeight);
		var _lUl_h = $('#index_left_ul').height() > 594 ? $('#index_left_ul').height() : 594;
		if (_wHeight - _lUl_h > 0) $('#index_left_ul').css('top', (_wHeight - _lUl_h) / 2);
		$('#slideBox_ul>li').css('height', _wHeight).each(function(i) {
			var _child = $(this).children().first();
			var _pLeft=(_wWidth - _child.width()-_lNavW) / 2;
			var _pTop=(_wHeight - _child.height()) / 2;
			_pTop=_pTop>0?_pTop:0;
			_pLeft=_pLeft>200?200:_pLeft;
			_pLeft=_pLeft>0?_pLeft:0;
			
			if(i<1){
				_child.css('margin-top', _pTop);
			}
			$(this).css('padding-left', _pLeft);
			
		});
	},
	searchTip:function(){
		$('#btn_index_search').poshytip({
				className: 'tip-twitter',
				showOn:'click',
				alignTo: 'target',
				showTimeout:1,
				hideTimeout:2000,
				alignX: 'center',
				content:function(updateCallBack){
					var html=[];
					html.push('<div id="index_search_tip">');
					html.push('<input type="text" id="search_text" placeholder="请输入关键字"/>');
					html.push('<select id="search_option"><option>期刊</option><option>电子书</option><option>视频</option><option>音频</option></select>');
					html.push('<input type="button" id="search_btn" class="btn" value="搜索" />');
					html.push('</div>');
					return html.join('');
				}
		});	
		$('#search_result_dialog').dialog({
			autoOpen : false,
			resizable : false,
			width : 490,
			modal : true,
			buttons : {
				"确定" : function() {
					
				},
				'取消' : function() {
					$(this).dialog("close");
				}
			},
			close : function() {
				
			}
		});		
		
	},
	avatarTip:function(){
		$('#btn_index_avatar').poshytip({
				className: 'tip-twitter',
				showOn:'hover',
				alignTo: 'target',
				alignX: 'center',
				content:function(updateCallBack){
					var html=[];
					html.push('<ul id="index_avatar_tip">');
					html.push('<li>最近阅读</li>');
					html.push('<li>最近播放</li>');
					html.push('<li>收藏夹</li>');
					html.push('<li>我的提问</li>');
					html.push('<li>个人资料</li>');
					html.push('<li>退出</li>');
					html.push('</ul>');
					return html.join('');
				}
		});	
	},
	slideNav:function(){
		$('.slideBox_li_ul_nav li').click(function(){
			//alert($(this).index());
		});
	}
};

var DataAction={
	init:function(){
		$('.slideBox_li_ul_nav>li').each(function(i){
			var _data=$(this).attr('data');
			var _action=$(this).attr('action');
			
			if(_data){				
				var _option={};
				_option.id=$(this).parent().attr('data');
				_option.page=0;
				_option.size=10;
				_option.target=_option.id+'-'+_action+'-'+_data;
				if(_action=='m'){
					DataAction.loadMagazines(_option);
				}else{
					_option.cid=_data;
					DataAction.loadAlbums(_option);
				}
			}
		});
		$('.ul_magazine>li>div').live('click',function(){
			var _option={};
			_option.id=$(this).attr('data');
			_option.title=$(this).attr('title');
			DataAction.loadMagazineDetails(_option);
		});
		$('.ul_album>li').live('click',function(){
			var _option=$(this).data('data');
			DataAction.loadAlbumDetails(_option);
		});
		$('.slideBox_li_ul_nav>li').click('click',function(){
			var _index=$(this).index();
			var _parent=$(this).parent();
			var _old=_parent.next().children('.active');
			var _target=_parent.next().children(':eq('+_index+')');
			_old.hide();
			_target.addClass('active').slideDown(1000);
		});
	},
	loadMagazines:function(option){
		var _params={
			magazinetypeid:option.id,
			pageindex:option.page,
			pagesize:option.size
		};
		$.getJSON(RootUrl+'magazine/getmagazinelist?callback=?', _params, function(json){
			console.log("loadMagazines JSON Data: " + json.count+'-----'+option.target);			
			$('#'+option.target+'>ul').empty();
			$('#magazineListTmpl').tmpl(json.data).appendTo('#'+option.target+'>ul');
		});
	},
	loadMagazineDetails:function(option){
		var _params={
			id:option.id
		};
		$.getJSON(RootUrl+'magazine/getmagazinedetailslist?callback=?', _params, function(json){
			option.count=json.count;
			option.data=json.data;
			DataAction.MagazineDetailDialog(option);
		});
	},
	MagazineDetailDialog:function(option){
		$('#magazine_details_dialog_content>ul').empty();
		if(option.count==0){
			$('#magazine_details_dialog_content>ul').html('<li>抱歉，暂无资源!</li>');
		}else{			
			$('#magazineDetailsListTmpl').tmpl(option.data).appendTo('#magazine_details_dialog_content>ul');
		}
		$('#magazine_details_dialog').dialog({
			title:option.title,
			autoOpen : true,
			resizable : false,
			width : 490,
			modal : true,
			buttons : {
				"确定" : function() {
					
				},
				'取消' : function() {
					$(this).dialog("close");
				}
			},
			close : function() {
				
			}
		});		
	},
	loadAlbums:function(option){
		var _params={
			magazinetypeid:option.id,
			categoryid:option.cid,
			pageindex:option.page,
			pagesize:option.size
		};
		$.getJSON(RootUrl+'album/getalbumlist?callback=?', _params, function(json){
			console.log("loadAlbums JSON Data: " + json.count+'-----'+option.target);
			$('#'+option.target+'>ul').empty();
			$('#albumListTmpl').tmpl(json.data).appendTo('#'+option.target+'>ul');
			if(json.count>0){
				$.each(json.data,function(i,item){
					console.log(item.id);
					var _li=$('#'+item.id,$('#'+option.target+'>ul'));
					if(item.id==_li.attr('id')){
						_li.data('data',item);
					}
				});
			}
		});
	},
	loadAlbumDetails:function(option){		
		var _params={
			id:option.id
		};
		_params.id='79373332-4088-4922-9CC3-06C3F8600C31';
		$.getJSON(RootUrl+'album/getalbumdetaillist?callback=?', _params, function(json){
			option.data=json.data;
			option.count=json.count;
			DataAction.AlbumDetailDialog(option);
		});
	},
	AlbumDetailDialog:function(option){
		$('#album_details_dialog_cover').attr('src',option.frontcover);
		$('#album_details_dialog_intro').html(option.intro);
		$('#album_details_dialog_content>ul').empty();
		if(option.count==0){
			$('#album_details_dialog_content>ul').html('<li>抱歉，暂无资源!</li>');
		}else{			
			$('#albumDetailsListTmpl').tmpl(option.data).appendTo('#album_details_dialog_content>ul');
		}
		$('#album_details_dialog').dialog({
			title:option.albumname,
			autoOpen : true,
			resizable : true,
			width: 800,
			height:700,
			modal : true,
			buttons : {
				"确定" : function() {
					
				},
				'取消' : function() {
					$(this).dialog("close");
				}
			},
			close : function() {
				
			}
		});		
	}
};
