

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		length;
	char	*copy;

	i = 0;
	length = ft_strlen(s1);
	copy = (char *)malloc(sizeof(char) * (length + 1));
	if (copy)
	{
		while (s1[i])
		{
			copy[i] = s1[i];
			i++;
		}
		copy[i] = '\0';
		return (copy);
	}
	else
		return (NULL);
}
