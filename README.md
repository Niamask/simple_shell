# Simple Shell

## Description

The Simple Shell is a simple UNIX command interpreter written entirely in C. The program runs based on bash commands obtained from the input stream by the user. Any text seperated by a single space is considered to be an argument. The respective command typed by the user is then executed as if in a UNIX shell.

## Requirements
- Allowed editors: vi, vim, or emacs
- All files were compiled on Ubuntu 14.04 LTS
- Programs and functions were compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- All files should end with a new line
- Code should use the Betty style. It is checked using betty-style.pl and betty-doc.pl
- No more than 5 functions per file
- All header files should be include guarded
- System calls are only used when needed

## Compilation

```  gcc -Wall -Werror -Wextra -pedantic *.c -o hsh ```

## List of allowed functions and system calls
- access (man 2 access)
- chdir (man 2 chdir)
- close (man 2 close)
- closedir (man 3 closedir)
- execve (man 2 execve)
- exit (man 3 exit)
- _exit (man 2 _exit)
- fflush (man 3 fflush)
- fork (man 2 fork)
- free (man 3 free)
- getcwd (man 3 getcwd)
- getline (man 3 getline)
- getpid (man 2 getpid)
- isatty (man 3 isatty)
- kill (man 2 kill)
- malloc (man 3 malloc)
- open (man 2 open)
- opendir (man 3 opendir)
- perror (man 3 perror)
- read (man 2 read)
- readdir (man 3 readdir)
- signal (man 2 signal)
- stat (__xstat) (man 2 stat)
- lstat (__lxstat) (man 2 lstat)
- fstat (__fxstat) (man 2 fstat)
- strtok (man 3 strtok)
- wait (man 2 wait)
- waitpid (man 2 waitpid)
- wait3 (man 2 wait3)
- wait4 (man 2 wait4)
- write (man 2 write)

## Testing
### Interactive mode:
```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```
### Non-interactive mode:
```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```
## Authors
Niama SKAY
