#include<iostream>
using namespace std;
int main(){
    float nota1,nota2,media;
    cout<<"digite a primerira nota";
    cin>>nota1;
    cout<<"digite a segunda nota";
    cin>>nota2;
    media=(nota1+nota2)/2;
    cout<<"a media do aluno "<<media<<endl;
 if(media>=7) {
    cout<<"digite aprovado"<<endl;
 }else {
    cout<<"digite reprovado"<<endl;
 }
 return 0; 
}      