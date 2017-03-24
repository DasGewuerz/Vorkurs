#include <stdio.h>
  void main(int argc, char const *argv[]) {
  int Breite;
  int Tiefe;
  int hoehe;
  const float pi = 3.14159265359;
  puts("Geben sie eine Breite ein");
  scanf("%i",&Breite );
  puts("Geben sie eine Höhe ein");
  scanf("%i",&hoehe );
  puts("Geben sie eine Tiefe ein");
  scanf("%i",&Tiefe );
  float Ergebnis = Breite * hoehe * Tiefe;
  printf("%f l Volumen\n",Ergebnis);
}
