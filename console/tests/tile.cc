#include "tile.hh"

#include <iostream>

void test_construct();
void test_resize_move();
void test_equality();

/* ================ main ================ */

int main(void) {
    test_construct();
    // test_resize_move();
    // test_equality();
    return 0;
}

/* ================ Definitions ================ */


void test_equality() {
    using Trado::Tile;
    auto t1 = Tile(0,0,1,1);
    auto t2 = Tile(0,0,1,1);
    std::cout << "t1: " << t1 << std::endl;
    std::cout << "t2: " << t2 << std::endl;
    std::cout << "t1 == t2: " << ((t1 == t2) ? "true" : "false") << std::endl;
    t1.move(1,9);
    std::cout << "-----------------\n";
    std::cout << "t1: " << t1 << std::endl;
    std::cout << "t2: " << t2 << std::endl;
    std::cout << "t1 == t2: " << ((t1 == t2) ? "true" : "false") << std::endl;
    t2.move(1,9);
    std::cout << "-----------------\n";
    std::cout << "t1: " << t1 << std::endl;
    std::cout << "t2: " << t2 << std::endl;
    std::cout << "t1 == t2: " << ((t1 == t2) ? "true" : "false") << std::endl;
    t2.resize(3,9);
    std::cout << "-----------------\n";
    std::cout << "t1: " << t1 << std::endl;
    std::cout << "t2: " << t2 << std::endl;
    std::cout << "t1 == t2: " << ((t1 == t2) ? "true" : "false") << std::endl;
    t1.resize(3,9);
    std::cout << "-----------------\n";
    std::cout << "t1: " << t1 << std::endl;
    std::cout << "t2: " << t2 << std::endl;
    std::cout << "t1 == t2: " << ((t1 == t2) ? "true" : "false") << std::endl;
}

void test_resize_move() {
    using Trado::Tile;
    auto tile = Tile();
    std::cout << "tile = " << tile << std::endl;
    tile.move(12,12);
    std::cout << "tile.move(12,12);" << std::endl;
    std::cout << "\ttile = " << tile << std::endl;
    tile.resize(10,10);
    std::cout << "tile.resize(10,10);" << std::endl;
    std::cout << "\ttile = " << tile << std::endl;
    tile.resize(-5,-5);
    std::cout << "tile.resize(-5,-5);" << std::endl;
    std::cout << "\ttile = " << tile << std::endl;
    tile.resize(-10,-10);
    std::cout << "tile.resize(-10,-10);" << std::endl;
    std::cout << "\ttile = " << tile << std::endl;
    tile.move(-3,-3);
    std::cout << "tile.move(-3,-3);" << std::endl;
    std::cout << "\ttile = " << tile << std::endl;
}

void test_construct() {
    using Trado::Tile;
    auto zero = Tile();
    std::cout << "auto zero = Tile();\n\t" << zero << '\n';
    auto one = Tile(1, 1);
    std::cout << "auto one = Tile(1,1);\n\t" << one << '\n';
    auto full = Tile(2, 2, 2, 2);
    std::cout << "auto full = Tile(2,2,2,2);\n\t" << full << '\n';
    auto copy = full;
    std::cout << "auto copy = full;\n\t" << copy << '\n';
    auto tmpo = std::move(Tile{3, 3, 3, 3});
    std::cout << "auto tmpo = Tile(Tile{3, 3, 3, 3});\n\t" << tmpo << '\n';
    Tile initlist {4,4,4,4};
    std::cout << "Tile initlist {4,4,4,4};\n\t" << initlist << '\n';
    Tile initlistass = {4,4,4,4};
    std::cout << "Tile initlistass = {4,4,4,4};\n\t" << initlistass << '\n';
}