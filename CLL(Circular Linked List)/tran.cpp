#include "clist.h"
int list::remove_every_other()
{
    return remove_every_other(rear->next);
}

int list::remove_every_other(node *& rear)
{
    int count=0;
    node * forward;
    if(list::rear == rear)
        return 0;

    forward = rear->next;
    delete rear;
    count++;
    rear = NULL;
    rear = forward;
    if(list::rear != rear)
        count +=   remove_every_other(rear->next);
    return 1 + count;

}

int list::copy_special(list & new_list)
{
    if(!rear)
        new_list.rear = NULL;
    node * hold = rear->next;
    rear->next = NULL;
    node * new_head = hold;

    copy_special(new_list.rear, new_rear);
    rear->next = hold;
}

int list::copy_special(node * & new_copy, node * original)
{
    if(original == NULL)
    {
        new_copy = 0;
        return 0;
    }

    new_copy = new node;
    new_copy->data = original->data;
    copy_special(new_copy->next, original->next);
    
}
