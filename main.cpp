#include "lib.h"
#include <iostream>
#include <spdlog/spdlog.h>

int main(int argc, const char * argv[])
{
	std::cout << "Hello, World!" << std::endl;

	auto logger = spdlog::stdout_logger_mt("console");
	logger->info("Version 0.0.{} was started", version());

	std::cout << std::endl;

	std::cout << "Interesting information: factorial of 8 equals "
	          << factorial(8) << std::endl;

	return 0;
}
