#include <iostream>
#include <boost/array.hpp>

using namespace std; 

// int main()
// {
//     boost::array <int, 4> arr = {{1,2,3,4}};
//     cout<<"hi"<<arr[0]<<endl; 
//     return 0; 
// }

void printArray(const int * array, int count)
{
    for (int ix = 0; ix < count; ix++)
        cout << array[ix] << "   ";
    cout << endl;
}
 
void printArray(const double * array, int count)
{
    for (int ix = 0; ix < count; ix++)
        cout << array[ix] << "   ";
    cout << endl;
}
 
void printArray(const float * array, int count)
{
    for (int ix = 0; ix < count; ix++)
        cout << array[ix] << "   ";
    cout << endl;
}
 
void printArray(const char * array, int count)
{
    for (int ix = 0; ix < count; ix++)
        cout << array[ix] << "   ";
    cout << endl;
}

int main()
{
    char array[5] = {'1','2',3,4,5};
    printArray(array,5);
    return 0;
}