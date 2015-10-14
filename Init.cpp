#include "Init.h"

using namespace std;
Init::Init()
{
    //ctor
    std::fstream fil("text.txt");
    std::stringstream header_stream;                            //1
    header_stream << fil.rdbuf();                               //2
    this->text = header_stream.str();
}

std::string* Init::splitText(int step)
{

    int length = text.size() - 1;
    int nbPieces = length / step;
    std::string* splitted_text = new std::string[nbPieces];



    for(int i = 0 ; i < nbPieces; ++i)
    {
        splitted_text[i] = text.substr(i * step, step);
    }

    for(int i = 0 ; i < nbPieces ; ++i)
    {
        //std::cout << splitted_text[i] << std::endl;
    }

    return splitted_text;
}

