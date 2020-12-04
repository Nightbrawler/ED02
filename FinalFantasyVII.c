#include <stdio.h>

int main(void) {
  int Option;
  float Area;

  printf("\n\tWELCOME TO SHINRA INC.\n");
  printf("\nYou're about to see the info for 'Sector 7'. Do you wish to proceed?");
  printf("\n\n1. Yes!");
  printf("\n2. No!\n");
  scanf("%d", &Option);

  if(Option == 1){
    printf("\n\t360 --------------------- 2827.43\n");
    printf("\t45 --------------------- ??");
    printf("\n\n?? = (2827.43 * 45) / 360");
      //The Sector 7 represents 45° of the total of 360° of Midgar
    Area = (2827.43 * 45) / 360;

    printf("\n\nSector 7 has an area of %.2f"" Km²", Area);
  }
  else if(Option == 2){
    printf("Greetings from Shinra Inc");
  }
  else{
    printf("Invalid entry, try again.");
  }
  return 0;
}