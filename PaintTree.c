#include <stdio.h>

/* Man muss in der Tat die main ans ende Stelle 
 * oder man muss eine Funktionsdeklaration voranstellen. 
 * Punkt für Larissa
 */
void maleZeichen(char zeichen, int anzahl);


/* Zeichent ein Bäuchen in die Konsole.
 * Programm mit ./tree aufrufen, 
 * Der benutzer wird aufgeforder eine Zeilenanzahl anzugeben.
 */ 
int main(){
	
	char BAUM_SYMBOL ='*';
	char HINTERGUND_SYMBOL ='.';
	
	// Benutzer eingabe aufnehmen, wie viele Zeilen soll das Bäumchen haben. 
	int eingabe;
	printf("Wie hoch soll ihr Baum sein?:");
	scanf("%2d",&eingabe);
	
	int anzahl = eingabe;
	
	printf("Der eingebene Parameter ist: %d\n",anzahl);
	printf("\n\n");
	
	// Zeichen Das Bäumchen...
	int width = 2*anzahl+1;
	for (int zeile=0;zeile<anzahl;zeile++){
		maleZeichen(' ',5); // Nur zum einrücken.
		
		maleZeichen(HINTERGUND_SYMBOL,width/2-(zeile+1));
		maleZeichen(BAUM_SYMBOL,2*zeile+1);
		maleZeichen(HINTERGUND_SYMBOL,width/2-(zeile+1));
		printf("\n");
	}
	
	printf("\n\n");
	return 0 ;
}

/*
 * Schreibt eine bestimmtes Zeichen wiederholt auf die Konsole.
 */
void maleZeichen(char zeichen, int anzahl){
		for (int i=0;i<anzahl;i++){
			printf("%c",zeichen);
		}
		return ;
}

