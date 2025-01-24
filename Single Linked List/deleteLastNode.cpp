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
//Delete the last Node;

Node* deleteLastNode(Node* head)
{
  if(head->next == NULL)
  {
    delete(head);
    return NULL;
  }
  else
  {
    Node* tmp = head;
    while(tmp->next->next != NULL)
    {
      tmp = tmp->next;
    }
    delete(tmp->next);
    tmp->next = NULL;
    return head;
  }
}
int main()
{
  //================= Taking Input in the linked list first ==================

  int sizeOfList;
  cin>>sizeOfList;
  Node* head = TakeInput(sizeOfList);

  //cout<<head->data<<" "<<head->next<<endl;
  //================= End Of Taking Input ===========================
  //Delete the last Node

  head = deleteLastNode(head);
  cout<<"Last Node Deleted"<<endl;
  cout<<"If you want to see the full linked list enter -> 1 else enter -> 2: ";
  int option;
  cin>>option;
  if(option==1)
  {
    showOutput(head);
  }
}
