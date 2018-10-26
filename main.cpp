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
    string str;
    cin>>str;
    cout<<sha256(str);
    //cout<<"Hello World"<<endl;
    //cout<<"Programming from my macbook";

    return 0;
}

