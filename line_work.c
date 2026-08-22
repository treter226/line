#include <stdio.h>

void my_strlen(const char *s) 
{
    int length;
    for (length = 0; s[length] != '\0'; length++)
    {

    }
    printf("длина: %d\n", length);
}

int main() 
{
    int choice;

    printf("выберите фигуру 1 - strlen, 2 - strchr, 3 - strcpy:\n");
    scanf("%d", &choice);

    switch (choice) 
    {
        case 1: 
        {
            const char *str = "tupoi";
            my_strlen(str);
            break;
        }
        case 2:
        {
            printf("strchr пока не делал\n");
            break;
        }
        case 3:
        {
            printf("strcpy пока не делал\n");
            break;
        }
        default:
        {
            printf("неверный выбор\n");
            break;
        }
    }

    return 0;
}


  




    
