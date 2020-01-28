#include <stdio.h>
#define M_PI 3.141
#define CLEAR while(getchar()!='\n')

int main(void){

    //User input
    float radius, height;
    int validInput = 0;
    
    while(validInput == 0){
        printf("\nBitte geben Sie den RADIUS des Zylinders an.\nRadius: ");
        if(scanf("%f", &radius)==1 && radius > 0){
            validInput = 1;
        }
        CLEAR;
    }
    validInput = 0;
    
    while(validInput == 0){
        printf("\nBitte geben Sie die HÖHE des Zylinders an.\nHöhe: ");
        if(scanf("%f", &height)==1 && height > 0){
            validInput = 1;
        }
        CLEAR;
    }
    validInput = 0;
    
    //Calculate the volume(V = pi*r²*h).
    float volume = M_PI * radius * radius * height;
    
    //Printing the result.
    printf("\nDas Volumen des Zylinders beträgt: %.5fccm.\n", volume);
}
