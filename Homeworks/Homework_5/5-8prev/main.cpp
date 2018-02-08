#include <iostream>

using namespace std;


struct Node
{
    Node* next{nullptr};
    Node* prev{nullptr};
    std::string value_;
    void add(std::string value);
    bool hasNext();
    Node* reverse();
    Node* reverse1();
    void print();
    void print1();
};

void Node::add(string value)
{
    if (next)
    {
        next->add(value);
    }
    else
    {
        next = new Node;
        next->value_ = value;
        next->prev = this;
    }

}

bool Node::hasNext()
{
    if (next)
    {
        return true;
    }
    else
    {
        return false;
    }
}

Node *Node::reverse()
{
    Node* pom = new Node;
    pom = next;
    next = prev;
    prev = pom;
    if (prev)
    {
       return prev->reverse();
    }
    else
    {
        return this;
    }
}

Node *Node::reverse1()
{
    while (next)
    {
        Node* pom = new Node;
        pom = next;
        next = prev;
        prev = pom;
    }
}


void Node::print()
{
    std::cout << value_ << " ";
    if (next)
    {
        next->print();
    }
}


void Node::print1()
{
    std::cout << value_ << " ";
        prev->print();

}




int main()
{
    string value;
    std::cout << "enter the number" ;
    std::cin >> value;
    Node* derevo = new Node;
    derevo->value_ = value;
    for (int i = 0; i < 3; ++i)
    {
        std::cin >> value;
        derevo->add(value);
    }
    derevo = derevo->reverse();
    derevo->print();
    std::cout << "program complete" ;
    return 0;
}

