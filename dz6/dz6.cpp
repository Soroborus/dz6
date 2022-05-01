// dz6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include "func.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Введите размерность массива ";
    int n;
    cin >> n;
    if (n > 0) {
        double* m1 = new double[n];
        int* m2 = new int[n];
        bool checker = 1;
        cout << "Введите массив" << endl;
        for (int i = 0; i < n; i++) {
            cin >> m1[i];
            m2[i] = m1[i];
            if (m1[i] != m2[i]) {
                checker = 0;
            }
        }
       
        cout << endl;
        if (!checker) {
            sort(m1, n);

        }
        else {
            sort(m2, n);

        }
    }
    else {
        cout << "Ошибка";
    }
    return 0;
}

