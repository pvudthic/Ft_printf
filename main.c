#include "ft_printf.h"

int	main(void)
{
	//char	str[100] = "Phanuwat";
	//int		n = -123123443;

	////my ft_printf////
	printf("->my_printf : %d\n", ft_printf("NULL %s NULL", NULL));
	//printf("->my_printf : %d\n", ft_printf("\001\002\007\v\010\f\r\n"));
	////////////////////

	////or ft_printf////
	//printf("->my_printf : %d\n", ft_printf("%p", str));
	//printf("->or_printf : %d\n", printf("NULL %s NULL", NULL));
	////////////////////
	printf("\n\n");
	return (0);
}
