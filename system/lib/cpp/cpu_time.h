#ifndef time_H
#define time_H
typedef long time_t;
int time(){
    asm("rdtsc");
    asm("shl rdx,32");
    asm("or rax,rdx");
    asm("eax,rdx");
} 
#endif