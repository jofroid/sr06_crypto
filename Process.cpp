#include "Process.h"
using namespace std;


#include <string>


Process::Process(string t, bool fill_in)
{
    //members init
    text = t;
    if(fill_in == true)
    {
        //fill D1 keys in
        char key = 'a';
        for(int i  = 0 ; i < 26 ; ++i)
        {
            D1[key] = 0 ;
            key++;
        }

        string key2 = "aa";
        //fill D2 keys in
        for(int i  = 0 ; i < 26 ; ++i)
        {
            for(int j = 0 ; j < 26 ; ++j)
            {
               // cout << key2<< endl;
                D2[key2] = 0;
                key2[1]++;

            }
            key2[0]++;
            key2[1]='a';
        }

         string key3 = "aaa";
        //fill D3 keys in
        for(int i  = 0 ; i < 26 ; ++i)
        {
            for(int j = 0 ; j < 26 ; ++j)
            {
               for(int k = 0 ; k < 26; ++k)
               {
                    cout << key3 <<endl;
                    D3[key3] = 0;
                    key3[2]++;

               }
                key3[1]++;
                key3[2]='a';
            }
            key3[0]++;
            key3[1]='a';
        }
    }
}

void Process::remplirD1()
{
    int length  = text.size() - 1;
    for(int i = 0 ; i < length; ++i)
    {
        D1[text[i]]++;
    }

    map<char, int>::iterator it;

    //Problem wrong character at first position
    for(it=D1.begin(); it!=D1.end() ; ++it)
    {
        cout << it->first << endl;
        cout << it->second << endl;
    }
}

void Process::remplirD2()
{
    int length  = text.size() - 1;
    for(int i = 0 ; i < length - 1; ++i)
    {
        stringstream ss;
        string s;
        char c = text[i];
        ss << c;
        c = text[i + 1];
        ss << c;
        ss >> s;
        cout << s << endl;
        D2[s]++;
    }
     map<string, int>::iterator it;


    for(it=D2.begin(); it!=D2.end() ; ++it)
    {
        cout << it->first << endl;
        cout << it->second << endl;
    }
}

void Process::remplirD3()
{
    int length  = text.size() -1;
    for(int i = 0 ; i < length - 2; ++i)
    {
        stringstream ss;
        string s;
        char c = text[i];
        ss << c;
        c = text[i + 1];
        ss << c;
        c = text[i + 2];
        ss << c;
        ss >> s;
        D3[s]++;
    }
     map<string, int>::iterator it;


    for(it=D3.begin(); it!=D3.end() ; ++it)
    {
        cout << it->first << endl;
        cout << it->second << endl;
    }
}
