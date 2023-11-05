#ifndef LIB_CONSOLE_TILE_HH
#define LIB_CONSOLE_TILE_HH

#include <cstdio>
#include <iostream>
#include <string>

#define TRADO_INFO_STRING_BUF 80

namespace Trado {

/*
 * Tile to store window info:
 *   - h: height
 *   - w: width
 *   - y: row
 *   - x: column
 */
class Tile {
    friend std::ostream& operator<<(std::ostream& os, const Tile& tile);
    friend bool operator==(const Tile& t1, const Tile& t2);
    friend bool operator!=(const Tile& t1, const Tile& t2);

   private:
    int h{0};  // tile height
    int w{0};  // tile width
    int y{0};  // tile y axis - row
    int x{0};  // tile x axis - col

   public:
    Tile();
    Tile(const Tile& other);
    Tile(Tile&& other);
    Tile(int height, int width, int row = 0, int col = 0);

    Tile& operator=(const Tile& other);
    Tile& operator=(Tile&& other);

    // resize Tile by:
    //  - `h += hdiff`
    //  - `w += wdiff`
    Tile& resize(int hdiff, int wdiff);

    // move the Tile by:
    //  - `y += ydiff`
    //  - `x += xdiff`
    Tile& move(int ydiff, int xdiff);

    // out put Tile info in form of string.
    std::string to_str() const;
};
}  // namespace Trado

#endif  // LIB_CONSOLE_TILE_HH