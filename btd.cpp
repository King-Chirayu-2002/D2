#include<bits/stdc++.h>
using namespace std;
int binaryToDecimal(int n ){
int base = 2;
int decimal =0;
int power =0;
 while (n)
 {
    int lastdigit = n%10;
    n/=10;
    decimal += lastdigit * pow(base,power);  
    power ++; 
 }
 return decimal;
}
int main(){
    int binary;
    cin>>binary;
    cout<<binaryToDecimal(binary);
    return 0;
}