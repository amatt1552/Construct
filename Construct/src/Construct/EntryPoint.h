#pragma once

extern Construct::Application* Construct::ConstructApp();

int main(int argc, char** argv) 
{
	printf("hehehe");
	auto app = Construct::ConstructApp();
	app->Run();
	delete app;
}