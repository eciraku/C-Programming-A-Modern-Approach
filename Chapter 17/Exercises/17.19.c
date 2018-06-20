#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define NUM_COMMANDS (sizeof(file_cmd) / sizeof(file_cmd[0]))

int read_line(char str[], int n);
void call_function(char *function_call);

void new_cmd(void);
void open_cmd(void);
void close_cmd(void);
void close_all_cmd(void);
void save_cmd(void);
void save_as_cmd(void);
void save_all_cmd(void);
void print_cmd(void);
void exit_cmd(void);

struct {
	char *cmd_name;
	void (*cmd_pointer) (void);
} file_cmd[] = 
 {{"new",		new_cmd},
  {"open",		open_cmd},
  {"close", 	close_cmd},
  {"close all",	close_all_cmd},
  {"save",		save_cmd},
  {"save as", 	save_as_cmd},
  {"save all", 	save_all_cmd},
  {"print",		print_cmd},
  {"exit", 		exit_cmd}};

int main(int argc, char const *argv[])
{
	char command[30];
  	printf("Enter command name: ");
  	read_line(command, 30);

  	call_function(command);

  	return 0;
}

int read_line(char str[], int n)
{
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';
	return i;
}

void call_function(char *function_call)
{
	int i;

	for (i = 0; i < NUM_COMMANDS; i++)
		if (strcmp(function_call, file_cmd[i].cmd_name) == 0)
		{
			(*file_cmd[i].cmd_pointer)();
			return;
		}
}

void new_cmd(void)
{
	printf("New Command!\n");
	return;
}

void open_cmd(void)
{
	printf("Open Command!\n");
	return;
}

void close_cmd(void)
{
	printf("Close Command!\n");
	return;	
}

void close_all_cmd(void)
{
	printf("Close All Command!\n");
	return;
}

void save_cmd(void)
{
	printf("Save Command!\n");
	return;
}

void save_as_cmd(void)
{
	printf("Save As Command!\n");
	return;
}

void save_all_cmd(void)
{
	printf("Save All Command!\n");
	return;
}

void print_cmd(void)
{
	printf("Print Command!\n");
	return;
}

void exit_cmd(void)
{
	printf("Exit Command!\n");
	return;
}
