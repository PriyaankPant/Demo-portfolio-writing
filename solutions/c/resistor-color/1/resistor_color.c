#include "resistor_color.h"
int color_code(resistor_band_t band) {
    return (int)band;
}
// Implement the array array accessor so testing frameworks can check the color sequence
const resistor_band_t *colors(void) {
    static const resistor_band_t color_array[] = {
        BLACK, BROWN, RED, ORANGE, YELLOW,
        GREEN, BLUE, VIOLET, GREY, WHITE
    };
    return color_array;
}