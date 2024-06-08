#include<bits/stdc++.h>
using namespace std;
int octalToDecimal(int n ){
int base = 8;
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
    int octal;
    cin>>octal;
    cout<<octalToDecimal(octal);
    return 0;
}