#include<stdio.h>
#include<iostream>
#include"multiplyers.h"
using namespace std;
using namespace sdds;

 
class Numbers {
	int number_1, number_2;
	int h_c_f = 0;
public:

	//input values to class
	void read(istream& istr) {
		cout << " Enter numbers in following output:" << endl;
		cout << "example : 1,2 \n =>" ;
		if (!istr.fail()) {
			istr >> number_1;
			istr.ignore(1);
			istr >> number_2;
		}
		else {
			cout << "wrong Input by user" << endl;
		}
	}

	//output values to user
	void display(ostream& os)  {
		finding(); // callinf finding hcf function
		cout << "H_C_F == " << this->h_c_f << endl;
	}

	//finding h_c_f
	void finding()  {

		multiplyers number1(number_1), number2(number_2);  // finding multiples
		this->h_c_f = number1 == number2;                  // finding HCF

	}

};


//input istream
istream& operator>> (istream& is, Numbers& number) {
	number.read(is);
	return is;
}

//output istream 
ostream& operator<< (ostream& os,  Numbers& number) {
	number.display(os);
	return os;
}


int main() {
	Numbers number;// declaring Class

	cin >> number; //inputting data
	cout << number; //outputing data

	return 0;
}
