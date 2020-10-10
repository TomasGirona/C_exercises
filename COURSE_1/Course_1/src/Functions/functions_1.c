#include "functions_1.h"
#include<stdio.h>
#include<stdlib.h>

void array_definition(void){

	int n;
	int ident = 1;

	while (ident == 1) {

		printf("Length of the array:");
		scanf_s("%d", &n);
		printf("\n");

		if (n > 0) {
			int* scores = malloc(n * sizeof(int));
			for (int i = 0; i < n; i++) {
				printf("Number %d:", i + 1);
				scanf_s("%d", &scores[i]);
				printf("\n");
			}
			// Creation of the array
			printf("Array is = { ");
			for (int i = 0; i < n - 1; i++) {
				printf("%d, ", scores[i]);
			}
			printf("%d }\n", scores[n - 1]);
			

			printf("Max score = %d\n", max_array(scores, n));
			printf("Min score = %d\n", min_array(scores, n));

			free(scores);
			scores = NULL;

			ident = 0;
		}
		else {
			printf("ponle más de 1 campeón.\n");
		}
	}
}


int max_array(int a[], int n) {
	if (n <= 0) {
		printf("Array tiene que tener al menos un numero.");
		return 0;
	}
	else{ 
		int ar_max = a[0]; // Primera variable para ver si todo es correcto
		for (int i = 1; i < n; i++) { // Recorremos todos los numeros comparandolos con el mayor
			if (ar_max < a[i]) {
				ar_max = a[i];
			}
		}
		return ar_max;
	}
}

int min_array(int a[], int n) {
	if (n <= 0) {
		printf("Array tiene que tener al menos un numero.");
		return 0;
	}
	else {
		int ar_min = a[0]; // Primera variable para ver si todo es correcto
		for (int i = 1; i < n; i++) { // Recorremos todos los numeros comparandolos con el mayor
			if (ar_min > a[i]) {
				ar_min = a[i];
			}
		}
		return ar_min;
	}
}