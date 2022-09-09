#include <iostream>
#include <Journal.h>

class Sandbox : public Journal::Application
{

public:

	Sandbox() = default;
	virtual ~Sandbox() = default;
};

Journal::Application* Journal::CreateApplication()
{
	return new Sandbox;
}