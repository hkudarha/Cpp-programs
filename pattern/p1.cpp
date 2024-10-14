// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     int i=1;
   
//     while(i<=n)
//     {
//         int space = 1;
//         while (space<=(n-i))
//         {
//             cout<<space;
//             space=space+1;
//         }
        
//         int j=1;
//         while (j<=(2*i-1))
//         {
//             // if(j%2==0){
//             //     cout<<"1";
//             // }
//             // else{
//             //     cout<<"0";
//             // }
//             cout<<"*";
           
//            j=j+1;
//         }  

//         int k=1;
//         while (k<n)
//         {
//             if(i<=k){
//                 cout<<k;
//             }
//             k=k+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
    
// }

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    
    int i=1;
    while(i<=n)
    {
      
        int num = 1;
        while (num <= n - i + 1)
        {
            cout << num;
            num++;
        }
       
        int asterisks = 1;
        while (asterisks <= 2 * i - 3)
        {
            cout << "*";
            asterisks++;
        }

       int num = n - i + 1;
        while (num >= 1)
        {
            cout << num;
            num--;
        }
        
        cout << endl;
        i++;
    }
}