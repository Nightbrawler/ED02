#include <stdio.h>

main(){
	char letra[6] = {'A', 'B', 'C', 'D', 'E', 'F'};
	int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int a, b, c, i, j, k, cont = 0;
	
	printf("\n\tWelcome Mrs Croft");
	printf("\nHere's the list of possibilities for the password you need and how much time you'll spend: \n");

	for(i = 0; i <= 5; i++){
		for(j = 0; j <= 5; j++){
			for(k = 0; k <= 5; k++){
				for (a = 0; a <= 9; a++){
					for(b = 0; b <= 9; b++){
						for(c = 0; c <= 9; c++){
							if(a == 0 || b == 0 || c == 0){
								continue;
							}
							else if((a + b + c) != 8){
								continue;
							}
							else if(i == j || j == k || i == k){
								continue;
							}
							else if(num[a] == 3 || num[a] == 6){
								if(((i == 0 || i == 3) + (j == 0 || j == 3) + (k == 0 || k == 3)) == 2){
									cont++;	
									printf("\t%c, %c, %c, ",letra[i], letra[j], letra[k]);
									printf("%d, %d, %d\n",num[a], num[b], num[c]);
								}
							}
						}
					}
				}	
			}
		}
	}
	printf("\n%d seconds.\n", cont * 2);
}