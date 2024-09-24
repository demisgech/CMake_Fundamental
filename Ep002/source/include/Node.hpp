#ifndef __NODE__H__
#define __NODE__H__

class Node {
public:
  int value;
  Node *next;
  explicit Node(int value);
};
#endif //!__NODE__H__