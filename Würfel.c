#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(int argc, char const *argv[]) {
int Eing;
srand(time(NULL));
int random = rand();
random = (random %6);
  puts("Welche Nummer zwischen 1 und 6?");
  scanf(" %i", &Eing);
  if (random > 0 && random < 7) {
    printf("%i\n",random );
  }
    return 0;

}
