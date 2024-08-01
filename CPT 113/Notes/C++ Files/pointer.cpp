
#include <iostream>

using namespace std;

void pointerRecap();
void arrayPointer();
void shallowCopy();

int main()
{
    pointerRecap();
    arrayPointer();
    shallowCopy();

    return 0;
}

// Recap on how pointers work
void pointerRecap()
{
    int x = 25;
    int *ptr = nullptr;
    cout << "The address of x: " << &x << endl;
    cout << "The value of x: " << x << endl;
    cout << "The size of x: " << sizeof(x) << endl;

    ptr = &x;

    cout << "\nThe address of x: " << ptr << endl;
    cout << "The value of x: " << *ptr << endl; // Dereferencing to print the value pointed by the pointer
    cout << "The size of x: " << sizeof(ptr) << endl;
}

// Relationship between arrays and pointers
// Brackets are necessary considering the precedences
void arrayPointer()
{
    int arr[10] = {1, 2, 3};
    cout << "\narr[0] (contains " << arr[0] << ") is the same as *arr (contains " << *arr << ").\n";
    cout << "arr[1] (contains " << arr[1] << ") is the same as *(arr + 1) (contains " << *(arr + 1) << ").\n";
}

// Shallow copy
void shallowCopy()
{
    int *first = new int[5]; // Original array

    for (int i = 0; i < 5; i++)
    {
        first[i] = i + 1;
    }

    cout << "\nThe original first element of first array is: " << first[0] << endl;

    int *copy = nullptr; // Copy array
    copy = first;

    delete [] copy;
    copy = nullptr;

    cout << "After deleting the copy array, the first element of first array is: " << first[0] << " which is a random number in random location of the memory.\n";

}
