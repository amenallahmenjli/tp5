/*
 * Exercice 2 : Suppression d’un caractère d’une chaine
 *
 * Ecrire un programme qui lit un texte TXT (de moins de 200 caractères) et qui enlève toutes les apparitions du
 * charactère 'e' en tassant les éléments restants. Les modifications se feront dans la même variable TXT.
 *
 * Exemple :
 * => Cette ligne contient quelques lettres e.
 * => Ctt lign contint qulqus lttrs .
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	// Reserve a space for 200 characters in the memory
	char TXT[201];

	// Read the text from the user and save it in the reserved space
	// And make sure it never exceeds that size
	do {
		printf("Entrer un texte d'un taille maximum de 200 charactères: ");
		scanf("%s", TXT);
	} while (strlen(TXT) > 200);

	// Enregistrer la longueur L de la chaîne.
	int L = strlen(TXT);

	// Supprimer les occurences du charactère e
	int i = 0;
	while (i < L) {
		if (TXT[i] == 'e') {
			// Decale le tableau par un élément depuis le e trouvé
			for (int j = i; j < L; j++)
				TXT[j] = TXT[j + 1];
			// Diminuer la taille du tableau
			L--;
		} else
			// Passer au charactère suivant
			i++;
	}

	// Afficher le résultat
	printf("%s\n", TXT);

	return 0;
}