import QtQuick 2.0

Rectangle {
    id: simplebutton
    width: 200; height: 200

    Text{
        id: buttonLabel
        x: 39
        y: 32
        anchors.centerIn: parent
        text: "button label"
        anchors.verticalCenterOffset: 0
        anchors.horizontalCenterOffset: 0
    }
    property color buttonColor: "lightblue"
    property color onHoverColor: "gold"
    property color borderColor: "white"

    signal buttonClick()
    onButtonClick: {
        console.log(buttonLabel.text + " clicked" )
    }

    MouseArea{
        id: buttonMouseArea
        anchors.fill: parent
        onClicked: buttonClick()
        hoverEnabled: true
        onEntered: parent.border.color = onHoverColor
        onExited:  parent.border.color = borderColor
    }

    // 通过条件操作符来决定按钮的颜色
    color: buttonMouseArea.pressed ? Qt.darker(buttonColor, 1.5) : buttonColor
}
