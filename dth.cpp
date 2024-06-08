#include<bits/stdc++.h>
using namespace std;
int TOpow(int base, int power){
    int n =base;
    while(power){
        n *=base;
        power--;
    }
    n/=base;
    return n;
}
int hexaToDecimal(string hexa){
    int decimal = 0 ;
    int base =16;
    int power =0;
    for(int i=hexa.size()-1;i>=0;i--){
        if(hexa[i]>='A'  &&hexa[i]<='F'){
            decimal = decimal + (hexa[i]-55)* TOpow(base,power);
        }else{
            decimal = decimal + (hexa[i]-48)* TOpow(base,power);
        }
        power++;
    }
    return decimal;
}
int main(){
    string hexa;
    cin>>hexa;
    cout<<hexaToDecimal(hexa);
    return 0;
}