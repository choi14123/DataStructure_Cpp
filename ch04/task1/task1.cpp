#include <iostream>
using namespace std;

int main()
{


    struct Friends
    {
        char name[20];
        char gender;
        unsigned int num_of_met[3];
        unsigned int num_of_call[3];
    };

    Friends myFriends[3] = {
        {"Park Ji-hee", 'f', {0, 8, 8 }, {0,2,56}},
        {"Choi Ji-Hwan", 'm', {30, 30, 30 }, {5,17,6}},
        {"Lee Fe-Min", 'm', {4, 5, 2 }, {9,15,6}},
    };

    for (int i = 0; i < 3; i++)
    {
        cout << "내 친구의 이름은 " << myFriends[i].name << "이고" << endl;
        cout << "성별은 " << myFriends[i].gender << "입니다. " << endl;
        cout << "최근 3달 동안 ";
        for (int j = 0; j < 3; j++)
        {
            cout << myFriends[i].num_of_met[j] << "번 ";
        }
        cout << "만났고" <<endl;

        cout << "최근 3달 동안 ";
    for (int k = 0; k < 3; k++)
    {
        cout << myFriends[i].num_of_call[k] << "번";
    }
    cout << "전화했습니다. " << endl << endl;
    }
    return 0;
}