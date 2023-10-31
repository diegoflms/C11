#include <stdio.h>
#include <string.h>

void print_reverse(char *s) {
    size_t len = strlen(s); // 5
    char *t = s + len - 1;
    while (t >= s) {
        printf("%c", *t);
        t--;
    }
    puts("");
}

int main() {
    char d[6] = "diego";
    print_reverse(d);
    return 0;
}