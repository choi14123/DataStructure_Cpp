#include <iostream>
#include "QueueByCircularLinkedList.cpp"

using namespace std;

bool testMatched(char[]);
const int MAX = 100;

int main()
{
    const int N = 41;
    const int M = 3;

    QueueByCircularLinkedList Q;

    int i = 1;
    while (i <= N)
    {
        Q.enQueue(i);
        i++;
    }

    while (Q.GetSize() > 1)
    {
        for (int j = 1; j <= M - 1; j++)
        {
            int temp = Q.deQueue();
            Q.enQueue(temp);
        }
        Q.deQueue();
    }

    cout << "마지막 생존자가 앉은 자리의 번호는 ";
    while (!Q.IsEmpty())
    {

        cout << Q.deQueue();

        if (!Q.IsEmpty())
            cout << ", ";
    }
    cout << " 입니다.";

    return 0;
}