#include <SandwichApp.h>

int main(int argc, char** argv)
{
	sandwich::Application app;
	int errCode = app.Initialize(argc, argv);

	if (!app.IsInitialized())
	{
		return errCode;
	}

	errCode = app.Run();

	app.Shutdown();

	return errCode;
}