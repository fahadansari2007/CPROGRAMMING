/* NAME: FAHAD ANSARI
UIN :- 251C007
CLASS:- CIVIL
ROLL NO:- 7
DIV:- B */
#include <stdio.h>

int main() {
    int n, i, arr[100], largest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("Largest element = %d\n", largest);
    return 0;
}
