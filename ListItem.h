#include <string>

class ListItem {

protected:
	ListItem* prev = nullptr;
	ListItem* next = nullptr;

	std::string data;

public:

	ListItem* insertItem();
	void removeItem();

	ListItem* prevItem() const {
		return prev;
	}

	ListItem* nextItem() const {
		return next;
	}

	std::string getData() const {
		return data;
	}

	void setData(std::string const& str) {
		data = str;
	}
	
	ListItem(std::string const& str) {
		data = str;
	}

	ListItem() {};
};