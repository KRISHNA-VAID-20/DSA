#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int sum = 0;
    int dup = n;

    // Count number of digits
    int temp = n;
    int digits = 0;
    while(temp > 0) {
        temp = temp / 10;
        digits++;
    }

    temp = n;
    while(temp > 0) {
        int lastdigit = temp % 10;

        // Calculate lastdigit^digits manually
        int power = 1;
        for(int i = 0; i < digits; i++) {
            power *= lastdigit;
        }

        sum += power;
        temp = temp / 10;
    }

    if(sum == dup) {
        cout << "Armstrong number" << endl;
    } else {
        cout << "Not Armstrong number" << endl;
    }

    return 0;
}
