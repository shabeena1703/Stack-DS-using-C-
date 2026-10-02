#include<iostream>
#include"stack.h"

using namespace std;

Stack::Stack()
{
    top = NULL;
}


//push
int Stack::push(data_t data)
{
    Node *newnode = new Node;

    if(newnode == NULL)
    {
        return FAILURE;
    }
    newnode->data = data;
    newnode->link = top;
    top = newnode;
    return SUCCESS;
}


int Stack::pop()
{
    if(top == NULL)
    {
        return FAILURE;
    }

    Node *temp = top;
    top = temp->link;  //make the second node as top
    int data = temp->data;
    delete temp;         //free the temp
    return data;
}


int Stack::peek()
{
    if(top == NULL)
    {
        return FAILURE;
    }
    return top->data;
}


int Stack::display()
{
    if(top == NULL)
    {
        return FAILURE;
    }

    Node *temp = top;
    while(temp!= NULL)
    {
        cout<< temp->data <<" -> ";
        temp = temp->link;
    }
    cout<<"NULL"<<endl;
    return SUCCESS;
}


int Stack::search(data_t data)
{
    if(top == NULL)
    {
        return FAILURE;
    }
    Node *temp = top;

    while(temp != NULL)
    {
        if(temp->data == data)
        {
            return SUCCESS;
        }
        temp = temp->link;
    }
    return FAILURE;
}


int Stack::size()
{
    if(top == NULL)
    {
        return FAILURE;
    }
    int count = 0;
    Node *temp =top;

    while(temp != NULL)
    {
        count++;
        temp = temp->link;
    }

    return count;
    
}


int Stack::isEmpty()
{
    if(top == NULL)
    {
        return 1;
    }
    return 0;
}


int Stack::reverse()
{
    if(top == NULL)
    {
        return FAILURE;
    }

    Node *prev = NULL;
    Node *current = top;
    Node *next = NULL;

    while(current != NULL)
    {
        next = current->link;
        current->link = prev;
        prev = current;
        current = next;
    }

    top = prev;
    return SUCCESS;
}