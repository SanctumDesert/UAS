#include <stdio.h>
#define CLEAR while(getchar()!='\n')

int footdrivenLoop(int base, int exponent){

    int result;
    
    if(exponent == 0){
        return 1;
    }
    else{
        result = base;
        if(exponent >= 2){
                
            do{
                result = result*base;
                exponent--;
            }while(exponent>2);
        }
        
        return result;
    }
}

int headdrivenWhile(int base, int exponent){
    
    int result;
    
    if(exponent == 0){
        return 1;
    }
    else{
        result = base;
        if(exponent >= 2){
            while(exponent>2){
                result = result*base;
                exponent--;
            }
        }
        
        return result;
    }
}

int headdrivenFor(int base, int exponent){
    
    int result;
    
    if(exponent == 0){
        return 1;
    }
    else{
        result = base;
        if(exponent >= 2){
            for(exponent; exponent > 2; exponent--){
                result = result*base;
            }
        }
        
        return result;
    }
}

int main(void){

    int validInput = 0, base, exponent;
    
    //Reading in the base.
    while(validInput == 0){
        printf("Bitte geben Sie eine ganze natürliche Zahl als Basis der Potenz an.\n");
        if(scanf("%d", &base)==1 && base >= 0){
            validInput = 1;
        }
        CLEAR;
    }
    validInput = 0;
    
    //Reading in the exponent.
    while(validInput == 0){
        printf("Bitte geben Sie eine ganze natürliche Zahl als Exponent der Potenz an.\n");
        if(scanf("%d", &exponent)==1 && exponent >=0){
            validInput = 1;
        }
        CLEAR;
    }
    validInput = 0;
    
    
    int resultFoot = footdrivenLoop(base, exponent),
        resultHeadWhile = headdrivenWhile(base, exponent),
        resultHeadFor = headdrivenFor(base, exponent);
    
    printf("Das Ergebnis der Rechnung mit der fußgesteuerten While-Schleife lautet: %d\n", resultFoot);
    printf("Das Ergebnis der Rechnung mit der kopfgesteuerten While-Schleife lautet: %d\n", resultHeadWhile);
    printf("Das Ergebnis der Rechnung mit der kopfgesteuerten For-Schleife lautet: %d\n", resultHeadFor);
    
}
