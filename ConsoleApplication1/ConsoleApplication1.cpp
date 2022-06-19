#include <iostream>
#include "LinkedList.cpp"



int main()
{
    Man man1("Petr", 30, 180);
    LinkedList<Man>list1(man1);
    Man man2("Joe", 27, 175);
    list1.addToHead(man2);
    Man man3("Tom", 33, 190);
    list1.addToHead(man3);
    list1.show();
	Man man4("Kent", 20, 185);
	list1.addToTail(man4);
	list1.show();
	list1.deleteFromTail();
	list1.deleteFromHead();
	list1.show();
	list1.deleteAll();
	list1.show();
}