#include "security.h"
#include "user.h"
#include "administrator.h"

//Adding the function to the namespace Moon library
namespace Moon
{
	void mainfunction();
}

//Defining mainfunction()
namespace Moon
{
	void mainfunction()
	{

		/*
		*	Creating objects from other classes
		*/
		Security secure;
		Administrator admin;
		User user;


		/*
		*	Data members that will be used to gain user information
		*/
		string username;
		string password;
		char ans;

		cout << "This program is a mock program imitating a log in system.\n" << endl;
		
		cout << "\tUsing separate files, this program imitates a security system with a given administrator, and two given users.";
		cout << "\n\tAfter the validation process, the program will prompt the user";
		cout << "\n\tif they would like to re-enter their username and password.";
		cout << "\n\tIf they respond with 'y' or 'Y', the program will continue, else it will end.";
		cout << endl;
		
		//logic for output of program
		do
		{
			//prompt user for input on username
			cout << "\nEnter your username" << endl;
			cin >> username;
			
			//prompt user for password
			cout << "Enter your Password" << endl;
			cin >> password;
			//Check system
			cout << "\nSystem: ";
			secure.validate(username, password);
			cout << "Admin: ";
			admin.Login1(username, password);
			cout << "User: ";
			user.Login2(username, password);
			cout << "\nEnter again? y/n" << endl;
			cin >> ans;

		} while (ans == 'y' || ans == 'Y');

		//Output friendly goodbye
		cout << "\nGood-bye!" << endl;
	}
}

/*/
*	Main Method
**/
using namespace Moon;

int main()
{
	mainfunction();
	return 0;
}