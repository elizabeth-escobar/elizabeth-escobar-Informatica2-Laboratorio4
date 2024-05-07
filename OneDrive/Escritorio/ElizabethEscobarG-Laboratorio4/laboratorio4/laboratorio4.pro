TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        compra.cpp \
        cuentaCorriente.cpp \
        main.cpp \
        productos.cpp

HEADERS += \
    compra.h \
    cuentaCorriente.h \
    productos.h

DISTFILES += \
    ../../Nueva carpeta/productos_aseo.csv \
    ../../Nueva carpeta/productos_comestibles.csv \
    ../../Nueva carpeta/productos_electronicos .csv
