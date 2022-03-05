#include "pico/stdlib.h"

#include "ili9341.h"
#include "gfx.h"

int c;

int main()
{

    LCD_initDisplay();
    LCD_setRotation(1);
    GFX_createFramebuf(); //not enough memory for framebuffer
    while (true)
    {
        GFX_clearScreen();
        GFX_setCursor(0, 0);
        GFX_printf("Hello GFX!\n%d", c++);
        GFX_flush();
        sleep_ms(500);
    }
}
