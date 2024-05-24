#include <iostream>
using namespace std;
int main(){
    int qmaças;
    float tmaças;
cout<<"digite o numero de maças: ";
cin>>qmaças;
if (qmaças <=12) {
    tmaças=qmaças*1.90;
    cout<<"o preço das maças é:"<<tmaças<<endl;
}else{
    tmaças=qmaças*2.50;
    cout<<"o preço das maças é: "<<tmaças<<endl;
}
return 0;
}      
