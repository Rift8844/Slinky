#include "ListItem.h"

/*This is pointer fuckery so 
I'll explain it for whoever
reads, I guess*/
ListItem* ListItem::insertItem() {
	//Create a new list item
	ListItem* newItem = new ListItem();
	/*Set the next item's previous item
	to the new item we're inserting*/
	if (next)
		next->prev = newItem;

	/*Setup prev and next item pointers
	for newItem*/
	newItem->prev = this;
	newItem->next = next;

	/*Set this item's next item
	to the new item we're inserting*/
	next = newItem;
	return newItem;
}

void ListItem::removeItem() {
	if (next)
		next->prev = prev;

	if (prev)
		prev->next = next;
}