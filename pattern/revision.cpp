#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while (i<=n)
    {
        // int space =n-i;
        // while (space)
        // {
        //    cout<<" ";
        //    space =space-1;
        // }
        // int j=1;
        // while (j<=i)
        // {
        //     cout<<i;
        //     j++;
        // }

        int space=i-1;
        while (space)
        {
            cout<<" ";
            space=space-1;
        }
        int j=n-i+1;
        while (j>1)
        {
            cout<<"*";
           j--;
        }       
        cout<<endl;  
        i++;
    }
    

    
    return 0;
}