//Created By Michael Johnston <michael.johnston29@gmail.com>
//24.12.2010

//P.S. All comments for the interface are in linkList.h

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "linkList.h"

struct node {
	int value;
	Node next;
};

typedef struct node node;

void addLink (int value, Node list){
	while (list->next != NULL){
		list = list->next;
	}
	list->next = newList(value);
}

void insertLink (int location, int value, Node list){
	int i = 0;
	while (i < location-1){
		assert (list->next != NULL);
		list = list->next;
		i ++;		
	}
	Node tmp = list->next;
	list->next = newList(value);
	list->next->next = tmp;
}

Node newList (int value){
	Node list = malloc(sizeof(node));
	assert (list != NULL);
	list->value = value;
	list->next = NULL;
	return list;
}

int readLink (int index, Node list){
	assert (list != NULL);
	int i = 0;
	
	while (i < index){
		assert (list->next != NULL);
		list = list->next;
		i++;
	}
	return list->value;
}

void removeLink (int index, Node list){
	assert (list != NULL);
	int i = 0;
	while (i < index - 1){
		assert (list->next != NULL);
		list = list->next;
	}
	assert (list->next->next != NULL);
	list->next = list->next->next;
}

int whereInList(int value, Node list){
	int i = 0;
	while (list->value != value){
		if (list->next == NULL){
			//The int is not in the list
			return -1;
		}		
		i ++;
		list = list->next;
	}
	return i;
}


int inList (int value, Node list){
	assert (list != NULL);
	while (list->value != value){
		if (list->next == NULL){
			return FALSE;
		}
		list = list->next;

	}
	return TRUE;

}
