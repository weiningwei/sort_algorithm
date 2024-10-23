#include "sort_algorithm.h"
#include <iostream>

template<typename T>
void print_arr(T arr[], int length)
{
    for (int i = 0; i < length; ++i)
        std::cout << arr[i] << ' ';
    std::cout << std::endl;
}

    int arr[] = {61, 17, 29, 22, 34, 60, 72, 21, 50, 1, 62};
    int len = (int)sizeof(arr) / sizeof(*arr);

void test_sort_bubble()
{
    sort_bubble(arr, len);
    print_arr(arr, len);

    sort_bubble(arr, len, false);
    print_arr(arr, len);
}

void test_sort_select()
{
    sort_select(arr, len);
    print_arr(arr, len);

    sort_select(arr, len, false);
    print_arr(arr, len);
}

void test_sort_insert()
{
    std::cout << "original:\n";
    print_arr(arr, len);

    sort_insert(arr, len);
    std::cout << "big:\n";
    print_arr(arr, len);

    std::cout << "small:\n";
    sort_insert(arr, len, false);
    print_arr(arr, len);
}

void test_sort_quick()
{
    std::cout << "original:\n";
    print_arr(arr, len);

    sort_quick(arr, len);
    std::cout << "big:\n";
    print_arr(arr, len);

    std::cout << "small:\n";
    sort_quick(arr, len, false);
    print_arr(arr, len);
}

int main()
{
    // todo
    // test_sort_bubble();
    // test_sort_select();
    // test_sort_insert();
    test_sort_quick();


    return 0;
}