#include <stdio.h>

#define is_digit(value) (48 <= value && value <= 57)
#define is_hex(value) (is_digit(value) || (65 <= value && value <= 70) || (97 <= value && value <= 102)) ? ("True") : ("False")

int checkValue();

int main()
{
    checkValue();
    return 0;
}

int checkValue()
{
    int value = 0;
    printf("Enter a value : ");
    scanf("%s", &value);
    printf("%s", is_hex(value));
    return 0;
}
