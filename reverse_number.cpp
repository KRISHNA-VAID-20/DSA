#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter : ";
    cin >> n;
    int revnum=0;
    while(n>0){
        int lastdigit=n%10;
        revnum=(revnum*10)+lastdigit;
        n=n/10;
    }
    cout << "Reversed = "<< revnum;
    return 0;
}