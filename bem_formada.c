#include <string.h>
#include "pilha.h"

int main () {

    char *seq = "[ ( ) ] [ )";
    Stack *pilha = create_stack(100);
    int i = 0;

    while(seq[i] != '\0') {
        if((seq[i] == '(') || (seq[i] == '['))
        {
            push(pilha, seq[i]);
        }
        else if((seq[i] == ')'))
        {
            if (empty(pilha) || pop(pilha) != '(')
            {
                printf("Mal formada\n");
                exit(1);
            }
        }
        else if((seq[i] == ']'))
        {
            if (empty(pilha) || pop(pilha) != '[')
            {
                printf("Mal formada\n");
                exit(1);
            }
        }
        i++;
    }

    if(empty(pilha))
    {
        printf("Bem formada\n");
    }
    else
    {
        printf("Mal formada\n");
        exit(1);
    }
    return 0;
}





