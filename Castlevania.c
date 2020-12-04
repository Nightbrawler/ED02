#include <stdio.h>

int Disks, Moves;

void Hanoi(int Start, int End, int Aux, int Disks){
  if( Disks == 1 ){
    printf("\nMove from %d to %d\n", Start, End);
    Moves++;
  }else{
    Hanoi(Start, Aux, End, Disks-1);
    Hanoi(Start, End, Aux, 1);
    Hanoi(Aux, End, Start, Disks-1);
  }
}

int main(){
  printf("\n\tTower of Hanoi\n");
  printf("\nPlease, enter the number of disks to be moved: ");
  scanf("%d", &Disks);
  Hanoi(0, 1, 2, Disks);
  printf("\n\nNumber of moves needed: %d\n\n", Moves);
  return 0;
}