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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int,vector<int>, greater<int>>pq;
        for(auto k: lists){
            ListNode* head = k;
            ListNode* temp = head;
            while(temp != nullptr){
                pq.push(temp->val);
                temp = temp->next;
            }
        }
        ListNode* dummyNode = new ListNode(0);
        ListNode* tail = dummyNode;
        while(!pq.empty()){
            ListNode* newNode = new ListNode(pq.top());
            tail->next = newNode;
            tail = tail->next;
            pq.pop();
        }
        return dummyNode->next;
    }
};