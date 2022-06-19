#pragma once
template <typename T>
struct Node
{
	T value;
	Node* next = nullptr;
};


class Man
{
	string name;
	int age;
	int growth;
public:
	Man(string name, int age, int growth)
	{
		this->name = name;
		this->age = age;
		this->growth = growth;
	}
	friend ostream& operator << (ostream& out, Man& man)
	{
		out << man.name << " " << man.age << " " << man.growth;
		return out;
	}
};

template <typename T>
class LinkedList
{
	Node<T>* head = nullptr;
	int counter = 0;
public:
	LinkedList(T& object)
	{
		Node<T>* node = new Node<T>{ object };
		head = node;
		counter++;
	}

	void addToHead(T& object)
	{
		Node<T>* node = new Node<T>{ object, head };
		head = node;
		counter++;
	}

	void addToTail(T& object)
	{
		Node<T>* buf = head;
		while (buf->next != nullptr)
		{
			buf = buf->next;
		}
		buf->next = new Node<T>{ object };
		counter++;
	}

	void deleteFromHead()
	{
		head = head->next;
		counter--;
	}

	void deleteFromTail()
	{
		Node<T>* buf = head;
		while (buf->next->next != nullptr)
		{
			buf = buf->next;
		}
		buf->next = nullptr;
		counter--;
	}

	void deleteAll()
	{
		for (int i = 0; i <= counter; i++)
		{
			deleteFromHead();
		}
	}

	void show()
	{
		if (counter != 0)
		{
			Node<T>* buf = head;
			while (buf->next != nullptr)
			{
				cout << buf->value << endl;
				buf = buf->next;
			}
			cout << buf->value << endl;
		}
		else cout << "no elements";
		cout << endl;
	}
};

