// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



int main(){
	// Lethal amount to kill a 35 grams mice is 5grams of sode
	// single can of pop contains 350 grams of code which 
	const double ArtifcialSweeterNer = 0.0001;
	double currentWeight, Goalweight,Change,ChangeRate,height,BMR;
	int AmountOfSodaCans,quanitity,months,age;
	bool female = false, male = false;
	string name,Answer,Gender,Answer2;

	cout << "Hello whats your name : ";
	cin >> name;
	cout << "What is your height in Centimeters : ";
	cin >> height;
	cout << "What is your age in years : ";
	cin >> age;

	while (female == false && male == false)
	{

		cout << "\nWhat is your gender (male/female) : ";
		cin >> Gender;

		if (Gender == "male") {
			male = true;
		}
		else if (Gender == "false") {
			female = true;
		}
		else {
			cout << "Please enter a valid answer";
		}

	}

	cout << "\nI heard you wanted to lose weight\nWhat is your current weight in kgs : ";
	cin >> currentWeight;
	cout << "\nWhat is your Goal weight in kgs : ";
	cin >> Goalweight;

	Change = currentWeight - Goalweight;

	cout << "\nIn how many months do you want to lose this weight : ";
	cin >> months;

	ChangeRate = Change / months;

	if (ChangeRate > 3.6) {
		cout << "Hi thats a lot of weight in a very small period of time\nWe will guide you through this journey however please note there might be some health issues attached to this goal\n";
	}
	else {
		cout << "Thats seems like a very achievable goal";
	}


	cout << "\nWould you be able to cut our soda pop? (yes/no)";
	cin >> Answer;

	if (Answer == "yes") {

		cout << "Okay that is great start\n";
		cout << "\nAre you ready to reveal further information about this prgram (yes/no)";
		cin >> Answer2;

		if (Answer2 == "yes" && male == true) {
			BMR = 88.362 + (13.297 * currentWeight) + (4.799 * height) - (5.677 * age);
			cout << "\n\nPlease note your burnt about " << BMR << "calories while you are resting\n";
			cout << "Please note to reach your goal you will need to lose about " << ChangeRate / 4 << "kgs per week\n";

		}
		else if (Answer2 == "yes" && female == true) {
			BMR = 88.362 + (13.297 * currentWeight) + (4.799 * height) - (5.677 * age);
			cout << "\n\nPlease note your burnt about " << BMR << "calories while you are resting\n";
			cout << "Please note to reach your goal you will need to lose about " << ChangeRate / 4 << "kgs per week\n";
		}


	}
	else if (Answer == "no") {
		cout << "How many soda cans do you drink in a day? : ";
		cin >> AmountOfSodaCans;
		cout << "Whats is the total volume of each of these soda cans? ( in milimeters ) :ml";
		cin >> quanitity;
		int totalGrams = (AmountOfSodaCans * quanitity) / ArtifcialSweeterNer;
		
		//Please fix calculation aroynd this area
		totalGrams = totalGrams;
		float WeightInGrams = currentWeight / 1000;
		int CannotExceed = WeightInGrams * 0.14;

		cout << "\n\nPlease note your cannot indudge in more then " << CannotExceed << " grams of atificial sweetner a month";
		cout << "\nYou are current on " << totalGrams;

		if (totalGrams > CannotExceed) {
			cout << "Please note you will end up killing yourself";
		}
		else if (totalGrams < CannotExceed) {
			cout << "Great job for under consuming";
			}
	}
	







}

