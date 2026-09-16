#include <stdio.h>
#include <string.h>

void print_encoded(int ch) {
    switch (ch) {
        case ' ':  printf("%%20"); 
        break;
        case '!':  printf("%%21"); 
        break;
        case '$':  printf("%%24"); 
        break;
        case '%':  printf("%%25"); 
        break;
        case '(':  printf("%%28"); 
        break;
        case ')':  printf("%%29"); 
        break;
        case '*':  printf("%%2a"); 
        break;
        default:   putchar(ch);   
        break;
    }
}

int main(void) {
    char line[1024];
    while (fgets(line, sizeof(line), stdin)) {
        size_t len = strlen(line);
        if (len > 0 && line[len-1] == '\n') {
            line[len-1] = '\0';
        }
        if (strcmp(line, "#") == 0) {
            break;
        }
        for (int i = 0; line[i] != '\0'; i++) {
            print_encoded(line[i]);
        }
        putchar('\n');
    }
    return 0;
}
