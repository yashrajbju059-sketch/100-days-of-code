//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/

#include <stdio.h>

int main() {
    FILE *source, *dest;
    char ch;
    char source_file[100], dest_file[100];

    printf("Enter source filename: ");
    scanf("%s", source_file);
    printf("Enter destination filename: ");
    scanf("%s", dest_file);

    source = fopen(source_file, "r");
    if (source == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    dest = fopen(dest_file, "w");
    if (dest == NULL) {
        printf("Error creating destination file!\n");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }

    fclose(source);
    fclose(dest);

    printf("File copied successfully to %s\n", dest_file);

    return 0;
}
