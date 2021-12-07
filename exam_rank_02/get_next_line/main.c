#include "get_next_line.h"

int	main(void)
{
	char	*line;

	get_next_line(&line);	// отправляю line по адресу, чтобы работать с оригинальной переменной
	printf("%s\n", line);
	free(line);	// освобождаю line чтобы небыло утечек памяти, но в задании будет свой main
	return (0);
}
