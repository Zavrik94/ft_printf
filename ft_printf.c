#include "src/ft_printf.h"

int		ft_printf(const char *str, ...)
{
	char *s;
	va_list ap;

	va_start(ap, str);
	s = ft_strdup((char*)str);
	while (1)
	{
		printf("%s\n", s);
		s = va_arg(ap, char*);
		if (s == NULL)
			break;
	}
	va_end(ap);
	return (0);
}