// #include <iostream>
// using namespace std;

// int count =0;
// void print(){
//     if(count==4) return;
//     cout << count << endl;
//     count ++;
//     print();
// }

// int main(){
//     print();
//     return 0;
// }


// #include <iostream>
// using namespace std;

// void print(int i,int n){
//         if(i>n){
//             return ;
//         }
//         cout << "Krishna" << endl;
//         print(i+1,n);

// }

// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     print(1,n);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void print(int i,int  n){
//     if(i>n) return ;
//     cout << i << endl;
//     print(i+1,n);

// }
// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     print(1,n);
//     return 0;
// }

#include <iostream>
using namespace std;

void backtrack(int i,int  n){
    if(i<1) return ;
    backtrack(i-1,n);
    cout << i << endl;

}
int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    backtrack(n,n);
    return 0;
}


// #include <iostream>
// // Using backtracking 
// using namespace std;

// void backtrack(int i,int  n){
//     if(i>n) return ;
//     backtrack(i+1,n);
//     cout << i << endl;

// }
// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     backtrack(1,n);
//     return 0;
// }