#include <iostream> 

void Print(int* array, int a) // вывод массива на экран
{
    for (int i = 0; i < a; i++) 
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void Sum(int* array, int a, int b) // вывод пар на экран
{
    for (int i = 0; i < a - 1; i++) 
    {
        for (int j = i + 1; j < a; j++) 
        {
            if (array[i] + array[j] == b) 
            {
                std::cout << "Pair: " << array[i] << " and " << array[j] << std::endl;
            }
        }
    }
}


int main() 
{
    int a;
    std::cout << "Enter the size of the array: ";
    std::cin >> a;

    int* array = new int[a];

    std::srand(std::time(nullptr));

    for (int i = 0; i < a; i++) 
    {
        array[i] = rand() % 50 + 1;
    }

    std::cout << "Array: ";
    Print(array, a);

    int b;
    std::cout << "Enter a sum: ";
    std::cin >> b;

    Sum(array,a,b);

    delete[] array;
    return 0;
}