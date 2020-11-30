cmake_minimum_required(VERSION 3.5)

project(resistencias LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(KF5_MIN_VERSION "5.2.0")

find_package(ECM 1.0.0 REQUIRED NO_MODULE)
set(CMAKE_MODULE_PATH ${ECM_MODULE_PATH} ${ECM_KDE_MODULE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets LinguistTools REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets LinguistTools REQUIRED)

find_package(KF5 ${KF5_MIN_VERSION} REQUIRED COMPONENTS
    CoreAddons
    I18n
    WidgetsAddons
)

find_package(KF5WidgetsAddons REQUIRED)

set(TS_FILES resistencias_es_MX.ts)
feature_summary(WHAT ALL INCLUDE_QUIET_PACKAGES FATAL_ON_MISSING_REQUIRED_PACKAGES)
add_executable(resistencias
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    codificador.h
    codificador.cpp
    codificador.ui
    decodificador.h
    decodificador.cpp
    decodificador.ui
    ${TS_FILES}
  )

target_link_libraries(resistencias PRIVATE Qt${QT_VERSION_MAJOR}::Widgets
    KF5::WidgetsAddons
)

qt5_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
