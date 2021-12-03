#include <iostream>
#include "BinarySearchTree.h"

using namespace std;

NODE_TREE *BinarySearchTree::searchBST(NODE_TREE *node, element x)
{

    NODE_TREE *p = root;
    NODE_TREE *q = NULL;

    if (node == NULL)
        return NULL;
    else if (x == p->key)
        return p;
    else if (x < p->key)
        return searchBST(p->left, x);
    else
        searchBST(p->right, x);

    return 0;
}
void BinarySearchTree::insertNode(element x)
{
    NODE_TREE *p = root;
    NODE_TREE *q = NULL;
    while (p != NULL)
    {
        if (x == p->key)
            return;
        q = p;
        if (x < p->key)
            p = p->left;
        else
            p = p->right;
    }
    NODE_TREE *nodeA = makeNode(x, NULL, NULL);

    if (isEmpty())
        setRoot(nodeA);
    else if (x < q->key)
        q->left = nodeA;
    else
        q->right = nodeA;
}

void BinarySearchTree::deleteNode(NODE_TREE *node, element x)
{

}