#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[]) {
int a = 0;
srand(time(NULL));
int random = rand() % 100;
  while ( a < 2){
    int Eingabe;
    puts("Errate die Zahl!");
    scanf("%i",&Eingabe);
  if (Eingabe == random){
    printf("Glückwunsch! %i war richtig!\n",Eingabe);
    return 0;
  }
  if (Eingabe > random){
    puts("Die gesuchte Zahl ist kleiner!\n");
  }
  if (Eingabe < random){
    puts("Die gesuchte Zahl ist größer!\n");
  }
}
}
