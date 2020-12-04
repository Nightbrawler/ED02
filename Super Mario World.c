#include <stdio.h>
#include <string.h>

main(){
	char area2[3][10] = {"Area 2-A","Area 2-B","Area 2-C"};
	char area3[3][10] = {"Area 3-A","Area 3-B","Area 3-C"};
	char area4[2][10] = {"Area 4-A","Area 4-B"};
	int i, j, k, cont = 0;
		for(i = 0; i <= 2; i++){
			for(j = 0; j <= 2; j++){
				if(strcmp("Area 3-A", area3[j]) == 0){
					printf("Area 1, %s, %s \n", area2[i], area3[j]);
					cont++;
				}
				else{
				for(k = 0; k <= 1; k++){
					printf("Area 1, %s, %s, %s\n", area2[i], area3[j], area4[k]);
					cont++;
				}
			}
		}
	}
	printf("Possible outcomes: %d", cont);
}