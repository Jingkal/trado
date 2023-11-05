add_library(ncurses SHARED IMPORTED)

set_target_properties(ncurses PROPERTIES
    IMPORTED_LOCATION /usr/lib/x86_64-linux-gnu/libncurses.so
    PUBLIC_HEADER /usr/include/curses.h
)
