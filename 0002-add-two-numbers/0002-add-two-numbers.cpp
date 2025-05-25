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
        ListNode* dummy = new ListNode(0); // Nodo ficticio
        ListNode* tail = dummy; // Siempre apuntara al ultimo nodo real
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {

            // Leemos el digito de cada lista (0, si la lista ya termino)
            int x = (l1 != nullptr) ? l1->val : 0;
            int y = (l2 != nullptr) ? l2->val : 0;

            int sum = x + y + carry; // Sumamos los digitos junto con carry

            // Actualizamos carry y el digito que va a la nueva lista
            carry = sum / 10;  // 0 o 1 (porque 0-9 + 0-9 + 1 <= 19)
            int newDigit = sum % 10; // El digito que realmente guardamos

            // Creamos un nodo para "newDigit" y lo enganchamos al final
            tail -> next = new ListNode(newDigit); // Lo añadimos
            tail = tail -> next; // Movemos el puntero a tail

            // Avanzamos la listas de entrada, si todavia quedan nodos

            l1 = (l1 != nullptr) ? l1->next : nullptr;
            l2 = (l2 != nullptr) ? l2->next : nullptr;
        }

        return dummy->next;
    }
};
