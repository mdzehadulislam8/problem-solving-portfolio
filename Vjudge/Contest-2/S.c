
#include <stdio.h>


int get_index(char ch) {
    return ch - 'A';
}

// Function to get circular distance between two points
int get_distance(int a, int b) {
    int diff = a - b;
    if (diff < 0) diff = -diff;

    if (diff > 2) diff = 5 - diff;

    return diff;
}

int main() {
    char s1, s2, t1, t2;


    scanf(" %c%c", &s1, &s2);
    scanf(" %c%c", &t1, &t2);


    int i1 = get_index(s1);
    int i2 = get_index(s2);
    int j1 = get_index(t1);
    int j2 = get_index(t2);


    int d1 = get_distance(i1, i2);
    int d2 = get_distance(j1, j2);


    if (d1 == d2) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
