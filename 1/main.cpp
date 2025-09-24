#include <iostream>
#include "include/solution.h"

using namespace std;

int main(){
    int num1, num2;
    cout << "Enter the first and the second numbers: ";
    cin >> num1 >> num2;
    int res = largest_divisor(num1, num2);
    cout << "The divisor is: " << res << endl;
    
    return 0;
}