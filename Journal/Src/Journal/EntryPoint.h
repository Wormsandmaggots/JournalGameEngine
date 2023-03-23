#pragma once

#ifdef JR_PLATFORM_WINDOWS

extern Journal::Application* Journal::CreateApplication();

int main()
{
	printf("Start\n");
	Journal::Log::Init();
	JR_CORE_WARN("Initialized");
	int a = 5;
	JR_CORE_INFO("Client logger initialized var={0}", a);

	auto app = Journal::CreateApplication();

	app->Run();

	delete app;

	return 0;
}

#endif
