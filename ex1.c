/*
Exercice 1 : Manipulation de chaine
    Ecrire un programme qui lit une ligne de texte (ne dépassant pas 200 caractères) la mémorise
    dans une variable TXT et affiche ensuite :
	❖ La longueur L de la chaîne.
	❖ Le nombre de 'e' contenus dans le texte.
	❖ Toute la phrase sans changer le contenu de la variable TXT.
	❖ Toute la phrase à rebours, après avoir inversé l'ordre des caractères dans TXT:
    Exemple :
	=> voici une petite phrase !
	=> ! esarhp etitep enu iciov
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	// Reserve a space for 200 characters in the memory
	char TXT[201];

	// Read the text from the user and save it in the reserved space
	// And make sure it never exceeds that size
	do
	{
		printf("Entrer un texte d'un taille maximum de 200 charactères: ");
		scanf("%s", TXT);
	} while (strlen(TXT) > 200);

	// Affiche la longueur L de la chaîne.
	int L = strlen(TXT);
	printf("\nLa longueur L de la chaîne est :%d\n", L);

	// Affiche le nombre de 'e' contenus dans le texte.
	int nmb_e = 0;
	for (int i = 0; i < L; i++)
		if (TXT[i] == 'e')
			nmb_e++;
	printf("Le nombre de 'e' contenus dans le texte est %d\n", nmb_e);

	// Afficher toute la phrase sans changer le contenu de la variable TXT.
	printf("%s\n", (TXT));

	// Afficher toute la phrase à rebours, après avoir inversé l'ordre des caractères dans TXT.
	for (int i = L - 1; i >= 0; i--)
		printf("%c", TXT[i]);
	printf("\n");

	return 0;
}
