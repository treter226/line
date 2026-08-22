#include <stdio.h>

void my_strlen(const char *s) 
{
    int length;

    for (length = 0; s[length] != '\0'; length++)
    {

    }
    printf("длина: %d\n", length);
}

void my_strchr(const char *s)
{
    int character;

    for (character = 0; s[character] != 'r'; character++)
    {
    
    }
    printf("Ваш символ найден на %d-й позиции\n", character + 1);
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
            const char *str = "duralei";
            my_strchr(str);
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


  




    
