#include "Init.h"

Init::Init()
{
    //ctor
    std::fstream fil("text.txt");
    std::stringstream header_stream;                            //1
    header_stream << fil.rdbuf();                               //2
    cleanFile();
    // process the header, for example
    this->text = header_stream.str();
}

Init::~Init()
{
    //dtor
}


