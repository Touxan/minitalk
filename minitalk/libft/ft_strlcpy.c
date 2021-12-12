#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!src)
		return (i);
	if (dstsize == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (src[i] && (i < dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
