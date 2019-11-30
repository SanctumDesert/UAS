#include <stdio.h>

int main(void){
    
    //Getting first input.
    int firstNumberBool = 0, secondNumberBool = 0;
    float firstNumber, secondNumber;
    char calcSymbol;
    
    while(firstNumberBool==0){
        printf("Bitte geben Sie die erste Zahl ein.\n");
        if(scanf("%f", &firstNumber)==1){
            firstNumberBool = 1;
        }
        else{
            firstNumberBool = 0;
        }
        fflush(stdin);
    }
    
}
