//
// Created by zhoujie on 2017/12/23.
//

//程序清单11.1 strings1.c 程序
//strings1.c
#include <stdio.h>
#include <stdlib.h>
#define MSG "I am a symbolic string constant."
#define MAXLENGTH 81
int main (void) {
    char words[MAXLENGTH] = "I am a string in an array.";
    const char *pt1 = "Something is pointing at me.";
    puts("Here are some strings:");
    puts(MSG);
    puts(words);
    puts(pt1);
    words[8] = 'p';
    puts(words);
    return EXIT_SUCCESS;
}
