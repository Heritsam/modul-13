//
//  main.cpp
//  Modul13
//
//  Created by Ariq Heritsa on 14/06/22.
//

#include <iostream>
#include "btree.h"

using namespace std;

int main() {
  address P, root;
  infotype searchNode;
  
  root = nil;
  
  //  int n[9] = {8, 3, 1, 6, 4, 7, 10, 14, 13};
  //
  //  for (int i = 0; i < 9; i++) {
  //    P = allocation(n[i]);
  //    insertBST(root, P);
  //  }
  
  buildTree(root);
  
  cout << "inorder: ";
  inOrder(root);
  cout << endl;
  
  cout << "preorder: ";
  preOrder(root);
  cout << endl;
  
  cout << "postorder: ";
  postOrder(root);
  cout << endl;
  
  cout << "Internal node: " << countInternalNode(root) << endl;
  cout << "Leaves: ";
  printLeaves(root);
  cout << endl;
  cout << "Count leaves: " << countLeaves(root) << endl;
  cout << "Largest Number: " << maxNumber(root) << endl;
  
  cout << "Enter the node to search: ";
  cin >> searchNode;
  
  P = findNode(root, searchNode);
  
  if (P != nil) {
    cout << "Node found!" << endl;
  } else {
    cout << "Node not found!" << endl;
  }
  
  
  return 0;
}
