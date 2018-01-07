//
// Created by zhoujie on 2017/12/25.
//

//程序清单11.32 hello.c 程序
//hello.c -- 把命令行参数转换为数字
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    int i, times;

    if (argc < 2 || (times = atoi(argv[1])) < 1)
        printf("Usage: %s positive-number\n", argv[0]);
    else
        for (i = 0; i < times; i++)
            puts("Hello, good looking!");
    return EXIT_SUCCESS;
}
