#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

long zmiana(string nazwa)
{
    ifstream a;
    ofstream b;
    
    
    string l1, l2;
    char* endptr;
    int system;
    a.open("a.txt");
    b.open("b.txt");
    if(a.good())
    while(!a.eof())
    {
       a>>system >> l1;
        l2 = strtol(l1.c_str(), &endptr, system);
        cout<<l2<<endl;
        b<<l2<<endl;
    }
   a.close();
   b.close();
    return 0;
}
int main(int argc, char** argv) 
{
    zmiana("a.txt");
return 0;
}
