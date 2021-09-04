#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
using namespace std;

int main( void )
{
    clock_t start, finish;
    double duration;
    start = clock();
    finish = clock();
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    cout << duration << "초입니다. " << endl;
}