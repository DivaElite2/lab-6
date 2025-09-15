#include <iostream>
using namespace std;

// Function to receive a dynamic double array to populate with data
void enterArrayData(double* arr, int size) {
    cout << "Enter " << size << "double values:"<<endl;
    for(int i = 0; i < size; i++) {
        cout <<"Value " << i+1 <<": ";
    }
}

void outputArrayData (double* arr, int size) {
    cout<<"Array Contents: ";
    for(int i = 0; i < size; i++) {
        cout << *(arr + i) <<" ";
    }
    cout<<endl;
}

//function to calculate and return the sum of array
double sumArray(double* arr, int size) {
    double sum = 0.0;
    for(int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
     return sum;
}


int main()
{
    const int SIZE = 5;
   double* arr = new double[SIZE];

   //Call functions to populate output, and sum the array
   enterArrayData(arr, SIZE);
   outputArrayData(arr, SIZE);

   double total = sumArray(arr, SIZE);
   cout << "Sum of Array elements: " <<total <<endl;

   delete[] arr;

    return 0;
}


