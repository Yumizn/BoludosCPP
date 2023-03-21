//#Includes &/or Headers

#include <iostream>
#include <string>
#include <ostream>
#include "menu.hpp"
#include "argentina.hpp"
#include "peru.hpp"
#include "brasil.hpp"
#include "chile.hpp"

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
	std::cout << "Whats your name?: " << std::endl;
	std::cin >> name;
	std::cout << "Where are your country?: " << std::endl;
	std::cout << "Write 1 for Argentina" << std::endl;
	std::cout << "Write 2 for Peru" << std::endl;
	std::cout << "Write 3 for Brasil" << std::endl;
	std::cout << "Write 4 for Chile" << std::endl;
	std::cin >> local;
	
	//Step 3 - Switching a Countries Conditions
	switch (local)
	{
	
	case 1:
	argentina();
		
	case 2:
	peru();
	
	case 3:
	brasil();
		
	case 4:
	chile();
			
	default:
	menu();
    }
}
