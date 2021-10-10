#include "UBVSR.hpp"

int main()
try
{
	std::cout << "Hello UBVSR.\n";

	if (SDL_Init(SDL_INIT_VIDEO))
	{
		throw std::runtime_error("Failed to init SDL");
	}

	ubv::Window window(ubv::WindowProps { 1280, 720, "test" } );
	std::cout << "Error code: " << SDL_GetError() << std::endl;

	std::cout << "Goodbye UBVSR\n";

	std::cin.get();

	return 0;
}
catch (const std::exception& exception)
{
	std::cout << "Fatal error!\n" << exception.what() << std::flush;
}