
#include "OGauge.h"

using namespace bb::cascades;
using namespace AZRUI;

OGauge::OGauge(int value, QString color) : CustomControl() {

    m_value = value;
    m_color = color;
    m_workingImageSize = QSize(314, 314);




    Container *rootContainer = Container::create().layout(DockLayout::create());

    m_label = new Label();
    m_label->setText(QString::number((int)(m_value*100.0))+"%");
    m_label->setVerticalAlignment(VerticalAlignment::Center);
    m_label->setHorizontalAlignment(HorizontalAlignment::Center);

    m_gauge = new ImageView();
    m_gauge->setImage(m_image);
    m_gauge->setVerticalAlignment(VerticalAlignment::Center);
    m_gauge->setHorizontalAlignment(HorizontalAlignment::Center);

    m_foreground = new ImageView();
    m_foregroundUrl = QUrl("asset:///AZRUI_Assets/images/foreground1.png");
    m_foreground->setImageSource(m_foregroundUrl);
    m_foreground->setVerticalAlignment(VerticalAlignment::Center);
    m_foreground->setHorizontalAlignment(HorizontalAlignment::Center);


	rootContainer->add(m_gauge);
	rootContainer->add(m_foreground);

	rootContainer->add(m_label);

	setRoot(rootContainer);

}

float OGauge::value(){
	return m_value;
}


QUrl OGauge::foregroundUrl(){
	return m_foregroundUrl;
}

QString OGauge::color(){
	return m_color;
}

void OGauge::setValue(float p){

	if(p>1.0) p=1.0;
	else if(p<0.0) p=0.0;

	m_value = p;

	emit valueChanged();
	update();
}


void OGauge::setColor(QString c){
	m_color = c;
	emit colorChanged();
	update();
}

void OGauge::setForegroundUrl(QUrl url){
	m_foregroundUrl = QUrl(url);
	m_foreground->setImageSource(m_foregroundUrl);
	emit foregroundUrlChanged();


}





bb::cascades::Image OGauge::image() const{

	return m_image;

}

void OGauge::update(){

        QImage image(m_workingImageSize, QImage::Format_ARGB32);
		image.fill(qRgba(0, 0, 0, 0));

		QColor mainColor(m_color);
		QPainter painter(&image);
		painter.setRenderHint(QPainter::Antialiasing, true);

		painter.setPen(QPen(mainColor));
		painter.setBrush(QBrush(mainColor));
		painter.drawPie(0, 0, m_workingImageSize.width(), m_workingImageSize.height(), 16*360, 16*((int)(m_value*100.0)*360/100));

		const QImage _image(image.rgbSwapped());

		bb::ImageData imageData = bb::ImageData::fromPixels(_image.bits(), bb::PixelFormat::RGBA_Premultiplied, _image.width(), _image.height(), _image.bytesPerLine());
		m_image = bb::cascades::Image(imageData);
		m_gauge->setImage(m_image);
		m_label->setText(QString::number((int)(m_value*100.0))+"%");


		emit imageChanged();
}
