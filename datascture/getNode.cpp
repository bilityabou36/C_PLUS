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



std::string getNodeValue(Node* head, int idx) {
  // todo
  Node*current = head;
  int count = 0;
  while(current != nullptr){
    if(count == idx){
      return current -> val;
    }
    count += 1;
    current = current -> next;
  }
  return "";
}