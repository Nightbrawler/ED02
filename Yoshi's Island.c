#include <stdio.h>

void Venn(TotalYoshis, YoshisIsland, CookieMountain, ChocolateIsland, YoshisIsland_CookieMountain, YoshisIsland_ChocolateIsland, ChocolateIsland_CookieMountain, AllLocations, None, Unique){
  ChocolateIsland_CookieMountain = ChocolateIsland_CookieMountain - AllLocations;
  YoshisIsland_CookieMountain = YoshisIsland_CookieMountain - AllLocations;
  YoshisIsland_ChocolateIsland = YoshisIsland_ChocolateIsland - AllLocations;

  ChocolateIsland = ChocolateIsland - (ChocolateIsland_CookieMountain + YoshisIsland_ChocolateIsland + AllLocations);
  CookieMountain = CookieMountain - (YoshisIsland_CookieMountain + ChocolateIsland_CookieMountain + AllLocations);
  YoshisIsland = YoshisIsland - (YoshisIsland_ChocolateIsland + YoshisIsland_CookieMountain + AllLocations);

  None = TotalYoshis - (AllLocations + ChocolateIsland + YoshisIsland + CookieMountain + YoshisIsland_CookieMountain + YoshisIsland_ChocolateIsland + ChocolateIsland_CookieMountain);

  Unique = (ChocolateIsland + CookieMountain + YoshisIsland);
  
  printf("\nYoshi Island: %d", YoshisIsland);
  printf("\nCookie Mountain: %d", CookieMountain);
  printf("\nChocolate Island: %d", ChocolateIsland);
  printf("\nYoshis Island and Cookie Mountain: %d", YoshisIsland_CookieMountain);
  printf("\nYoshis Island Chocolate Island: %d", YoshisIsland_ChocolateIsland);
  printf("\nChocolate Island Cookie Mountain: %d", ChocolateIsland_CookieMountain);
  printf("\nAll three locations: %d", AllLocations);
  printf("\nDoesn't like any locations: %d", None);
  printf("\nLike only one location: %d", Unique);
  return;
}

int main(void) {
  int TotalYoshis, YoshisIsland, CookieMountain, ChocolateIsland, YoshisIsland_CookieMountain, YoshisIsland_ChocolateIsland, ChocolateIsland_CookieMountain, AllLocations, None, Unique;

  printf("\n\tYoshi's Island Opinion Record");
  printf("\n\nHow many Yoshis were interviwed? ");
  scanf("%d", &TotalYoshis);
  printf("How many Yoshis like Yoshi's Island? ");
  scanf("%d", &YoshisIsland);
  printf("How many Yoshis like Cookie Mountain? ");
  scanf("%d", &CookieMountain);
  printf("How many Yoshis like Chocolate Island? ");
  scanf("%d", &ChocolateIsland);
  printf("How many Yoshis like Yoshi's Island and Cookie Mountain? ");
  scanf("%d", &YoshisIsland_CookieMountain);
  printf("How many Yoshis like Yoshi's Island and Chocolate Island? ");
  scanf("%d", &YoshisIsland_ChocolateIsland);
  printf("How many Yoshis like Chocolate Island and Cookie Mountain? ");
  scanf("%d", &ChocolateIsland_CookieMountain);
  printf("How many Yoshis like all three locations? ");
  scanf("%d", &AllLocations);

  Venn(TotalYoshis, YoshisIsland, CookieMountain, ChocolateIsland, YoshisIsland_CookieMountain, YoshisIsland_ChocolateIsland, ChocolateIsland_CookieMountain, AllLocations, None, Unique);

  return 0;
}