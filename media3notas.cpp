#include <iostream>
using namespace std;
int main(){
    float nota1,nota2,nota3,media;
    cout<<"digite a primeira nota: ";
    cin>>nota1;
    cout<<" digite a segunda nota: ";
    cin>>nota2;
    cout<<"digite a terceira nota: ";
    cin>>nota3;
    media=(nota1*2+nota2*3+nota3*5)/10;
    cout<<"a media final do aluno e:"<<media<<endl;
    return 0;
}    