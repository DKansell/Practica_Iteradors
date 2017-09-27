#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <conio.h>
#include <iostream>

using namespace std;


int main() {
	
	//---------------------------------------------------------------------------
	//Vector - iteradores Random Acces

	std::vector<int> myVector{ 1,2,3,4,5 };

		///Print Forward
		cout << "Printing the vector forward: ";

		for (std::vector<int>::iterator it = myVector.begin(); it != myVector.end(); ++it)
		{
			cout << *it << ' ';
		}

		cout << endl;

		///Print Backwards

		cout << "Printing the vector backward: ";

		for (std::vector<int>::reverse_iterator it = myVector.rbegin(); it != myVector.rend(); ++it)
		{
			cout << *it << ' ';
		}

		cout << endl;
	
	
	//Deque - iteradores Random Acces

	std::deque<int> myDeque{ 6,7,8,9,10 };

		///Print Forward

		cout << "Printing the deque forward: ";

		for (std::deque<int>::iterator it = myDeque.begin(); it != myDeque.end(); ++it)
		{
			cout << *it << ' ';
		}

		cout << endl;

		///Print Backwards

		cout << "Printing the deque backward: ";

		std::deque<int>::iterator it2 = myDeque.end();

		while (it2 != myDeque.begin())
		{
			it2--;
			cout << *it2 << ' ';
		}

		cout << endl;

	//---------------------------------------------------------------------------
	//List - iteradores Bidirectional

	std::list<int> myList{ 11,12,13,14,15 };

		///Print Forward

		cout << "Printing the list forward: ";

		for (std::list<int>::iterator it = myList.begin(); it != myList.end(); ++it)
		{
			cout << *it << ' ';
		}

		cout << endl;

		///Print Backwards

		cout << "Printing the list backward: ";

		for (std::list<int>::reverse_iterator it = myList.rbegin(); it != myList.rend(); ++it)
		{
			cout << *it << ' ';
		}

		cout << endl;

	//---------------------------------------------------------------------------
	//Forward List - iteradores Forward

	std::forward_list<int> myForwardList{ 16, 17, 18, 19, 20 };

		///Print Forward

		std::cout << "Printing the fordward_list: ";

		for (std::forward_list<int>::iterator it = myForwardList.begin(); it != myForwardList.end(); ++it)
		{
			std::cout << *it << ' ';
		}

		std::cout << std::endl;

	//---------------------------------------------------------------------------
	//Map - iteradores Bidirectional

	std::map<char, int> myMap;
	myMap['a'] = 10;
	myMap['b'] = 20;
	myMap['c'] = 30;
	myMap['d'] = 40;
	myMap['e'] = 50;

		///Print Forward

		std::cout << "Printing the map forward: ";

		for (std::map<char, int>::iterator it = myMap.begin(); it != myMap.end(); ++it)
		{
			std::cout << it->first << '-' << it->second << std::endl;
		}

		std::cout << std::endl;

		///Print Backwards

		std::cout << "Printing the map backward: ";

		for (std::map<char, int>::reverse_iterator it = myMap.rbegin(); it != myMap.rend(); ++it)
		{
			std::cout << it->first << '-' << it->second << std::endl;
		}

		std::cout << std::endl;

	//---------------------------------------------------------------------------
	//Set - iteradores Bidirectional

	int mysetints[] = { 1,2,3,4,5 };
	std::set<int> mySet(mysetints, mysetints + 5);

		///Print Forward

		cout << "Printing the set forward: ";

		for (std::set<int>::iterator it = mySet.begin(); it != mySet.end(); ++it)
		{
			cout << *it << ' ';
		}

		cout << endl;

		///Print Backwards

		cout << "Printing the set backward: ";

		for (std::set<int>::reverse_iterator it = mySet.rbegin(); it != mySet.rend(); ++it)
		{
			cout << *it << ' ';
		}

		cout << endl;

	//---------------------------------------------------------------------------
	//Constructores de los diferentes contenedores STL

	//Vector

	std::vector<int> vectorA; 
	std::vector<int> vectorB(5, 15); 
	std::vector<int> vectorC(vectorB.begin(), vectorB.end());
	std::vector<int> vectorD(vectorB); 
	int myVecInts[] = { 1,2,3,4,5 };
	std::vector<int> vectorE(myVecInts, myVecInts + sizeof(myVecInts) / sizeof(int));

	//Deque

	std::deque<int> dequeA;
	std::deque<int> dequeB(5, 15);
	std::deque<int> dequeC(dequeB.begin(), dequeB.end());
	std::deque<int> dequeD(dequeB); 
	int myDequeFloats[] = { 1.2,2.5,3.7,4.8,5.1 };
	std::deque<float> dequeE(myDequeFloats, myDequeFloats + sizeof(myDequeFloats) / sizeof(int));
	
	//Queue

	std::queue<int> queueA;
	std::queue<int> queueB(dequeB); //copia de una deque
	std::queue<int> queueC(queueB); //copia de otra queue
	std::queue<int, std::list<int> > queueD(myList); //queue con una list

	//Priority Queue

	std::priority_queue<int> pr_queueA;
	std::priority_queue<int> pr_queueB(pr_queueA);
	int myPrQueueInts[] = { 1,2,3,4,5 };
	std::priority_queue<int> second(myPrQueueInts, myPrQueueInts + 4);
	
	//Stack

	std::stack<int> stackA;
	std::stack<int> stackB(dequeB); //Copia de deque
	std::stack<int> stackC(stackB);
	std::stack<int, std::vector<int>> stackD(vectorB); //Stack con vector

	//List

	std::list<int> listA;
	std::list<int> listB(5, 15);
	std::list<int> listC(listB.begin(), listB.end());
	std::list<int> listD(listB);
	int myListInts[] = { 1,2,3,4,5 };
	std::list<int> listE(myListInts, myListInts + sizeof(myListInts) / sizeof(int));
	
	//Forward List

	std::forward_list<int> f_listA;                      
	std::forward_list<int> f_listB(2, 100);
	std::forward_list<int> f_listC(f_listB.begin(), f_listB.end());
	std::forward_list<int> f_listD(f_listB);
	std::forward_list<int> f_listE(std::move(f_listB));
	std::forward_list<int> f_listF = { 10, 20, 30, 40, 50 };

	//Map

	std::map<char, int> mapA;
	myMap['a'] = 10;
	myMap['b'] = 20;
	myMap['c'] = 30;
	myMap['d'] = 40;
	myMap['e'] = 50;
	std::map<char, int> mapB(mapA.begin(), mapA.end());
	std::map<char, int> mapC(mapB);


	//Set

	std::set<int> setA;
	int mySetInts[] = { 1,2,3,4,5 };
	std::set<int> setB(mySetInts, mySetInts + 5);
	std::set<int> setC(setB);
	std::set<int> setD(setB.begin(), setB.end());



	_getch();
}