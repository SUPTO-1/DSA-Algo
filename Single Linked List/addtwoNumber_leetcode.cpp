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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* head =nullptr;
        ListNode* tail = nullptr;
        while(l1!=nullptr || l2!=nullptr || carry!=0)
        {
            int sum = carry;
            if(l1!=nullptr)
            {
                sum+=l1->val;
                l1 = l1->next;
            }
            if(l2!=nullptr)
            {
                sum+=l2->val;
                l2 = l2->next;
            }
            carry = 0;
            if(sum>9)
            {
                sum = sum - 10;
                carry = 1;
            }
            ListNode* newNode = new ListNode(sum);
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
