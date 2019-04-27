#include <iostream>

using namespace std;

int main(void)
{
    int i;
    int A[20] = {8, 9, 7, 14, 19, 5, 13, 8, 4, 18, 3, 18, 3, 24, 19, 41, 23, 27, 1, 22};

    int min = A[0];
    int max = A[0];

    for (i=0; i<20; i++){
        if (A[i] < min){
	    cout << "(i=" << i << ") found new min: " << A[i] << endl;
	    min = A[i];
	}
	if (A[i] > max){
	    cout << "(i=" << i << ") found new max: " << A[i] << endl;
	    max = A[i];
	}
    }

    cout << endl;
    cout << "min(A) = " << min << endl;
    cout << "max(A) = " << max << endl;

    cout << "max(A) - min(A) = " << max - min << endl;

    return 0;
}
