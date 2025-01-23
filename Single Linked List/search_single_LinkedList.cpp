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
//========== Function of Taking Input =================
Node* TakeInput(int sizeOfList)
{
  Node* head = NULL;
  Node* tail = NULL;
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

  cout<<head->data<<" "<<head->next<<endl;
  //================= End Of Taking Input ===========================

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
}
