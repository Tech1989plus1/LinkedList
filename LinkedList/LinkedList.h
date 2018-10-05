//
//  LinkedList.h
//  LinkedList
//
//  Created by Derrick Marshall on 2/7/17.
//  Copyright © 2017 Derrick Marshall. All rights reserved.
//

#ifndef LinkedList_h
#define LinkedList_h

struct doubleLinkList;

class ListData{
private:
	int lenght;
	doubleLinkList* head;
	doubleLinkList* end;
	doubleLinkList* currentPos;
	
public:
	ListData();
	~ListData();
	
	int getLenght();
	void putItem(int num);
};

#endif /* LinkedList_h */
