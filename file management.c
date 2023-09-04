#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void createFile(char *fileName) {
    FILE *file = fopen(fileName, "w");
    if (file == NULL) {
        printf("Error creating file.\n");
    } else {
        printf("File '%s' created successfully.\n", fileName);
        fclose(file);
    }
}

void deleteFile(char *fileName) {
    if (remove(fileName) == 0) {
        printf("File '%s' deleted successfully.\n", fileName);
    } else {
        printf("Error deleting file.\n");
    }
}

void copyFile(char *srcFileName, char *destFileName) {
    FILE *srcFile = fopen(srcFileName, "rb");
    FILE *destFile = fopen(destFileName, "wb");

    if (srcFile == NULL || destFile == NULL) {
        printf("Error copying file.\n");
        return;
    }

    int ch;
    while ((ch = fgetc(srcFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File '%s' copied to '%s' successfully.\n", srcFileName, destFileName);

    fclose(srcFile);
    fclose(destFile);
}

void moveFile(char *srcFileName, char *destFileName) {
    if (rename(srcFileName, destFileName) == 0) {
        printf("File '%s' moved to '%s' successfully.\n", srcFileName, destFileName);
    } else {
        printf("Error moving file.\n");
    }
}

int main() {
    int choice;
    char fileName[100], destFileName[100];

    while (1) {
        printf("File Management Program\n");
        printf("1. Create File\n");
        printf("2. Delete File\n");
        printf("3. Copy File\n");
        printf("4. Move File\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter file name: ");
                scanf("%s", fileName);
                createFile(fileName);
                break;
            case 2:
                printf("Enter file name to delete: ");
                scanf("%s", fileName);
                deleteFile(fileName);
                break;
            case 3:
                printf("Enter source file name: ");
                scanf("%s", fileName);
                printf("Enter destination file name: ");
                scanf("%s", destFileName);
                copyFile(fileName, destFileName);
                break;
            case 4:
                printf("Enter source file name: ");
                scanf("%s", fileName);
                printf("Enter destination file name: ");
                scanf("%s", destFileName);
                moveFile(fileName, destFileName);
                break;
            case 5:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
