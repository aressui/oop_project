#include <iostream>
#include "../include/solution.h"

using namespace std;

int largest_divisor(int n1, int n2){

    if (n1 == 0 && n2 == 0) return 0;
    if (n1 == 0) return abs(n2);
    if (n2 == 0) return abs(n1);
    
    int a = abs(n1);
    int b = abs(n2);
    int res = 1;
    int min = (a < b) ? a : b;

    for(int i = 2; i <= min; i++){
        if (a % i == 0 && b % i == 0){
            res = i;
        }
    }
    return res;
}