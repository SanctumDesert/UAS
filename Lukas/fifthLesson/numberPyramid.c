#include <stdio.h>
#define CLEAR while(getchar()!='\n')

int main(void){

    const int amountNumbers = 10;
    int numbers[amountNumbers], validInput = 0;
    
    //User input.
    printf("Bitte geben Sie %d Zahlen ein.\n", amountNumbers);
    for(int i = 0; i < amountNumbers; i++){
        while(validInput == 0){
            printf("%d. Zahl: ", i+1);
            if(scanf("%d", &numbers[i])==1){
                validInput = 1;
            }
            CLEAR;
        }
        validInput = 0;
    }
    
    //Creating triangle
    int currentNumbers = amountNumbers;
    for(int i = amountNumbers-1; i > 0; i--){
        for(int j = 0; j < currentNumbers; j++){
            numbers[j] = numbers
            currentNumbers--;
        }
    }
    
}
