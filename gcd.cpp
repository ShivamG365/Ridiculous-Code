#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter the bigger number: ";
cin>>a;
    cout<<"Enter the smaller number: ";
    cin>>b;
int k;
for( int i=0;i<1000;i++){
if (a>=b){
    int k=a-b;
    if(b>=k){
       a=b;
        b=k;
    }
    else if(k>=b){
        a=k;
    }
}
if(k==0){
    break;
}
}
cout<<"The HCF of the following Numbers is: "<<a<<endl;


    return 0;
}
/* HCF = 
9328,5678=3650
5678-3650=2028
3650-2028=1622
2028-1622=406
1622-406=1216
1216-406=810
810-406=404
406-404=2
404-2=402
402-2=400
.........
4-2=2
2-2=0 ans.
*/
