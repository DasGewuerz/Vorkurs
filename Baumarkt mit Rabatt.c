#include <stdio.h>
void main(/* arguments */) {
  int s;
  int m;
  int u;
  int Rabatto;
  float Massenrabatt1 = 0.1;            //10% = 0.1 * 1
  float Massenrabatt2 = 0.2;            //20%
  float Massenrabatt3 = 0.3;            //30%
  puts("Anzahl Schrauben:");
  scanf("%i",&s );
  puts("Anzahl Muttern:");
  scanf("%i",&m );
  puts("Anzahl Unterlegscheiben:");
  scanf("%i",&u );
  puts("Rabatt in Prozent");           //Hier wird der Rabatt durch eine Rabattkarte abgefragt
  scanf("%i",&Rabatto);
  printf("\n");
  float mu = m * 1;                    //der Index wird zum float gemacht, damit der Rechner nicht muckt
  float sc = s * 1;
  float un = u * 1;
  float Rabatt1 = Rabatto * 1;
  float Rabatt = Rabatt1 / 100;
  float Schraube = 0.1 * s;
  float Mutter = 0.04 * m;
  float Unterlegscheibe = 0.01 * u;
  float GesSchraube = Schraube;      
  float GesMuttern = Mutter;
  float GesUnterlegscheibe = Unterlegscheibe;
  float Gesamt;
  if (Rabatt == 0) {                  //falls man keine Rabattkarte hat, gibt es trotzdem den Massenrabatt
    if (mu >= 100 && mu < 200){                         //falls zwischen 100 und 200 stück gekauft werden
       GesMuttern =  Mutter - Mutter * Massenrabatt1;}  //gibt es 10% (Massenrabatt1) Rabatt, also 100%-10% wird gerechnet
     else if (mu >= 200 && mu < 300){
       GesMuttern =  Mutter - Mutter * Massenrabatt2;}
       else if (mu >= 300){
       GesMuttern =  Mutter - Mutter * Massenrabatt3;}
    if (sc >= 100 && sc < 200){                    //das gleiche für schrauben
       GesSchraube =  Schraube - Schraube * Massenrabatt1;}
     else if (sc >= 200 && sc < 300){
       GesSchraube =  Schraube - Schraube * Massenrabatt2;}
       else if (sc >= 300){
       GesSchraube =  Schraube - Schraube * Massenrabatt3;}
    if (un >= 100 && un < 200){
       GesUnterlegscheibe =  Unterlegscheibe - Unterlegscheibe * Massenrabatt1;}        //und für Unterlegscheiben
     else if (un >= 200 && un < 300){
       GesUnterlegscheibe =  Unterlegscheibe - Unterlegscheibe * Massenrabatt2;}
       else if (un >= 300){
       GesUnterlegscheibe =  Unterlegscheibe - Unterlegscheibe * Massenrabatt3;}


    }
if (Rabatt == 0) {                                                  //eigens if weil daran unten else if dranhängen soll
  Gesamt = (GesSchraube + GesMuttern + GesUnterlegscheibe);
}


   else if (Rabatt > 0){         //es soll nur 1 Rabatt gerechnet werden, also falls es normalen rabatt gibt gibt es keinen Massenrabatt
     Gesamt = (GesSchraube + GesMuttern + GesUnterlegscheibe)-(GesSchraube + GesMuttern + GesUnterlegscheibe)*Rabatt;
                    }
    else if (Rabatt < 0){        //-Rabatt geht nicht
      puts("Falsche Rabatteingabe!");
    }
   puts("Kontrollieren sie ihre Bestellung!");
   printf("\n");
   printf("Gesamtbetrag:%f$\n", Gesamt);    //Gesamt hängt also von Rabatt, Massenrabatt, Menge und Produkt abhängig
  }
