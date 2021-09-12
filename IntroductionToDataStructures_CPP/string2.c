#include <stdio.h>
#include <string.h>

#define SHOW_SOURCE_CODE
#define SHOW_SOURCE_FILE_PATH

int main(void) {

#ifdef SHOW_SOURCE_CODE
        // We can append this code to any C program
    // such that it prints its source code.

    char c;
    FILE *fp = fopen(__FILE__, "r");

    do
    {
        c = fgetc(fp);
        putchar(c);
    }
    while (c != EOF);

    fclose(fp);
          // We can append this code to any C program
    // such that it prints its source code.

#endif

#ifdef SHOW_SOURCE_FILE_PATH

       // Prints location of C this C code.
   printf("%s \n",__FILE__);

#endif

    // A list to store 3 strings, but no memory for the strings themselves.
    char *strings[10];

    printf("Enter ten lines of code:\n");

    // A line buffer that's sufficiently large.
    // This will be reused.
    char line[4096];
    for ( int i = 0; i < 10; i++) {
        // Read into the large line buffer.
        fgets( line, sizeof(line), stdin );

        // Copy the string into a buffer that's just big enough.
        strings[i] = strdup( line );
    }

    for ( int i = 0; i < 10; i++) {
        printf("Line %d: %s\n", i, strings[i]);
    }

    return 0;
}
