#include <stdio.h>
#include <stdlib.h>
#define SIZE 4
int numOnesInRow[SIZE];
int numRowsOfDNF;

void init(int n, int A[][SIZE]) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) {
			A[i][j] = 1;
		}
		numOnesInRow[i] = n;
	}
	numRowsOfDNF = n;
}



void flip(int A[][SIZE], int i, int j) {
	if (A[i][j] == 0) {              
		A[i][j] == 1;
		numOnesInRow[i]++;
		if (numOnesInRow[i] == SIZE) {
			numRowsOfDNF++;
		}
	}
	else {
		A[i][j] == 0;
		if (numOnesInRow[i] == SIZE) {
			numRowsOfDNF--;
		}
		numOnesInRow[i]--;
	}
}

int DNF(int A[][SIZE]) {
	return numRowsOfDNF > 0;
}