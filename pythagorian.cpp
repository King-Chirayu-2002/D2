#include<bits/stdc++.h>
using namespace std;
int square(int n){
    return n*n;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(square(c) == square(b) +square(a)){
        cout<< "true";
    }else{
        cout<<"false";
    }
    return 0;
}