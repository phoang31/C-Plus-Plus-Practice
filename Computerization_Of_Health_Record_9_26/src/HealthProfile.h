/*
 * HealthProfile.h
 *
 *  Created on: Jan 22, 2018
 *      Author: phoan
 */

#ifndef HEALTHPROFILE_H_
#define HEALTHPROFILE_H_

#include <string>
#include <iostream>

namespace std {

class HealthProfile {
private:
	string firstname, lastname, gender;
	int birthdate, birthmonth, birthyear;
	double height, weight;
	int const CURRENT_YEAR; //current year is 2018

public:
	HealthProfile(string, string, string, int, int, int, double, double);
	virtual ~HealthProfile();

	void set_name(string, string, string);
	string get_firstname();
	string get_lastname();
	string get_gender();

	void set_dateofbirth(int, int, int);
	int get_birthdate();
	int get_birthyear();
	int get_birthmonth();

	void set_weight_height(double, double);
	double get_weight();
	double get_height();

	//Calculate and return age in years
	int cal_age();
	//Calculate and return maximum heart rate
	double max_HeartRate();
	//Calculate and return target-heart-rate range
	void target_HeartRate();
	//Calculate and return BMI
	double cal_BMI();
};

} /* namespace std */

#endif /* HEALTHPROFILE_H_ */
