#include <string>
#include <iostream>
#include <vector>

class Node {
    public:
    std::string val;
    Node* next;

     Node (int initialVal){
        val = initialVal;
        next = nullptr;
    }
};

int sumList(Node* head){
 Node* current = head;
 int totalSum = 0;
 while(current != nullptr){
    totalSum += current ->val;
    current = current->next;
 }
 return totalSum;
};