#include "LinkedList.h"
#include <iostream>

std::ostream& operator<<(std::ostream& stream, const Node& node)
{
	stream << node.data;
	return stream;
}

std::ostream& operator<<(std::ostream& stream, const LinkedList& list)
{
	stream << "[" << list.count << "] : { ";
	Node* temp = list.head;
	while (temp != nullptr)
	{
		stream << *temp << " ";
		//stream << temp->data << " ";
		temp = temp->next;
	}
	stream << "}";
	return stream;
}

LinkedList::~LinkedList()
{
	while (head != nullptr)
	{
		popHead();
	}
}

void LinkedList::pushHead(int element)
{
	head = new Node(element, head);
	if (tail == nullptr)
	{
		tail = head;
	}
	++count;
}

void LinkedList::pushTail(int element)
{
	if (tail == nullptr)
	{
		return pushHead(element);
	}
	tail->next = new Node(element);
	tail = tail->next;
	++count;
}

int LinkedList::popHead()
{
	if (head == nullptr)
	{
		return 0;
	}
	--count;
	Node* temp = head;
	int value = head->data;
	head = head->next;
	delete temp;
	if (head == nullptr)
	{
		tail = nullptr;
	}
	return value;
}

int LinkedList::popTail()
{
	if (tail == nullptr)
	{
		return 0;
	}
	if (head == tail)
	{
		return popHead();
	}
	Node* temp = head;
	while (temp->next != tail)
	{
		temp = temp->next;
	}
	--count;
	int value = tail->data;
	delete tail;
	tail = temp;
	tail->next = nullptr;
	return value;
}

void LinkedList::swap(int index1, int index2)
{
	Node* t1 = nodeByIndex(index1);
	int t_1 = t1->data;

	Node* t2 = nodeByIndex(index2);
	int t_2 = t2->data;

	extract(index2);
	insert(t_1, index2);

	extract(index1);
	insert(t_2, index1);
}

Node*& LinkedList::nodeByIndex(int index)
{
	Node* t = head;
	for (int i = 0; i < index; ++i)
	{
		t = t->next;
	}
	//std::cout << t->data << std::endl;
	return t;
}


void LinkedList::insert(int element, int index)
{
	if (index == 0)
	{
		pushHead(element);
	}
	else if (index == count)
	{
		pushTail(element);
	}
	else
	{
		int cur_pos = 0;
		Node* temp = new Node;
		temp->data = element;
		Node* p = head;
		while (cur_pos != index - 1)
		{
			p = p->next;
			cur_pos++;
		}
		temp->next = p->next;
		p->next = temp;
		count++;
	}
}

int LinkedList::extract(int index)
{
	if (index == 0)
	{
		popHead();
	}
	else if (index == count - 1)
	{
		popTail();
	}
	else
	{
		int cur_pos = 1;
		Node* temp = head;
		while (cur_pos != index)
		{
			temp = temp->next;
			cur_pos++;
			//std::cout << temp->data <<std::endl;
		}
		Node* del = temp->next;
		int c = del->data;
		temp->next = del->next;
		delete del;
		count--;
		return c;
	}

}