#pragma once
#include "color.h"

namespace lc {
class iColor {
public:
    iColor() { }

    virtual ~iColor() {}

    static lc::Color intToColor(int code) {
        return _intToCol[code];
    }

    static inline void Insert(int code, lc::Color col) {
        _intToCol[code] = col;
    }

    static inline int colorToInt(lc::Color col) {
        for (int i = 0; i < 256; i++) {
            if(_intToCol[i] == col) {
                return i;
            }
        }
    }

public:
    static lc::Color _intToCol[256];
};

lc::Color iColor::_intToCol[] = {
    lc::Color(0, 0, 0, 255),
    lc::Color(255, 0, 0, 255),
    lc::Color(255, 255, 0, 255),
    lc::Color(0, 255, 0, 255),
    lc::Color(0, 255, 255, 255),
    lc::Color(0, 0, 255, 255),
    lc::Color(255, 0, 255, 255),
    lc::Color(255, 255, 255, 255),
    lc::Color(65, 65, 65, 255),
    lc::Color(128, 128, 128, 255),
    lc::Color(255, 0, 0, 255),
    lc::Color(255, 170, 170, 255),
    lc::Color(189, 0, 0, 255),
    lc::Color(189, 126, 126, 255),
    lc::Color(129, 0, 0, 255),
    lc::Color(129, 86, 86, 255),
    lc::Color(104, 0, 0, 255),
    lc::Color(104, 69, 69, 255),
    lc::Color(79, 0, 0, 255),
    lc::Color(79, 53, 53, 255),
    lc::Color(255, 63, 0, 255),
    lc::Color(255, 191, 170, 255),
    lc::Color(189, 46, 0, 255),
    lc::Color(189, 141, 126, 255),
    lc::Color(129, 31, 0, 255),
    lc::Color(129, 96, 86, 255),
    lc::Color(104, 25, 0, 255),
    lc::Color(104, 78, 69, 255),
    lc::Color(79, 19, 0, 255),
    lc::Color(79, 59, 53, 255),
    lc::Color(255, 127, 0, 255),
    lc::Color(255, 212, 170, 255),
    lc::Color(189, 94, 0, 255),
    lc::Color(189, 157, 126, 255),
    lc::Color(129, 64, 0, 255),
    lc::Color(129, 107, 86, 255),
    lc::Color(104, 52, 0, 255),
    lc::Color(104, 86, 69, 255),
    lc::Color(79, 39, 0, 255),
    lc::Color(79, 66, 53, 255),
    lc::Color(255, 191, 0, 255),
    lc::Color(255, 234, 170, 255),
    lc::Color(189, 141, 0, 255),
    lc::Color(189, 173, 126, 255),
    lc::Color(129, 96, 0, 255),
    lc::Color(129, 118, 86, 255),
    lc::Color(104, 78, 0, 255),
    lc::Color(104, 95, 69, 255),
    lc::Color(79, 59, 0, 255),
    lc::Color(79, 73, 53, 255),
    lc::Color(255, 255, 0, 255),
    lc::Color(255, 255, 170, 255),
    lc::Color(189, 189, 0, 255),
    lc::Color(189, 189, 126, 255),
    lc::Color(129, 129, 0, 255),
    lc::Color(129, 129, 86, 255),
    lc::Color(104, 104, 0, 255),
    lc::Color(104, 104, 69, 255),
    lc::Color(79, 79, 0, 255),
    lc::Color(79, 79, 53, 255),
    lc::Color(191, 255, 0, 255),
    lc::Color(234, 255, 170, 255),
    lc::Color(141, 189, 0, 255),
    lc::Color(173, 189, 126, 255),
    lc::Color(96, 129, 0, 255),
    lc::Color(118, 129, 86, 255),
    lc::Color(78, 104, 0, 255),
    lc::Color(95, 104, 69, 255),
    lc::Color(59, 79, 0, 255),
    lc::Color(73, 79, 53, 255),
    lc::Color(127, 255, 0, 255),
    lc::Color(212, 255, 170, 255),
    lc::Color(94, 189, 0, 255),
    lc::Color(157, 189, 126, 255),
    lc::Color(64, 129, 0, 255),
    lc::Color(107, 129, 86, 255),
    lc::Color(52, 104, 0, 255),
    lc::Color(86, 104, 69, 255),
    lc::Color(39, 79, 0, 255),
    lc::Color(66, 79, 53, 255),
    lc::Color(63, 255, 0, 255),
    lc::Color(191, 255, 170, 255),
    lc::Color(46, 189, 0, 255),
    lc::Color(141, 189, 126, 255),
    lc::Color(31, 129, 0, 255),
    lc::Color(96, 129, 86, 255),
    lc::Color(25, 104, 0, 255),
    lc::Color(78, 104, 69, 255),
    lc::Color(19, 79, 0, 255),
    lc::Color(59, 79, 53, 255),
    lc::Color(0, 255, 0, 255),
    lc::Color(170, 255, 170, 255),
    lc::Color(0, 189, 0, 255),
    lc::Color(126, 189, 126, 255),
    lc::Color(0, 129, 0, 255),
    lc::Color(86, 129, 86, 255),
    lc::Color(0, 104, 0, 255),
    lc::Color(69, 104, 69, 255),
    lc::Color(0, 79, 0, 255),
    lc::Color(53, 79, 53, 255),
    lc::Color(0, 255, 63, 255),
    lc::Color(170, 255, 191, 255),
    lc::Color(0, 189, 46, 255),
    lc::Color(126, 189, 141, 255),
    lc::Color(0, 129, 31, 255),
    lc::Color(86, 129, 96, 255),
    lc::Color(0, 104, 25, 255),
    lc::Color(69, 104, 78, 255),
    lc::Color(0, 79, 19, 255),
    lc::Color(53, 79, 59, 255),
    lc::Color(0, 255, 127, 255),
    lc::Color(170, 255, 212, 255),
    lc::Color(0, 189, 94, 255),
    lc::Color(126, 189, 157, 255),
    lc::Color(0, 129, 64, 255),
    lc::Color(86, 129, 107, 255),
    lc::Color(0, 104, 52, 255),
    lc::Color(69, 104, 86, 255),
    lc::Color(0, 79, 39, 255),
    lc::Color(53, 79, 66, 255),
    lc::Color(0, 255, 191, 255),
    lc::Color(170, 255, 234, 255),
    lc::Color(0, 189, 141, 255),
    lc::Color(126, 189, 173, 255),
    lc::Color(0, 129, 96, 255),
    lc::Color(86, 129, 118, 255),
    lc::Color(0, 104, 78, 255),
    lc::Color(69, 104, 95, 255),
    lc::Color(0, 79, 59, 255),
    lc::Color(53, 79, 73, 255),
    lc::Color(0, 255, 255, 255),
    lc::Color(170, 255, 255, 255),
    lc::Color(0, 189, 189, 255),
    lc::Color(126, 189, 189, 255),
    lc::Color(0, 129, 129, 255),
    lc::Color(86, 129, 129, 255),
    lc::Color(0, 104, 104, 255),
    lc::Color(69, 104, 104, 255),
    lc::Color(0, 79, 79, 255),
    lc::Color(53, 79, 79, 255),
    lc::Color(0, 191, 255, 255),
    lc::Color(170, 234, 255, 255),
    lc::Color(0, 141, 189, 255),
    lc::Color(126, 173, 189, 255),
    lc::Color(0, 96, 129, 255),
    lc::Color(86, 118, 129, 255),
    lc::Color(0, 78, 104, 255),
    lc::Color(69, 95, 104, 255),
    lc::Color(0, 59, 79, 255),
    lc::Color(53, 73, 79, 255),
    lc::Color(0, 127, 255, 255),
    lc::Color(170, 212, 255, 255),
    lc::Color(0, 94, 189, 255),
    lc::Color(126, 157, 189, 255),
    lc::Color(0, 64, 129, 255),
    lc::Color(86, 107, 129, 255),
    lc::Color(0, 52, 104, 255),
    lc::Color(69, 86, 104, 255),
    lc::Color(0, 39, 79, 255),
    lc::Color(53, 66, 79, 255),
    lc::Color(0, 63, 255, 255),
    lc::Color(170, 191, 255, 255),
    lc::Color(0, 46, 189, 255),
    lc::Color(126, 141, 189, 255),
    lc::Color(0, 31, 129, 255),
    lc::Color(86, 96, 129, 255),
    lc::Color(0, 25, 104, 255),
    lc::Color(69, 78, 104, 255),
    lc::Color(0, 19, 79, 255),
    lc::Color(53, 59, 79, 255),
    lc::Color(0, 0, 255, 255),
    lc::Color(170, 170, 255, 255),
    lc::Color(0, 0, 189, 255),
    lc::Color(126, 126, 189, 255),
    lc::Color(0, 0, 129, 255),
    lc::Color(86, 86, 129, 255),
    lc::Color(0, 0, 104, 255),
    lc::Color(69, 69, 104, 255),
    lc::Color(0, 0, 79, 255),
    lc::Color(53, 53, 79, 255),
    lc::Color(63, 0, 255, 255),
    lc::Color(191, 170, 255, 255),
    lc::Color(46, 0, 189, 255),
    lc::Color(141, 126, 189, 255),
    lc::Color(31, 0, 129, 255),
    lc::Color(96, 86, 129, 255),
    lc::Color(25, 0, 104, 255),
    lc::Color(78, 69, 104, 255),
    lc::Color(19, 0, 79, 255),
    lc::Color(59, 53, 79, 255),
    lc::Color(127, 0, 255, 255),
    lc::Color(212, 170, 255, 255),
    lc::Color(94, 0, 189, 255),
    lc::Color(157, 126, 189, 255),
    lc::Color(64, 0, 129, 255),
    lc::Color(107, 86, 129, 255),
    lc::Color(52, 0, 104, 255),
    lc::Color(86, 69, 104, 255),
    lc::Color(39, 0, 79, 255),
    lc::Color(66, 53, 79, 255),
    lc::Color(191, 0, 255, 255),
    lc::Color(234, 170, 255, 255),
    lc::Color(141, 0, 189, 255),
    lc::Color(173, 126, 189, 255),
    lc::Color(96, 0, 129, 255),
    lc::Color(118, 86, 129, 255),
    lc::Color(78, 0, 104, 255),
    lc::Color(95, 69, 104, 255),
    lc::Color(59, 0, 79, 255),
    lc::Color(73, 53, 79, 255),
    lc::Color(255, 0, 255, 255),
    lc::Color(255, 170, 255, 255),
    lc::Color(189, 0, 189, 255),
    lc::Color(189, 126, 189, 255),
    lc::Color(129, 0, 129, 255),
    lc::Color(129, 86, 129, 255),
    lc::Color(104, 0, 104, 255),
    lc::Color(104, 69, 104, 255),
    lc::Color(79, 0, 79, 255),
    lc::Color(79, 53, 79, 255),
    lc::Color(255, 0, 191, 255),
    lc::Color(255, 170, 234, 255),
    lc::Color(189, 0, 141, 255),
    lc::Color(189, 126, 173, 255),
    lc::Color(129, 0, 96, 255),
    lc::Color(129, 86, 118, 255),
    lc::Color(104, 0, 78, 255),
    lc::Color(104, 69, 95, 255),
    lc::Color(79, 0, 59, 255),
    lc::Color(79, 53, 73, 255),
    lc::Color(255, 0, 127, 255),
    lc::Color(255, 170, 212, 255),
    lc::Color(189, 0, 94, 255),
    lc::Color(189, 126, 157, 255),
    lc::Color(129, 0, 64, 255),
    lc::Color(129, 86, 107, 255),
    lc::Color(104, 0, 52, 255),
    lc::Color(104, 69, 86, 255),
    lc::Color(79, 0, 39, 255),
    lc::Color(79, 53, 66, 255),
    lc::Color(255, 0, 63, 255),
    lc::Color(255, 170, 191, 255),
    lc::Color(189, 0, 46, 255),
    lc::Color(189, 126, 141, 255),
    lc::Color(129, 0, 31, 255),
    lc::Color(129, 86, 96, 255),
    lc::Color(104, 0, 25, 255),
    lc::Color(104, 69, 78, 255),
    lc::Color(79, 0, 19, 255),
    lc::Color(79, 53, 59, 255),
    lc::Color(51, 51, 51, 255),
    lc::Color(80, 80, 80, 255),
    lc::Color(105, 105, 105, 255),
    lc::Color(130, 130, 130, 255),
    lc::Color(190, 190, 190, 255),
    lc::Color(255, 255, 255, 255)
};

}



