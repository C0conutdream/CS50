#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


// making sure line argument is correct
int main(int argc, string argv[])
{
    int b ;
    // if this is true there is 2 things entered ./ and k value
    if (argc == 2)
    {
        // if true k is not a digit
        if (isdigit(*argv[1]) != 0)
        {
            // changing string to a int with atoi
            int k = atoi(argv[1]) % 26;
            // get the text from user and print text
            string plain = get_string("plaintext:");
            printf("ciphertext: ");
            // loop to work through each letter
            int n = strlen(plain);

            for (int i = 0 ; i < n; i++)
            {
                if (isalpha(plain[i]))
                {
                    int a = (int)plain[i];
                    if (a < 91)
                    {
                        b = a + k;
                        if (b > 90)
                        {
                          b = b - 26;
                        }
                    }
                    else
                    {
                        b = a + k;
                        {
                            if (b > 122)
                            {
                                 b = b - 26;
                            }
                        }

                        char c = (char)b;
                        printf("%c", c);
                    }
                    else
                    {
                        printf("%c", plain[i]);
                    }
                }
                printf("\n");
            }
            else
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
        // if there is not 2 inputs
        else
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
        return 0 ;
    }




