# C - Simple Shell
### Description
In this project we coded from scratch how a simple shell works on a UNIX systemin command line mode
The shell allows one to type a coomand upon which the command will be executed and output given to the user.
This shell looks specific buildin functions e.g: cd , exit,etc and other functionality like memory leaks, running of executables found in environmment variables eg: ls,pwd, echo,which

###Builtins
1- exit exits shell
2- env prints environment variables
3- setenv - creayes or modifies an environment variable if it doesnt exist
4- unsetenv - removes an environment variable
5- changes directory

###Description of files
1. main.c ----------------Entrance into program
2. shell -----------------Holds function prototypes
3. use_prompt.c ----------Handles user input and execution
4. _strcat - -------------concatenate a string
5. _strcmp.c ------------comapre two strings for a match
6. _strdup.c ------------duplicate a string
7. _strcpy----------------copy a string
8. readline.c-------------read user input and store it in buffer
9. _cd.c------------------change directory
10. linked_list_traversal --add, deletes nodes
11. int_to_str.c ----------convert int to string
12. _realloc.c ------------reallocate memory
13. non_iteractive.c -------handle output outside the shell
14. _exit ------------------exit shell
15. set_env.c---------------
16._strtok.c ----------------pares input command
18. set_env -----------------
19.print_error.c .........Pritn special error messages
20.which.c ---------------appends command to PATHs and returns match from env variables
21. envList ------------create a linked list of environment variables
22.c_str_tok.c---------------custom parse 

###Environment
Laguage: C
OS: Ubuntu 20.04 LTS
style guidelines: Betty style
compiler : gcc

### How to compile
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

##Flow chart of shell

![Simple Shell Flowchart](https://drive.google.com/uc?export=view&id=1JJdWZHREv29IiOgF6v43fOx4omJMTslq)

Arthurs
Masereka Benon and Elizabeth Pfachi
