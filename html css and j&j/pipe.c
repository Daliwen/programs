#include <sys/stat.h>
#include <stdio.h>

FILE a;
char * file ="./a.txt";

a=open(file, O_WRONLY|O_CREAT|O_TRUNC, S_IRWXU);
fcntl(a, F_GETPIPE_SZ)
