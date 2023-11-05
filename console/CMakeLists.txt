project(console
    LANGUAGES CXX
)
add_library(${PROJECT_NAME} STATIC "")

target_sources(${PROJECT_NAME}
    PRIVATE src/tile.cc src/window.cc
    PUBLIC include/tile.hh include/window.hh
)

target_include_directories(${PROJECT_NAME}
    PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include"
)

set_target_properties(${PROJECT_NAME} PROPERTIES
    PUBLIC_HEADER "include/tile.hh include/window.hh "
)


maketests()