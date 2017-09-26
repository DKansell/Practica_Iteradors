#include "vector.h"
#include <conio.h>

int main() {
	std::vector<int> myVector{ 1,2,3,4,5 };

	vectorIT vec;

	vec.printVector(myVector);

	_getch();
}