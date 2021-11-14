#pragma once

typedef struct nodeRecord
{
    struct nodeRecord *Prev;
    int Data;
    struct nodeRecord *Next;
} NODE;

class DLinkedList
{
private:
    NODE *Head, *Tail;

public:
    DLinkedList(void);
    ~DLinkedList(void);

    void Add(int Item);
    void Remove(int Item);
    void RemoveLastNode();
    void RemoveAll();
    int Count();
    void PrintAllList();
    void PrintAllListReverse();

    bool Exist(int Item);
    void InsertAfter(int TargetItem, int Item);
    void InsertBefore(int TargetItem, int Item);
};