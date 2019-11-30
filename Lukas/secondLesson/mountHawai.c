#include <string.h>
#include <stdio.h>

int main(void){
    float currentHeight;
    char climateZone[20];
    
    printf("Bitte geben Sie Ihre aktuelle Höhe ein.\n");
    scanf("%f", &currentHeight);
    
    if(currentHeight < 0 || currentHeight > 4200){
        printf("Keine gültige Höhe. Minimalwert: 0m, Maximalwert: 4200m\n\n");
    }
    else{
        if(currentHeight >= 0 && currentHeight < 200){
            strcpy(climateZone, "maritimes Klima");
            //printf("Die Klimazone wurde auf maritimes Klima gesetzt.\n");
        }
        else if(currentHeight >= 200 && currentHeight < 1800){
            strcpy(climateZone, "Regenwald");
        }
        else if(currentHeight >= 1800 && currentHeight < 2300){
            strcpy(climateZone, "immergrüner Wald");
        }
        else if(currentHeight >= 2300 && currentHeight < 3500){
            strcpy(climateZone, "alpines Klima");
        }
        else{
            strcpy(climateZone, "ewiges Eis");
        }
        printf("Sie befinden sich auf einer Höhe von %fm und somit in der Klimazone: \"%s\".\n\n", currentHeight, climateZone);
    }
    
    
    
    
}
