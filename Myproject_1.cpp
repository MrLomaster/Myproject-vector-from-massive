#include <iostream>
#include <vector>

using namespace std;

// Функция что бы было удобнее
vector<int> MyCin(vector<int> b)
{
    int buff;

    cin >> buff;
    b.push_back(buff);

    return b;
}

int main()
{
    int n; // Размер вектора
    int* a; // Указатель для создания массива
    int buff = 0; // Для записи

    vector<int> b;

    // Принимаем данные в вектор
    
    for (int i = 0; i < 5; i++)
    {
        cout << "Write numbers: ";  b = MyCin(b);
        system("cls");
    }

    // Делаем массив исходя из размеров вектора
    n = b.size();
    a = new int[n];
    
    // Записываем значения в массив по-очередно
    for (auto i = b.begin(); i != b.end(); i++)
    {
        a[buff] = *i;
        buff++;
    }

    // Выводим значение из МАССИВА
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
    delete[] a;
    // Для красоты
    cin >> buff;
}