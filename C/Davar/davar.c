#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ReturnStuff(char **Str);

int main(void)
{
    char VarInMain[10] = "B";
    char* PointerVarInMain = VarInMain;
    ReturnStuff(&PointerVarInMain);
    printf("%s\n", PointerVarInMain);

    //Free the memory
    free(PointerVarInMain);
    return 0;
}

void ReturnStuff(char **Str)
{
    // Allocate text to the Temp string as per spec
    //char* TempStr[10] = "Davar";

    // Allocate memory to new array (ignore above)
    char* PointerStr = malloc(10 * sizeof(char));
    if (PointerStr == NULL)
    {
        printf("Unable to allocate memory\n");
    }

    //Copy the String to a new allocated 
    strcpy(PointerStr, "Davar");
    
    //Swap the pointer
    *Str = PointerStr;
}
