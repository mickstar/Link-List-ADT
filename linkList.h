/////////////////////////////////////////////////////////////////////
//	This is an ADT i designed to work with link lists.	   //
//	You are free to use it without permission.		   //
//	Created By Michael Johnston    24th Dec. 2010      	   //
//	Contact me <michael.johnston29@gmail.com>                  //
/////////////////////////////////////////////////////////////////////


typedef struct node *Node;

#define TRUE 1
#define FALSE 0

//Will add a link to the end of the list.
void addLink (int value, Node list);

void insertLink (int location, int value, Node list);

//Returns the value of the link
int readLink (int index, Node list);

//Returns a new List
// eg: Node myList = newList(43); 
//Where 43 is the value of the first link
Node newList (int value);

//Removes the link with the location index.
void removeLink (int index, Node list);


// Will return TRUE if a value is in a list, and
// Will return False if it is not in the list.
int inList (int value, Node list);

//This function should only be called after an inList() call
//Will throw an assertion error if value not in list.
int whereInList (int value, Node list);



