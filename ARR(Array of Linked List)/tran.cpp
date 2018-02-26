#include "arr.h"
/*
int table::append_longest_shortest()
{
    
}


int table::append_longest_shortest(node * head)
{

}
*/

int table::traverse_list(node * head)
{
    if(!head)
        return 0;
    cout<<head->data<<endl;
    return traverse_list(head->next);
}

int table::traverse_array()
{
    return traverse_array(size,0);
}

int table::traverse_array(int size, int index)
{
    if(index == size)
        return 0;
    traverse_list(head[index]);
    return  traverse_array(size, index+1);
}


