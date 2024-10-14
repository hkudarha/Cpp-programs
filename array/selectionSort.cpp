#include<iostream>
using namespace std;
void sort(int a[],int size){
    for (int i = 0; i < size-1; i++)
    {
        int min=i;
        for (int j = i+1; j < size; j++)
        {
           if(a[j]<a[min]){
                min=j;
           }
        }
        if(min!=i){

         swap(a[min],a[i]);  
        }
        cout<<a[i]<<endl;      
    }
   
}
int main(){
    int arr[5]={5,30,8,2,9};
    sort(arr,5);
    cout<<"sorted array is :"<<endl;
    return 0;
}