#include "../include/LinkedList.hpp"
#include <iostream>

using namespace std;

LinkedList::Node::Node(int value) {
  this->value = value;
  this->next = nullptr;
}

LinkedList::LinkedList(int value) {
  Node *newNode = new Node(value);
  this->head = newNode;
  this->tail = newNode;
  length = 1;
}

LinkedList::~LinkedList() {
  Node *temp = this->head;
  while (head->next != nullptr) {
    this->head = this->head->next;
    delete temp;
    temp = this->head;
  }
}

void LinkedList::printList() {
  Node *temp = head;
  while (temp != nullptr) {
    cout << temp->value << endl;
    temp = temp->next;
  }
}

void LinkedList::getHead() { cout << "Head: " << this->head->value << endl; }

void LinkedList::getTail() { cout << "Tail: " << this->tail->value << endl; }

void LinkedList::getLength() { cout << "Length: " << this->length << endl; }

void LinkedList::append(int value) {
  Node *newNode = new Node(value);
  if (isEmpty()) {
    this->head = this->tail = newNode;
  }
  // another option
  // if (this->length == 0) {
  //   this->head = newNode;
  //   this->tail = newNode;
  // }
  else {
    tail->next = newNode;
    tail = newNode;
  }
  this->length++;
}

void LinkedList::deleteLast() {
  Node *temp = head;
  Node *pre = head;
  if (isEmpty())
    return;
  else {
    while (temp->next != nullptr) {
      pre = temp;
      temp = temp->next;
    }
    tail = pre;
    tail->next = nullptr;
    length--;
    if (length == 0) {
      this->head = nullptr;
      this->tail = nullptr;
    }
    delete temp;
  }
}

bool LinkedList::isEmpty() { return this->head == nullptr; }
