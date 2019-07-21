//
//  QueueNode.cpp
//  FantasyCombat
//
//  Created by Richard Joseph on 5/27/19.
//  Copyright © 2019 Richard Joseph. All rights reserved.
//

#include "QueueNode.hpp"

QueueNode::QueueNode()
{
    val = nullptr;
    next = nullptr;
    prev = nullptr;
}

QueueNode::QueueNode(Character *input, QueueNode *prevNode, QueueNode *nextNode)
{
    setVal(input);
    next = nextNode;
    prev = prevNode;
}

void QueueNode::setVal(Character *userInput)
{
    val = userInput;
}

void QueueNode::setNext(QueueNode *nextNode)
{
    next = nextNode;
}

void QueueNode::setPrev(QueueNode *prevNode)
{
    prev = prevNode;
}

Character *QueueNode::getVal()
{
    return val;
}

QueueNode *QueueNode::getNext()
{
    return next;
}

QueueNode *QueueNode::getPrev()
{
    return prev;
}


