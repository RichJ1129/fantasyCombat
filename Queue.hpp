

#ifndef Queue_hpp
#define Queue_hpp

#include <iostream>
#include "QueueNode.hpp"

class Queue
{
private:
    QueueNode *head; //Front
    QueueNode *tail; //Rear
    
public:
    Queue();
    ~Queue();
    void addHead(Character *);
    void addTail(Character *);
    Character *getHead();
    Character *getTail();
    void removeFront();
    void removeBack();
    void traverseList();
    bool isEmpty();
};

#endif /* Queue_hpp */
