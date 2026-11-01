#include "Stack.h"
#include "utils.h"
#include <iostream>


/*
this function reverses the values in an array using a stack
input: array pointer, array size
output: none
*/
void reverse(int* nums, unsigned int size)
{
    // check if the array is null or has zero or one element
    if (nums == nullptr || size <= 1)
    {
        return;
    }

    Stack s = {};
    initStack(&s); 


    // push all array values onto the stack
    for (int i = 0; i < size; ++i) 
    {
        push(&s, nums[i]);
    }


    // pop the values back into the array in reverse order
    for (int i = 0; i < size; ++i) 
    {
        nums[i] = pop(&s);
    }


    cleanStack(&s);
}
/*
this function reads 10 numbers, reverses them, and returns the array
input: none
output: pointer to the reversed array
*/
int* reverse10() {
    // allocate an array for 10 numbers
    int* arr = new int[10];

    std::cout << "Please enter 10 numbers:" << std::endl;


    // read 10 numbers from the user
    for (int i = 0; i < 10; ++i) 
    {
        std::cin >> arr[i];
    }

    reverse(arr, 10);


    return arr;
}