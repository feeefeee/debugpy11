// app1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "pybind11/pybind11.h"
#include "pybind11/embed.h"

namespace py = pybind11;

class Python
{

};

int main()
{
    std::cout << "Hello World!\n";
    std::string input;

    py::initialize_interpreter();
    for (;;)
    {
		std::cout << "file :";
        std::getline(std::cin, input);
        if (input == "exit")
            break;
        try
        {
			py::eval_file(input);
        }
        catch (const std::exception& e)
        {
            std::cerr << "Exception: " << e.what() << std::endl;;
        }

    }
    py::finalize_interpreter();
}
