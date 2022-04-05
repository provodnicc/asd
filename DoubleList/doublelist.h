#ifndef __DOUBLELIST_H__
#define __DOUBLELIST_H__

#include <iostream>
using namespace std;

class Node{
    public:

    int data;
    Node * next;
    Node * perv;
    Node(int data, Node * next, Node * perv);
};

class DoubleList 
{
    Node * head;
    Node * tail;
    int counter;

    public:
        DoubleList();
        bool isEmpty() const;
        bool push_front(int element);
        bool push_back(int element);
        bool pop_front();
        bool pop_back();
        int get_back() const;
        int get_front() const;
        int get_size();

        void print();

};
#endif