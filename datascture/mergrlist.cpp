class Node {
  public:
    int val;
    Node* next;

    Node(int initialVal) {
      val = initialVal;
      next = nullptr;
    }
};



Node* mergeLists(Node* head1, Node* head2) {
 if (head1 == nullptr) {
    return head2;
  }
  
  if (head2 == nullptr) {
    return head1;
  }
  
  if (head1->val < head2->val) {
    head1->next = mergeLists(head1->next, head2);
    return head1;
  } else {
    head2->next = mergeLists(head1, head2->next);
    return head2;
  }
}
