#pragma once

#ifdef GN_PLATFORM_WINDOWS

extern Genix::Application* Genix::CreateApplication();

int main(int argc, char** argv)
{
	Genix::Log::Init();
	GN_CORE_WARN("Initialized Log!");

	auto app = Genix::CreateApplication();
	app->Run();
	delete app;
}


#endif // GN_PLATFORM WINDOWS
