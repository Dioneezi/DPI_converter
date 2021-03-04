#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float sens = get_float("sens: \n");
    float DPI = get_float("DPI: \n");
    float new_DPI = get_float("New DPI: \n");
    printf("Your sens is %.3f\n", sens * DPI / new_DPI);
}


