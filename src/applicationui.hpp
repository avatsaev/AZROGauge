#ifndef ApplicationUI_HPP_
#define ApplicationUI_HPP_

#include <QObject>
#include <bb/cascades/Image>
#include "AZRUI/OGauge.h"

namespace bb
{
    namespace cascades
    {
        class Application;
        class LocaleHandler;
    }
}

class QTranslator;

class ApplicationUI : public QObject{
	Q_OBJECT


public:
    ApplicationUI(bb::cascades::Application *app);
    virtual ~ApplicationUI() { }

private slots:
    void onSystemLanguageChanged();



private:
    QTranslator* m_pTranslator;
    bb::cascades::LocaleHandler* m_pLocaleHandler;



};

#endif /* ApplicationUI_HPP_ */
