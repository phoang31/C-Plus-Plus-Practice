//============================================================================
// Name        : Computerization_Of_Health_Record_9_26.cpp
// Author      : Peter Hoang
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "HealthProfile.h"

using namespace std;

int main() {
	HealthProfile Person1("Peter", "Hoang", "Male", 15, 02, 1993, 161, 67.2);
	cout <<"Person 1 Profile: ";
	cout << "\n\tFirst Name: " << Person1.get_firstname();
	cout << "\n\tLast Name: " << Person1.get_lastname();
	cout << "\n\tGender: " << Person1.get_gender();
	cout << "\n\tBirthdate: "<<Person1.get_birthdate()<<"/"<<Person1.get_birthmonth()<<"/"<<Person1.get_birthyear();
	cout <<"\n\tHeight: "<<Person1.get_height();
	cout <<"\n\tWeight: "<<Person1.get_weight();
	cout <<"\n\tAge: " <<Person1.cal_age() << endl;
	cout <<"\n\tBMI: "<<Person1.cal_BMI();
	cout <<"\n\tMaximum heart rate: "<<Person1.max_HeartRate();
	Person1.target_HeartRate();

	string first, last, gender;
	int bdate, bmonth, byear;
	double height, weight;
	cout << "Enter First Name: ";
	cin >> first;
	cout << "\nEnter Last Name: ";
	cin >> last;
	cout << "Enter Gender: ";
	cin >> gender;
	cout << "\nEnter birth date: ";
	cin >> bdate;
	cout << "Enter birth month: ";
	cin >> bmonth;
	cout << "\nEnter birth year: ";
	cin >> byear;
	cout << "Enter height: ";
	cin >> height;
	cout << "\nEnter weight: ";
	cin >> weight;

	Person1.set_name(first, last, gender);
	Person1.set_dateofbirth(bdate, bmonth, byear);
	Person1.set_weight_height(weight, height);
	cout <<"Person 1 Profile: ";
	cout << "\n\tFirst Name: " << Person1.get_firstname();
	cout << "\n\tLast Name: " << Person1.get_lastname();
	cout << "\n\tGender: " << Person1.get_gender();
	cout << "\n\tBirthdate: "<<Person1.get_birthdate()<<"/"<<Person1.get_birthmonth()<<"/"<<Person1.get_birthyear();
	cout <<"\n\tHeight: "<<Person1.get_height();
	cout <<"\n\tWeight: "<<Person1.get_weight();
	cout <<"\n\tAge: " <<Person1.cal_age() << endl;
	cout <<"\n\tBMI: "<<Person1.cal_BMI();
	cout <<"\n\tMaximum heart rate: "<<Person1.max_HeartRate();
	Person1.target_HeartRate();
	return 0;
}
