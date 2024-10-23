#include "sort_algorithm.h"
#include <iostream>

template<typename T>
void print_arr(T arr[], int length)
{
    for (int i = 0; i < length; ++i)
        std::cout << arr[i] << ' ';
    std::cout << std::endl;
}

int main()
{
    int arr[] = {61, 17, 29, 22, 34, 60, 72, 21, 50, 1, 62};
    int len = (int)sizeof(arr) / sizeof(*arr);

#if 0
    sort_bubble(arr, len);
    print_arr(arr, len);

    sort_bubble(arr, len, false);
    print_arr(arr, len);
#endif

    sort_select(arr, len);
    print_arr(arr, len);

    sort_select(arr, len, false);
    print_arr(arr, len);
    
    return 0;
}