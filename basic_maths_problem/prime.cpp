#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n :";
    cin >> n;
    int count=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            count ++;
            if(n/i!=i){
                count ++;
            }
        }
    }
    if(count ==2){
        cout << "Prime number ";
    }
    else{
        cout << "Not prime ";
    }
    return 0;

}