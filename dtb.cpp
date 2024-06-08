#include<bits/stdc++.h>
using namespace std;
int decimalToBinary(int decimal){
    int x =1;
    int binary = 0;
    while (x<decimal){
        x*=2;
    }
    x/=2;
    while (x>0)
    { 
        int lastdigit = decimal/x;
        decimal  -=  lastdigit*x;
        x/=2;
        binary = binary*10 +lastdigit;
    }
    return binary;
     
}
int main(){
    int decimal;
    cin>>decimal;
    cout<<decimalToBinary(decimal);
    return 0;
}