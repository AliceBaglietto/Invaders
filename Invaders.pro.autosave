QT -=gui
TARGET=Invaders #title
DESTDIR=./
SOURCES+=main.c #source files in C. You can add more if you wish
HEADERS+=Invader.h
cache()
QMAKE_CFLAGS+=-std=c99 #flags we want to set
QMAKE_CFLAGS+=$$system(sdl2-config  --cflags) #script that help the program to clang
message(output from sdl2-config --cflags added to CXXFLAGS= $$QMAKE_CFLAGS) #where to look to include the file #sdl2-config--libs: where to look for libraries
INCLUDEPATH+=/usr/local/include/SDL2
LIBS+=$$system(sdl2-config  --libs)
message(output from sdl2-config --libs added to LIB=$$LIBS)
LIBS+=-lSDL2_image
macx:DEFINES+=MAC_OS_X_VERSION_MIN_REQUIRED=1060 #for macs only
CONFIG += console
CONFIG -= app_bundle
