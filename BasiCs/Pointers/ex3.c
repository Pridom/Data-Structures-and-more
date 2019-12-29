//
// Created by pc on 2019-12-30.
//

/* Understanding and Using C Pointers by Richard Reese, chapter 1 */

#include <stdio.h>

#define SIZE 7

int main() {
    /* a pointer array */
    char *titles[SIZE] = {"A Tale of Two Cities",
                      "Wuthering Heights",
                      "Don Quixote",
                      "Odessey",
                      "Moby Dick",
                      "Hamlet",
                      "Gulliver's Travels"};

    char **bestBooks[3];
    char **englishBooks[4];

    bestBooks[0] = &titles[0];
    bestBooks[1] = &titles[1];
    bestBooks[2] = &titles[2];

    englishBooks[0] = &titles[0];
    englishBooks[1] = &titles[1];
    englishBooks[2] = &titles[2];
    englishBooks[3] = &titles[3];

    printf("%s \n", *englishBooks[1]); /* prints Wuthering Heights */

    titles[1] = "1984";

    printf("%s \n", *englishBooks[1]); /*prints 1984 since englishBooks 'points' to titles[1] */
}

