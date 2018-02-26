//list.h
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

struct node
{
    int data;   //some questions use char * data;
    node * left;
    node * right;
};

class table
{
    public:
    	//These functions are supplied already
    	table();			//supplied
    	~table();			//supplied
        void build(); 		//supplied
        void display(); 	//supplied


/* ************** PLACE YOUR PUBLIC PROTOTYPE HERE ***************** */
    int count_node(); 
    int count_special();
    int count_match(int num);
    int average_nochild();
    int get_secondmax();
    int areIdentical();
    int display_greatest();
    int average();
    int remove_duplicate();
    void double_tree();
 	private:
 		node * root;

/* ************** PLACE YOUR PRIVATE PROTOTYPE HERE ***************** */
    int count_node(node * root);
    int count_special(node * root);
    int count_match(node * root, int num);
    int average_nochild(node * root, int & count);
    int getmax(node * root);
    int secondmax(node * root);
    int areIdentical(node * a, node * b);
    int display_greatest(node * root);
    int average(node * root, int & count);
    bool remove_duplicate(node * root, int data);
    void double_tree(node * root);
    node * new_node(node * root, int data);
};
  

