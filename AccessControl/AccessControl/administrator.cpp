//Implementation file of administrator.h
#include "administrator.h"

//Adding the method Login1() to namespace Moon
namespace Moon
{
	bool Administrator::Login1(string adminName, string adminPassword)
	{
		if ((adminName == "Moon") && (adminPassword == "friday"))
		{
			cout << "Access granted!" << endl;
			return true;
		}
		else
		{
			cout << "Not a admin." << endl;
			return false;
		}
	}

}