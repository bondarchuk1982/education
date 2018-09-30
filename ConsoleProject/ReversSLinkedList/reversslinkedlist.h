#ifndef REVERSSLINKEDLIST_H
#define REVERSSLINKEDLIST_H

struct node
{
    node *pnext;
};

class ReversSLinkedList
{
public:
    ReversSLinkedList();

    node *reverse(node*);
};

#endif // REVERSSLINKEDLIST_H
