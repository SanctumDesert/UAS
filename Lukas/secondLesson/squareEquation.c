#include <stdio.h>
#include <math.h>

int main(void){
    float inputA, inputB, inputC, result1, result2;
    
    //Reads in the 3 parameters for the equation.
    printf("Bitte geben Sie die Werte für a, b, c in der Gleichung ax² + bx + c = 0 ein.\n");
    printf("a: ");
    scanf("%f", &inputA);
    while(inputA < 0){
        printf("Die Eingabe für a muss größer als 0 sein.\na:");
        scanf("%f", &inputA);
    }
    printf("b: ");
    scanf("%f", &inputB);
    printf("c: ");
    scanf("%f", &inputC);

    if(inputA!=1){
        inputB = inputB/inputA;
        inputC = inputC/inputA;
    }
    //If there are two zeropoints.
    if(((inputB*inputB)/4-inputC) > 0){
        result1 = 0-(inputB/2)+(sqrt((inputB/2)*(inputB/2)-inputC));
        result2 = 0-(inputB/2)-sqrt((inputB/2)*(inputB/2)-inputC);
        
        //Printing the results.
        printf("Die erste Nullstelle liegt bei x = %f, die zweite Nullstelle liegt bei x = %.3f.\n", result1, result2);
    }
    //If there is one zeropoint.
    else if(((inputB*inputB)/4-inputC) == 0){
        result1 = -(inputB/2);
        
        //Printing the result.
        printf("Die einzige Nullstelle liegt bei x = %.3f.\n", result1);
    }
    //If there is no zeropoint.
    else{
        printf("Die erste Nullstelle liegt bei x = %.3f + %.3fi, die zweite Nullstelle liegt bei x = %.3f - %.3fi.\n", -(inputB/2), sqrt(-((inputB*inputB)/4-inputC)), -(inputB/2), sqrt(-((inputB*inputB)/4-inputC)));
    }
    

    
    
    
    
}
