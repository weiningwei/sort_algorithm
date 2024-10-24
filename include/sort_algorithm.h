#ifndef _SORT_ALGORITHM_H
#define _SORT_ALGORITHM_H

// sort_flag
// 1 升序 默认
// 0 降序

template <typename T>
void sort_swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

// 冒泡排序
template <typename T>
void sort_bubble(T arr[], int length, bool flag = true)
{
    for (int i = 0; i < length - 1; ++i)
    {
        if (flag)
        {
            for (int j = 0; j < length - 1 - i; ++j)
            {
                if (arr[j] > arr[j + 1])
                {
                    sort_swap(arr[j], arr[j + 1]);
                }
            }
        }
        else
        {
            for (int j = length - 1; j > i; --j)
            {
                if (arr[j - 1] < arr[j])
                {
                    sort_swap(arr[j - 1], arr[j]);
                }
            }
        }
    }
}

// 选择排序
template <typename T>
void sort_select(T arr[], int length, bool flag = true)
{
    for (int i = 0; i < length - 1; ++i)
    {
        int k = i;
        if (flag)
        {

            for (int j = i + 1; j < length; ++j)
            {
                if (arr[j] < arr[k])
                {
                    sort_swap(arr[j], arr[k]);
                }
            }
        }
        else
        {
            for (int j = i + 1; j < length; ++j)
            {
                if (arr[j] > arr[k])
                {
                    sort_swap(arr[j], arr[k]);
                }
            }
        }
    }
}

// 插入排序
template <typename T>
void sort_insert(T arr[], int length, bool flag = true)
{
    for (int i = 1; i < length; ++i)
    {
        int base = arr[i];
        int j = i - 1;
        if (flag)
        {
            while (j >= 0 && arr[j] > base)
            {
                arr[j + 1] = arr[j];
                --j;
            }
            arr[j + 1] = base;
        }
        else
        {
            while (j >= 0 && base > arr[j] )
            {
                arr[j + 1] = arr[j];
                --j;
            }
            arr[j + 1] = base;
        }
    }
}

// todo 快速排序
template <typename T>
void sort_quick(T arr[], int length, bool flag = true)
{

}

// todo 归并排序
template <typename T>
void sort_merge(T arr[], int length, bool flag = true)
{

}

#endif
