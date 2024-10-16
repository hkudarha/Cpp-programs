#include<iostream>
using namespace std;


void insrtionSort(int arr[],int size){
    for (int i = 1; i < size; i++)
    {
        int temp= arr[i];
       int j = i-1;
       for (; j>=0; j--)
        {
                if(arr[j]>temp){
                    arr[j+1]=arr[j];
                }
                else{
                    break;
                }
        }
        arr[j+1]=temp;        
    }
    
}

void printArray(int arr[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 

int main(){
    int a[7]={23,45,2,3,46,7,89};
    printArray(a,7);
    insrtionSort(a,7);
    printArray(a,7);
}