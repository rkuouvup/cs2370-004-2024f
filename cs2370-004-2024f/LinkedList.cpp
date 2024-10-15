#include <iostream>
#include "LinkedListNode.h"

using namespace std;

class LinkedList {
  private:
    LinkedListNode *head;
  public:
    LinkedList() : head(nullptr) {};
    LinkedList(const LinkedList &obj);
    ~LinkedList();
    LinkedListNode* GetHead() {return head;}
    LinkedListNode* GetTail();
    LinkedList& operator=(const LinkedList &obj);
    void Prepend(int data);
    void Print() const;
};

LinkedList::LinkedList(const LinkedList &obj) {
    if (obj.head == nullptr) {
        this->head = nullptr;
    } else {
        head = new LinkedListNode(obj.head->data);
        
        LinkedListNode *currObj = obj.head;
        LinkedListNode *currThis = this->head;
        
        while (currObj->next != nullptr) {
            currThis->next = new LinkedListNode(currObj->next->data);
            currThis = currThis->next;
            currObj = currObj->next;
        }
    }
}

LinkedList::~LinkedList() {
  //cout << "list destructor" << endl;
  LinkedListNode *curr = head;
  while (head != nullptr) {
    head = head->next;
    delete curr;
    curr = head;
  }
}

LinkedListNode* LinkedList::GetTail() {
    if (head == nullptr) {
        return head;
    } else {
        LinkedListNode *curr = head;
        while (curr->next != nullptr) {
            curr = curr->next;
        }
        return curr;
    }
}

LinkedList& LinkedList::operator=(const LinkedList &obj) {
    if (this != &obj) {
        // delete original list
        if (head != nullptr) {
            LinkedListNode *curr = head;
            LinkedListNode *next;
            
            while(curr != nullptr) {
                next = curr->next;
                delete curr;
                curr = next;
            }
        }
        // copy the list from obj
        if (obj.head == nullptr) {
            this->head = nullptr;
        } else {
            head = new LinkedListNode(obj.head->data);
            
            LinkedListNode *currThis = head;
            LinkedListNode *currObj = obj.head;
            
            while(currObj->next != nullptr) {
                currThis->next = new LinkedListNode(currObj->next->data);
                currObj = currObj->next;
                currThis = currThis->next;
            }
        }
    }
    return *this;
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



/*int main() {
    LinkedList l1;
    l1.Prepend(1); l1.Prepend(2);
    l1.Prepend(3); l1.Prepend(4);
    
    LinkedList l2;
    l2.Prepend(100);
    
    cout << "l1: "; l1.Print(); cout << endl;
    cout << "l2: "; l2.Print(); cout << endl;
    
    l2 = l1;
    
    cout << "l1: "; l1.Print(); cout << endl;
    cout << "l2: "; l2.Print(); cout << endl;
    
    LinkedListNode *l1Head = l1.GetHead();
    LinkedListNode *l1Tail = l1.GetTail();
    l1Head->SetData(400);
    l1Tail->SetData(100);
    
    cout << "l1: "; l1.Print(); cout << endl;
    cout << "l2: "; l2.Print(); cout << endl;*/
    
    /* copy constructor
    LinkedList l1;
    l1.Prepend(1); l1.Prepend(2);
    l1.Prepend(3); l1.Prepend(4);
    LinkedList l2(l1);
    
    cout << "l1: "; l1.Print(); cout << endl;
    cout << "l2: "; l2.Print(); cout << endl;
    LinkedListNode *l1Head = l1.GetHead();
    LinkedListNode *l1Tail = l1.GetTail();
    l1Head->SetData(400);
    l1Tail->SetData(100);
    
    cout << "l1: "; l1.Print(); cout << endl;
    cout << "l2: "; l2.Print(); cout << endl;*/
    
    
    /* copy constructor
    LinkedListNode n1(1000);
    LinkedListNode n2(n1);
    
    cout << "n1: " << n1.GetData() << endl;
    cout << "n2: " << n2.GetData() << endl;
    
    n1.SetData(1);
    
    cout << "n1: " << n1.GetData() << endl;
    cout << "n2: " << n2.GetData() << endl;*/
    
    
  /* construct a list
   
  LinkedList list;
  list.Prepend(1);
  list.Prepend(2);
  list.Prepend(3);
  list.Prepend(4);

  list.Print();*/
  
/*  return 0;
}*/
