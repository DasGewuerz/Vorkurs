#include <stdio.h>
void main(/* arguments */) {
  float km;
  puts("Wie viele Kilometer?");
  scanf(" %f",&km);
  float meile = km * 1.609;
  float seemeile = km * 1.852;
  float yard = km * 1.151;
  char m;
  char s;
  char y;
  char Einheit;
  puts("In welche Einheit?");
  puts("y für Yard, s für Seemeile, m für Meile");
  scanf(" %c",&Einheit);
  if (Einheit == 's') {
    printf("%f Seemeile(n)\n",seemeile );
  }
  else if (Einheit == 'm') {
    printf("%f Meile(n)\n",meile );
  }
  else if (Einheit == 'y') {
    printf("%f Yard(s)\n",yard );
  }
  else if (Einheit != 's', Einheit != 'm', Einheit != 'y'){      //man kann auch else () schreiben
    puts("Bist du blöde?");
  }
}
