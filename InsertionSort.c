#include <stdio.h>
#define ARRAYLEN 200


void InsertionSort()
{
	int i= 0;
	int j, key, counter;
	int myArray[ARRAYLEN];
	char line[4000]; //array of characters to read in the numbers with fgets because fgets requires an array of characters
	int c;

	printf("\n------------Unsorted Array-------\n");

//This is where I will be reading in the values from the "keyboard" aka integers coming in from GenNums and assigning them to my array. I used fgets to that and sscanf to convert the characters read in into integers and actually assigning them to my array.
	while( fgets(line, sizeof(line), stdin) !=0)	
	{
		sscanf(line, "%d", &c);	
		myArray[i] = c;
		printf( "Array value %d is: %d\n ", i, myArray[i]);
		i++;
	}

	counter =i; //I am using this counter to keep track of how many numbers come in and get stored in myArray so that I can sort through that array later since the array length right now is 200 and I'm not quite sure how many are actually going to come in from the keyboard.

// This is the implementation of my lab3 "SortArray" algorithm/function
	for(j=1; j<counter; j++)
	{
		i=j;

		if(myArray[i] == myArray[i-1])
			i--;
		while(i>0 && myArray[i]<=myArray[i-1])
		{
			key = myArray[i];
			myArray[i] = myArray[i-1];
			myArray[i-1] = key;
			i--;
		}
	}
// Printing of the sorted array
	printf("\n\n-----------Sorted Array----------\n");

	for(i=0; i<counter; i++)
	{
		printf(" Array value %d is: %d\n", i, myArray[i]);
	}
}
