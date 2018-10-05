//
//  linkedList.cpp
//  LinkedList
//
//  Created by Derrick Marshall on 2/7/17.
//  Copyright © 2017 Derrick Marshall. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;
#include "LinkedList.h"

struct doubleLinkList{
	int item;
	doubleLinkList* next;
	doubleLinkList* pre;
};

ListData:: ListData(){
	lenght = 0;
	head = NULL;
	end = NULL;
}

ListData:: ~ListData(){
	doubleLinkList*  temp = new doubleLinkList();
	temp = head;
	
	while (temp != NULL) {
		head = head -> next;
		delete temp;
		temp = head;
	}
	
	lenght = 0;
}

void ListData:: putItem(int num){
	doubleLinkList*  temp = new doubleLinkList();
	temp -> item = num;
	
	if(head == NULL){
		temp -> pre = temp;
		temp -> next = temp;
		head = currentPos = temp;
		cout << head -> pre  << " " << head -> item << " " << head -> next << endl;
	}
	
	else{
		currentPos -> pre = temp;
	}
	
	lenght++;
}


