#include "table.h"

int main()
{
    table object;
    object.build(); 	//builds a BST
    object.display();	//displays a BST

  //  table object2;
   // object2.build();
   // object2.display();

    /*  PLACE YOUR FUNCTION CALL HERE */
    //cout<<"the average is:"<<object.average_nochild()<<endl;
    //DI
   // cout<<"second max is:"<<object.get_secondmax()<<endl;
   /* if(areIdentical(object,object2))
        cout<<"Both trees are identical"<<endl;
    else
        cout<<"Both trees are not identical"<<endl;
        */

    //object.display_greatest();
 	//   cout<<"the average is:"<<object.average()<<endl;
   // object.remove_duplicate();
    object.remove_duplicate();
    object.display(); 
    cout<<"average before running function is:"<<object.average()<<endl;
    object.double_tree();
    object.display();	//displays again after!
    
    cout<<"average after function ran is:"<<object.average()<<endl;
    return 0;
}
