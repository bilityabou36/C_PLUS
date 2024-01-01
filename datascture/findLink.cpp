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

bool findList(Node* head, std::string target){
Node*current = head;

while(current != nullptr){
    if(current -> val == target){
        return true;
    }
    current = current ->next;
}
return false;

}