#pragma once

#include "Construct.h"

class Sandbox : public Construct::Application 
{
public:
	Sandbox() 
	{
	
	}
	~Sandbox() 
	{
	
	}

};


Construct::Application* Construct::ConstructApp()
{
	return new Sandbox();
}