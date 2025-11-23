// #include <iostream>
// using namespace std;

// int s=0;
// void summ(int i,int n){
//     if(i>n){
//         cout << "Sum = " <<s;
//         return ;
//     }
//     s=s+i;
//     summ(i+1,n);
    
// }


// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     summ(1,n);
//     return 0;
    
// }

// USING FUNCTIONAL WAY

// #include <iostream>
// using namespace std;

// int f(int n){
//     if(n==0){
//         return 0;
//     }
//     return n+ f(n-1);
// }


// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     cout << "Sum = " << f(n);
//     return 0;
// }

// FACTORIAL USING RECURSION

// #include <iostream>
// using namespace std;

// int f(int n){
//     if(n==0){
//         return 1;
//     }
//     return n*f(n-1);

// }
// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     cout << f(n);
//     return 0;
// }

