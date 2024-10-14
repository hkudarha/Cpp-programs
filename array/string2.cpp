// operation on string (Pallindrom string , LowerCase,reverse, getlen)

#include<iostream>
using namespace std;

char toLowerCase(char name){
    if(name >= 'a' && name<= 'z'){
        return name;
    }
    else{
        char temp= name - 'A' + 'a';
        return temp;
    }
}


bool checkPallindrom(char name[],int n){
    int s =0;
    int e=n-1;
    while(s<=e){
        if(toLowerCase(name[s]) !=  toLowerCase(name[e])){
            return 0;
        }
        else{
            s++;
            e--;  
        }
    }
    return 1;
}

void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s],name[e]);
        s++;
        e--;
    }

}

int getlen(char name[]){
    int count=0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
    
}

int main(){
    char name[20];

    cout<<"enter your name : ";
    cin>>name;
    cout<<"your name is : " <<name<<endl;
    int n= getlen(name);
    cout<<"Length of your name is : "<<n<<endl;
    reverse(name,n);
    cout<<"Reverse of your name is : " <<name<<endl ;
    cout<<checkPallindrom( name,n);
}