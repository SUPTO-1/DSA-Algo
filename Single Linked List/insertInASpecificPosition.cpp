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
// Insert a Number in a specific Position
Node* specificPositionNode(int specificNode,int specificPosition,Node* head)
{
  if(specificPosition == 1)
  {
    Node* newNode = new Node(specificNode);
    newNode->next = head;
    return newNode;
  }
  else
  {
    int i=1;
    Node* tmp = head;
    while(i<specificPosition-1)
    {
      tmp = tmp->next;
      i++;
    }
    Node* newNode = new Node(specificNode);
    newNode->next = tmp->next;
    tmp->next = newNode;
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

 //  Insert a number in a specific Position

 int specificNode;
 cout<<"Enter The value: ";
 cin>>specificNode;
 int specificPosition;
 cout<<"Enter The value of Node where you want to add your new value After it"<<endl;
 cin>>specificPosition;
 head = specificPositionNode(specificNode,specificPosition,head); // if we don't return head it will not create any issue as well
 cout<<"Added New Value"<<endl;
 cout<<"If you want to see the full linked list enter -> 1 else enter -> 2: ";
 int option;
 cin>>option;
 if(option==1)
 {
   showOutput(head);
 }


}
