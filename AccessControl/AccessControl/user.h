#pragma once
#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>

using namespace std;

namespace Moon
{
	class User
	{
	public:
		static bool Login2(string username, string userpassword);
	};
}

#endif // !USER.H