#pragma once

#include "Core.h"

namespace Genix
{
	class GENIX_API Application
	{
	public:
		Application();
		virtual ~Application();
		
		void Run();

	};

	Application* CreateApplication();
}

