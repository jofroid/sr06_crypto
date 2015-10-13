#include <iostream>
#include "Init.h"
#include "Process.h"

using namespace std;

int main()
{
    Init i;
    Process p(i.getText(),false);
    //p.remplirD1();
    //p.remplirD2();
    p.remplirD3();

    return 0;
}
