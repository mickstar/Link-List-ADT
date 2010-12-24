//Created By Michael Johnston <michael.johnston29@gmail.com>
//24.12.2010

//Just some unit tests i used to test my ADT.

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "linkList.h"

void testAddLink (void);
void testinsertLink (void);
void testRemoveLink (void);
void testInList (void);
void testWhereInList (void);

int main (int argc, char *argv[]){
	testAddLink ();
	testRemoveLink ();
	testInList();
	testinsertLink ();
	testWhereInList ();

	printf ("All tests passed!\n");
	return EXIT_SUCCESS;
}

void testAddLink (void){
	printf ("Testing addLink\n");

	Node list = newList(5);
	assert (list != NULL);
	addLink (10, list);
	assert(5 == readLink (0, list));
	assert(10 == readLink (1, list));
	printf ("Test passed!\n");
}
void testinsertLink (void){
	printf ("Testing insertLink()\n");

	Node list = newList(4);
	addLink(4, list);
	addLink(651, list);
	addLink(34, list);
	addLink(2, list);
	
	insertLink (2, 9 , list);
	assert (inList (9, list));
	assert (readLink (2, list) == 9);
	assert (inList (34, list));

	printf ("Test passed!\n");
}
void testRemoveLink (void){
	printf ("Testing removeLink()\n");
	Node list = newList(543);
	addLink (23 , list);
	addLink (9  , list);
	//Going to try remove the 23

	removeLink (1, list);
	assert (inList(23, list) == FALSE);
	assert (readLink (1, list) != 23);

	printf ("Test passed!\n");
}

void testInList (void){
	printf ("Testing inList()\n");
	Node list = newList(10);
	addLink (45, list);
	addLink (455, list);
	assert (inList (45, list));
	assert (inList (455, list));
	assert (!inList (4555, list));
	assert (!inList (-3, list));
	
	printf ("Test Passed!\n");
}

void testWhereInList (void){
	printf ("Testing inList()\n");
	Node list = newList (10);
	assert (whereInList(10, list) == 0);
	addLink (4354, list);
	assert (whereInList (4354, list) == 1);
	insertLink (1, 43, list);
	assert (whereInList (43, list)   == 1);
	printf ("Test Passed!\n");

}


