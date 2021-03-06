// Lab6.cpp : Defines the entry point for the console application.
// AUTHOR Duncan Reeves, A-3

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


void reverser(char* pointer)
{
	bool goodChar = true;
	int numOfChar = 0;
	char *pointerStart, *PointerLast;
	char temp;

	do
	{
		if (*(pointer + numOfChar) != NULL)
		{
			numOfChar++;
		}
		else
		{
			numOfChar--; //Because this number will be used in zero based indexing, (where 0 = 1, 1 = 2, etc);
			goodChar = false;
		}
	} while (goodChar == true);

	for (int i = 0; i < numOfChar / 2; i++)
	{
		pointerStart = (pointer + i);
		PointerLast = (pointer + numOfChar) - i;
		temp = *pointerStart;

		*pointerStart = temp;

		*pointerStart = *PointerLast;

		*PointerLast = temp;
	}
}

int main()
{
	/// declare a c-string to reverse
	char myString[] = "Hello world!";
	//char *myString = "Hello world!";

	/// call the reverser function
	reverser(myString);

	/// output the result
	cout << myString << endl;

	system("PAUSE");
	return 0;
}

