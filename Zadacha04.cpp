#include <iostream>

int main() {
    
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next = new ListNode(4);
    head->next->next = new ListNode(5);


    std::cout << "Original List: ";
    printList(head);

    
    ListNode* reversedHead = reverseList(head);

    std::cout << "Reversed List: ";
    printList(reversedHead);

    return 0;
}
