// лаб 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#define n 10
int main()
{
	int x[n], n_min = 0, n_max = 0, i_min = 0, i_max = 0, c = 0, sum = 0, sum_i = 0;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		x[i] = rand() % 100 - 50; printf("%d  ", x[i]);  

		if (x[i] < n_min) {
			n_min = x[i];
			i_min = i;
		}
		if (x[i] > n_max) {
			n_max = x[i];
			i_max = i;
		}
		if (i_min > i_max) { c = i_min; i_min = i_max; i_max = c; }
		
		for (int i = 0; i < i_min-1; i++) if (x[i] > 0) {
			sum += x[i];
			sum_i += 1;

		}
		for (int i = i_max+1; i < n; i++) if (x[i] > 0) {
			sum += x[i];
			sum_i += 1;
		}

	}

	if (sum_i > 0) printf("\n%d  ", int((sum/sum_i )));
	printf("\n");

	for (int i = 0; i < n; i++)
	{
		if (x[i] == n_min || x[i] == n_max) {
			x[i] = sum / sum_i;
		}
		printf("%d  ", x[i]);
	}
}
