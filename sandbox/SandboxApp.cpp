#include"Gamedev.h"

class Sandbox : public Gamedev::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

Gamedev::Application* Gamedev::CreateApplication()
{
	return new Sandbox();
}