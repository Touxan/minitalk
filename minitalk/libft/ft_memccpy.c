#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*sorc;

	i = 0;
	dest = (unsigned char *)dst;
	sorc = (unsigned char *)src;
	while (i < n)
	{
		if (sorc[i] == (unsigned char)c)
		{
			dest[i] = sorc[i];
			i++;
			return ((void *)&dest[i]);
		}
		dest[i] = sorc[i];
		i++;
	}
	return (0);
}
