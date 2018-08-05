#pragma once
#include <iostream>
#include <stdio.h>

using namespace std;
class Employee
{
public:
	virtual string getname()=0;
	virtual int calcsalary()=0;
};

//BOSS
class Boss : public Employee
{
	string name;
	int salary;
public:
	
	//constructor
	Boss(string Name, int Salary);
	//gets
	string getname();
	int calcsalary();
	//sets
	void setname(string);
	void setsalary(int);
};




//HOURLY

class Hourlyemp : public Employee
{
	string name;
	int salary;
public:

	//constructor
	Hourlyemp(string Name, int Salary);
	//gets
	string getname();
	int calcsalary();
	//sets
	void setname(string);
	void setsalary(int);
};
//COMMISSION

class Comemp : public Employee
{
	string name;
	int salary;
public:

	//constructor
	Comemp(string Name, int Salary);
	//gets
	string getname();
	int calcsalary();
	//sets
	void setname(string);
	void setsalary(int);
};

//BYPIECEemployee

class Piece : public Employee
{
	string name;
	int salary;
public:

	//constructor
	Piece(string Name, int Salary);
	//gets
	string getname();
	int calcsalary();
	//sets
	void setname(string);
	void setsalary(int);
};