#include "window.hh"

namespace Trado {

/* ================== Constructors ================== */

Window::Window() {}

Window::Window(const Tile& bord, bool border) : t_bord(bord) {
    init_view(border);
}

Window::Window(Tile&& bord, bool border) : t_bord(std::move(bord)) {
    init_view(border);
}

Window::Window(int height, int width, int row, int col, bool border)
    : Window({height, width, row, col}, border) {}

/* ================== Member Functions ================== */

void Window::init_view(bool border) {
    t_view = t_bord;
    if (!border) return;
    t_view.resize(-2, -2);
    t_view.move(1, 1);
}

/* ================== Tool Functions ================== */

}  // namespace Trado
