#include <cs50.h>
#include <stdio.h>

void pyramid(int n);

// asks for pyramid height input to execute function
int main(void)
{
    int height = 0;
    // asks for height until it is a int comprised between 1 and 8
    do
    {
        height = get_int("Height: ");
    }
    while (!(height >= 1 && height <= 8));

    pyramid(height);
}

// generates ramp of hashes
void pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        // prints empty spaces
        for (int k = n - i - 2; k >= 0; k--)
        {
            printf(" ");
        }
        // prints ramp
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        // moves one line down
        printf("\n");
    }
}