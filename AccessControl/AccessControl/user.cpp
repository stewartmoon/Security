//Implementation file of user.h
#include "user.h"

//Adding the method Login2() to namespace Moon
namespace Moon
{
	bool User::Login2(string username, string userpassword)
	{
		if ((username == "Moon") && (userpassword == "friday"))//Admin information
		{
			cout << "Access granted!" << endl;
			return true;
		}
		if ((username == "abbott") && (userpassword == "monday"))
		{
			cout << "Access granted!" << endl;
			return true;
		}
		if ((username == "costello") && (userpassword == "tuesday"))
		{
			cout << "Access granted!" << endl;
			return true;
		}
		else
		{
			cout << "Please enter a valid user." << endl;
			return false;
		}
	}
}