
#include <iostream>
using namespace std;


struct node {
	int data;
	node *next;
};


class list {
private:
	node *head, *tail;
public:
	list() {
		head = NULL;
		tail = NULL;
	}

	void createnode(int value) {
		node *temp = new node;
		temp->data = value;
		temp->next = NULL;

		// check if this is the first node in the list
		if (head == NULL) {
			head = temp;
			tail = temp;
			temp = NULL;
		}
		else {
			tail->next = temp;
			tail = temp;
			// temp = NULL ??
		}
	}

	void display() {
		node *temp = new node;
		temp = head;
		while (temp != NULL) {
			cout << temp->data << endl;
			temp = temp->next;
		}
	}

	void insert_start(int value) {
		node *temp = new node;
		temp->data = value;
		temp->next = head;
		head = temp;
	}

	void insert_end(int value) {
		node *temp = new node;
		temp->data = value;
		tail->next = temp;
		tail = temp;
	}

};

// methods left:
// - insert at position
// - deletion at a particular position
// - deletion at end



int main()
{
    return 0;
}

