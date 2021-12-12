#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *src, size_t n)
{
	unsigned long	i;
	unsigned char	*c;

	i = 0;
	c = (unsigned char *)dst;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		c[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (c);
}
