#include <iostream>
#include "List.h"

using namespace std;

List::List()
{
    Count = 0;
}

List::~List() {}

void List::Insert(int Position, int Item)
{
    if (Count == MAX)
        cout << "리스트가 꽉 차 있습니다." << endl;
    else if (Position > Count + 1 || Position < 1)
        cout << "Position이 범위를 벗어났습니다." << endl;
    else
    {
        for (int i = Count - 1; i >= Position - 1; i --)
        {
            Data[i + 1] = Data[i];
        }
    
    Data[Position - 1] = Item;
    
    Count++;
    }
}

void List::Delete(int Position)
{
    if (Position < 1 || Position > Count)
        cout << "Position이 범위를 벗어났습니다." << endl;
    else
    {
        for (int i = Position; i < Count - 1; i++)
        {
            Data [i - 1] = Data[i];
        }
        Count--;
    }
}

void List::Retrieve(int Position, int *ItemPtr)
{
    if (Position < 1 || Position > Count)
        cout << "Position이 범위를 벗어났습니다." << endl;
    else
        *ItemPtr = Data[Position - 1];
}

bool List::IsEmpty()
{
    return (Count == 0);
}

int List::Length()
{
    return Count;
}

void List::PrintItem()
{
    if (Count < 1)
        cout << "빈 리스트입니다." << endl;
    else
    {
        cout << "위치/tData" << endl;

        for (int i = 0; i < Count; i ++)
        {
            cout << i + 1 << "\t" << Data[i] << endl;
        }
        cout << "리스트의 끝입니다." << endl;
    }
}