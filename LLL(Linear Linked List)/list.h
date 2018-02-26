//list.h
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;


struct node
{
    int data;   //some questions are a char * data;
    node * next;
};

class list
{
   public:
   //These functions are already written for you
     list();			//supplied
     ~list();			//supplied
     void build();     		//supplied
     void display();  		//supplied
    
    /* *****************YOUR TURN! ******************************** */
    //Write your function prototype here:
    int num_times(int match);   
    int display_sum_except_firstlast();

   private:		//notice there is both a head and a tail!
      node * head;
      node * tail;
      int num_times(node * head, int match);
      int display_sum_except_firstlast(node * head);
};
