#include "src/ft_printf.h"

int		chk_percent(char *str, int pos)
{
	int i;

	i = pos;
	while (str[++i] != '%' && str[i])
		if (str[i] == 's' || str[i] == 'd')
			return (1);
	if (str[i] == 's' || str[i] == 'd')
			return (1);
	return (0);
}

int		count_args(char *s)
{
	int i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		if(s[i] == '%' && chk_percent(s, i) == 1)
			cnt++;
		i++;
	}
	return (cnt);
}



int		ft_printf(const char *str, ...)
{
	char *s;
	va_list ap;
	int i;
	int g;

	va_start(ap, str);
	i = 0;
	g = count_args((char*)str);
	while (str[i] && i != g)
	{

		s = va_arg(ap, char*);
		ft_putstr(s);
		ft_putstr("\n");
		i++;
	}
	va_end(ap);
	return (0);
}