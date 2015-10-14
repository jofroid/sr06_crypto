#include <iostream>
#include "Init.h"
#include "Process.h"

using namespace std;

int main()
{
    Init i;
    string* s = i.splitText(3);

    Process p(i.getText(),false);
    //p.remplirD1();
    //p.remplirD2();
    //p.remplirD3();
    p.remplirD4();

    return 0;
}
