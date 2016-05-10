#include<stdio.h>

// Declare a buffer for user input
static char input[2048];

int main (int argc, char** argv){

    puts("Lispy Version 0.0.0.1");
    puts("Press CTRL+C to Exit\n");

    while(1){
        fputs("Lispy> ", stdout);
        // fputs 是 puts 的变种，末尾不会输出换行符

        fgets(input, 2048, stdin);
        // 拿到用户输入

        printf("no you'are a %s", input);
    }

    return 0;
}
