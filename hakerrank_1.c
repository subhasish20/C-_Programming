#include <stdio.h>
#include <string.h>

int main() {
    char line1[100], line2[100], line3[100];

    // Taking input for each line
    fgets(line1, sizeof(line1), stdin);
    fgets(line2, sizeof(line2), stdin);
    fgets(line3, sizeof(line3), stdin);


    // Printing the input lines
    printf("%s", line1);
    printf("%s", line2);
    printf("%s", line3);

    return 0;
}
