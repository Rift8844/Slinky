#include <iostream>
#include "ListItem.h"

int main() {
	//Demonstration
	ListItem* item = new ListItem();

	for (int i = 0; i < 20; i++) {
		item->setData(std::to_string(i+1));
		item = item->insertItem();
	}

	for (int i = 0; i < 20; i++) {
		//std::cout << item.getData() << '\n';
		item = item->prevItem();
		std::cout << item->getData() << '\n';
	}


	return 0;
}