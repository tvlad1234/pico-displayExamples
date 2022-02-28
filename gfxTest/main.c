#include "pico/stdlib.h"

#include "st7735.h"
#include "gfx.h"

int c;

int main()
{

    LCD_initDisplay(INITR_BLACKTAB);
    LCD_setRotation(1);
    GFX_createFramebuf();
    while (true)
    {
        GFX_ClearScreen();
        GFX_setCursor(0, 0);
        GFX_printf("Hello GFX!\n%d", c++);
        GFX_Flush();
        sleep_ms(500);
    }
}
