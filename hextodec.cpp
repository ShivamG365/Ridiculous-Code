#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
int main(){
string hex;
getline(cin,hex);
    int a;
    cout<<"Enter the length of Hexadecimal Number: ";
    cin>>a;
    int n=a-1; 
    int k=0;
cout<<"Your hexadecimal number is: "<<hex[0]<<hex[1]<<hex[2]<<endl;
for(int i=n;i>=0;i--){
    if (hex[i]=='0'){
k=k+0*(pow(16,(n-i)));
    } 
else if (hex[i]=='1'){
k=k+1*(pow(16,(n-i)));
    } 
else if (hex[i]=='2'){
k+=2*pow(16,n-i);
    } 
else if (hex[i]=='3'){
k=k+3*(pow(16,(n-i)));
    } 
else if (hex[i]=='4'){
k=k+4*(pow(16,(n-i)));
    } 
else if (hex[i]=='5'){
k=k+5*(pow(16,(n-i)));
    } 
else if (hex[i]=='6'){
k=k+6*(pow(16,(n-i)));
    } 
else if (hex[i]=='7'){
k=k+7*(pow(16,(n-i)));
    } 
else if (hex[i]=='8'){
k=k+8*(pow(16,(n-i)));
    } 
else if (hex[i]=='9'){
k=k+9*(pow(16,(n-i)));;
    } 
else if (hex[i]=='a' ||  hex[i]=='A'){
k=k+10*(pow(16,(n-i)));
    } 
else if (hex[i]=='b' || hex[i]=='B' ){
k+=11*pow(16,n-i);
    } 
else if (hex[i]=='C' ||  hex[i]=='c'){
k+=12*pow(16,n-i);
    } 
else if (hex[i]=='d' || hex[i]=='D'){
k+=13*pow(16,n-i);
    } 
else if (hex[i]=='e' ||  hex[i]=='E'){
k+=14*pow(16,n-i);
    } 
else if (hex[i]=='F' ||  hex[i]=='f'){
k+=15*pow(16,n-i);
    }
}
cout<<"Decimal form of your Hexadecimal is: "<<k<<endl;
    return 0;
}