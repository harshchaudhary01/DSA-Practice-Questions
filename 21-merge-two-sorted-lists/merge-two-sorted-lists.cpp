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
        ListNode* l1 = list1;
        ListNode* l2 = list2;

        ListNode* newList=nullptr;
        ListNode* temp=nullptr;

        while(l1 != nullptr && l2 != nullptr){
            if(l1->val < l2->val){
                if(newList == nullptr){
                    newList = l1;
                    temp = newList;
                }
                else{
                    newList->next = l1;
                    newList = newList->next;
                }
                l1 = l1->next;
            }else{
                if(newList == nullptr){
                    newList = l2;
                    temp = newList;
                }
                else{
                    newList->next = l2;
                    newList = newList->next;
                }
                l2 = l2->next;
            }
        }

        if(newList == nullptr) return (l1 != nullptr) ? l1 : l2;

        while(l1 != nullptr){
            newList->next = l1;
            newList = newList->next;
            l1 = l1->next;
        }
        while(l2 != nullptr){
            newList->next = l2;
            newList = newList->next;
            l2 = l2->next;
        }
        return temp;
    }
};