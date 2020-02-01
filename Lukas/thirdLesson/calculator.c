#include <stdio.h>
#define CLEAR while(getchar()!='\n')

int main(void){
    
    int run = 1;
    double validInput = 0, firstNumber, secondNumber;
    char operationSign;
    
    //First run.
    //User input.
    while(validInput == 0){
        printf("Bitte geben Sie eine Zahl ein.\n");
        if((scanf("%lf", &firstNumber))==1){
            validInput = 1;
        }
        CLEAR;
    }
    validInput = 0;
    
    while(run==1){
        while(validInput == 0){
            printf("Bitte geben Sie eine Rechenoperation(+, -, *, /) ein.\n");
            if((scanf("%c", &operationSign))==1 && (operationSign == '+' || operationSign == '-' || operationSign == '*' || operationSign == '/')){
                validInput = 1;
            }
            CLEAR;
        }
        validInput = 0;
        
        while(validInput == 0){
            printf("Bitte geben Sie eine Zahl ein.\n");
            if((scanf("%lf", &secondNumber))==1){
                validInput = 1;
            }
            CLEAR;
        }
        validInput = 0;
        
        printf("Rechenzeichen ist: %c.\n", operationSign);
        if(operationSign == '+'){
            firstNumber = firstNumber + secondNumber;
        }
        else if(operationSign == '-'){
            firstNumber = firstNumber - secondNumber;
        }
        else if(operationSign == '*'){
            firstNumber = firstNumber * secondNumber;
        }
        else{
            firstNumber = firstNumber / secondNumber;
        }
        
        printf("Das Ergebnis ist: %lf.\n", firstNumber);
    
        while(validInput == 0){
            printf("Möchten Sie eine weitere Berechnung durchführen?\nWenn ja, geben Sie eine 1 ein.\nWenn nein, geben Sie eine 0 ein.\n");
            if((scanf("%d", &run) == 1 && (run == 0 || run == 1))){
                validInput = 1;
            }
            CLEAR;
        }
        validInput = 0;
    }
}
