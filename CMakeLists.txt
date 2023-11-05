cmake_minimum_required(VERSION 3.25)

project(trado
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(cmake/configs.cmake)
include(cmake/mktests.cmake)

# lib ncurses
# include(cmake/ncurses.cmake)

# =================================
# Console
# =================================
add_subdirectory(console)

