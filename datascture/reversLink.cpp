

#include <string>

class Node {
  public:
    std::string val;
    Node* next;

    Node(std::string initialVal) {
      val = initialVal;
      next = nullptr;
    }
};



Node* reverseList(Node* head) {
   /*
    create a  pointer node current and set to current
    create a node previous poingter and set it equal to null
    loop while cuurent is not null.
    set node next equal to current.next
    set current.next equal to prvious
    set previous equal to current;
    set current equal to next;
    return revious;
    
    
    
    
    */
  Node* current = head;
  Node* previous = nullptr;
  
  while(current != nullptr){
    Node* next = current->next;
    current->next = previous;
    previous = current;
    current = next;
  }
  return previous;
}