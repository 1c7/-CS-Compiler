/*
  3. 
  解决不同平台编译问题
*/

#include <stdio.h>  // std io
#include <stdlib.h> // std lib


/* 如果在 Windows 上那么编译这些函数 */
#ifdef _WIN32
#include <string.h>

static char buffer[2048];

char* readline(char* prompt){
  fputs(prompt, stdout);
  fgets(buffer, 2048, stdin);
  char* cpy = malloc(strlen(buffer)+1);
  strcpy(cpy, buffer);
  cpy[strlen(cpy)-1] = '\0';
  return cpy;
}

void add_history(char* unused){}

/* 否则, 就 include the editline headers */
#else
#include <editline/readline.h>
#include <editline/history.h>
#endif

int main (int argc, char** argv){

    puts("Lispy Version 0.0.0.1");
    puts("Press CTRL+C to Exit\n");

    while(1){
    
        // 现在 readline 肯定管用了
        char* input = readline("lispy> ");
        add_history(input);

        printf("no you'are a %s", input);
        
        free(input);
    }

    return 0;
}
