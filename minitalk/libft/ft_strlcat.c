

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	ldst;
	unsigned int	lsrc;

	i = (unsigned int)ft_strlen(dst);
	j = 0;
	ldst = (unsigned int)ft_strlen(dst);
	lsrc = (unsigned int)ft_strlen(src);
	if (!src)
		return (ldst);
	if (ldst >= dstsize)
		return (dstsize + lsrc);
	if (ldst < dstsize - 1)
	{
		while (src[j] && (ldst + j) < dstsize - 1)
			dst[i++] = src[j++];
		dst[i] = '\0';
	}
	return (lsrc + ldst);
}
