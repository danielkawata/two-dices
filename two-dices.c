//
//  Two Dices using multi-dimensional array (3D array)
//  two-dices.c
//
//
//  Created by Daniel Kawata on 2018-02-18.
//  Copyright © 2018 Daniel Kawata. All rights reserved.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void diceRoller(int dice1, int dice2);
void flushKeyboard(void);

int main(void) {
    char option = 'Y';
    while (option == 'y' || option == 'Y') {
        printf("\n***** Two Dices *****\n\n");
        srand(time(NULL));
        diceRoller(1 + rand() % 6, 1 + rand() % 6);
        printf("\nDo you want to play again? (y or n): ");
        scanf("%c", &option);
        flushKeyboard();
    }
    return 0;
}

void diceRoller(int dice1, int dice2) {
    int i, j;
    char diceSide[6][5][9] = {
        {
            { '*',' ','*',' ','*',' ','*',' ','*' },
            { '*',' ',' ',' ',' ',' ',' ',' ','*' },
            { '*',' ',' ',' ','@',' ',' ',' ','*' },
            { '*',' ',' ',' ',' ',' ',' ',' ','*' },
            { '*',' ','*',' ','*',' ','*',' ','*' }
        },
        {
            { '*',' ','*',' ','*',' ','*',' ','*' },
            { '*',' ',' ','@',' ',' ',' ',' ','*' },
            { '*',' ',' ',' ',' ',' ',' ',' ','*' },
            { '*',' ',' ',' ',' ','@',' ',' ','*' },
            { '*',' ','*',' ','*',' ','*',' ','*' }
        },
        {
            { '*',' ','*',' ','*',' ','*',' ','*' },
            { '*',' ',' ','@',' ',' ',' ',' ','*' },
            { '*',' ',' ',' ','@',' ',' ',' ','*' },
            { '*',' ',' ',' ',' ','@',' ',' ','*' },
            { '*',' ','*',' ','*',' ','*',' ','*' }
        },
        {
            { '*',' ','*',' ','*',' ','*',' ','*' },
            { '*',' ',' ','@',' ','@',' ',' ','*' },
            { '*',' ',' ',' ',' ',' ',' ',' ','*' },
            { '*',' ',' ','@',' ','@',' ',' ','*' },
            { '*',' ','*',' ','*',' ','*',' ','*' }
        },
        {
            { '*',' ','*',' ','*',' ','*',' ','*' },
            { '*',' ',' ','@',' ','@',' ',' ','*' },
            { '*',' ',' ',' ','@',' ',' ',' ','*' },
            { '*',' ',' ','@',' ','@',' ',' ','*' },
            { '*',' ','*',' ','*',' ','*',' ','*' }
        },
        {
            { '*',' ','*',' ','*',' ','*',' ','*' },
            { '*',' ',' ','@',' ','@',' ',' ','*' },
            { '*',' ',' ','@',' ','@',' ',' ','*' },
            { '*',' ',' ','@',' ','@',' ',' ','*' },
            { '*',' ','*',' ','*',' ','*',' ','*' }
        }
    };
    //Algorithm to print 2 sides of dices
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 9; j++) {
            printf("%c", diceSide[dice1 - 1][i][j]);
        }
        printf("\t");
        for (j = 0; j < 9; j++) {
            printf("%c", diceSide[dice2 - 1][i][j]);
        }
        printf("\n");
    }
}

//Flush keyboard function
void flushKeyboard(void) {
    char newline;
    do {
        scanf("%c", &newline);
    } while (newline != '\n');
}
