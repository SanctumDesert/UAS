#include <stdio.h>
#define CLEAR while(getchar()!='\n')

float calcPotenzLoop(float basis, int potenz){
    float result = basis;
    
    for(int i = 1; i < potenz; i++){
        result = result * basis;
    }
    
    return result;
}

float calcPotenzRecursion(float basis, int potenz, float result){
    if(potenz>1){
        result = result * basis;
        calcPotenzRecursion(basis, potenz-1, result);
    }
    else{
        return result;
    }
}

int main(void){
    
    int validInput = 0, potenz;
    float basis, resultLoop, resultRecursion;
    
    //User-Input
    while(validInput==0){
        printf("Bitte geben Sie die Basis ein: ");
        if(scanf("%f", &basis)==1){
            validInput = 1;
        }
        CLEAR;
    }
    validInput = 0;
    
    while(validInput==0){
        printf("Bitte geben Sie die Basis ein: ");
        if(scanf("%d", &potenz)==1 && potenz >= 0){
            validInput = 1;
        }
        CLEAR;
    }
    validInput = 0;
    
    if(potenz != 0){
        resultLoop = calcPotenzLoop(basis, potenz);
        resultRecursion = calcPotenzRecursion(basis, potenz, basis);
    }
    else{
        resultLoop = 0;
        resultRecursion = 0;
    }
        
    printf("Das Ergebnis der Potenz mit Schleife lautet: %f\n", resultLoop);
        
    printf("Das Ergebnis der Potenz mit Rekursion lautet: %f\n", resultRecursion);
}
