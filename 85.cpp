#include <stdio.h>
#include <string.h>

struct Book {
    char title[100];
    char author[100];
    int price;
};

void readBookInfo(struct Book *book) {
    printf("Enter book title: ");
    fgets(book->title, 100, stdin);
    book->title[strcspn(book->title, "\n")] = '\0'; // Remove trailing newline

    printf("Enter author name: ");
    fgets(book->author, 100, stdin);
    book->author[strcspn(book->author, "\n")] = '\0'; // Remove trailing newline

    printf("Enter book price: ");
    scanf("%d", &book->price);
}

void displayBookInfo(struct Book *book) {
    printf("\nBook Information:\n");
    printf("Title: %s\n", book->title);
    printf("Author: %s\n", book->author);
    printf("Price: %d\n", book->price);
}

int main() {
    struct Book book;

    readBookInfo(&book);
    displayBookInfo(&book);

    return 0;
}
