#include <stdio.h>
#include <stdbool.h>

int main(void){
    
    float input=-1, result, borderResult=-1, nenner, counter, summand;
    bool plus=0;
    int repetitions=2;
    
    //User inputs.
    while(input<0||input>2){
        printf("Bitte geben Sie die Zahl ein, für die der Logarithmus berechnet werden soll.\nDie Zahl muss größer als 0 und kleiner gleich 2 sein.\n");
        scanf("%f", &input);
    }
    
    while(borderResult<0||borderResult>2){
        printf("Bitte geben Sie die Zahl ein, die als Grenze für den Logarithmus gelten soll.\nDie Zahl muss größer als 0 und kleiner gleich 2 sein.\n");
        printf("%f\n", borderResult);
        scanf("%f", &borderResult);
    }
    
    
    //Preparations for the calculation.
    result = input-1;
    counter = input-1;
    nenner = 1;
    summand = counter/nenner;
    
    while(summand<borderResult){
        if(plus==1){
            result = result - (counter*(input-1))/nenner;
            plus = 1;
            nenner++;
            counter = counter*(input-1);
        }
        else{
            result = result + (counter*(input-1))/nenner;
            plus = 0;
            nenner++;
            counter = counter*(input-1);
        }
        summand = counter/nenner;
        printf("Das Zwischenergebnis ist: %f.\n", result);
    }
    
    
    //Printing the result.
    printf("The result is: %.10f\n", result);
}
