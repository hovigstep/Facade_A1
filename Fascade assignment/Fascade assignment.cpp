// Fascade assignment.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include "EmployeeImp.h"

using namespace std;

int main()
{
	cout << "The following is the names and salaries for the employees created " << endl;
	cout << "Name " << "Salary" << endl;
	EMPIMP boss1("Hovig", 30000);
	cout << boss1.GetBossName() << " " << boss1.GetBossSalary()<< endl;

	Hourimp bos("John", 2000);
	cout << bos.GetBossName() << " " << bos.GetBossSalary() << endl;

	Commission bo("Rambo", 5000);
	cout << bo.GetBossName() << " " << bo.GetBossSalary() << endl;

	Pieces boss("Cavali", 750);
	cout << boss.GetBossName() << " " << boss.GetBossSalary() << endl;

    return 0;
}