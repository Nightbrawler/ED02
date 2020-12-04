#include <stdio.h>

float Break (float Speed){
    return (Speed * Speed) / 250;
}

int main(void){
    float Distance, Speed;

    printf("\n\tBreaking distance\n");
    printf("\nPlease, enter the the speed considered (Km/h): ");
    scanf("%f", &Speed);
    
    Distance = Break(Speed);

    printf("Distance to stop: %.2f"" meters", Distance);
}