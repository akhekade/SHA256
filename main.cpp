/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include "sha256.h"

using namespace std;

int main()
{
    string str;   //Definite String
    cin>>str;     //Accept String Input
    cout<<sha256(str);  //SHA256 for the string
    return 0;
}

