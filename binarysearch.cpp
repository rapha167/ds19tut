#include <iostream>

using namespace std;

int binarySearch(int* array, int target, int left, int right, int callCounter)
{
    int mid = (left + right + 1) / 2;
    int midElem = *(array + mid);

    cout << "Call " << callCounter++ << ": left=" << left << " right=" << right << endl;

    if (midElem == target){
        return mid;
    }
    else if (mid == left){
        return -1;
    }
    
    if (midElem < target){
        return binarySearch(array, target, mid+1, right, callCounter);
    }
    else {
        return binarySearch(array, target, left, mid-1, callCounter);
    }
}

int main(void)
{
    int A[16] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};
    int target = 31;

    cout << "A = [" << A[0];
    for (int i=1; i<size; i++){
        cout << " " << A[i];
    } 
    cout << "]" << endl;

    int indexFound = binarySearch(A, target, 0, 15, 0);
    if (indexFound >= 0){
        cout << "Target " << target << " found at index " << indexFound << "." << endl;
    }
    else {
        cout << "Target " << target << " not found." << endl;
    }

    return 0;
}

