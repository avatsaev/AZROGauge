import bb.cascades 1.0
import AZRUI 1.0

Page {
    Container {
        OGauge {
            id: gauge
            value: 0.5
            foreground: "asset:///AZRUI/images/foreground1.png"
            color: "#FF0000"
            horizontalAlignment: HorizontalAlignment.Center
            verticalAlignment: VerticalAlignment.Center
        }
        Slider {
            
            onImmediateValueChanged: {
                gauge.value =immediateValue 
            }
            horizontalAlignment: HorizontalAlignment.Center
        }


    }
}
