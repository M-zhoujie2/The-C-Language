//
// Created by zhoujie on 2017/12/25.
//

//程序清单11.30 mod_str.c 程序
//mod_str.c -- 修改字符串
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define LIMIT 81
void ToUpper(char *);
int PunctCount(const char *);

int main (void) {
    char line[LIMIT];
    char *find;

    puts("Please enter a line:");
    fgets(line, LIMIT, stdin);
    find = strchr(line, '\n'); //查找换行符
    if (find) //如果地址不是NULL
        *find = '\0'; //用空字符替换
    ToUpper(line);
    puts(line);
    printf("That line has %d punctuation characters.\n", PunctCount(line));
    return EXIT_SUCCESS;
}

void ToUpper (char *str) {
    while (*str) {
        *str = toupper(*str);
        str++;
    }
}

int PunctCount (const char *str) {
    int ct = 0;
    while (*str) {
        if (ispunct(*str))
            ct++;
        str++;
    }
    return ct;
}