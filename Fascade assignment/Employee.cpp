#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include "Employee.h"

using namespace std;

Boss::Boss(string Name, int Salary)
{
	name = Name;
	salary = Salary;
}

string Boss::getname()
{
	return name;
}

int Boss::calcsalary()
{
	return salary;
}

void Boss::setname(string NAME)
{
	NAME=name;
}

void Boss::setsalary(int SALARY)
{
	SALARY=salary;
}




Hourlyemp::Hourlyemp(string Name, int Salary)
{
	name = Name;
	salary = Salary;
}

string Hourlyemp::getname()
{
	return name;
}

int Hourlyemp::calcsalary()
{
	return salary;
}

void Hourlyemp::setname(string NAME)
{
	NAME = name;
}

void Hourlyemp::setsalary(int SALARY)
{
	salary = SALARY;
}



Comemp::Comemp(string Name, int Salary)
{
	name = Name;
	salary = Salary;
}

string Comemp::getname()
{
	return name;
}

int Comemp::calcsalary()
{
	return salary;
}

void Comemp::setname(string NAME)
{
	NAME = name;
}

void Comemp::setsalary(int SALARY)
{
	salary= SALARY;
}





Piece::Piece(string Name, int Salary)
{
	name = Name;
	salary = Salary;
}

string Piece::getname()
{
	return name;
}

int Piece::calcsalary()
{
	return salary;
}

void Piece::setname(string NAME)
{
	NAME = name;
}

void Piece::setsalary(int SALARY)
{
	salary = (SALARY * 16);
}
