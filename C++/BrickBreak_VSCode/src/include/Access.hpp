#ifndef _ACCESS_H_
#define _ACCESS_H_
#include "RessourceLoader.hpp"
#pragma once
class Access
{
public:
	static RessourceLoader* rl;
	static sf::RenderWindow* window;
	Access();
};

#endif