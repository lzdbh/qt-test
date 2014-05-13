import QtQuick 2.1

Item{
    id:test
    width:300
    height:200

    Loader{
        anchors.fill:parent
        sourceComponent:rect
    }

    Component{
        id:rect
        Rectangle{
            id:myRect
            width:50
            height:50
            color:"lightGray"

            function message(str){
                console.log(str)
            }

            MouseArea{
                anchors.fill:parent
                onClicked:myRect.message("clicked!")
            }
        }

    }
}
