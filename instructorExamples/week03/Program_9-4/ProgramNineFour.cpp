/*
 * ProgramNineFour.cpp
 *
 *  Created on: Feb 14, 2019
 *      Author: Rick
 */

#include "ProgramNineFour.h"
#include <iostream>
using namespace std;

// This program uses the bubble sort algorithm
// to sort an array of integers in ascending order.

// Function prototypes
void sortArray(int [], int);
void showArray(const int [], int);

int main() {
	const int SIZE = 6;
	// Array of unsorted values
	int values[SIZE] = {7, 2, 3, 8, 9, 1};
	// Display the values
	cout << "The unsorted values are:\n";
	showArray(values, SIZE);
	// Sort the values
	sortArray(values, SIZE);
	// Display them again
	cout << "The sorted values are:\n";
	showArray(values, SIZE);
	return 0;
}

/************************************************************
 * sortArray
 * This function performs an ascending–order bubble sort on
 * array. The parameter size holds the number of elements
 * in the array.
 * ************************************************************/

void sortArray(int array[], int size) {

	int temp;
	bool madeAswap;

	do {
		madeAswap = false;
		for (int count = 0; count < (size - 1); count++) {
			if (array[count] > array[count + 1]) {
				temp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = temp;
				madeAswap = true;
			}
		}
	} while (madeAswap); // Loop again if a swap occurred on this pass.
}

/*************************************************************
 * showArray
 *  This function displays the contents of array. The
 *   parameter size holds the number of elements in the array.
 **************************************************************/

void showArray(const int array[], int size) {
	for (int count = 0; count < size; count++) {
		cout << array[count] << " ";
	}
	cout << endl;
}

/**************************************************************
 * selectionSort
 * This function performs an ascending–order selection sort
 * on array. The parameter size holds the number of elements
 * in the array.
 *************************************************************/

void selectionSort(int array[], int size) {
	int startScan, minIndex, minValue;
	for (startScan = 0; startScan < (size - 1); startScan++) {
		minIndex = startScan;
		minValue = array[startScan];
		for(int index = startScan + 1; index < size; index++) {
			if (array[index] < minValue) {
				minValue = array[index];
				minIndex = index;
			}
		}
		array[minIndex] = array[startScan];
		array[startScan] = minValue;
	}
}
