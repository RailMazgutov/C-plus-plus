#include <iostream>

using namespace std;


struct Node
{
    Node* next{nullptr};
    Node* prev{nullptr};
    std::string value_;
    void add(std::string value);
    int count();
    int count1();
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




void Node::print()
{
    std::cout << value_ << " ";
    if (next->next)
    {
        next->next->print1();
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
    //derevo = derevo->reverse1();
    derevo->print();
    std::cout << "program complete" ;
    return 0;
}

