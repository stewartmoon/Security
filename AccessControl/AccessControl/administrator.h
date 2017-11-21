#pragma once
#ifndef ADMIN_H
#define ADMIN_H

#include <iostream>
#include <string>

using namespace std;

namespace Moon
{
	class Administrator
	{
	public:
		bool Login1(string adminName, string adminPassword);
	};
}
#endif // !ADMIN_H
