#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

struct s_message
{
	char message[140]; // message
	char username[40]; // message + 140
	int	 len_message;  // message + 180
};

void	secret_backdoor(void)
{
	char buffer[128];
	fgets(buffer, 128, stdin);
	system(buffer);
	return;
}

void	set_username(struct s_message *message)
{
	char buffer[128];
	bzero(buffer, 128);
	puts(">: Enter your username");
	printf(">>: ");

	// Read stdin to buffer
	fgets(buffer, 128, stdin);

	// copy buffer to username
	int		i = 0;
	while (i <= 40 && buffer[i] != 0) // off-by-one error
	{
		message->username[i] = buffer[i];
		i++;
	}

	// Print Welcome, <username>
	printf(">: Welcome, %s", message->username);
	return ;
}

void	set_msg(struct s_message *message)
{
	char buffer[1024];
	bzero(buffer, 1024);
	puts(">: Msg @Unix-Dude");
	printf(">>: ");
	fgets(buffer, 1024, stdin);
	strncpy(message->message, buffer, message->len_message);
	return ;
}

void	handle_msg(void)
{
	struct s_message message;
	bzero(message.username, 40);
	message.len_message = 140;
	set_username(&message);
	set_msg(&message);
	puts(">: Msg sent!");
	return ;
}

int	main(void)
{
	puts("--------------------------------------------"\
		 "\n|   ~Welcome to l33t-m$n ~	v1337		|\n"\
		 "--------------------------------------------");
	handle_msg();
	return (0);
}