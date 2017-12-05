#include "lib.h"
#include <iostream>
#include <spdlog/spdlog.h>

int main(int argc, const char * argv[])
{
    std::cout << "Hello, World!" << std::endl;

    auto logger = spdlog::stdout_logger_mt("console");
	logger->info("version {} was started", version());
    
    return 0;
}
