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
  switch (Einheit) {
    case 'm':
    printf(" %f\n", meile );
    break;
    case 's':
    printf("%f\n", seemeile);
    break;
    case 'y':
    printf("%f\n", yard);
    break;
    default:
    printf("Keine gültige Eingabe\n");
  }
}
