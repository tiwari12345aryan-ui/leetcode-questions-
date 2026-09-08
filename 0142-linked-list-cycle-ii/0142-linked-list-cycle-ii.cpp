/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* start=head;
        ListNode* final=head;
        while(final!=NULL && final->next!=NULL)
        {
            start=start->next;
            final=final->next->next;
            if(start==final)
            {
                start=head;
                while(start!=final)
                {
                    start=start->next;
                    final=final->next;
                }
                return start;
            }
        }
        return NULL;
    }
};