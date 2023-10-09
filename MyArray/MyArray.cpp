#include <iostream>
#include <string>
#include <math.h>
#include <windows.h>
#include <locale.h>
#include <string.h>
#include <typeinfo>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
//#include <cstdlib>
#include <ctype.h>

using namespace std;

class ArrayManager
{
private:
    int** _array;
    int _rows, _cols;

private:
    ArrayManager() {};
    ArrayManager(const int& Rows, const int& Cols, const int& Value) {
        _rows = Rows;
        _cols = Cols;
        for (int i = 0; i < _rows; i++)
        {
            _array[i] = new int[Cols];
        }
        for (int i = 0; i < _rows; i++)
        {
            for (int j = 0; j < _cols; j++)
            {
                _array[i][j] = Value;
            }
        }
    }

    void PrintArr(const int** Arr) {
        for (int i = 0; i < _rows; i++)
        {
            for (int j = 0; j < _cols; j++)
            {
                cout << Arr[i][j] << endl;
            }
            cout << endl;
        }
    }

    void ArrayTranform() {
        for (int i = 0; i < _rows; i++)
        {
            for (int j = 0; j < _cols; j++)
            {
                swap(_array[i][j], _array[j][i]);
            }
        }
        PrintArr(_array);
        for (int i = 0; i < _rows; i++)
        {
            delete[] _array[i];
        }
    }

};


int main()
{

}