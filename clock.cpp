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
    int n;
	cin >> n;
	for(int i = 1 ; i <= n ; i++)
	for(int j = 1 ; j <= i ; j++) 
	
    finish = clock();
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    cout << duration << "초입니다. " << endl;
}