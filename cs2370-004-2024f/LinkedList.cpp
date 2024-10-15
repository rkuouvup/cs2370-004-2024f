#include <iostream>
#include "LinkedListNode.h"

using namespace std;

class LinkedList {
  private:
    LinkedListNode *head;
  public:
    LinkedList() : head(nullptr) {};
    ~LinkedList();
    void Prepend(int data);
    void Print() const;
};

LinkedList::~LinkedList() {
  cout << "list destructor" << endl;
  LinkedListNode *curr = head;
  while (head != nullptr) {
    head = head->next;
    delete curr;
    curr = head;
  }
}

void LinkedList::Prepend(int data) {
  LinkedListNode *node = new LinkedListNode(data);
  node->next = head;
  head = node;
}

void LinkedList::Print() const {
  if (head == nullptr) {
    cout << "Empty list" << endl;
  } else {
    LinkedListNode *node = head;
    for (; node != nullptr; node = node->next) {
      cout << node->data << " ";
    }
    
    /*
    // print node
    cout << (*node).data << endl;
    cout << node->data << endl;

    // terminating condition
    node == nullptr;
    node->data == nullptr;

    // next
    node = (*node).next;
    node = node->next;
    
    
    */
  }
}



int main() {
  LinkedList list;
  list.Prepend(1);
  list.Prepend(2);
  list.Prepend(3);
  list.Prepend(4);

  list.Print();
  
  return 0;
}
