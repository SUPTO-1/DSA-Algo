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
//Start of deleting specific Position newNode

Node* deletePositionNode(int specificPosition, Node* head)
{
  if(specificPosition == 1)
  {
    Node* tmp = head;
    head = head->next;
    delete(tmp);
    return head;
  }
  else
  {
    Node* tmp = head;
    int i=1;
    while(i<specificPosition-1)
    {
      tmp = tmp->next;
      i++;
    }
    Node* deleteIt = tmp->next;
    tmp->next = tmp->next->next;
    delete(deleteIt);
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
  //Delete specific position Node
  int deletePosition;
  cout<<"Enter The delete position Node: ";
  cin>>deletePosition;
  head = deletePositionNode(deletePosition,head);
  cout<<"Specific Position Node Deleted"<<endl;
  cout<<"If you want to see the full linked list enter -> 1 else enter -> 2: ";
  int option;
  cin>>option;
  if(option==1)
  {
    showOutput(head);
  }
}
