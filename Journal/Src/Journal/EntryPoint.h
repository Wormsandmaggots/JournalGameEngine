#pragma once

#ifdef JR_PLATFORM_WINDOWS

extern Journal::Application* Journal::CreateApplication();

int main()
{
	printf("Start\n");
	auto app = Journal::CreateApplication();

	app->Run();

	delete app;

	return 0;
}

#endif
