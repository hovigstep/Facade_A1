#pragma once
#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <iostream>
#include "EmployeeImp.h"

using namespace std;

class Proxy
{
public:
	EMPIMP emp;
	string bossname;

	Proxy();
	void boss(string);
	~Proxy();
};