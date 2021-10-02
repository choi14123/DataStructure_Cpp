#include <iostream>
using namespace std;

int main(){
    long lArray[20] = {};

    long(*p)[20] = &lArray;
    

    (*p)[3] = 300;

    cout << "lArray[3] = " << lArray[3] << endl;
    for (int i = 0; i < 20; ++i)
    {
    cout << "(*p)[" << i <<"] = " << (*p)[i] << endl;
    }
    return 0;
}