#ifndef STACK_H
#define STACK_H

#define SUCCESS     0
#define FAILURE     -1


typedef int data_t;

struct Node
{
    data_t data;
    Node *link;
};

class Stack
{
    private:
        Node *top;

    public:
        Stack();

        int push(data_t data);
        int pop();
        int peek();
        int display();
        int search(data_t data);
        int size();
        int isEmpty();
        int reverse();

};
#endif