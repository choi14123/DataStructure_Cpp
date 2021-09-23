#include <iostream>

using namespace std;

struct StudentInfo
{
    char bloodType;
    int stdNumber;
    float grade;
};

int main()
{
    StudentInfo si1 = {'O', 20031128, 3.5f};
    StudentInfo si2 = {'A', 19961219, 2.3f};

    cout << "학번 : " << si1.stdNumber << endl;
    cout << "학점 : " << si1.grade << endl;
    cout << "혈액형 : " << si1.bloodType << endl;

    cout << "학번 : " << si2.stdNumber << endl;
    cout << "학점 : " << si2.grade << endl;
    cout << "혈액형 : " << si2.bloodType << endl;
     
    return 0;
}