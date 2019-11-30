#include <stdio.h>
#include <math.h>
#define CLEAR while(getchar()!='\n')

int main(void){
    
    float tStart, tEnd, tStepLength, result;
    int validInput = 0;
    
    
    //User-Input for tableStart.
    while(validInput==0){
        printf("Bitte geben Sie den Startpunkt der Tabelle an.\n");
        if(scanf("%f", &tStart)==1 && tStart >= 0){
            validInput = 1;
        }
        else{
            CLEAR;
        }
    }
    validInput = 0;
    
    
    //User-Input for tableEnd.
    while(validInput==0){
        printf("Bitte geben Sie den Endpukt der Tabelle an.\n");
        if(scanf("%f", &tEnd)==1 && tEnd >= tStart){
            validInput = 1;
        }
        else{
            CLEAR;
        }
    }
    validInput = 0;
    
    
    //User-Input for steplength.
    while(validInput==0){
        printf("Bitte geben Sie die Schrittweite der Tabelle an.\n");
        if(scanf("%f", &tStepLength)==1 && tStepLength <= tEnd-tStart){
            validInput = 1;
        }
        else{
            CLEAR;
        }
    }
    validInput = 0;
    
    
    //Printing table.
    //Header.
    printf("|\tx\t|\tWert\t|\n|---------------|---------------|\n");
    
    //Body.
    for(double i = tStart; i <=tEnd; i=i+tStepLength){
        result = (0.5*(exp(i)-exp(0-i)));
        printf("| %f\t| %f\t|\n", i, result);
    }
    
}
