#include "stdafx.h"
#include "EmployeeImp.h"


EMPIMP::EMPIMP(string Name, int Salary) :boss(new Boss(Name,Salary)) {}

EMPIMP::~EMPIMP()
{
	delete boss;
}

//Gets

string EMPIMP::GetBossName()
{
	return boss->getname();
}

int EMPIMP::GetBossSalary()
{
	return boss->calcsalary();
}

//Sets

void EMPIMP::setbosname(string NAME)
{
	boss->setname(NAME);
}

void EMPIMP::setbossalary(int SALARY)
{
	boss->setsalary(SALARY);
}


/// Hourly employee

Hourimp::Hourimp(string Name, int Salary) :boss(new Hourlyemp(Name, Salary)) {}

Hourimp::~Hourimp()
{
	delete boss;
}

//Gets

string Hourimp::GetBossName()
{
	return boss->getname();
}

int Hourimp::GetBossSalary()
{
	return boss->calcsalary();
}

//Sets

void Hourimp::setbosname(string NAME)
{
	boss->setname(NAME);
}

void Hourimp::setbossalary(int SALARY)
{
	boss->setsalary(SALARY);
}


/// Commission


Commission::Commission(string Name, int Salary) :boss(new Comemp(Name, Salary)) {}

Commission::~Commission()
{
	delete boss;
}

//Gets

string Commission::GetBossName()
{
	return boss->getname();
}

int Commission::GetBossSalary()
{
	return boss->calcsalary();
}

//Sets

void Commission::setbosname(string NAME)
{
	boss->setname(NAME);
}

void Commission::setbossalary(int SALARY)
{
	boss->setsalary(SALARY);
}


/// Piece


Pieces::Pieces(string Name, int Salary) :boss(new Piece(Name, Salary)) {}

Pieces::~Pieces()
{
	delete boss;
}

//Gets

string Pieces::GetBossName()
{
	return boss->getname();
}

int Pieces::GetBossSalary()
{
	return boss->calcsalary();
}

//Sets

void Pieces::setbosname(string NAME)
{
	boss->setname(NAME);
}

void Pieces::setbossalary(int SALARY)
{
	boss->setsalary(SALARY);
}