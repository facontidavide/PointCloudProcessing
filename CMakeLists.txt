cmake_minimum_required(VERSION 2.8)

project(PointCloud)

FIND_PACKAGE(Qt4 REQUIRED)
find_package( Qt4 REQUIRED )
include( ${QT_USE_FILE} )
add_definitions( ${QT_DEFINITIONS} )

find_package(OpenGL)
find_package(GLUT)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(
    ./IncludeLib/vcglib
    ./IncludeLib/ann_1.1.2/include
    )

QT4_ADD_RESOURCES (RES_SRC  mainwindow.qrc )

QT4_WRAP_UI ( UI_SRC
    mainwindow.ui
    )

SET( APP_SRC
    calculationthread.cpp
    Console.cpp
    DataMgr.cpp
    GLArea.cpp
    GLDrawer.cpp
    GlobalFunction.cpp
    grid.cpp
    main.cpp
    mainwindow.cpp
    Parameter.cpp
    ParameterMgr.cpp
    plylib.cpp
    trackball.cpp
    trackmode.cpp
    WLOP.cpp
    )

add_executable(${PROJECT_NAME} ${APP_SRC} ${RES_SRC} ${UI_SRC})


target_link_libraries(${PROJECT_NAME}
    ${QT_LIBRARIES}
    ${OPENGL_gl_LIBRARY}
    ${GLUT_LIBRARIES}
    )