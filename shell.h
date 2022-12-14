#ifndef SIMPLE_SHELL
#define SIMPLE_SHELL
#include <stdlib.h>/*malloc(), free()*/
#include <sys/types.h>
#include <sys/stat.h>
#include <signal.h>
#include <dirent.h>
#include <wait.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

/**
 * struct list - linked list for environment varialbles
 * @env_var_str: holds environment variables string
 * @next: points to next node
 *
 */

typedef struct list
{
	char *env_var_str;
	struct list *next;
} list_t;

/*readline*/
size_t get_line(char **str);
/*write to stdin*/
void printstr(char *string, int stream);
/*TOKENIze*/
int t_strlen(char *str, int pos, char delm);
int t_size(char *str, char delm);
char **_str_tok(char *str, char *delm);
char *ignore_delm(char *str, char delm);
/*memory allocation */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
/*user prompt*/
void ctrl_D(int i, char *command, list_t *env);
void ctrl_c(int n);
int built_in(char **token, list_t *env, int num, char **command);
int prompt(char **en);
/*Exit*/
int c_atoi(char *s);
int __exit(char **str, list_t *env, int num, char **command);
/*cd*/
int _cd(char **str, list_t *env, int num);
char *c_strcat(char *dest, char *src);
int cd_execute(list_t *env, char *current, char *dir, char *str, int num);
void cd_only(list_t *env, char *current);
int c_setenv(list_t **env, char *name, char *dir);

int _execve(char **s, list_t *env, int num);
void c_exit(char **str, list_t *env);

/*non _iteractive mode */
void non_interactive(list_t *env);
void free_double_ptr(char **str);
char *c_ignore(char *str);
/*environment variables*/
list_t *env_linked_list(char **env);
int _env(char **str, list_t *env);

list_t *add_end_node(list_t **head, char *str);
size_t print_list(list_t *h);
int delete_nodeint_at_index(list_t **head, int index);
void free_linked_list(list_t *list);

int find_env(list_t *env, char *str);
int _unsetenv(list_t **env, char **str);
int _setenv(list_t **env, char **str);

char *get_env(char *str, list_t *env);
char *c_strdup(char *str, int cs);

void illegal_number(char *str, int c_n, list_t *env);
void cant_cd_to(char *str, int c_n, list_t *env);
void not_found(char *str, int c_n, list_t *env);

/*helper functions*/
int _strspn(char *str1, char *str2);
char *_strcat(char *destinatiom, char *source);
char *_strcpy(char *source, char *dest);
int _strcmp(char *first, char *second);
char *int_to_string(int number);
char *_strdup(char *str);
char *_which(char *str, list_t *env);
char **c_str_tok(char *str, char *delm);
int c_t_size(char *str, char delm);
#endif
