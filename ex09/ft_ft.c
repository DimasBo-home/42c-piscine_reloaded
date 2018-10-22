#include <unistd.h>
#include <stdio.h>

void ft_ft(int *nbr)
{
	*nbr = 42;	
}

int main(void)
{
	int k;
	k=5;

	printf("%d\n",k);
	ft_ft(&k);
	printf("%d",k);

	return (0);
}
