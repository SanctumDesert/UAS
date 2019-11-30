#include <stdio.h>

int main(void){
    
    float baseInput, potenzInput=-1, forResult, footdrivenResult, footdrivenPotenz, whileResult, whilePotenz;
    
    //Reading in the base and potenz.
    printf("Bitte geben Sie die Basis ein.\n");
    scanf("%f", &baseInput);
    
    while(potenzInput<0){
        printf("Bitte geben Sie die Potenz ein.\n");
        scanf("%f", &potenzInput);
    }
    if(potenzInput==0){
        printf("Das Ergebnis ist 1.\n");
    }
    else{
        forResult = baseInput;
        whileResult = baseInput;
        footdrivenResult = baseInput;
        whilePotenz = potenzInput;
        footdrivenPotenz = potenzInput;
        
        
        //Calculating the result with for-loop.
        for(int i = 1; i < potenzInput; i++){
            forResult = forResult * baseInput;
        }
        printf("Das Ergebnis der for-Schleife lautet: %.2f.\n", forResult);
        
        
        //Calculates the result with while-loop.
        while(whilePotenz > 1){
            whileResult = whileResult * baseInput;
            whilePotenz--;
        }
        printf("Das Ergebnis der while-Schleige lautet: %.2f.\n", whileResult);
        
        
        //Calculates the result with footdriven-Loop.
        do{
            if(potenzInput>1){
                footdrivenResult = footdrivenResult * baseInput;
                footdrivenPotenz--;
            }
        }
        while(footdrivenPotenz > 1);
        printf("Das Ergebis der fußgesteuerten-Schleife: %.2f.\n", footdrivenResult);
    }
}
