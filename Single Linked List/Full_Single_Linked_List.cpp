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
//============== Function of Searching A Value ===============
bool searchTheValue(int target,Node* head)
{
  cout<<"Searching................"<<endl;
  Node* tmp = head;
  while(tmp != NULL)
  {
    if(tmp->data == target)
    {
      return true;
    }
    else
    {
      tmp = tmp->next;
    }
  }
  return false;
}
//============== End Function of Searching A Value ===============

// ================ Insertion of a Node at the front ==============
Node* AddingFrontNode(int frontNode, Node* head)
{
  Node* newNode = new Node(frontNode);
  newNode->next = head;
  return newNode;
}
// End Of Insert a Node at the Front of the Linked List

// Insert a Number Before a Given Node

Node* beforeInsertNode(int beforeSpecificNode,int beforeTargetNode,Node* head)
{
  if(head->data == beforeTargetNode)
  {
    Node* newNode = new Node(beforeSpecificNode);
    newNode->next = head;
    return newNode;
  }
  else
  {
    Node* currentNode = head;
    Node* prevNode = NULL;
    while(currentNode!=NULL && currentNode->data != beforeTargetNode)
    {
      prevNode = currentNode;
      currentNode = currentNode->next;
    }
    Node* newNode = new Node(beforeSpecificNode);
    prevNode->next = newNode;
    newNode->next = currentNode;
    return head;
  }
}
int main()
{
  /*
 ================ Manually Linked List =============
  Here You have implement manual Linked List
  int n;
  cin>>n;
  Node* newNode = new Node(n);
  cout<<newNode->data<<" "<<newNode->next<<endl;
  cin>>n;
  Node* newNode1 = new Node(n);
  newNode->next = newNode1;
  cout<<newNode->data<<" "<<newNode->next<<endl;
  cout<<newNode1->data<<" "<<newNode1->next<<endl;
  ================= END ========================
  */

  //================= Taking Input in the linked list first ==================

  int sizeOfList;
  cin>>sizeOfList;
  Node* head = TakeInput(sizeOfList);

  //cout<<head->data<<" "<<head->next<<endl;
  //================= End Of Taking Input ===========================


  //========= Show Output ==========

  showOutput(head);

  //End Of Showing Output


  //================= Search a value =====================
  int target;
  cout<<"Enter a Number to see it is exist in the linked list or not: ";
  cin>>target;
  bool flag = searchTheValue(target,head);
  cout<<endl<<endl;
  if(flag)cout<<"Found the target value"<<endl;
  else cout<<"Didn't found the target value"<<endl;
  cout<<endl<<endl;
  //================= Search a value =====================

  // Insertion a Node starts from here................

  // 1 -> Insert a Node at the Front of the Linked List

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

  // End Of Insert a Node at the Front of the Linked List


// Insert a Number Before a Given Node

int beforeSpecificNode;
cout<<"Enter The value: ";
cin>>beforeSpecificNode;
int beforeTargetNode;
cout<<"Enter The value of Node where you want to add your new value before it"<<endl;
cin>>beforeTargetNode;
 beforeInsertNode(beforeSpecificNode,beforeTargetNode,head);
 cout<<"Added New Value"<<endl;
 cout<<"If you want to see the full linked list enter -> 1 else enter -> 2: ";
 cin>>option;
 if(option==1)
 {
   showOutput(head);
 }

}
