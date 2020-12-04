#include <stdio.h>

float Time(float distance, float speed){
 return distance / speed; 
}

float Days(float time){
  return time / 24;
}

int main(void) {
  float distance, speed, time, days;

  printf("Distance to be covered: ");
  scanf("%f", &distance);

  printf("\nShip speed: ");
  scanf("%f", &speed);

  time = Time(distance, speed);
  days = Days(time);

  printf("\n%.2f days", days);

  return 0;
}