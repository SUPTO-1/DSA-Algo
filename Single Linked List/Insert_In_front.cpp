#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pb push_back
struct Node
{
  int data;
  Node* next;
  Node(int val)
  {
    data = val;
    next = NULL;
  }
};
Node* head = NULL;
Node* tail = NULL;
//========== Function of Taking Input =================
Node* TakeInput(int sizeOfList)
{
  for(int i=1;i<=sizeOfList;i++)
  {
    int n;
    cin>>n;
    Node* newNode = new Node(n);
    if(head == NULL)
    {
      head = newNode;
      tail = newNode;
    }
    else
    {
      tail->next = newNode;
      tail = newNode;
    }
  }
  return head;
}
//========== End Function of Taking Input =================

//***********************************************************

//========== Function of Showing Output =================
void showOutput(Node* head)
{
  Node* tmp = head;
  int cnt = 1;
  while(tmp != NULL)
  {
    cout<<"========== "<<cnt++<<" ============="<<endl;
    cout<<"Value of Node is: ";
    cout<<tmp->data<<endl;
    cout<<"Adress stored in Node is:";
    cout<<tmp->next<<endl;
    tmp = tmp->next;
  }
}
//========== End Function of Showing Output =================
// ================ Insertion of a Node at the front ==============
Node* AddingFrontNode(int frontNode, Node* head)
{
  Node* newNode = new Node(frontNode);
  newNode->next = head;
  return newNode;
}
// End Of Insert a Node at the Front of the Linked List
int main()
{

  int sizeOfList;
  cin>>sizeOfList;
  Node* head = TakeInput(sizeOfList);

  //cout<<head->data<<" "<<head->next<<endl;
  //================= End Of Taking Input ===========================


  // Insert a Node at the Front of the Linked List

  int frontNode;
  cout<<"Enter a Number which you want to put in the front: ";
  cin>>frontNode;
  head = AddingFrontNode(frontNode,head);
  cout<<"Added New Value"<<endl;
  cout<<"If you want to see the full linked list enter -> 1 else enter -> 2: ";
  int option;
  cin>>option;
  if(option==1)
  {
    showOutput(head);
  }


}
