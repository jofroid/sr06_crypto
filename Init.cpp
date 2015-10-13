#include "Init.h"
Init::Init()
{
    //ctor
    std::fstream fil("text.txt");
    std::stringstream header_stream;                            //1
    header_stream << fil.rdbuf();                               //2
    this->text = header_stream.str();
}

