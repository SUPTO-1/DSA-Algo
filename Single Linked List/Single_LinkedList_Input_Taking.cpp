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
}
