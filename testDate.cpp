/*
### Test Program for Date Class

The test program will test our Date class.
*/

#include <iostream>
#include "DateFirst.h"
using namespace std;

int main() {
   Date d1(2023, 5, 15);
	 Date d2(1999, 1, 1);
	 Date d3(2024, 12, 31);

	 d1.display(); cout << endl;
	 d2.display(); cout << endl;
	 d3.display(); cout << endl;
	 return 0;
}
