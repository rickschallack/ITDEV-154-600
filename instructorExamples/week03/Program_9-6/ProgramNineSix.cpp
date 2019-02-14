/*
 * ProgramNineSix.cpp
 *
 *  Created on: Feb 14, 2019
 *      Author: Rick
 */
 // This program uses bubble sort to sort an array of objects.
 // It places Inventory objects in ascending order by their itemCode.

#include "ProgramNineSix.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Inventory class declaration
class Inventory {
	private:
		string itemCode;
		string description;
		double price;
 public:
		Inventory() { // Default constructor
			itemCode = "XXX";
			description = " ";
			price = 0.0;
		}
		Inventory(string c, string d, double p) { // 3 argument constructor
			itemCode = c;
			description = d;
			price = p;
		}
 // Add methods setCode, setDescription, and setPrice here.
 // Get functions to retrieve member variable values
		string getCode() const {
			string code = itemCode;
			return code;
		}
		string getDescription() const {
			string d = description;
			return d;
		}
		double getPrice() const {
			return price;
		}
}; // End Inventory class declaration

 // Program that uses the Inventory class
 // Function prototype
void displayInventory(const Inventory[], int);
void bubbleSort(Inventory[], int);

/*******************************************************
 * main
 *******************************************************/

int main() {
	const int SIZE = 6;
	// Create and initialize the array of Inventory objects
	Inventory silverware[SIZE] = {
			Inventory("S15", "soup spoon", 2.35),
			Inventory("S12", "teaspoon", 2.19),
			Inventory("F15", "dinner fork", 3.19),
			Inventory("F09", "salad fork" , 2.25),
			Inventory("K33", "knife", 2.35),
			Inventory("K41", "steak knife", 4.15)
	};
	// Display the inventory
	cout << "Here is the original data\n";
	displayInventory(silverware, SIZE);
	// Sort the objects by their itemCode
	bubbleSort(silverware, SIZE);
	// Display the inventory again
	cout << "\nHere is the sorted data\n";
	displayInventory(silverware, SIZE);
	return 0;
} //End main 79

/*******************************************************
 * displayInventory
 *
 * This function displays the entire array.
 *
 * ******************************************************/
void displayInventory(const Inventory object[], int size) {
	for (int index = 0; index < size; index++) {
		cout << setw(5) << left << object[index].getCode()
				<< setw(13) << left << object[index].getDescription()
				<< "$" << right << object[index].getPrice() << endl;
	}
}// End displayInventory

/******************************************************** 94 * bubbleSort * 95 * This function performs a bubble sort on Inventory * 96 * objects, arranging them in ascending itemCode order. * 97 ********************************************************/ 98 void bubbleSort(Inventory array[], int size) 99 { 100 Inventory temp; // Holds an Inventory object 101 bool swap;
 103 do 104 { swap = false;
 for (int count = 0; count < (size − 1); count++) 106 { 107 if (array[count].getCode() > array[count + 1].getCode()) 108 { 109 temp = array[count];
 array[count] = array[count + 1];
 array[count + 1] = temp;
 swap = true;
 } 114 } 115 } while (swap);
 }// End bubbleSort
