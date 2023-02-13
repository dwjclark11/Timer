#include "Timer.h"
#include <iostream>

int main()
{
	Timer timer{};
	timer.Start();
	std::cout << "Start Timer" << std::endl;
	while (timer.ElapsedMS() < 20000)
	{
		std::cout << "MS: " << timer.ElapsedMS() << std::endl;
	}

	std::cout << "Stop Timer" << std::endl;
	// Should reset the timer to zero
	timer.Stop();
	std::cout << "MS: " << timer.ElapsedMS() << std::endl;

	return 0;
}