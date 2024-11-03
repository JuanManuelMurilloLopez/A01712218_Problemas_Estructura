/*
 * Autor: Juan Manuel Murillo López A01712218
*/


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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //Empezamos desde el head
        ListNode* actual_node = head;

        ///Encontrar el tamaño de la lista ligada///
        unsigned int size = 0;
        while(actual_node != nullptr){
            size++;
            actual_node = actual_node->next;
        }

        ///Encontrar índice con el tamaño - n a partir del inicio///
        int index = size - n - 1;

        ///Si el nodo a eliminar es el head///
        if(index == -1){
            head = head->next;
            return head;
        }

        ///Eliminar el valor en el índice///

        //Reseteamos nuestro nodo actual desde el inicio
        actual_node = head;

        //Recorremos la lista hasta el nodo deseado
        while(index > 0){
            actual_node = actual_node->next;
            index--;
        }

        //Actualizamos los next
        if(actual_node->next == nullptr){
            return nullptr;
        }
        actual_node->next = actual_node->next->next;

        //Regresamos el nuevo head
        return head;
    }
};
