#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
void main(/* arguments */) {
  float Konto;
  float Wunsch;
  float Zins;
  int Jahre = 0;
  puts("Wie viel haben sie auf dem Konto?");
  scanf("%f",&Konto );
  puts("Wie viel möchten sie haben?");
  scanf("%f",&Wunsch );
  puts("Welchen Zinssatz haben sie in Prozent?");
  scanf("%f",&Zins );
  while (Konto < Wunsch) {
    Konto = Konto * (Zins + 100) / 100;
    Jahre = Jahre + 1;
  }
  printf("Noch %i Jahre bei einem Zinssatz von %.0f%\n",Jahre,Zins );
}
