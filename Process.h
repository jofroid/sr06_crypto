#ifndef PROCESS_H
#define PROCESS_H

#include <iostream>
#include <map>

class Process
{
    private:
        std::string text;
        std::map<std::string, int> D1;
        std::map<std::string, int> D2;
        std::map<std::string, int> D3;

    public:
        Process();
        virtual ~Process();

        //Setters


        //Getters
        std::string getText(){return text;}
        std::map<std::string, int> getD1(){return D1;}
        std::map<std::string, int> getD2(){return D2;}
        std::map<std::string, int> getD3(){return D3;}

        //Fonctions de remplissages des maps (Attention aux super noms trouvés ! =D)
        void remplirD1();
        void remplirD2();
        void remplirD3();

    protected:

};

#endif // PROCESS_H
