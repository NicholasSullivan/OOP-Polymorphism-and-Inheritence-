//
//  main.cpp
//  Program4OOP
//
//  Created by Nicholas Sullivan on 3/24/18.
//  Copyright © 2018 Nicholas Sullivan. All rights reserved.
//

#include <iostream>
#include <list>
using namespace std;
#include "Employee.h"
#include "Owner.h"
#include "Chef.h"
#include "Waiter.h"

// Function prototypes.
void contProg();

int main(int argc, const char * argv[]) {

	Employee * janPtr;
	Employee * febPtr;
	Employee * marPtr;

	list<Employee*> empListJan;
	list<Employee*> empListFeb;
	list<Employee*> empListMar;

	double janProfit = 0, febProfit = 0, marProfit = 0,
		janTip1 = 0, janTip2 = 0, janTip3 = 0,
		febTip1 = 0, febTip2 = 0, febTip3 = 0,
		marTip1 = 0, marTip2 = 0, marTip3 = 0;
	char month = '\0';
	bool continueDB = true, isValid = false;

	// Output instructions.
	cout <<
		"******************************************************\n"
		"*                                                    *\n"
		"*     Welcome to the Restaurant Database.            *\n"
		"*     Database shows 3 months of employee data.      *\n"
		"*     Enter the 3 months worth of data,              *\n"
		"*     then choose which month to view.               *\n"
		"*                                                    *\n"
		"******************************************************\n"
		<< endl;
	contProg();
	cout << endl;

	// January Inputs w/ error checking.

	while (!isValid)
	{
		isValid = false;
		cout << endl << "Please enter the profit for January:" << endl << "$";
		cin >> janProfit;
		if (!cin)
		{
			cout << "*** Invalid Input ***" << endl;
			cin.clear();
			cin.ignore(999, '\n');
		}
		else
			isValid = true;
	}
	isValid = false;

	while (!isValid)
	{
		cout << "Please enter the tips for January:" << endl;
		cout << "Waiter 1:" << endl << "$";
		cin >> janTip1;
		if (!cin)
		{
			cout << "*** Invalid Input ***" << endl;
			cin.clear();
			cin.ignore(999, '\n');
		}
		else
			isValid = true;
	}
	isValid = false;

	while (!isValid)
	{
		cout << "Waiter 2:" << endl << "$";
		cin >> janTip2;
		if (!cin)
		{
			cout << "*** Invalid Input ***" << endl;
			cin.clear();
			cin.ignore(999, '\n');
		}
		else
			isValid = true;
	}
	isValid = false;

	while (!isValid)
	{
		cout << "Waiter 3:" << endl << "$";
		cin >> janTip3;
		if (!cin)
		{
			cout << "*** Invalid Input ***" << endl;
			cin.clear();
			cin.ignore(999, '\n');
		}
		else
			isValid = true;
	}
	isValid = false;
	cout << endl;

	// January Data. Constructing objects and adding to the January list.

	janPtr = new Owner(11111, "Doe", "John", 15000, janProfit, .60, 0, 6); // ID, Last, First, Base Sal, Month Prof, % Prof, # Emps
	empListJan.push_back(janPtr);
	janPtr = new Chef(22222, "Smith", "Mary", 10000, janProfit, .20, 0, "Italian"); // ID, Last, First, Base Sal, Month Prof, % Prof, Cuisine
	empListJan.push_back(janPtr);
	janPtr = new Chef(33333, "Jones", "Jay", 10000, janProfit, .20, 0, "French"); // ID, Last, First, Base Sal, Month Prof, % Prof, Cuisine
	empListJan.push_back(janPtr);
	janPtr = new Waiter(44444, "Brown", "Betty", 3000, janProfit, janTip1, 0, 3); // ID, Last, First, Base Sal, Month Prof, Tips, Ttl Sal, Yrs Serv
	empListJan.push_back(janPtr);
	janPtr = new Waiter(55555, "Jones", "Jessica", 3000, janProfit, janTip2, 0, 5); // ID, Last, First, Base Sal, Month Prof, Tips, Ttl Sal, Yrs Serv
	empListJan.push_back(janPtr);
	janPtr = new Waiter(666666, "Goldblum", "Jeff", 3000, janProfit, janTip3, 0, 7); // ID, Last, First, Base Sal, Month Prof, Tips, Ttl Sal, Yrs Serv
	empListJan.push_back(janPtr);

	// February Inputs w/ error checking.

	while (!isValid)
	{
		isValid = false;
		cout << endl << "Please enter the profit for February:" << endl << "$";
		cin >> febProfit;
		if (!cin)
		{
			cout << "*** Invalid Input ***" << endl;
			cin.clear();
			cin.ignore(999, '\n');
		}
		else
			isValid = true;
	}
	isValid = false;

	while (!isValid)
	{
		cout << "Please enter the tips for Febuary:" << endl;
		cout << "Waiter 1:" << endl << "$";
		cin >> febTip1;
		if (!cin)
		{
			cout << "*** Invalid Input ***" << endl;
			cin.clear();
			cin.ignore(999, '\n');
		}
		else
			isValid = true;
	}
	isValid = false;

	while (!isValid)
	{
		cout << "Waiter 2:" << endl << "$";
		cin >> febTip2;
		if (!cin)
		{
			cout << "*** Invalid Input ***" << endl;
			cin.clear();
			cin.ignore(999, '\n');
		}
		else
			isValid = true;
	}
	isValid = false;

	while (!isValid)
	{
		cout << "Waiter 3:" << endl << "$";
		cin >> febTip3;
		if (!cin)
		{
			cout << "*** Invalid Input ***" << endl;
			cin.clear();
			cin.ignore(999, '\n');
		}
		else
			isValid = true;
	}
	isValid = false;
	cout << endl;

	// February Data. Constructing objects and adding to the February list.

	febPtr = new Owner(11111, "Doe", "John", 15000, febProfit, .60, 0, 6); // ID, Last, First, Base Sal, Month Prof, % Prof, # Emps
	empListFeb.push_back(febPtr);
	febPtr = new Chef(22222, "Smith", "Mary", 10000, febProfit, .20, 0, "Italian"); // ID, Last, First, Base Sal, Month Prof, % Prof, Cuisine
	empListFeb.push_back(febPtr);
	febPtr = new Chef(33333, "Jones", "Jay", 10000, febProfit, .20, 0, "French"); // ID, Last, First, Base Sal, Month Prof, % Prof, Cuisine
	empListFeb.push_back(febPtr);
	febPtr = new Waiter(44444, "Brown", "Betty", 3000, febProfit, febTip1, 0, 3); // ID, Last, First, Base Sal, Month Prof, Tips, Ttl Sal, Yrs Serv
	empListFeb.push_back(febPtr);
	febPtr = new Waiter(55555, "Jones", "Jessica", 3000, febProfit, febTip2, 0, 5); // ID, Last, First, Base Sal, Month Prof, Tips, Ttl Sal, Yrs Serv
	empListFeb.push_back(febPtr);
	febPtr = new Waiter(666666, "Goldblum", "Jeff", 3000, febProfit, febTip3, 0, 7); // ID, Last, First, Base Sal, Month Prof, Tips, Ttl Sal, Yrs Serv
	empListFeb.push_back(febPtr);

	// March Inputs w/ error checking.

	while (!isValid)
	{
		isValid = false;
		cout << endl << "Please enter the profit for March:" << endl << "$";
		cin >> marProfit;
		if (!cin)
		{
			cout << "*** Invalid Input ***" << endl;
			cin.clear();
			cin.ignore(999, '\n');
		}
		else
			isValid = true;
	}
	isValid = false;

	while (!isValid)
	{
		cout << "Please enter the tips for March:" << endl;
		cout << "Waiter 1:" << endl << "$";
		cin >> marTip1;
		if (!cin)
		{
			cout << "*** Invalid Input ***" << endl;
			cin.clear();
			cin.ignore(999, '\n');
		}
		else
			isValid = true;
	}
	isValid = false;

	while (!isValid)
	{
		cout << "Waiter 2:" << endl << "$";
		cin >> marTip2;
		if (!cin)
		{
			cout << "*** Invalid Input ***" << endl;
			cin.clear();
			cin.ignore(999, '\n');
		}
		else
			isValid = true;
	}
	isValid = false;

	while (!isValid)
	{
		cout << "Waiter 3:" << endl << "$";
		cin >> marTip3;
		if (!cin)
		{
			cout << "*** Invalid Input ***" << endl;
			cin.clear();
			cin.ignore(999, '\n');
		}
		else
			isValid = true;
	}

	cout << endl;

	// March Data. Constructing objects and adding to the March list.

	marPtr = new Owner(11111, "Doe", "John", 15000, marProfit, .60, 0, 6); // ID, Last, First, Base Sal, Month Prof, % Prof, # Emps
	empListMar.push_back(marPtr);
	marPtr = new Chef(22222, "Smith", "Mary", 10000, marProfit, .20, 0, "Italian"); // ID, Last, First, Base Sal, Month Prof, % Prof, Cuisine
	empListMar.push_back(marPtr);
	marPtr = new Chef(33333, "Jones", "Jay", 10000, marProfit, .20, 0, "French"); // ID, Last, First, Base Sal, Month Prof, % Prof, Cuisine
	empListMar.push_back(marPtr);
	marPtr = new Waiter(44444, "Brown", "Betty", 3000, marProfit, marTip1, 0, 3); // ID, Last, First, Base Sal, Month Prof, Tips, Ttl Sal, Yrs Serv
	empListMar.push_back(marPtr);
	marPtr = new Waiter(55555, "Jones", "Jessica", 3000, marProfit, marTip2, 0, 5); // ID, Last, First, Base Sal, Month Prof, Tips, Ttl Sal, Yrs Serv
	empListMar.push_back(marPtr);
	marPtr = new Waiter(666666, "Goldblum", "Jeff", 3000, marProfit, marTip3, 0, 7); // ID, Last, First, Base Sal, Month Prof, Tips, Ttl Sal, Yrs Serv
	empListMar.push_back(marPtr);

	// Loop for viewing one of the month's data based on user input.
	while (continueDB)
	{
		month = '\0';
		cin.clear();
		cin.ignore(999, '\n');

		cout << endl << "Please Select a month to view: J, F, or M. Select N to quit." << endl;
		cin >> month;

		if (month == 'j' || month == 'J')
		{
			cout << endl << "*** January: ***" << endl << "Profit: $" << janProfit << endl << endl;
			for (list<Employee*>::iterator it = empListJan.begin();
				it != empListJan.end(); it++)
			{
				janPtr = *it;
				cout << *janPtr << endl;
			}
		}
		else if (month == 'f' || month == 'F')
		{
			cout << endl << "*** February: ***" << endl << "Profit: $" << febProfit << endl << endl;
			for (list<Employee*>::iterator it = empListFeb.begin();
				it != empListFeb.end(); it++)
			{
				febPtr = *it;
				cout << *febPtr << endl;
			}
		}
		else if (month == 'm' || month == 'M')
		{
			cout << endl << "*** March: ***" << endl << "Profit: $" << marProfit << endl << endl;
			for (list<Employee*>::iterator it = empListMar.begin();
				it != empListMar.end(); it++)
			{
				marPtr = *it;
				cout << *marPtr << endl;
			}
		}
		else if (month == 'n' || month == 'N')
			return 0;
		else
			cout << "*** Invalid Input ***" << endl << endl;

	} // end While
} // end Main

/*** Utility functions ***/

// Function to pause the program and prompt the user to continue.
void contProg()
{
	cout << endl << "Continue? Y/N" << endl;
	char cont = '\0';
	bool contP = false;

	while (!contP)
	{
		cin >> cont;
		cin.clear();
		cin.ignore(999, '\n');

		if (cont == 'Y' || cont == 'y')
		{
			contP = true;
		}
		else
		{
			cout << "Please input Y when ready." << endl;
		}
	}
}
