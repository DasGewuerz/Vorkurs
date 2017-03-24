#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int randyou(int Zahl1 , int Zahl2){
  int Zahl3 = Zahl2 - Zahl1 ;
  srand(time(NULL));
  int random = rand() % Zahl3;
  int random1 = random + Zahl1;
  printf("%i\n",random1 ); 
  }

void main(/* arguments */) {
  int ZahlA;
  int ZahlB;
  puts("Zwischen 2 Zahlen eine Zufallszahl\n");
  puts("Zahl1?\n");
  scanf("%i",&ZahlA );
  puts("Zahl2?\n");
  scanf("%i",&ZahlB );
  randyou(ZahlA, ZahlB);
}
