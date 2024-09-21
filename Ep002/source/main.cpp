#include "include/LinkedList.hpp"
#include <iostream>

using namespace std;
int main() {

  LinkedList *list = new LinkedList(2);
  list->append(3);
  list->append(1);
  list->append(5);
  list->append(78);
  list->deleteLast();
  list->deleteLast();
  list->printList();
  list->getHead();
  list->getTail();
  list->getLength();
  return 0;
}