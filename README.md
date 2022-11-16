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
1. main.c ----------------------b | Entrance into program
1. shell -----------------------Holds function prototypes
1. use_prompt.c ----------------Handles user input and execution
1. _strcat - -------------------concatenate a string
1. _strcmp.c -------------------comapre two strings for a match
1. _strdup.c -------------------duplicate a string
1. _strcpy----------------------copy a string
1. readline.c-------------------read user input and store it in buffer
1. _cd.c------------------------change directory
1. linked_list_traversal ------add, deletes nodes
1. int_to_str.c ---------------convert int to string
1. _realloc.c -----------------reallocate memory
1. non_iteractive.c -----------handle output outside the shell
1. _exit ----------------------exit shell
1. _strtok.c ------------------pares input command
1. set_env --------------------set environment variables
1. error.c --------------------Print special error messages
1. which.c --------------------appends command to PATHs and returns match from env variables
1. envList --------------------create a linked list of environment variables
1. c_str_tok.c-----------------custom parse
1. free_db_ptr.c --------------free double pointers
1. _execve.c ------------------execute a command  


## Flow chart of shell

![Simple Shell Flowchart](https://drive.google.com/uc?export=view&id=1JJdWZHREv29IiOgF6v43fOx4omJMTslq)

## Arthurs
Elizabeth 
[<img src='https://cdn.jsdelivr.net/npm/simple-icons@3.0.1/icons/twitter.svg' alt='twitter' height='40'>](https://twitter.com/@benonking)
