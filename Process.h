#ifndef PROCESS_H
#define PROCESS_H

#include <iostream>
#include <map>
#include <string>
#include <sstream>
class Process
{
    private:
        std::string text;
        std::map<char, int> D1;
        std::map<std::string, int> D2;
        std::map<std::string, int> D3;

    public:
        Process(std::string t, bool fill_in);//fill_in = true for pre filled in maps
        //Setters


        //Getters
        std::string getText(){return text;}
        std::map<char, int> getD1(){return D1;}
        std::map<std::string, int> getD2(){return D2;}
        std::map<std::string, int> getD3(){return D3;}

        //Fonctions de remplissages des maps
        void remplirD1();
        void remplirD2();
        void remplirD3();


};

#endif // PROCESS_H
