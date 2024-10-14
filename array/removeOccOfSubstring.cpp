// remove string from middle

#include<iostream>
using namespace std;

string RemoveOcc(string s,string part){
   while(s.length()!= 0  && s.find(part)<s.length()){
    s.erase(s.find(part),part.length());
   }
   return s;
}
int main(){
    string s,part;
    cout<<"Enter your string :";
    cin>>s;
    cout<<endl;

    cout<<"Enter a part : ";
    cin>>part;
    cout<<endl;

    cout<<RemoveOcc(s,part);
    
}