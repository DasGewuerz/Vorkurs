#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[]) {
char Eing;
srand(time(NULL));
int random = rand();
random = (random %2);
  puts("Kopf oder Zahl? (K / Z)");
  scanf(" %c", &Eing);
  if (random = 0){
    printf("Sie sagen: %c\n", Eing);
    puts("Das Ergebnis: Zahl");
  }
  else {
    printf("Sie sagen: %c\n", Eing);
    puts("Das Ergebnis: Kopf");
  }
  return 0;
}
