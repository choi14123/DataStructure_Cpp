#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct Point
    {
        int x, y;
    };

    Point pt[3] = {{10, 20}, {30, 40}, {50 ,60}};
    Point *p[5] = {&pt[0], &pt[1], &pt[2], &pt[0], &pt[1]};
    Point (*P)[3] = &pt;
    
for (int i = 0; i < 3; i++)
{
    cout << "pt의 " << i << "번째 X = " << pt->x << ", ";
    cout << "pt의 " << i << "번째 Y = " << pt->y << endl;

    //cout << "*p의 " << i << "번째 X = " <<  << ", ";
    //cout << "*p의 " << i << "번째 Y = " <<  << endl;

    //cout << "(*P)의 " << i << "번째 X = " <<  << ", ";
    //cout << "(*P)의 " << i << "번째 Y = " <<  << endl;
    cout << endl;
}

return 0;
}