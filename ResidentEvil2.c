#include <stdio.h>
#include <math.h>

void Search(int Line, int Number){
    for (Line = 1; Line <= 99; Line ++){
        if(Number >= (Line * Line) && Number <= ((Line + 1) * (Line + 1))){
            printf("\nThe number %d, was found on line %d",Number,  Line + 1);
            break;
        }
        else{
          continue;
        }
    }
}

int main(void){
    int Line, Number;

    printf("\n\tWELCOME TO RACCON CITY POLICE DEPARTMENT");
    printf("\n\nPlease, enter the number you wish to find: ");
    scanf("%d", &Number); 

    Search(Line, Number);   
}