project("accessing_widgets_lib")

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# TODO add version which exposes the ui object in the public interface...
# TODO add version which exposes via friendship...

add_library(
        ${PROJECT_NAME}
        samplewidgets00_no_accessor.cpp
        samplewidgets00_no_accessor.h
        samplewidgets01_public_accessor.cpp
        samplewidgets01_public_accessor.h
        samplewidgets02_protected_accessor.cpp
        samplewidgets02_protected_accessor.h
        samplewidgets03_private_accessor.cpp
        samplewidgets03_private_accessor.h
        samplewidgets.ui
)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

find_package(Qt5 COMPONENTS Widgets Test REQUIRED)
target_link_libraries(${PROJECT_NAME} PUBLIC Qt5::Widgets)
