/*
 * HealthProfile.cpp
 *
 *  Created on: Jan 22, 2018
 *      Author: phoan
 */

#include "HealthProfile.h"

namespace std {

HealthProfile::HealthProfile(string f, string l, string g, int d, int m, int y, double w, double h): CURRENT_YEAR(2018) {
	firstname = f;
	lastname = l;
	gender = g;
	birthdate = d;
	birthmonth = m;
	birthyear = y;
	height = h;
	weight = w;
}

HealthProfile::~HealthProfile() {
	cout << "Destructor is running!\n";
}

void HealthProfile::set_name(string f, string l, string g)
{
	firstname = f;
	lastname = l;
	gender = g;
}

string HealthProfile::get_firstname()
{
	return firstname;
}

string HealthProfile::get_lastname()
{
	return lastname;
}

string HealthProfile::get_gender()
{
	return gender;
}

void HealthProfile::set_dateofbirth(int d, int m, int y)
{
	birthdate = d;
	birthmonth = m;
	birthyear = y;
}

int HealthProfile::get_birthdate()
{
	return birthdate;
}

int HealthProfile::get_birthyear()
{
	return birthyear;
}

int HealthProfile::get_birthmonth()
{
	return birthmonth;
}

void HealthProfile::set_weight_height(double w, double h)
{
	weight = w;
	height = h;
}

double HealthProfile::get_weight()
{
	return weight;
}

double HealthProfile::get_height()
{
	return height;
}

	//Calculate and return age in years
int HealthProfile::cal_age()
{
	return (CURRENT_YEAR - birthyear);
}
	//Calculate and return maximum heart rate
double HealthProfile::max_HeartRate()
{
	return (220 - cal_age());
}
	//Calculate and return target-heart-rate range
void HealthProfile::target_HeartRate()
{
	double max_heartrate = max_HeartRate();
	double min_target_HeartRate = double(0.5) * max_heartrate;
	double max_target_HeartRate = double(0.85) * max_heartrate;
	cout << "\n\tTarget heart rate range is between " << min_target_HeartRate <<" and "<< max_target_HeartRate <<".\n";
}
	//Calculate and return BMI
double HealthProfile::cal_BMI()
{
	cout <<"\n\tBMI VALUES:\n\tUnderweight: less than 18.5\n\tNormal: between 18.5 and 24.9\n\tOverweight: between 25 and 29.9\n\tObese: 30 or greater\n";
	return (weight * 703) / (height * height);
}

} /* namespace std */

