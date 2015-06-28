#include <vector>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    cout << "Using new" << endl;
    int size = 5;
    int * array_p = new int[size];
    for (int i = 0; i < size; ++i)
    {
        array_p[i] = i;
    }
    for (int i = 0; i < size; ++i)
    {
        cout << array_p[i] << endl;
    }

    delete [] array_p;
}

int main2(int argc, char ** argv)
{
    cout << "Using vector" << endl;
    int size = 5;
    vector<int> int_array(size, 0);

    for (size_t i = 0; i < int_array.size(); ++i)
    {
        int_array[i] = i;
    }

    for (size_t i = 0; i < int_array.size(); ++i)
    {
        cout << int_array[i] << endl;
    }
}
