#include <stdio.h>

/**
 *1.Logische Ausdrücke
 *Geben Sie für jeden der folgenden umgangssprachlich beschriebenen Ausdrücke einen entsprechenden
 *Ausdruck in C-Syntax an. Der Ausdruck soll true liefern, wenn die Bedingung zutrifft, und ansonsten
 *false. i, j und k sind int-Variablen.
 *a. i, j und k sind alle ungleich 0
 *b. i ist durch 17 teilbar und echt positiv.
 *c. j ist ungerade und liegt zwischen 20 und 40.
 *d. k ist Vielfaches von 3 und 5 oder Vielfaches von 5 und 7 oder Vielfaches von 5 und 11.
 **/
int logischeAusdruecke()
{
    int i;
    int j;
    int k;

    i = 2;
    j = 9;
    k = 7;
//a)
    if(i != 0 && j != 0 && k != 0) {
        printf("true \n");
    } else {
        printf("false \n");
    }

//b)
    if(i%17 == 0 && i > 0) {
        printf("true \n");
    } else {
        printf("false \n");
    }

//c)
    if(j%2 == 1 && 20 <= j <= 40){
        printf("true \n");
    } else {
        printf("false \n");
    }

//d)
    if(k%5 != 0){
        printf("false \n");
    } else if(k%3 == 0 || k%7 == 0) {
        printf("true \n");
    } else {
        printf("false \n");
    }
    return 0;
}


/**
 * 3. Ziffern als Text ausgeben
 * Schreiben Sie ein C-Programm Matrikelnrtext.c, das eine eingelesene 7-stellige Matrikelnummer im Wortlaut als Text
 * ausgibt. Beispiel:1234567 eins zwei drei vier fünf sechs sieben
 * Hinweise: Lesen Sie die Ziffern mit scanf einzeln ein
 * ("%1d") und speichern sie diese in einem Array.Zur Ausgabe einer Ziffer können Sie das folgende Array von Strings
 * verwenden:char* ausgabe[] = { "null", "eins", "zwei", "drei", "vier",  "fünf", "sechs", "sieben", "acht", "neun"};
 * Beispiel: printf("%s", ausgabe[0])  liefert "null"
 */
void matrikelNummer(){
    int one;
    int two;
    int three;
    int four;
    int five;
    int six;
    int seven;

    printf("Bitte geben Sie Ihre Matrikelnummer stellenweise ein:");
    scanf("%1d", &one);
    scanf("%1d", &two);
    scanf("%1d", &three);
    scanf("%1d", &four);
    scanf("%1d", &five);
    scanf("%1d", &six);
    scanf("%1d", &seven);

    char* ausgabe[] = { "null", "eins", "zwei", "drei", "vier",  "fuenf", "sechs", "sieben", "acht", "neun"};
    printf("%s, %s, %s, %s, %s, %s, %s", ausgabe[one], ausgabe[two], ausgabe[three], ausgabe[four], ausgabe[five], ausgabe[six], ausgabe[seven]);
}

int main() {
    logischeAusdruecke();
    //maleZeichen('*', 9);
    //matrikelNummer();
    return 0;
}