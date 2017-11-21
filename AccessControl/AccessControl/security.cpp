//Implementation file of security.h
#include "security.h"

//Adding the method validate() to namespace Moon
namespace Moon
{
	int Security::validate(string username, string password)
	{
		if ((username == "abbott") && (password == "monday"))
		{
			cout << "Validated!" << endl;
			return 1;
		}
		if ((username == "costello") && (password == "tuesday"))

		{
			cout << "Validated!" << endl;
			return 2;
		}
		if ((username == "Moon") && (password == "friday"))
		{
			cout << "Validated!" << endl;
			return 3;
		}
		else
		{
			cout << "User not found." << endl;
			return 0;
		}
	}
}