#include "minitalk.h"

static void send_message(int pid, char *str)
{
	int	i;
	int	j;

	i = 0;
	while (1)
	{
		j = 128;
		while (j != 0)
		{
			usleep(100); // usleep pour faire dormi en micro seconde
			if (str[i] & j)
				kill(pid, SIGUSR2); //send the specified signal to the specifed group
			else
				kill(pid, SIGUSR1);
			j /= 2;
		}
		if (str[i] == '\0')
		{
			ft_putstr("Message was sent to server !\n");
			break;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	pid;
	
	if (argc != 3)
		ft_putstr("Use ./clien [PID] [message]\n");
	else
	{
		pid = ft_atoi(argv[1]);
		send_message(pid, argv[2]);
	}
}				
