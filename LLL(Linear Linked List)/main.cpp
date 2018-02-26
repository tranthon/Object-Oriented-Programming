#include "list.h"

int main()
{
    list object;
    object.build();    //builds a LLL
    object.display();  //displays the LLL

    //PLEASE PUT YOUR CODE HERE to call the function assigned
    
    /*int match = 2;
    cout<<"number of item found:"<<object.num_times(match)<<endl;
    */

    cout<<"sum is:"<<object.display_sum_except_firstlast();
    

    object.display();  //displays the LLL again!
   
    
    return 0;
}
