#include"multiplyers.h"

using namespace std;
namespace sdds {
	multiplyers::multiplyers(int number) {
		multiplyers_list = nullptr;
		this->total_multiples = 0;
		this->createlist(number);
	}

	void multiplyers::createlist(int number) {
		for (int i = 1; i <= number; i++) {
			if (number % i == 0) {
				if (i != 1) {
					int* temp;
					temp = new int[total_multiples];
					for (int j = 0; j < total_multiples ; j++) {
						temp[j] = multiplyers_list[j];
					}
					delete[] multiplyers_list;

					multiplyers_list = new int[total_multiples + 1];
					for (int j = 0; j < total_multiples ; j++) {
						multiplyers_list[j] = temp[j];
					}
					delete[] temp;
					multiplyers_list[total_multiples] = i;
					total_multiples++;
				}
				else {
					this->multiplyers_list = new int[++total_multiples];
					multiplyers_list[0] = 1;
				}
			}
		}
	}
	
	int multiplyers::operator==(const multiplyers& other) const {
		while (true) {
			for (int i = this->total_multiples - 1; i >= 0; i--) {
				for (int j = other.total_multiples - 1; j >= 0; j--) {
					if (this->multiplyers_list[i] == other.multiplyers_list[j]) {
						return multiplyers_list[i];
					}
				}
			}
		}
	}
}