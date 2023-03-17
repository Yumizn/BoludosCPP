//#Includes &/or Headers

#include <iostream>
#include <string>
#include <ostream>
#include "menu.hpp"
#include "argentina.hpp"
#include "peru.hpp"

#ifdef _WIN32
#define WINDOWS_SYSTEM
#include <Windows.h>
#else
#include <unistd.h>
#endif



// Namespaces/Workspaces

using namespace std;


	string name="";
    int local;
	
	
	
	
void menu()
{
	    
	//Step 1 - Sign up for Monkey!
	std::cout << "Whats your name?: " << std::endl << std::endl;
	std::cin >> name;
	std::cout << "Where are your country?: " << std::endl << std::endl;
	std::cout << "Write 1 for Argentina" << std::endl << std::endl;
	std::cout << "Write 2 for Peru" << std::endl << std::endl;
	std::cin >> local;
	
	//Step 3 - Switching a Countries Conditions
	switch (local)
	{
	case 1:
	argentina();
	
	
	case 2:
	peru();
	
	
	default:
	menu();
    }
}
