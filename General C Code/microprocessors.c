#include <stdint.h>

typedef struct 
{
    uint8_t red;
    uint8_t green;
    uint8_t blue;

} pixel;

pixel display[256];

void delay(volatile uint32_t dly)
{
    while(dly--);
} //some compilers skip over delays, volatile ensure that the compiler doesnt optimise the the delay
void cleardisplay()
{
    for (int i=0;i<256;i++)
    {
        display[i].red=0;
        display[i].green=0;
        display[i].blue=0;
    }
}
void clearimage(pixel * pImage, int size)
{
    for (int i=0;i<256;i++)
    {
        pImage->red=0;
        pImage->green=0;
        pImage->blue=0;
        pImage++;
    }
}
int main() {
    

    return 0;
}
