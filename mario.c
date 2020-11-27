#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
    height = get_int("height of pyrimid:\n");
    }
   while (height < 1 || height > 8);
   if (height > 0 || height < 8)
  {
    for (int row = 0; row < height; row++)
   {
     for (int space = (height - row) ; space > 1; space --)
     {
     printf (" ");
     }
     for (int hash = 0; hash <= row; hash++)
     {
     printf ("#");
     }
    printf ("\n");
} } }