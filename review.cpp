#include "review.h"
#include <iostream>
#include <fstream>
void ReadStdIn()
{
    std::string myText;

    std::ifstream MyFile ("T1i.txt");

    while (getline (MyFile, myText))
    {
        std::cout << myText << std::endl;
    }
    MyFile.close();
}