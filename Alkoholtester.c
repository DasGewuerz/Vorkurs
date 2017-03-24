#include <stdio.h>
void main() {
  int Milli; //Alles lieber vorher als nachher deklarieren, sonst rechnet er nicht
  float Prozent;
  int Kilo;
  char Geschlecht;
  float GesAlk;
  puts("Zu fahren oder nicht zu fahren, dass ist hier die Frage!\n");

  puts("Ja wie viel hast du denn getrunken? Aber in Milliliter, falls du das noch rechnen kannst!");
  scanf("%i",&Milli );


  puts("Wie viel Prozent hat denn dein Gesöff?");
  scanf("%f",&Prozent);


  puts("Wie viele Kilo lasten denn auf den Knochen?");
  scanf("%i",&Kilo );


  puts("Ast oder Brunnen zwischen den Schenkeln? A oder B eingeben.");
  scanf(" %c",&Geschlecht);
  float Alkohol = Milli * (Prozent / 100.0) * 0.8;
  if (Geschlecht == 'A') {                                    //falls es ein Mann ist
    puts("Mann");
    GesAlk = Alkohol / (Kilo * 0.68);                        //Eigene Berechnung beim Mann
    if (GesAlk > 0.5) {
      puts("Oh Oh ein wenig zu viel, lass dich lieber fahren!");
      printf("%.2f Promille\n",GesAlk );
    }
      else {                                                 //else bezogen auf if -> Alles was nicht if ist ist else
        puts("Alles im Grünen Bereich!");                    //                    -> alles unter oder gleich 0.5 promille
        printf("%.2f Promille\n",GesAlk );
      }
    }
      if (Geschlecht == 'B') {                               //falls es eine Frau ist (nicht "else if" weil es nicht auf fall 'A' Bezogen ist)
        puts("Frau");
        GesAlk = Alkohol / (Kilo * 0.55);                   //eigene Berechnung bei der Frau
       if (GesAlk > 0.5) {
          puts("Oh Oh ein wenig zu viel, lass dich lieber fahren!");
          printf("%.2f Promille\n",GesAlk );
        }
          else  {                                            //else bezogen auf if -> Alles was nicht if ist ist else
            puts("Alles im Grünen Bereich!");                //                    -> alles unter oder gleich 0.5 promille
            printf("%.2f Promille\n",GesAlk );
          }
        }

  }


//Alocohol Level Calculator!
//How much did you drink? (in ml) 1000
//% alcohol by volume? (in %) 5
//How much do you weigh? (in kg) 70
//Man or Woman? (m | w) m
//You have an alcohol level of 0.840336 per mille

//Menge in ml x (Vol.-% / 100) x 0,8 = Gramm reiner Alkohol

//Mann = (3 x 12 Gramm) / (70 Kilogramm x 0,68) = 0,75 Promille
//Frau = (3 x 12 Gramm) / (70 Kilogramm x 0,55) = 0,93 Promille
