#pragma once

#include <iostream>
#include <stack>
using namespace std;



class clsUndoRedo
{

private:

    stack <string> _Undo;
    stack <string> _Redo;
    string _value;


public:

    void Set(string Value)
    {
        _Undo.push(_value);
        _value = Value;
    }
    string Get()
    {
        return _value;
    }


    void Undo()
    {
        if (!_Undo.empty())
        {
            _Redo.push(_value);
            _value = _Undo.top();
            _Undo.pop();
        }
    }

    void Redo()
    {
        if (!_Redo.empty())
        {
            _Undo.push(_value);
            _value = _Redo.top();
            _Redo.pop();
        }
    }



};

