
#ifndef multiplyerss
#define multiplyerss
#include<iostream>
#include<stdio.h>
using namespace std;
namespace sdds {
	class multiplyers {
		int* multiplyers_list;
		int total_multiples ;
	public:
		multiplyers(int number); //constructer
		void createlist(int number);  // list finding
		int operator==(const multiplyers& other) const; // finding hcf
	};

}
#endif