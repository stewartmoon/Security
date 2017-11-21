#pragma once
#ifndef SECURE_H
#define SECURE_H

#include <iostream>
#include <string>

using namespace std;

namespace Moon
{
	class Security 
	{
	public:
		static int validate(string username, string password);
	};
}

#endif // !SECURE_H
