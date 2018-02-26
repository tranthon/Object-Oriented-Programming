#include "table.h"


int table::count_node()
{
    return count_node(root) - 1;
}

int table::count_node(node * root)
{
    if(!root)
        return 0;
    int left = 0;
    int right = 0;
    left = count_node(root->left);
    right = count_node(root->right);
    return 1 + left + right;
}

int table::count_special()
{
    return count_special(root);
}

int table::count_special(node * root)
{
    if(!root)
        return 0;
    if(!root->left && !root->right)
        return 1;
    int num = count_special(root->left) + count_special(root->right);
    return num;
}

int table::count_match(int num)
{
    return count_match(root, num);
}

int table::count_match(node * root, int num)
{
    if(!root)
        return 0;
    int left = 0;
    int right = 0;
    left = count_match(root->left, num);
    right = count_match(root->right, num);
    if(root->data == num)
        return 1 + left + right;
    else
        return left + right;
}

int table::average_nochild()
{
    int count = 0;
    int sum = average_nochild(root, count);
    int average = sum/count;
    return average;
}

int table::average_nochild(node * root, int & count)
{
    if(!root)
        return 0;
    int left = 0;
    int right = 0;
    left = average_nochild(root->left, count);
    right = average_nochild(root->right, count);
    if(!root->left && !root->right)
        {
            ++count;
            return left + right + root->data;
        }
            return left + right;

}
/*
int table::remove_largest()
{
    return remove_largest(root);
}

int table::remove_largest(node *& root)
{
    if(!root)
        return 0;
    if(!root->left && !root->right)
        return root->data;
    if(root->left && !root->right)
    {
        node * temp = root->left;
        delete root;
        root = temp;
        temp = NULL;
    }   
    return remove_largest(root->right);

}
*/
int table::getmax(node * root)
{
    if(!root->right)
        return root->data;
    return getmax(root->right);
}

int table::secondmax(node * root)
{
    if(!root)
        return 0;
    if(root->right == NULL && root->left != NULL)
        return getmax(root->left);
    if(root->right != NULL)
    {
        if(root->right->right == NULL && root->right->left == NULL)
        {
            return root->data;
        }
    }
        return secondmax(root->right);
}

int table::get_secondmax()
{
    return secondmax(root);

}/*
int table::areIdentical()
{
    return areIdentical(a,b);
}

int table::areIdentical(node * a, node * b)
{
    if(a==NULL && b == NULL)
        return 1;
    if(a != NULL &&  b != NULL)
    {
        return a->data == b->data && areIdentical(a->left, b->left) && areIdentical(a->right, b->right);
    }
    return 0;
}
*/
int table::display_greatest()
{
    if(!root)
        return 0;
    return display_greatest(root);
}

int table::display_greatest(node * root)
{
    if(!root)
        return 0;
    int left = display_greatest(root->left);
    if(root->right || root->left)
    cout<<root->data;
    int right = display_greatest(root->right);
    return 1;
}

int table::average()
{
    if(!root)
        return 0;
    int count = 0;
    int sum_leaf = average(root, count);
    return sum_leaf/count;
}

int table::average(node * root, int &count)
{
    if(!root)
        return 0;
    int left = average(root->left, count);
    int right = average(root->right, count);
    if(root)
	{
        ++count;
        return left + right + root->data;
	}

    return left+right;
}


void table::double_tree()
{
	 double_tree(root);
}

void table::double_tree(node * root)
{
	node * oldleft;
	if(!root)
	  return;
	
	double_tree(root->left);
	double_tree(root->right);
	oldleft = root->left;
	root->left = new_node(root,root->data);
	root->left->left = oldleft;
}

node * table::new_node(node * root, int data)
{
	 root = new node;
	 root->data = data;
	 root->left = NULL;
	 root->right = NULL;
         return(root);
}

int table::remove_duplicate()
{
	return remove_duplicate(root,-1);
	
}

bool table::remove_duplicate(node * root, int data)
{
	if(!root)
	 return false;
	if(remove_duplicate(root->left,root->data))
	 root->left = root->left->left;
	if(root->data == data)
	 return true;
	if(remove_duplicate(root->right,data))
	 root->right = root->right->left;
	
	return false;
}
