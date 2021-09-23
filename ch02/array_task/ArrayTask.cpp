#include <iostream>

using namespace std;

int main()
{   
    int sum;
    double avr;

     unsigned int scores[10] = { 10, 100, 94, 36, 72, 88, 60, 60, 80, 24 };

    for (int i = 0; i < 10; ++i){
        sum += scores[i];
    }
    
    avr = double(sum) / 10;

    cout << avr;
}