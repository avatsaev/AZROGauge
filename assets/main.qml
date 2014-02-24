import bb.cascades 1.0
import AZRUI 1.0

Page {
    Container {
        background: Color.create("#ff333333")
        verticalAlignment: VerticalAlignment.Fill
        horizontalAlignment: HorizontalAlignment.Fill
        layout: DockLayout {}
        Container {
            verticalAlignment: VerticalAlignment.Center

            horizontalAlignment: HorizontalAlignment.Center
            OGauge {
                id: gauge
                value: 0.5
                color: "#FF0000"
                horizontalAlignment: HorizontalAlignment.Center
                verticalAlignment: VerticalAlignment.Center
                
            }
            
            Slider {
                topMargin: 30
                
                onImmediateValueChanged: {
                    gauge.value =immediateValue 
                    
                    if(gauge.value > 0.0 && gauge.value<0.5) gauge.color = "#FF0000"
                    else if(gauge.value>0.5 && gauge.value < 0.75) gauge.color = "#ff9000"
                    else if(gauge.value>0.75 && gauge.value < 1.0) gauge.color = "#f0ff00"  
                    else if(gauge.value>=1.0) gauge.color = "#00FF00"
                }
                horizontalAlignment: HorizontalAlignment.Center
                verticalAlignment: VerticalAlignment.Center
            }
            RadioGroup {
                
                options:[
                    
                    Option {
                        text: "Foreground A"
                        selected: true
                        imageSource: "asset:///AZRUI/images/OGauge/foreground1.png"
                        description: "Set open foreground"
                    },
                    
                    Option {
                        
                        text: "Foreground B"
                        imageSource: "asset:///AZRUI/images/OGauge/foreground2.png"
                        description: "Set closed foreground"
                    }
                    
                ]
                onSelectedIndexChanged: {
                    if(selectedIndex==0){
                        gauge.foreground = "asset:///AZRUI/images/OGauge/foreground1.png"
                    }else{
                        gauge.foreground = "asset:///AZRUI/images/OGauge/foreground2.png"
                    }
                }
                selectedIndex: 0
            }

            Container {
                topMargin: 30
                layout: StackLayout {
                    orientation: LayoutOrientation.LeftToRight

                }

                horizontalAlignment: HorizontalAlignment.Center
                Label {
                   text: "Label visible:"
                    textStyle.color: Color.create("#ffeaeaea")
                    implicitLayoutAnimationsEnabled: false

                }

                ToggleButton {
                    horizontalAlignment: HorizontalAlignment.Right
                    checked: gauge.labelVisible
                    onCheckedChanged: {
                        gauge.labelVisible = checked
                    }
                }

            }
            
            
        }
        

    }
}
