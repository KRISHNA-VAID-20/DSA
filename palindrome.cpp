#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter : ";
    cin >> n;
    int revnum=0;
    int dup=n;
    while(n>0){
        int lastdigit=n%10;
        revnum=(revnum*10)+lastdigit;
        n=n/10;
    }
    if(revnum==dup){
        cout << "plaindrome";
    }
    else{
        cout << "Not a palindrome ";
    }
    return 0;
}
