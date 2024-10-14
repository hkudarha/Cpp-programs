#include<iostream>
using namespace std;
int firstOcc(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int ans = -1;
    int mid=(start+end)/2;

    while (start<=end)
    {
       if(arr[mid] == key){
            ans=mid;
            end =mid-1;
       }
       else if(key > arr[mid]){
            start=mid+1;
       }
       else if(key< arr[mid]){
            end =mid-1;
       }
       mid=(start+end)/2;
    }
   return ans; 

}

int lastOcc(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int ans = -1;
    int mid=(start+end)/2;

    while (start<=end)
    {
       if(arr[mid] == key){
            ans=mid;
            start =start+ 1;
       }
       else if(key > arr[mid]){
            start=mid+1;
       }
       else if(key< arr[mid]){
            end =mid-1;
       }
       mid=(start+end)/2;
    }
   return ans; 

}


int main(){

    int key;
    cout<<"Enter the key which you want to search : ";
    cin>>key;
    
    int even[10]={2,4,49,49,49,55,69,79,88,100};
    int first= firstOcc(even,10,key);
    cout<<"First occureance is : "<<first<<endl;
    int last= lastOcc(even,10,key);
    cout<<"Last Occurance is : "<<last<<endl;

    int total=((last-first)+1);
    cout<<"Total number of Occurance : "<<total<<endl;

    return 0;

} 