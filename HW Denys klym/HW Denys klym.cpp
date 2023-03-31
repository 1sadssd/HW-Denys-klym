#include <iostream>
#include <vector>
#include<Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    vector<vector<short>> matrix = 
    {
        { 1, 2, 3, 4, 5},
        { 2, 2, 3, 1, 5 },
        { 3, 3, 3, 2, 5 },
        { 4, 1, 2, 4, 5 },
        { 5, 5, 5, 5, 5 }
    };

    bool is_symmetric = true;
    for (int i = 0; i < matrix.size(); i++) 
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            if (matrix[i][j] != matrix[j][i]) 
            {
                is_symmetric = false;
                break;
            }
        }
        if (!is_symmetric) 
        {
            break;
        }
    }

    if (is_symmetric) 
    {
        cout << "Матриця - є симетричною" << endl;
    }
    else 
    {
        cout << "Матриця - не є симетричною" << endl;
    }

    return 0;
}
