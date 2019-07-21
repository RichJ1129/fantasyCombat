
#ifndef QueueNode_hpp
#define QueueNode_hpp

#include <iostream>
#include "Character.hpp"
#include "Vampire.hpp"
#include "Barbarian.hpp"
#include "BlueMen.hpp"
#include "Medusa.hpp"
#include "HarryPotter.hpp"

class QueueNode
{
private:
     Character *val;
     QueueNode *next;
     QueueNode *prev;

public:
    QueueNode();
    QueueNode(Character *, QueueNode *, QueueNode *);
    void setVal(Character *);
    void setNext(QueueNode *);
    void setPrev(QueueNode *);
    Character *getVal();
    QueueNode *getNext();
    QueueNode *getPrev();
    
};

#endif /* QueueNode_hpp */
