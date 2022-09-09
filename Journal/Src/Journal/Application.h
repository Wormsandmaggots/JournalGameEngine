#pragma once

#include "Core.h"

namespace Journal
{

	class JOURNAL_API Application
	{

	public:
		Application() = default;
		virtual ~Application() = default;

		void Run();

	};

	Application* CreateApplication();

}
