#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
void hallo(){
int Ar;
int i = 0;
int Wert;
puts ("Wie groß soll das gesamte Array sein?");
scanf("%i",&Ar );
int Becks [Ar];
while (i < Ar) {
  printf("Wie groß soll Array %i sein\n",i );
  puts("?");
  scanf("%i",&Wert );
  Becks [i] = Wert;
  i++;
}
i = 0;
while (i < Ar) {
  printf("Für Array %i ist der Wert %i\n",i ,Becks[i] );
  i++;
}
}



void main(/* arguments */) {
  hallo();
}
