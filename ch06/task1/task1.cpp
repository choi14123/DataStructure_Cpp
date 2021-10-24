#include <iostream>
using namespace std;

void countdown(int n)
{
    if (n == 0) return ;
    cout << n << endl;
    countdown(n - 1);
    if (n == 1)
    cout << "Launch~" << endl;
}

int main()
{
    cout << "카운트다운을 시작합니다..." << endl;

    countdown(10);

    return 0;
}