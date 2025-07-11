#include <stdio.h>
#include <string.h>

int main() {
    char name[100];  // Array to store input name
    
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);  // Takes the whole line, including spaces
    
    // Remove the newline character that fgets might leave at the end
    //name[strcspn(name, "\n")] = 0;
    
    printf("Hello\n%s", name);
    
    return 0;
}
