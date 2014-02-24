# Auto-generated by IDE. Any changes made by user will be lost!
BASEDIR =  $$quote($$_PRO_FILE_PWD_)

device {
    CONFIG(debug, debug|release) {
        SOURCES +=  $$quote($$BASEDIR/src/AZRUI/OGauge/OGauge.cpp) \
                 $$quote($$BASEDIR/src/applicationui.cpp) \
                 $$quote($$BASEDIR/src/main.cpp)

        HEADERS +=  $$quote($$BASEDIR/src/AZRUI/OGauge/OGauge.h) \
                 $$quote($$BASEDIR/src/applicationui.hpp)
    }

    CONFIG(release, debug|release) {
        SOURCES +=  $$quote($$BASEDIR/src/AZRUI/OGauge/OGauge.cpp) \
                 $$quote($$BASEDIR/src/applicationui.cpp) \
                 $$quote($$BASEDIR/src/main.cpp)

        HEADERS +=  $$quote($$BASEDIR/src/AZRUI/OGauge/OGauge.h) \
                 $$quote($$BASEDIR/src/applicationui.hpp)
    }
}

simulator {
    CONFIG(debug, debug|release) {
        SOURCES +=  $$quote($$BASEDIR/src/AZRUI/OGauge/OGauge.cpp) \
                 $$quote($$BASEDIR/src/applicationui.cpp) \
                 $$quote($$BASEDIR/src/main.cpp)

        HEADERS +=  $$quote($$BASEDIR/src/AZRUI/OGauge/OGauge.h) \
                 $$quote($$BASEDIR/src/applicationui.hpp)
    }
}

INCLUDEPATH +=  $$quote($$BASEDIR/src/AZRUI/OGauge) \
         $$quote($$BASEDIR/src)

CONFIG += precompile_header

PRECOMPILED_HEADER =  $$quote($$BASEDIR/precompiled.h)

lupdate_inclusion {
    SOURCES +=  $$quote($$BASEDIR/../src/*.c) \
             $$quote($$BASEDIR/../src/*.c++) \
             $$quote($$BASEDIR/../src/*.cc) \
             $$quote($$BASEDIR/../src/*.cpp) \
             $$quote($$BASEDIR/../src/*.cxx) \
             $$quote($$BASEDIR/../src/AZRUI/*.c) \
             $$quote($$BASEDIR/../src/AZRUI/*.c++) \
             $$quote($$BASEDIR/../src/AZRUI/*.cc) \
             $$quote($$BASEDIR/../src/AZRUI/*.cpp) \
             $$quote($$BASEDIR/../src/AZRUI/*.cxx) \
             $$quote($$BASEDIR/../src/AZRUI/OGauge/*.c) \
             $$quote($$BASEDIR/../src/AZRUI/OGauge/*.c++) \
             $$quote($$BASEDIR/../src/AZRUI/OGauge/*.cc) \
             $$quote($$BASEDIR/../src/AZRUI/OGauge/*.cpp) \
             $$quote($$BASEDIR/../src/AZRUI/OGauge/*.cxx) \
             $$quote($$BASEDIR/../assets/*.qml) \
             $$quote($$BASEDIR/../assets/*.js) \
             $$quote($$BASEDIR/../assets/*.qs) \
             $$quote($$BASEDIR/../assets/AZRUI/*.qml) \
             $$quote($$BASEDIR/../assets/AZRUI/*.js) \
             $$quote($$BASEDIR/../assets/AZRUI/*.qs) \
             $$quote($$BASEDIR/../assets/AZRUI/images/*.qml) \
             $$quote($$BASEDIR/../assets/AZRUI/images/*.js) \
             $$quote($$BASEDIR/../assets/AZRUI/images/*.qs) \
             $$quote($$BASEDIR/../assets/AZRUI/images/OGauge/*.qml) \
             $$quote($$BASEDIR/../assets/AZRUI/images/OGauge/*.js) \
             $$quote($$BASEDIR/../assets/AZRUI/images/OGauge/*.qs)

    HEADERS +=  $$quote($$BASEDIR/../src/*.h) \
             $$quote($$BASEDIR/../src/*.h++) \
             $$quote($$BASEDIR/../src/*.hh) \
             $$quote($$BASEDIR/../src/*.hpp) \
             $$quote($$BASEDIR/../src/*.hxx)
}

TRANSLATIONS =  $$quote($${TARGET}.ts)
