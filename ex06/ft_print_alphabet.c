#include <unistd.h>

void	ft_print_alphabet()
{
	char i;

	i = 'a';
	while(i < 'z' + 1)
	{
		write(1,&i,1);
		i++;
	}
}

int	main(void)
{
	ft_print_alphabet();
}
