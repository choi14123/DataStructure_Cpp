#include <iostream>
#include "DoubleLinkedList.h"

using namespace std;

DLinkedList::DLinkedList(void)
{
    Head = NULL;
    Tail = NULL;
}

DLinkedList::~DLinkedList(void)
{
    RemoveAll();
}

void DLinkedList::Add(int Item)
{
    NODE *temp = new NODE;

    temp->Data = Item;
    temp->Prev = NULL;
    temp->Next = NULL;

    if (Head == NULL)
    {
        Head = temp;
        Tail = temp;
    }
    else
    {
        Tail->Next = temp;
        temp->Prev = Tail;
        Tail = temp;
    }

    if (Exist(Item))
    {
        cout << "입력한" << Item << "은 이미 리스트에 등록되어 있습니다." << endl;
    }
}

void DLinkedList::Remove(int Item)
{
    if (Head == NULL)
    {
        cout << "비어 있는 리스트입니다." << endl;
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
        cout << "삭제할 노드가 없습니다. " << endl;
    }
    if (prev == NULL)
    {
        Head = Head->Next;
        Head->Prev = NULL;
        delete temp;
    }
    else
    {
        prev->Next = temp->Next;

        if (temp->Next != NULL)
            temp->Next->Prev = prev;

        delete temp;
    }
}

void DLinkedList::RemoveLastNode()
{
    if (Head == NULL)
    {
        cout << "비어 있는 리스트입니다." << endl;
    }
    NODE *temp = Head;
    NODE *prev = NULL;

    if (Head->Next == NULL)
    {
        delete Head;
        Head = NULL;
    }
    else
    {
        prev = Tail->Prev;
        prev->Next = NULL;

        delete Tail;
        Tail = prev;
    }
}

void DLinkedList::RemoveAll()
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

int DLinkedList::Count()
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

void DLinkedList::PrintAllList()
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

    cout << ")";
}

void DLinkedList::PrintAllListReverse()
{
    cout << "Reverse List (";

    NODE *temp = Tail;
    while (temp != NULL)
    {
        cout << temp->Data;
        temp = temp->Prev;

        if (temp != NULL)
            cout << ", ";
    }
    cout << ")" << endl;
}

bool DLinkedList::Exist(int Item)
{
    if (Head == NULL)
    {
        return false;
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
        return false;
    }
    else
        return true;
}

void DLinkedList::InsertAfter(int TargetItem, int Item)
{
    if (Exist(TargetItem))
    {
        cout << "입력한 TargetItem는" << TargetItem << "이미 리스트에 없습니다..." << endl;
    }
    NODE *temp = new NODE;

    temp->Data = Item;
    temp->Prev = NULL;
    temp->Next = NULL;

    NODE *FindItem = Head;

    while (FindItem != NULL && FindItem->Data != TargetItem)
    {
        FindItem = FindItem->Next;
    }
    if (FindItem->Next == NULL)
    {
        Tail->Next = temp;
        temp->Prev = Tail;
        Tail = temp;
    }
    else
    {
        FindItem->Next->Prev = temp;
        temp->Next = FindItem->Next;
        FindItem->Next = temp;
        temp->Prev = FindItem;
    }
}

void DLinkedList::InsertBefore(int TargetItem, int Item)
{
    if (Exist(TargetItem) == true)
    {
        cout << "입력한 TargetItem는" << TargetItem << "이미 리스트에 없습니다..." << endl;
    }
    NODE *temp = new NODE;

    temp->Data = Item;
    temp->Prev = NULL;
    temp->Next = NULL;

    NODE *FindItem = Head;

    while (FindItem != NULL && FindItem->Data != TargetItem)
    {
        FindItem = FindItem->Next;
    }
    if (FindItem->Prev == NULL)
    {
        Tail->Prev = temp;
        temp->Next = FindItem;
        Head = temp;
    }
    else
    {
        FindItem->Prev->Next = temp;
        temp->Prev = FindItem->Prev;
        FindItem->Prev = temp;
        temp->Next = FindItem;
    }
}