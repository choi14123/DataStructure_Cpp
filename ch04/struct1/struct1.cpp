#include <iostream>
using namespace std;

struct StudentInfo
{
    char name[20];
    int stdNumber;
    float grade[2];
};

int main()
{
    StudentInfo stdInfos[5] = {
        {"Cha Eun-Woo", 20200101, {4.3f, 4.2f}},
        {"Kim Eun-Woo", 20200202, {3.2f, 4.1f}},
        {"Park Eun-Woo", 20200303, {4.0f, 3.1f}},
        {"Lee Eun-Woo", 20200404, {3.3f, 4.1f}},
        {"Jo Eun-Woo", 20200505, {4.2f, 4.4f}},
    };

for (int i = 0; i < 5; i++)
{
    cout << stdInfos[i].name << " : ";
    cout << stdInfos[i].stdNumber << " : ";
    cout << stdInfos[i].grade[0] << " , " << stdInfos[i].grade[1] << endl;
}
return 0;
}
