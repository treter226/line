#include <stdio.h>
int main() 
{
    int choise;

    printf("выбирите фигуру 1 - strlen, 2 - strchr, 3 - strcpy:\n");
    scanf("%d", &choise);

    switch(choise)
    {
    case 1:
    char sentense[] = "treter226";
    int x;

    for (x = 0; sentense[x];) 
    {
    x++;
    }

    printf("в вашем предложении содержится %d символов.\n", x);
    return 0;
    }



  




    
}