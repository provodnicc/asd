#include "doublelist.h"

int main(){
    DoubleList l1;
    l1.push_front(1);
    l1.push_front(2);
    l1.push_front(3);
    l1.print();// 3 2 1 
    l1.push_back(4);
    l1.push_back(5);
    l1.print();// 3 2 1 4 5
    l1.pop_front();
    l1.pop_front();
    l1.print();// 1 4 5
    cout<<l1.get_size()<<endl;
    return 0;
}