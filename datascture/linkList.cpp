#include <string>
#include <string>
#include <iostream>

class Node {
    public:
    std::string val;
    Node* next;

    Node(std::string initialVal){
        val = initialVal;
        next = nullptr;
    }
};

void printlist(Node* head){
    Node* current = head;
    while(current != nullptr){
        std::count << current->val <<std::endl;

    }
}

void run(){
    Node a("A");
    Node b("B");
    Node c("C")
    a.next = &b;
    b.next = &c;

    printlist(&a);
}