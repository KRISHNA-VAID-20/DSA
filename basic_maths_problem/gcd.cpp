#include <iostream>
using namespace std;

int gcd(int a,int b){
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    if(a==0){
        cout << "Gcd : " << b << endl;;
    }
    else{
        cout << "Gcd :" << a;
    }
}
int main(){
    gcd(20,40);
    return 0;
}