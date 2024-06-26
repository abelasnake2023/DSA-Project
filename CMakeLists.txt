cmake_minimum_required(VERSION 3.5)

project(Class_Schedulizer VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -frtti")

set(PROJECT_SOURCES
        main.cpp
        widget.cpp
        widget.h
        widget.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Class_Schedulizer
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        stackedwidgetmain.h stackedwidgetmain.cpp
        external_resouces.qrc
        loginpage.h loginpage.cpp
        widget.cpp
        DepBox.h
        DepBox.cpp
        inputpage.h inputpage.cpp
        createschedulepage.h createschedulepage.cpp
        deppage.h deppage.cpp
        signuppage.h signuppage.cpp
        userpage.h userpage.cpp
        customqcheckboxforschtable.h customqcheckboxforschtable.cpp

        BackEnd_C++/BackTracking/BackTrackingRepeatingPermutation.h BackEnd_C++/BackTracking/CSPRepeatingPermutation.h
        BackEnd_C++/InputPage/CreateSchedule/scheduletableinfo.cpp BackEnd_C++/InputPage/CreateSchedule/scheduletableinfo.h
        BackEnd_C++/InputPage/CreateSchedule/Validate.cpp BackEnd_C++/InputPage/CreateSchedule/Validate.h
        BackEnd_C++/Library/DataStructures/Stack/NodeStack.h
        BackEnd_C++/Library/DataStructures/Stack/Stack.h
        BackEnd_C++/Library/DataStructures/LinkedList/NodeSingleLinkedList.h BackEnd_C++/Library/DataStructures/LinkedList/SingleLinkedList.h
        depscheduletable.h depscheduletable.cpp
        batchpage.h batchpage.cpp
        batchscheduletable.h batchscheduletable.cpp
        batchbox.h batchbox.cpp
        sectionpage.h sectionpage.cpp
        coursepage.h coursepage.cpp
        coursescheduletable.h coursescheduletable.cpp
        sectionscheduletable.h sectionscheduletable.cpp
        coursesectionbox.h coursesectionbox.cpp
        coursebox.h coursebox.cpp
        sectionbox.h sectionbox.cpp
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET Class_Schedulizer APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(Class_Schedulizer SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(Class_Schedulizer
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(Class_Schedulizer PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.Class_Schedulizer)
endif()
set_target_properties(Class_Schedulizer PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS Class_Schedulizer
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Class_Schedulizer)
endif()
