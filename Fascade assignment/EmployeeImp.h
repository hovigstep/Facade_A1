#pragma once
#include <iostream>
#include <stdio.h>
#include "Employee.h"

using namespace std;
class Boss;

class EMPIMP
{
	Boss *boss;
public:
	EMPIMP(string, int);
	//gets
	string GetBossName();
	int GetBossSalary();
	//sets
	void setbosname(string);
	void setbossalary(int);
	~EMPIMP();
};

class Hourimp
{
	Hourlyemp *boss;
public:
	Hourimp(string, int);
	//gets
	string GetBossName();
	int GetBossSalary();
	//sets
	void setbosname(string);
	void setbossalary(int);
	~Hourimp();
};

class Commission
{
	Comemp *boss;
public:
	Commission(string, int);
	//gets
	string GetBossName();
	int GetBossSalary();
	//sets
	void setbosname(string);
	void setbossalary(int);
	~Commission();
};


class Pieces
{
	Piece *boss;
public:
	Pieces(string, int);
	//gets
	string GetBossName();
	int GetBossSalary();
	//sets
	void setbosname(string);
	void setbossalary(int);
	~Pieces();
};