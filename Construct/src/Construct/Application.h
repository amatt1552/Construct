#pragma once

#include "Core.h";

namespace Construct
{
	class CST_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//defined in a client
	Application* ConstructApp();
}
