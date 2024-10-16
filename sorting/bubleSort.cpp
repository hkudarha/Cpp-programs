#include<iostream>
using namespace std;
void bubbleSort(int arr[],int size){
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }

        }        
    }

}
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        {
            cout << arr[i] << " ";
        } 
    cout << endl; 
} 
int main(){
    int a[6]={66,12,7,2,10,6};
    printArray(a,6);
    bubbleSort(a,6);
    printArray(a,6);
}