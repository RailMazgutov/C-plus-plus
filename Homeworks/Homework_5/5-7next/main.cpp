#include <iostream>

using namespace std;


struct Node
{
    Node* next{nullptr};
    std::string value_;
    void add(std::string value);
  //  bool hasnext() const;
    Node reverse();
    int count(int size);
    void print();
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
    }

}



/*Node Node::reverse()
{
    next->next = this;
    if (next)
    {
        next->next->reverse();
    }
    return next->next;
}*/

int Node::count(int size)
{
    if (next)
    {
        size = size + 1;
        next->count(size);
       // std::cout << "1";
    }
    else
    {
        return size;
    }
}

/*bool Node::hasnext(const Node &value) const
{
    return !(next);
}*/

void Node::print()
{
    std::cout << value_ << " ";
    if (next)
    {
        next->print();
    }
}



int main()
{
    string value;
    std::cout << "enter the number" ;
    std::cin >> value;
    Node* derevo = new Node;
    derevo->value_ = value;
    for (int i = 0; i < 5; ++i)
    {
        std::cin >> value;
        derevo->add(value);
    }
    int size = 1;
    int saize = derevo->count(size);
    std::cout << "the number of elements in the list = " << saize << std::endl;;
   // derevo->print();
    std::cout << "program complete" ;
    return 0;
}

