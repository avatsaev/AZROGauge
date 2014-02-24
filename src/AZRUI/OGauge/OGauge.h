/*
 * OGauge.h
 *
 *  Created on: Sep 7, 2013
 *      Author: avatsaev
 */

#ifndef OGauge_H_
#define OGauge_H_


#include <bb/cascades/ImageView>
#include <bb/cascades/Image>
#include <bb/ImageData>
#include <bb/cascades/CustomControl>
#include <bb/cascades/Label>
#include <bb/cascades/Container>
#include <bb/cascades/DockLayout>
#include <bb/cascades/QmlDocument>
#include <bb/cascades/VisualNode>


using namespace bb::cascades;

namespace AZRUI{

	class OGauge : public bb::cascades::CustomControl {

		Q_OBJECT
			Q_PROPERTY(float value READ value WRITE setValue NOTIFY valueChanged)
			Q_PROPERTY(bb::cascades::Image image READ image NOTIFY imageChanged)
			Q_PROPERTY(QString color READ color WRITE setColor NOTIFY colorChanged)
			Q_PROPERTY(QUrl foreground READ foregroundUrl WRITE setForegroundUrl NOTIFY foregroundUrlChanged)
			Q_PROPERTY(bool labelVisible READ labelVisible WRITE setLabelVisible NOTIFY labelVisibleChanged)


		public:
			OGauge(int value = 0, QString color = "#FF0000", bool labelVisible = true);
			virtual ~OGauge() { }


		Q_SIGNALS:
			void valueChanged();
			void imageChanged();
			void colorChanged();
			void foregroundUrlChanged();
			void labelVisibleChanged();

		private:
			//data
			float m_value;
			QString m_color;
			bb::cascades::Image m_image;
			QSize m_workingImageSize;
			//ui
			ImageView* m_gauge;
			ImageView* m_foreground;
			QUrl m_foregroundUrl;
			Label* m_label;
			bool m_labelVisible;

		private:
			float value();
			QString color();
			bool labelVisible();
			QUrl foregroundUrl();
			bb::cascades::Image image() const;

			//A helper method that is called each time percents amount is changed
			void update();

		public:
			void setValue(float value);
			void setColor(QString);
			void setForegroundUrl(QUrl url);
			void setLabelVisible(bool visible);
	};

}

QML_DECLARE_TYPE (AZRUI::OGauge)



#endif /* OGauge_H_ */
