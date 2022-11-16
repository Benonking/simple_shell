# C - Simple Shell

In this project we code a simple shell in C programming lanuage which works on a UNIX system command line. The shell allows one to type a command and where applicable the command will be executed and output given back to the user. If the command is not recognised it will display an error. This shell looks for specific buildt-in functions e.g: cd , exit, etc and other functionalities like memory leaks and running of executables found in environmment variables eg: ls, pwd, echo, which.

## Usage
The files in this repository were all compiled on an Ubuntu 20.04 LTS machine following the [Betty style guidlines](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl) using:
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```
To start the shell simply run: `./shs`.
To exit the shell run: `exit`

## Buitins
* `exit`: Exits shell.
* `env`: Prints environment variables.
* `setenv`: Creates or modifies an environment variable if it doesnt exist.
* `unsetenv`: Removes an environment variable.
* changes directory

## Description of files

| Name of File			| Description							|
| -----------------------------	| ------------------------------------------------------------- |
| main.c			| Entrance into program						|
| shell.c			| Holds function prototypes					|
| use_prompt.c			| Handles user input and execution				|
| _strcat.c			| Concatenate a string						|
| _strcmp.c			| Comapre two strings for a similarity.				|
| _strdup.c			| Duplicate a string.						|
| _strcpy.c			| Copy a string.						|
| readline.c			| Read user input and store it in buffer.			|
| _cd.c				| Change directory.						|
| linked_list_traversal.c	| Add and deletes nodes.					|
| int_to_str.c			| Convert int to string.					|
| _realloc.c			| Reallocate memory.						|
| non_iteractive.c		| Handle output outside the shell.				|
| _exit.c			| Exit shell.							|
| _strtok.c			| Parse input command.						|
| set_env.c			| Set environment variables.					|
| error.c			| Print special error messages.					|
| which.c			| Appends command to PATHs and returns match from env variables.|
| envList.c			| Create a linked list of environment variables.		|
| c_str_tok.c			| Custom parse.							|
| free_db_ptr.c			| Free double pointers.						|
| _execve.c			| Execute a command						|


## Flow chart of shell

![Simple Shell Flowchart](https://drive.google.com/uc?export=view&id=1JJdWZHREv29IiOgF6v43fOx4omJMTslq)

## Arthurs
Elizabeth
[<img src='https://cdn.jsdelivr.net/npm/simple-icons@3.0.1/icons/twitter.svg' alt='twitter' height='40'>](https://twitter.com/@benonking)
