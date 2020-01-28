#include <stdio.h>
#define CLEAR while(getchar()!='\n')

int main(void){
    
    int userWantsInput = 1;
    
    while(userWantsInput == 1){
        //Read in a specific amount of numbers.
        const int amountNumbers = 10;
        int numbers[amountNumbers];
        int validInput = 0;
        
        printf("Bitte geben Sie %d Zahlen ein.\n", amountNumbers);
        for(int i = 1; i <= amountNumbers; i++){
            while(validInput == 0){
                printf("%d. Zahl: ", i);
                if(scanf("%d", &numbers[i-1])==1){
                    validInput = 1;
                }
                CLEAR;
            }
            validInput = 0;
        }
        
        //Print out the input in reverse.
        printf("Numbers:");
        int j = 0;
        for(int i = amountNumbers-1; i >= 0; i--){
            if(j%5 == 0){
                printf("\n");
                j = 0;
            }
            printf("%d ", numbers[i]);
            j++;
        }
        printf("\n");
        
        //Sort the array with bubble sort.
        int temp;
        for(int i = 0; i < amountNumbers; i++){
            for(int j = 0; j < amountNumbers; j++){
                if(numbers[i] < numbers[j]){
                    temp = numbers[j];
                    numbers[j] = numbers[i];
                    numbers[i] = temp;
                }
            }
        }
        
        //Print out the lowest and the highest number.
        printf("\nDie kleinste Zahl ist: %d.\n", numbers[0]);
        printf("\nDie größte Zahl ist: %d.\n", numbers[amountNumbers-1]);
        
        while(validInput == 0){
            printf("\n\nMöchten Sie erneut eine Eingabe tätigen?\nWenn ja, geben Sie bitte eine 1 ein.\nWenn nein, geben Sie bitte eine 0 ein.\nAntwort: ");
            if(scanf("%d", &userWantsInput)==1 && (userWantsInput == 0 || userWantsInput == 1)){
                validInput = 1;
            }
            CLEAR;
        }
        validInput = 0;
    }
    
}
