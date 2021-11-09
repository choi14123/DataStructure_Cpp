#include <iostream>
#include "LinkedList.h"

using namespace std;

CLinkedList::CLinkedList(void)
{
    Head = NULL;
    Tail = NULL;
}

CLinkedList::~CLinkedList(void)
{
    RemoveAll();
}

void CLinkedList::Add(int Item)
{
    NODE *temp = new NODE;

    temp->Data = Item;
    temp->Next = NULL;

    if (Head == NULL)
    {
        Head = temp;
        Tail = temp;
    }
    else
    {
        Tail->Next = temp;
        Tail = temp;
    }
}

void CLinkedList::Remove(int Item)
{
    if (Head == NULL)
    {
        cout << "비어 있는 리스트입니다." << endl;
        return ;
    }

    NODE *temp = Head;
    NODE *prev = NULL;

    while (temp != NULL && temp->Data != Item)
    {
        prev = temp;
        temp = temp->Next;
    }

    if (temp == NULL)
    {
        cout << "삭제할 노드가 없습니다." << endl;
        return;
    }

    if (prev == NULL)
    {
        Head = Head->Next;
        delete temp;
    }
    else
    {
        prev->Next = temp->Next;
        delete temp;
    }
    
}

void CLinkedList::RemoveLastNode()
{
    if (Head == NULL)
    {
        cout << "비어 있는 리스트입니다." << endl;
        return;
    }

    NODE *temp = Head;
    NODE *prev = NULL;

    if (Head->Next == NULL)
    {
        delete Head;
        Head = NULL;
        return;
    }
    else
    {
        prev = Head;
        temp = Head->Next;
        
        while (temp->Next != NULL)
        {
            prev = temp;
            temp = temp->Next;
        }
        delete temp;
        prev->Next = NULL;
    }
}

void CLinkedList::RemoveAll()
{
    NODE *temp = Head;

    while (Head != NULL)
    {
        temp = Head;
        Head = Head->Next;
        delete temp;
        temp = NULL;
    }
    Tail = NULL;
}

int CLinkedList::Count()
{
    int count = 0;
    NODE *temp = Head;

    while (temp != NULL)
    {
        count++;
        temp = temp->Next;
    }
    return count;
}

void CLinkedList::PrintAllList()
{
    cout << "List = (";
    NODE *temp = Head;

    while (temp != NULL)
    {
        cout << temp->Data;
        temp = temp->Next;

        if (temp != NULL)
            cout << ", ";
    }
    cout << ")" << endl;
}