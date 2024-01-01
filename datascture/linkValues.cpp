#include <vector>
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



std::vector<std::string> linkedListValues(Node* head) {
  // todo
  std::vector<std::string>values;
  Node*current = head;
  while(current != nullptr){
    values.push_back(current->val);
    current = current->next;
  }
  return values;
}