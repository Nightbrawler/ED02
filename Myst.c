#include <stdio.h>

void PrimeNumbers(){
	int x[118], i, y[29], j;
    for(i = 0; i <= 118; i++){
	    x[i] = i + 2;
	  }
    for(j = 0; j <= 29; j++){
	    y[j] = 0;
	  }
	  for(i = 0; i <= 118; i++){
		  for(j = 0; j <= 29; j++){
				  if(y[j] == 0){
					  y[j] = x[i];
					  break;
				  }
				  if((x[i]%y[j])== 0){
					break;
			    }	
		  }
	  }
	  for(j = 0; j <= 29; j++){
		printf("%d \n", y[j]);
	  }
}

int main(void){
  
  int option;

  do{
    printf("\n\t>> Prime Numbers 2 - 120 <<\n\n");
    printf("\n1. Start");
    printf("\n0. Exit\n");
    printf("\nSelect an option: ");
    scanf("%d", &option);
      switch (option){

        case 1:
        PrimeNumbers();
        break;

        case 0:
        printf("\n\tThank you, bye now =D\n");
        break;

        default:
        printf("\n\tInvalid Option! Try again.\n");
      }
  }
  while(option != 0);
  
}