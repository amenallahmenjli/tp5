/*
 * Exercice 3 : Utilisation de la fonction strncpy et strncat
 *
 * Ecrire un programme qui lit deux chaînes de caractères CH1 et CH2 et qui copie la première
 * moitié de CH1 et la première moitié de CH2 dans une troisième chaîne CH3.
 * Afficher le résultat.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	// Variables definition
	// The strings
	char *p_ch1, *p_ch2, *p_ch3;

	// String sizes
	int l_ch1, l_ch2, l_ch3;

	// Half string sizes
	int hl_ch1, hl_ch2;

	// Get the length of our strings
	// Get CH1's length
	do {
		printf("What's the length of CH1: ");
		scanf("%d", &l_ch1);
	} while (l_ch1 <= 0);

	// Get CH2's length
	do {
		printf("What's the length of CH2: ");
		scanf("%d", &l_ch2);
	} while (l_ch2 <= 0);

	// When taking the half of a string I decided to count the middle character of strings with an odd length a part
	// of both of it's halves
	hl_ch1 = l_ch1 % 2 == 0 ? l_ch1 / 2 : l_ch1 / 2 + 1;
	hl_ch2 = l_ch2 % 2 == 0 ? l_ch2 / 2 : l_ch2 / 2 + 1;
	l_ch3 = hl_ch1 + hl_ch2;

	// Read CH1
	p_ch1 = (char *) malloc(l_ch1 * sizeof(char));

	if (p_ch1 == NULL) {
		printf("Memory error!\n");
		return 0;
	}

	do {
		printf("CH1: ");
		scanf("%s", p_ch1);
	} while (strlen(p_ch1) <= 0);

	// Read CH2
	p_ch2 = (char *) malloc(l_ch2 * sizeof(char));

	if (p_ch2 == NULL) {
		printf("Memory error!\n");
		return 0;
	}

	do {
		printf("CH2: ");
		scanf("%s", p_ch2);
	} while (strlen(p_ch2) <= 0);

	// Define ch3
	p_ch3 = (char *) malloc(l_ch3 * sizeof(char));

	if (p_ch3 == NULL) {
		printf("Memory error!\n");
		return 0;
	}

	// Fill CH3 with the first half of CH1
	for (int i = 0; i < hl_ch1; ++i) {
		p_ch3[i] = p_ch1[i];
	}

	// Fill CH3 with the second half of CH2
	for (int i = hl_ch2 - 1; i <= l_ch2; ++i) {
		p_ch3[i] = p_ch2[i];
	}

	// Show the result
	printf("Ch1: %s\n", p_ch1);
	printf("Ch2: %s\n", p_ch2);
	printf("Ch3: %s\n", p_ch3);

	// Free allocated memory
	free(p_ch1);
	free(p_ch2);
	free(p_ch3);

	return 0;
}