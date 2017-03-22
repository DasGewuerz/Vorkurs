#include <stdio.h>
void main(/* arguments */) {
  int ZahlA;
  int ZahlB;
  char Operator;
  puts ("Erster Operator:");
  scanf("%i", &ZahlA );
  puts ("Zweiter Operator:");
  scanf("%i", &ZahlB );
  puts ("Rechenart:");
  scanf(" %c", &Operator );
float Zahl1 = ZahlA;
float Zahl2 = ZahlB;
float Plus = Zahl1 + Zahl2;
float Minus = Zahl1 - Zahl2;
float Mal = Zahl1 * Zahl2;
if (Zahl2 == 0){
    if (Operator == '/'){
      puts("Was machst du da?");
    }
    else {
      switch (Operator) {
        case '+':
        printf("%.2f\n", Plus );
        break;
        case '-':
        printf("%.2f\n", Minus);
        break;
        case '*':
        printf("%.2f\n", Mal);
        break;
        }
        }
}
else{
  float Durch = Zahl1 / Zahl2;
  switch (Operator) {
    case '+':
    printf("%.2f\n", Plus );
    break;
    case '-':
    printf("%.2f\n", Minus);
    break;
    case '*':
    printf("%.2f\n", Mal);
    break;
    case '/':
       Durch = Zahl1 / Zahl2;
    {printf("Das Ergebnis ist:%.2f\n", Durch);
    }
    break;
}
}
}
