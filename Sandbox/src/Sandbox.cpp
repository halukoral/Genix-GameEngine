#include <Genix.h>

class Sandbox : public Genix::Application
{
public:
	Sandbox(){}
	~Sandbox(){}

};

Genix::Application* Genix::CreateApplication()
{
	return new Sandbox();
}