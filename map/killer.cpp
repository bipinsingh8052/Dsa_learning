// #include<iostream>
// using namespace std;
// int main(){

//     int n = 5;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < i; j++) {
//             cout << " ";
//         }
        
//         for (int j = n - i; j >= 1; j--) {
//             cout << j << " ";
//         }
        
//         cout << endl;
//     }

// }





#include <iostream>
using namespace std;

void printNumbers(int num) {
    if (num == 0) return;

    printNumbers(num - 1); 
    cout << num << " "; 
}
int main() {
    int n = 10; 
    printNumbers(n);
    return 0;
}

