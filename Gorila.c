#include <stdio.h>
#include <math.h>

float Reach(float speed, float angle, float time){
  return (speed * angle) * time;
}

int main(void) {
  float speed, distance, angle, time; 

  printf("\tHorizontal Reach\n");
  printf("\nPlease, enter the speed in Km/h: ");
  scanf("%f", &speed);
  speed = speed / 3.6;

  printf("Enter the angle of launching in degrees: ");
  scanf("%f", &angle);
  angle = angle * (M_PI/180);
  angle = cos(angle);

  printf("Enter the movement time in seconds: ");
  scanf("%f", &time);

  distance = Reach(speed, angle, time);

  printf("\nThe total reach of the movement was: %.2f"" meters", distance);
  return 0;
}