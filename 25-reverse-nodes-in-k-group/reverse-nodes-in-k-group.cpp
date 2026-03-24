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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        vector<int>arr;
        while(temp != nullptr){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        for(int i = 0; i < arr.size(); i = i+k){
            int first = i, last = i+k;
            if(last > arr.size() || first >= arr.size()) break;
            reverse(arr.begin()+first, arr.begin()+last);
        }
        temp = head;
        int idx = 0;
        while(temp != nullptr){
            temp->val = arr[idx];
            idx++;
            temp = temp->next;
        }
        return head;
    }
};