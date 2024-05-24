#include <iostream>
using namespace std;
int main(){
    int nascimento;
    int atual;
    cout<<"digite o ano que voçe nasceu";
    cin>>nascimento;
    cout<<"digite o ano atual";
    cin>>atual;
if(nascimento+atual >=16) {
    cout<<"voçe pode votar"<<endl;
}else{
    cout<<"voçe não pode votar"<<endl;
}
return 0; 
}   