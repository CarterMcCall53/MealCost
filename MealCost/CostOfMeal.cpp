/* MealCost.cpp
*  Carter McCall
*  23 August 2022
*  Purpose:
*		Given sales tax, ask user for price of meal and % of tip
*		Calculate the total cost of the meal
*  Modified 25 August 2022
*		Add comments, setprecesision function, and deleted the for loop
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	const double SALES_TAX = 0.07;
	int people;
	string dinnerName;
	double dinnerCost, tipPercent, tax, tip;
	cout << "What are you having for dinner? ";
	getline(cin, dinnerName); //scans for user input and sets input equal too string dinnerName
	cout << "How many people are having dinner? ";
	cin >> people; //scans for user unput and sets input equal too int people
	cout << "What is the cost of each meal? ";
	cin >> dinnerCost; //scans for user input and sets input equal too double dinnerCost
	cout << "What is the tip percentage you are giving? (0.00): ";
	cin >> tipPercent; //scans for user input and sets input equal too double tipPercent
	dinnerCost *= people; //sets dinnerCost equal to dinnerCost * people
	tax = dinnerCost * SALES_TAX; //sets tax equal too dinnerCost * SALES_TAX
	dinnerCost += tax; //sets dinnerCost equal to dinnerCost + tax
	tip = dinnerCost * tipPercent; //sets tip equal to dinnerCost * tipPercent
	dinnerCost += tip; //sets dinnerCost equal to dinnerCost + tip
	if (people == 1) {
		cout << "The total cost of your " << dinnerName << " for 1 person is $" << fixed << setprecision(2) << dinnerCost << "!" << endl;
	}
	else {
		cout << "The total cost of your " << dinnerName << " for " << people << " people is $" << fixed << setprecision(2) << dinnerCost << "!" << endl;
	}
}