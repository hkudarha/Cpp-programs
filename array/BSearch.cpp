// elements should be in montonic function
// time complexity -  O(logn)

#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int mid=(start+end)/2;

    while (start<=end)
    {
       if(arr[mid] == key){
            return mid;
       }
       if(key > arr[mid]){
            start=mid+1;
       }
       else{
            end =mid-1;
       }
       mid=(start+end)/2;
    }
   return -1; 

}
int main(){

    int key;
    cout << "Enter the key which you want to search : ";
    cin >> key;
    
    int even[10]={2,4,5,19,49,55,69,79,88,100};
    int evenIndex= binarySearch(even,10,key);
    cout<<evenIndex;

    return 0;

} 