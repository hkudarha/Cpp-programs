#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    
    int i=1;
    while(i<=n)
    {
        int num = n - i + 1;
        while (num >= 1)
        {
            cout << num;
            num--;
        }
        int asterisks = 1;
        while (asterisks <= 2 * i - 1)
        {
            cout << "*";
            asterisks++;
        }
        num = 1;
        while (num <= n - i + 1)
        {
            cout << num;
            num++;
        }

       
        cout << endl;
        i++;
    }
}