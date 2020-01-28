#include <stdio.h>
#include <math.h>
#define CLEAR while(getchar()!='\n')

int main(void){

    //User input
    float input;
    int validInput = 0;
    
    while(validInput ==0){
        printf("\nBitte geben Sie eine reelle Zahl ein.\nReelle Zahl: ");
        if(scanf("%f", &input) == 1){
            validInput = 1;
        }
        CLEAR;
    }
    
    //Calculations
    float root, division, calcSin, expon;
    
    root = sqrt(1+(input*input));
    
    division = (1+input)/(1-input);
    
    calcSin = sin(input);
    
    expon = exp(0-input);
    
    //Printing results.
    printf("\nDie Wurzelrechnung ergibt: %f\n", root);
    printf("Die Division ergibt: %f\n", division);
    printf("Die Sinusrechnung ergibt: %f\n", calcSin);
    printf("Die Exponentialrechnung ergibt: %f\n", expon);
    
}
