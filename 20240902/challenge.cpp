#include <iostream>
#include <vector>
#include <string>

int *apply_all(int *arr1, int size1, int *arr2, int size2);
void print_arr(int *arr, int size);
int main()
{
    int array1[]{1, 2, 3, 4, 5};
    int array2[]{10, 20, 30};
    const int size1{std::size(array1)};
    const int size2{std::size(array2)};

    std::cout << "Array 1: ";
    print_arr(array1, size1);
    std::cout << "Array 2: ";
    print_arr(array2, size2);
    int *result = apply_all(array1, size1, array2, size2);
    std::cout << "Result array: ";
    print_arr(result, size1 * size2);

    return 0;
}

int *apply_all(int *arr1, int size1, int *arr2, int size2)
{
    int *result = new int[size1 * size2];
    int index{0};
    for (int i{}; i < size2; i++)
    {
        for (int k{}; k < size1; k++)
        {
            result[index] = arr2[i] * arr1[k];
            index++;
        }
    }

    return result;
}
void print_arr(int *arr, int size)
{
    std::cout << "[ ";
    for (int i{}; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "]" << std::endl;
}
