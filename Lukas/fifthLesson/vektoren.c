#include <stdio.h>
#define CLEAR while(getchar()!='\n')

int main(void){
    
    const int vectorDimension = 3;
    int vector1[vectorDimension], vector2[vectorDimension], sumVector[vectorDimension], validInput = 0;
    
    //Vector 1.
    printf("\nBitte geben Sie die Werte für den ersten Vektor an.\n");
    for(int i = 0; i < vectorDimension; i++){
        while(validInput == 0){
            if(scanf("%d", &vector1[i])==1){
                validInput = 1;
            }
            CLEAR;
        }
        validInput = 0;
    }
    
    //Vector 2.
    printf("\nBitte geben Sie die Werte für den zweiten Vektor an.\n");
    for(int i = 0; i < vectorDimension; i++){
        while(validInput == 0){
            if(scanf("%d", &vector2[i])==1){
                validInput = 1;
            }
            CLEAR;
        }
        validInput = 0;
    }
    
    //Print vector 1.
    printf("-----------Ausgabe der Vektoren-----------\nVektor 1:\n");
    for(int i = 0; i < vectorDimension; i++){
        if(vectorDimension==1){
            printf("(%d)\n", vector1[i]);
        }
        else{
            if(i == 0){
                printf("/ %d \\\n", vector1[i]);
            }
            else if(i == vectorDimension-1){
                printf("\\ %d /\n", vector1[i]);
            }
            else{
                printf("| %d |\n", vector1[i]);
            }
        }
    }
    
    //Print vector 2.
    printf("\nVektor2:\n");
    for(int i = 0; i < vectorDimension; i++){
        if(vectorDimension==1){
            printf("(%d)\n", vector2[i]);
        }
        else{
            if(i == 0){
                printf("/ %d \\\n", vector2[i]);
            }
            else if(i == vectorDimension-1){
                printf("\\ %d /\n", vector2[i]);
            }
            else{
                printf("| %d |\n", vector2[i]);
            }
        }
    }
    
    //Calculating the Summ of both vectors.
    printf("\nSumme der beiden Vektoren:\n");
    for(int i = 0; i < vectorDimension; i++){
        sumVector[i] = vector1[i] + vector2[i];
        if(vectorDimension==1){
            printf("(%d)\n", sumVector[i]);
        }
        else{
            if(i == 0){
                printf("/ %d \\\n", sumVector[i]);
            }
            else if(i == vectorDimension-1){
                printf("\\ %d /\n", sumVector[i]);
            }
            else{
                printf("| %d |\n", sumVector[i]);
            }
        }
    }
}
