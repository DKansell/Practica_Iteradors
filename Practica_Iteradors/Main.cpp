#include "myVector.h"
#include "myDeque.h"
#include "myList.h"
#include "myForwardList.h"
#include "mymap.h"
#include "mySet.h"

#include <conio.h>

int main() {
	std::vector<int> T_vector { 1,2,3,4,5 };
	std::deque<int> T_deque { 6,7,8,9,10 };
	std::list<int> T_list { 11,12,13,14,15 };
	std::forward_list<int> T_flist { 16, 17, 18, 19, 20 };
	std::map<char, int> T_map;
	T_map['a'] = 10;
	T_map['b'] = 20;
	T_map['c'] = 30;
	T_map['d'] = 40;
	T_map['e'] = 50;
	int mysetints[] = { 1,2,3,4,5 };
	std::set<int> T_set(mysetints, mysetints + 5);

	myVector vec;
	myDeque deq;
	myList lis;
	myForwardList flist;
	myMap map;
	mySet set;

	vec.printVectorForward(T_vector);
	vec.printVectorBackward(T_vector);
	deq.printDequeForward(T_deque);
	deq.printDequeBackward(T_deque);
	lis.printListForward(T_list);
	lis.printListBackward(T_list);
	flist.printForwardList(T_flist);
	map.printMapForward(T_map);
	set.printSetForward(T_set);
	set.printSetBackward(T_set);

	_getch();
}