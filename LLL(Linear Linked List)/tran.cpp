#include "list.h"

int list::num_times(int match)
{
    return num_times(head, match);
}

int list::num_times(node * head, int match)
{
    int count = 0;
    if(!head)
        return 0;
    else if(head->data == match)
        count = num_times(head->next, match);
    return 1+count;

}

int list::display_sum_except_firstlast()
{/*
    if(!head)
        return 0;
    if(!head->next)
        return 0;
    if(!head->next->next)
        return 0;
    else
    */
        return display_sum_except_firstlast(head->next);
}

int list::display_sum_except_firstlast(node * head)
{
    if(!head)
        return 0;
    if(!head->next)
        return 0;
    return head->data + display_sum_except_firstlast(head->next);
}
