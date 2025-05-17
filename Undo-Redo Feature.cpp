// Undo-Redo Feature.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "clsUndoRedo.h"
using namespace std;

int main()
{
    clsUndoRedo Str;

    Str.Set("abc");
    Str.Set("def");
    Str.Set("ghi");
    Str.Set("jkl");
    Str.Set("mno");

    cout << Str.Get() << endl;

    Str.Undo();
    Str.Undo();
    Str.Undo();

    cout << Str.Get() << endl;

    Str.Redo();
    Str.Redo();

    cout << Str.Get() << endl;
    
}


