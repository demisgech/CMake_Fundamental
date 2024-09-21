#ifndef __LINKEDLIST__H__
#define __LINKEDLIST__H__

// #include "Node.hpp"

class LinkedList {
private:
  class Node {
  public:
    int value;
    Node *next;
    Node(int value);
  };

  Node *head;
  Node *tail;
  int length;

public:
  LinkedList(int value);
  ~LinkedList();
  void printList();
  void getHead();
  void getTail();
  void getLength();
  void append(int value);
  void deleteLast();

private:
  bool isEmpty();
};
#endif //!__LINKEDLIST__H__