//week14-1.cpp 學習計畫 Linke List 第3題(寫到一半簡單的版本)
//LeetCode 2. Add Two Nembers 超級大的數，有100位數
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans= new ListNode();
        ListNode* now = ans;
        while(l1 != nullptr){
            now -> next = new ListNode(l1 -> val );
            l1 = l1->next;
            now = now->next;
        }
        return ans -> next;
    }
};

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