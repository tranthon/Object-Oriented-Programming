#include "clist.h"


int main()
{
    list object;
    list object2;
    object.build();		//builds a circular LL
    object.display();	//displays the list

    //PLEASE PUT YOUR CODE HERE to call the function assigned
    object.remove_every_other();
    object.copy_special(object2);
    object.display(); //resulting list after your function call!
    cout<<"number of node deleted is:"<<object.remove_every_other()<<endl;
    
    return 0;
}
