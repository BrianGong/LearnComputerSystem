// learn_computersystem.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include<stdlib.h>


typedef unsigned int *byte_pointer;
void show_bytes(byte_pointer start, size_t length) {
    size_t i;
    for (i = 0; i < length; i++)
    {
        printf("%.2x ", start[i]);
       
    }
    printf("\n");
}
void show_int(int a) {
    show_bytes((byte_pointer)&a, sizeof(int));
}
void show_float(float a) {
    show_bytes((byte_pointer)&a, sizeof(float));
}
void show_char(char a) {
    show_bytes((byte_pointer)&a, sizeof(char));
}

int main()
{
    int a = 10;
    float b = 10;
    char c = 'q';
    show_int(a);
   /* show_float(b);
    show_char(c);*/
    return 0;
   
}
