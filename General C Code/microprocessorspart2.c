#include <stdint.h>

int GPIOA;
int GPIOB;

int showoutputs()
{
    printf("%d\n, GPIOB");
}

int main()
{
    GPIOA = 1; // horn pressed
    //update outputs
    if (GPIOA == 1)
    {
        GPIOB = 16;
    }
    if (GPIOA == 2) //brakers pressed
    {
        GPIOB = GPIOB | 64;
    } 
    if (GPIOA & 4) //wiper switch on
    {
        GPIOB = 32;
    }
    else{
        GPIOB = GPIOB & ~32;
    }

    showoutputs();




    /*
    int x = 1; 
    int y = 2;
    //printf("%u\n", ~x);

    /*
    if (x && y)
    {
        printf("yes\n");
    }
    */
    return 0;
}