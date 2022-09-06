#include "review.h"
#include <iostream>
#include <fstream>
void ReadStdIn(int argc, char* argv[])
{
    std::string myText;

    std::ifstream MyFile (argv[1]);

    while (MyFile >> myText)
    {
        std::cout << myText << std::endl;
    }
    MyFile.close();
}