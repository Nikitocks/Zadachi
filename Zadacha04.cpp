#include <iostream>

// Определение структуры ListNode (узел списка)
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Функция для переворота списка
ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* current = head;
    
    while (current != nullptr) {
        ListNode* nextNode = current->next; // Сохраняем следующий узел
        current->next = prev;               // Переворачиваем текущую связь
        prev = current;                     // Перемещаем prev на текущий узел
        current = nextNode;                 // Перемещаем current на следующий узел
    }
    
    return prev; // Новый "голова" списка
}

// Функция для вывода списка
void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != nullptr) {
        std::cout << temp->val << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

// Пример использования:
int main() {
    // Создание списка 1 -> 2 -> 3
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);

    std::cout << "Original List: ";
    printList(head);

    // Переворот списка
    ListNode* reversedHead = reverseList(head);

    std::cout << "Reversed List: ";
    printList(reversedHead);

    return 0;
}
