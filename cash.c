#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)

{
    float dollar ;
    int cent ;

do
{
dollar = get_float ("how much change: \n");
cent = round( dollar * 100);
}
while (dollar <= 0.0 );


int coins = 0;

while (cent >= 25)
{
  coins++ ;
  cent = cent - 25;
}

while (cent >= 10)
{
  coins++ ;
  cent = cent - 10;
}

while (cent >= 5)
{
  coins++ ;
  cent = cent - 5;
}

while (cent >= 1)
{
  coins++ ;
  cent = cent - 1;
}



printf ( "%i\n", coins);

}