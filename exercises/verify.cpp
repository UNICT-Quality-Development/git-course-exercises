/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>
using namespace std;


class node{
  public :
  int data; 
  node *left;
  node *right;

  node(int a) : data(a), left(nullptr), right(nullptr){}
};

class Tree{
  private : 
  node *root;

  void Inorder(node*& nodo, int data){
      if(nodo == nullptr){
        nodo = new node(data);
        return;
      }

      if(data < nodo->data) Inorder(nodo->left, data);
      else Inorder(nodo->right, data);
  }

  bool FV(node*& node ,int n){
    if(node == nullptr) return false;
    if(n == node->data) return true;

    if(n < node->data) return FV(node->left, n);
    else return FV(node->right, n);
  }

  public:

  Tree() : root(nullptr){}
  
  void AddValue(int n){Inorder(root, n);}

  bool FindValue(int n){return FV(root, n);}

};

int main()
{
  // placeholder



  int N[10] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};
  int j;

  Tree Albero;

  for(int i = 0; i < 9; i++){
    Albero.AddValue(N[i]);
  }

  cout << "Inserisci elemento da verificare" << endl;

  cin >> j;


  if(Albero.FindValue(j) == true) cout << "Il numero selezionato e' presente" << endl;
  else cout << "Il numero selezionato non e' presente" << endl;

  return 0;
}
