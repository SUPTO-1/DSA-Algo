/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = nullptr;
        ListNode* tail = nullptr;
        while(list1!=nullptr && list2!=nullptr)
        {
            if(list1->val<=list2->val)
            {
                ListNode* newNode = new ListNode(list1->val);
                list1 = list1->next;
                if(head == nullptr)
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
            else
            {
                ListNode* newNode = new ListNode(list2->val);
                list2 = list2->next;
                if(head == nullptr)
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
        }
        while(list1 != nullptr)
        {
            ListNode* newNode = new ListNode(list1->val);
                list1 = list1->next;
                if(head == nullptr)
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
        while(list2 != nullptr)
        {
            ListNode* newNode = new ListNode(list2->val);
                list2 = list2->next;
                if(head == nullptr)
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
};
