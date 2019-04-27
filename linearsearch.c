#include <stdio.h>

/*
 * Eingabe: Ein Integer-Array A mit 20 Einträgen
 * Ausgabe: Die größte Differenz zwischen 2 Zahlen im Array (max(A) - min(A))
 */

int main(void)
{
    // A ist das Array, welches durchsucht wird
    int A[20] = {8, 9, 7, 14, 19, 5, 13, 8, 4, 18, 3, 18, 3, 24, 19, 41, 23, 27, 1, 22};

    int i;  // Counter-Variable wird deklariert
    // weil das Minimum höchstens so groß wie das Element an Position 0 ist, und das
    // Maximum mindestens so groß wie das Element an Position 0 ist, können die min-
    // und die max-Variable auf A[0] gesetzt werden
    int min = A[0];
    int max = A[0];

    for (i=0; i<20; i++){
        if (A[i] < min){
	    // wenn das ArrayElement an Position i kleiner als das
	    // bisherige Minimum ist, aktualisiere das Minimum
	    printf("Found new min %d at index %d\n", A[i], i);
	    min = A[i];
	}
        if (A[i] > max){
	    // wenn das ArrayElement an Position i größer als das
	    // bisherige Maximum ist, aktualisiere das Maximum
	    printf("Found new max %d at index %d\n", A[i], i);
	    max = A[i];
	}
    }

    printf("min(A) = %d\nmax(A) = %d\n", min, max);
    printf("max(A) - min(A) = %d\n", max-min);
    
    return 0;
}
