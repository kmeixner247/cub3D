#include "cube3d.h"

#ifdef AUDIO

void play_audio(char *audio)
{
	int		pid;
	char	**argv;

	argv = ft_calloc(3, sizeof(char *));
	argv[0] = ft_strdup("afplay");
	argv[1] = ft_strdup(audio);
	pid = fork();
	if (!pid)
	{
		execve("/usr/bin/afplay", argv, NULL);
		exit(0);
	}
	free(argv[0]);
	free(argv[1]);
	free(argv);
}

void end_audio(void)
{
	int		pid;
	char	**argv;

	argv = ft_calloc(3, sizeof(char *));
	argv[0] = ft_strdup("killall");
	argv[1] = ft_strdup("afplay");
	pid = fork();
	if (!pid)
	{
		execve("/usr/bin/killall", argv, NULL);
		exit(0);
	}
	free(argv[0]);
	free(argv[1]);
	free(argv);
}

#else

void play_audio(char *audio)
{
	(void) audio;
}

void end_audio(void)
{
}
#endif