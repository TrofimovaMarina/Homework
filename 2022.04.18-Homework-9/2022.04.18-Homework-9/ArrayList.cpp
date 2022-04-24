#include "ArrayList.h"

void ArrayList::expand(int count)
{
	int* newdata = new int[count + this->capacity];
	for (int i = 0; i < this->capacity; ++i)
	{
		newdata[i] = this->data[i];
	}
	delete[] this->data;
	this->data = newdata;
	this->capacity += count;
}

int ArrayList::ind(int index)
{
	if (index < 0)
	{
		pushbegin(0);
		return 0;
	}
	if (index >= this->count)
	{
		pushend(0);
		return this->count - 1;
	}
	return index;
}

ArrayList::ArrayList(int capacity)
{
	this->capacity = capacity;
	this->count = 0;
	this->data = new int[capacity];
}

ArrayList::ArrayList(const ArrayList& list)
{
	this->capacity = list.count;
	this->count = list.count;
	this->data = new int[list.count];
	for (int i = 0; i < list.count; ++i)
	{
		this->data[i] = list.data[i];
	}
}

ArrayList::~ArrayList()
{
	this->count = 0;
	this->capacity = 0;
	for (int i = 0; i < this->capacity; ++i)
	{
		this->data[i] = 0;
	}
	delete[] this->data;
}

void ArrayList::pushend(int element)
{
	if (this->count == this->capacity)
	{
		expand(this->capacity);
	}
	this->data[this->count] = element;
	this->count++;
}

void ArrayList::pushbegin(int element)
{
	if (this->count == this->capacity)
	{
		expand(this->capacity);
	}
	this->count++;

	for (int i = 0; i < this->count - 1; ++i)
	{
		//std::cout << this->count - i << std::endl;
		this->data[this->count - i - 1] = this->data[this->count - i - 2];
	}

	this->data[0] = element;
}

int& ArrayList::operator[](int pos)
{
	return data[ind(pos)];
}

void ArrayList::swap(int posi, int posj)
{
	int t = 0;
	t = this->data[posj];
	this->data[posj] = this->data[posi];
	this->data[posi] = t;
}

void ArrayList::insert(int element, int position)
{
	if (this->count == this->capacity)
	{
		expand(this->capacity);
	}
	this->count++;
	for (int i = 0; i < this->count - position; ++i)
	{
		//std::cout << this->count - i << std::endl;
		this->data[this->count - i - 1] = this->data[this->count - i - 2];
	}

	this->data[position] = element;
}

int ArrayList::extractbegin()
{
	this->count--;
	int c = this->data[0];
	//std::cout << c << std::endl;
	//std::cout << this->count << std::endl;
	for (int i = 0; i < this->count; ++i)
	{
		//std::cout << i << std::endl;
		this->data[i] = this->data[i + 1];
	}
	return c;
}

int ArrayList::extractend()
{
	this->count--;
	return this->data[this->count];
}

int ArrayList::extract(int position)
{
	if ((position >= this->count) || (position < 0))
	{
		std::cout << "Error: no such position" << std::endl;
		return 0;
	}
	int c = this->data[position];
	this->count--;
	for (int i = 0; i < this->count - position; ++i)
	{
		//std::cout << position + i << std::endl;
		this->data[position + i] = this->data[position + i + 1];
	}
	return c;

}

std::ostream& operator<<(std::ostream& stream, ArrayList& list)
{
	stream << "[" << list.count << "/" << list.capacity << "] {";
	if (list.count == 0)
	{
		stream << "EMPTY";
	}
	else
	{
		for (int i = 0; i < list.count - 1; ++i)
		{
			stream << list.data[i] << ", ";
		}
		stream << list.data[list.count - 1];
	}
	stream << "}";
	return stream;
}

void recursive_sort(int* a, int size)
{
	int left = 0;
	int right = size - 1;

	int mid = a[size / 2];

	do
	{
		while (a[left] < mid)
		{
			left++;
		}
		while (a[right] > mid)
		{
			right--;
		}

		if (left <= right)
		{
			int t = a[left];
			a[left] = a[right];
			a[right] = t;

			left++;
			right--;
		}
	} while (left <= right);

	if (right > 0)
	{
		recursive_sort(a, right + 1);
	}
	if (left < size)
	{
		recursive_sort(&a[left], size - left);
	}
}

void ArrayList::sort()
{
	recursive_sort(this->data, this->count);
}

