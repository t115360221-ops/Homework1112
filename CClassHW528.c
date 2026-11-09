#include <stdio.h>

char changeCase(char c){
    if(c >= 'A'&& c <= 'Z'){
        return c + ('a' - 'A');
    }else if(c >= 'a' && c<= 'z'){
        return c - ('a' - 'A');
    }
    return c;
}

int main (){
    char input;
    printf("Enter a charactor: ");
    scanf(" %c", &input);

    char result = changeCase(input);
    printf("Changed case: %c\n", result);
    return 0;
}