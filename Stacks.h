#ifndef STACKS_H
#define STACKS_H

#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node * next;
};

node * top = nullptr;

void push(int value)
{
    node * newnode = (node*)malloc(sizeof(node));
    if (newnode == NULL)
        return;
    newnode -> data = value;
    newnode -> next = top;
    top = newnode;
}

void pop() 
{
    node * temp;
    if (top == NULL)
		return;
    else
    {
        temp = top;
        cout << "Element popped is: " << temp->data << endl;
        top = top -> next;
        free(temp);
    }
}

void display()
{
    node * temp;
    if (top == NULL)
    	return;
    else 
    {
        temp = top;
        cout << "Stack elements are: " ;
        while(temp != NULL) 
        {
            cout << temp -> data << " ";
            temp = temp -> next;
        }
        cout << endl;
    }
}

#endif