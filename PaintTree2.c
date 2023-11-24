#include <stdio.h>

/* Man muss in der Tat die main ans ende Stelle 
 * oder man muss eine Funktionsdeklaration voranstellen. 
 * Punkt für Larissa
 */
void maleZeichen(char zeichen, int anzahl);


/* Zeichent ein Bäumchen in die Konsole.
 * Programm mit ./tree <anzahl> aufrufen, 
 * z.B. ./tree 6 
 * Zeichenet ein Bäumchen mit 6 Zeilen.
 */ 
 
int main(int argc, char *argv[]){

	int anzahl = (int)*argv[1]-(int)'0'; //Umwandeln von Zeichenliteralen in Zahlen. Witzig ist das Umrechen von ASCII codes

	printf("Der eingebene Parameter ist: %d\n",anzahl);
	printf("\n\n");
	
	// Zeichen Das Bäumchen...
	int width = 2*anzahl+1;
	for (int zeile=0;zeile<anzahl;zeile++){
		maleZeichen(' ',5); // Nur zum einrücken.
		
		maleZeichen('.',width/2-(zeile+1));
		maleZeichen('*',2*zeile+1);
		maleZeichen('.',width/2-(zeile+1));
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

