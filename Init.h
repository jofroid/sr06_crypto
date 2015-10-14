#ifndef INIT_H
#define INIT_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>


class Init
{
    public:


        Init();
        std::string getText()
        {
            return text;
        }

        std::string *splitText(int step);

    protected:
    private:
    std::string text;
};

#endif // INIT_H
