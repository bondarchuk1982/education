#include "reversslinkedlist.h"

ReversSLinkedList::ReversSLinkedList(){ }
// Пример как реализуется модуль для переворачивания односвязного списка.
node *ReversSLinkedList::reverse(node *phead)
{
    node *pReversHead = nullptr; // куда указывает голова
    while (phead != nullptr) {
        node *p = phead->pnext; // сохраняем указатель на следующий нод
        phead->pnext = pReversHead; // в текущем ноде присваиваем значение указателю на следующий нод
        pReversHead = phead; // для сохранения в следующем ноде ссылку на данный нод
        phead = p; // в текущую ссылку на нод записываем адресс следующего нода
    }

    return pReversHead;
}
