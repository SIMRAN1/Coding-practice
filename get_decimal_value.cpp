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
    int getDecimalValue(ListNode* head) {
        ListNode* head1 = head;
        vector<int> no;
        while(head1!=NULL) {
            no.push_back(head1->val);
            head1=head1->next;
        }
        int size = no.size()-1;
        int sum=0;
        for(auto i:no) {
            sum+=i*pow(2,size--);
        }
        return sum;
    }
};
