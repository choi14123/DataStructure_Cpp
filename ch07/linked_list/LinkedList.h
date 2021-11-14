#pragma once

typedef struct nodeRecord
{
    int Data;
    struct nodeRecord *Next;
} NODE;

class CLinkedList
{
private:
    NODE *Head, *Tail;

public:
    CLinkedList(void);
    ~CLinkedList(void);

    void Add(int Item);

    void Remove(int Item);
    void RemoveLastNode();
    void RemoveAll();

    int Count();

    void PrintAllList();
};