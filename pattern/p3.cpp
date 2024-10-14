#include <iostream>
using namespace std;

int main(){
    int n=4;
    int i=1;
    
    // while (i<=n)
    // { 
    //     int j=1 ;
    //     char ch ='A'+n-i;
    //     while (j<=i)
    //     {  
    //        cout<<ch<<" ";
    //         ch=ch+1;
    //        j++; 
    //     } 
    //     cout<<endl;
    //     i++;
    // }

    while (i<=n)
    {
        int j=n-i+1;
        while (j>=1)
        {
            cout<<n-i+1;
            j--;
        }  
        cout<<endl;
        i++;
    }
    
    
}