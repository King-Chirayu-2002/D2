#include<bits/stdc++.h>
using namespace std;
string decimalToHexa(int n){
    int x=1;
    string hexa = "";
    while (x<n)
    {
        x*=16;
    }
    x/=16;
    while(x>0){
        int lastdigit = n /x;
        n = n - lastdigit*x;
        x/=16;
        if(lastdigit>=1 && lastdigit<=9){
            hexa += to_string(lastdigit);  
        }else{
            hexa += char(55+lastdigit);
        }
    }
    
    return hexa;
}
int main(){
    int n;cin>>n;
    cout<<decimalToHexa(n);
    return 0;
}