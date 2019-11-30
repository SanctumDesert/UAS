#include <stdio.h>

int main(void){
    float savings, interests, money=0;
    int years;
    
    //User inputs.
    printf("Bitte geben Sie die Anzahl der Jahre ein.\n");
    scanf("%d", &years);
    
    printf("Bitte geben Sie die Sparrate pro Jahr ein.\n");
    scanf("%f", &savings);
    
    printf("Bitte geben Sie den Zinssatz pro Jahr ein.\n");
    scanf("%f", &interests);
    
    
    //Printing the table head.
    printf("|Year |Money |\n--------------\n");
    
    //Calculating and printing the table.
    for(int i=0; i < years; i++){
        money = money + savings;
        money = money + (money/100*interests);
        
        printf("|%d |%.2f |\n", i, money);
    }
}
