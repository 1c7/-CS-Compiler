/*
  2.
  在运行上一个程序的时候, 我们没法用上下左右按键移动光标然后编辑
  只会出现奇怪的字符 D^[[A^[[D^[[B^[[C^C
  这个版本会解决这个问题
*/

#include <stdio.h>  // std io
#include <stdlib.h> // std lib

#include <editline/readline.h>
#include <editline/history.h>

int main (int argc, char** argv){

    puts("Lispy Version 0.0.0.1");
    puts("Press CTRL+C to Exit\n");

    while(1){
    
        char* input = readline("lispy> ");
        
        add_history(input);

        printf("no you'are a %s", input);
        
        free(input);
    }

    return 0;
}
