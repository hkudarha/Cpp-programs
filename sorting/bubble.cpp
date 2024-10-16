// C++ program for implementation 
// of Bubble sort 
#include <bits/stdc++.h> 
using namespace std; 

// A function to implement bubble sort 
void bubbleSort(int arr[], int n) 
{ 
	int i, j; 
	for (i = 1; i < n ; i++)
    {
		for (j = 0; j < n - i; j++) 
        {
			if (arr[j] > arr[j + 1]) 
				{
                    swap(arr[j], arr[j + 1]); 
                }
        }
    }
} 

// Function to print an array 
void printArray(int arr[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 
int main() 
{ 
	int arr[5] = { 5, 1, 4, 2, 8}; 
	
    printArray(arr,5);
	bubbleSort(arr, 5); 
	cout << "Sorted array: \n"; 
	printArray(arr, 5); 
	return 0; 
}
