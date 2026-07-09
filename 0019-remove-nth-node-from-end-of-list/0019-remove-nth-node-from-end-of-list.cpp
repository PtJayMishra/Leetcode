class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Step 1: Count total nodes
        int length = 0;
        ListNode* temp = head;
        while (temp) {
            length++;
            temp = temp->next;
        }

        // Step 2: Find position from start
        int posFromStart = length - n;

        // If we need to remove the head
        if (posFromStart == 0) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        // Step 3: Traverse to the node before the one to delete
        temp = head;
        for (int i = 1; i < posFromStart; i++) {
            temp = temp->next;
        }

        // Step 4: Delete the target node
        ListNode* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;

        return head;
    }
};