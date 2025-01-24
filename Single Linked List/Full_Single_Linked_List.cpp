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
// Insert a Number Before a Given Node

// Insert a Number after a Given Node

Node* endInsertNode(int endSpecificNode,int endTargetNode,Node* head)
{
    Node* tmp = head;
    while(tmp->next != NULL)
    {
      if(tmp->data == endTargetNode)
      {
        break;
      }
      else
      {
        tmp = tmp->next;
      }
    }

    Node* newNode = new Node(endSpecificNode);
    newNode->next = tmp->next;
    tmp->next = newNode;
    return head;
}

// End Insert a Number after a Given Node

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

//Insert a number in a specific specificPosition

//Insert a number in the last

Node* addingInLastNode(int lastData , Node* head)
{
  Node *tmp = head;
  while(tmp->next != NULL)
  {
    tmp = tmp->next;
  }
  Node* newNode = new Node(lastData);
  tmp->next = newNode;
  return head;
}
// End of insert a number in the last
//Delete the first Node;
Node* deleteFirstNode(Node* head)
{
  if(head->next==NULL)
  {
    return NULL;
  }
  Node* tmp = head;
  head = head->next;
  delete(tmp);
  return head;
}
//End of Delete the first Node;

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

// End of delete last Node

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
cout<<"Enter The Before value: ";
cin>>beforeSpecificNode;
int beforeTargetNode;
cout<<"Enter The value of Node where you want to add your new value before it"<<endl;
cin>>beforeTargetNode;
 head = beforeInsertNode(beforeSpecificNode,beforeTargetNode,head);
 cout<<"Added New Value"<<endl;
 cout<<"If you want to see the full linked list enter -> 1 else enter -> 2: ";
 cin>>option;
 if(option==1)
 {
   showOutput(head);
 }

 // End Insert a number before a given Node

 //  Insert a number After a given Node

 int endSpecificNode;
 cout<<"Enter The After value: ";
 cin>>endSpecificNode;
 int endTargetNode;
 cout<<"Enter The value of Node where you want to add your new value After it"<<endl;
 cin>>endTargetNode;
 head = endInsertNode(endSpecificNode,endTargetNode,head); // if we don't return head it will not create any issue as well
 cout<<"Added New Value"<<endl;
 cout<<"If you want to see the full linked list enter -> 1 else enter -> 2: ";
 cin>>option;
 if(option==1)
 {
   showOutput(head);
 }

 // End Insert a number After a given Node

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
 cin>>option;
 if(option==1)
 {
   showOutput(head);
 }
 // End Insert a number in a specific Position

  //  Insert a number in the last

  int lastData;
  cout<<"Enter the Value: ";
  cin>>lastData;

  head = addingInLastNode(lastData,head);
  cout<<"Added New Value"<<endl;
  cout<<"If you want to see the full linked list enter -> 1 else enter -> 2: ";
  cin>>option;
  if(option==1)
  {
    showOutput(head);
  }

  // End Insert a number in the last
  //Delete the first Node;
  head = deleteFirstNode(head);
  cout<<"First Node Deleted"<<endl;
  cout<<"If you want to see the full linked list enter -> 1 else enter -> 2: ";
  cin>>option;
  if(option==1)
  {
    showOutput(head);
  }
  //End of Delete the first Node;

  //Delete the last Node

  head = deleteLastNode(head);
  cout<<"Last Node Deleted"<<endl;
  cout<<"If you want to see the full linked list enter -> 1 else enter -> 2: ";
  cin>>option;
  if(option==1)
  {
    showOutput(head);
  }

  //End of Delete the last Node

  //Delete specific position Node
  int deletePosition;
  cout<<"Enter The delete position Node: ";
  cin>>deletePosition;
  head = deletePositionNode(deletePosition,head);
  cout<<"Specific Position Node Deleted"<<endl;
  cout<<"If you want to see the full linked list enter -> 1 else enter -> 2: ";
  cin>>option;
  if(option==1)
  {
    showOutput(head);
  }
}
