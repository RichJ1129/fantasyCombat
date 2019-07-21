#include "Queue.hpp"

Queue::Queue()
{
    head = nullptr;
    tail = nullptr;
}

void Queue::addHead(Character *userInput)
{
    QueueNode *newNode = new QueueNode(userInput, nullptr, head);
    
    if(head != nullptr)
    {
        head->setPrev(newNode);
    }
    
    else
    {
        tail = newNode;
    }
    
    head = newNode;
}

void Queue::addTail(Character *userInput) //enqueue
{
    QueueNode *newNode = new QueueNode(userInput, tail, nullptr);
    
    if(tail != nullptr)
    {
        tail->setNext(newNode);
    }
    
    else
    {
        head = newNode;
    }
    
    tail = newNode;
}

void Queue::removeFront()
{
    QueueNode *temp = head->getNext(); // temp is a pointer
    
    if (temp != nullptr)
    {
        temp->setPrev(nullptr);
    }
    
    else
    {
        tail = nullptr;
    }
    
    delete head;
    
    head = temp;
}

void Queue::removeBack()
{
    QueueNode *temp = tail->getPrev(); // temp is a pointer
    
    if(temp != nullptr)
    {
        temp -> setNext(nullptr);
    }
    
    else
    {
        head = nullptr;
    }
    
    delete tail;
    
    tail = temp;
}

void Queue::traverseList()
{
    QueueNode *newNode = head;
    
    if(newNode != nullptr)
    {
        while(newNode != nullptr)
        {
            std::cout << newNode->getVal()->getName() << std::endl;
            
            newNode = newNode->getNext();
        }
    }
    
    else
    {
        std::cout << "The list does not contain anything" << std::endl;
    }
}


Character *Queue::getHead()
{
    return head->getVal();
}

Character *Queue::getTail()
{
    return tail->getVal();
}

bool Queue::isEmpty()
{
    if(head == nullptr)
    {
        return true;
    }
    
    return false;
}

Queue::~Queue()
{
    while(head != nullptr)
    {
        delete head->getVal();
        removeFront();
    }
}


