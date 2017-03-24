#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
void halloArray(){
int Ar;
int Wert;
float ges;
float gesamt;
char Durch;
puts ("Wie lang soll das gesamte Array sein?");
scanf("%i",&Ar );
int Becks [Ar];
for(int i = 0; i < Ar; i++) {
  printf("Wie groß soll Array %i sein\n",i );
  puts("?");
  scanf("%i",&Wert );
  Becks [i] = Wert;
}
for(int i = 0; i < Ar; i++) {
  printf("Für Array %i ist der Wert %i\n",i ,Becks[i] );

}
puts("Möchtest du den Durchschnitt wissen? (J/N)");
scanf(" %c",&Durch );
if (Durch = 'J'){
  for(int i = 0; i < Ar; i++){
  ges = ges + Becks[i];
  }
  gesamt = ges / Ar;
  printf("Der Duchschnitt ist %.2f\n",gesamt );
}
else ('N');{
   puts("Vielen Dank für ihre AUfmerksamkeit.");
}
}



void main(/* arguments */) {

  halloArray();
}
