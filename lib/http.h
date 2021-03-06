#ifndef HTTP_H
# define HTTP_H

#include <unistd.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <time.h>
#include <stdarg.h>
#include <syslog.h>
#include <signal.h>
#include <errno.h>
#include <netdb.h>
#include <arpa/inet.h>
#include "err.h"
#include "server.h"
#include "status.h"

#define MAXLINE  1024
#define TIMEBUF  40
#define PATHMAX  255
#define LISTENQ  4096
#define SERVPORT "8080"

#define VERSION "3.0"
#define AUTHOR  "yungkcx"

#define SA struct sockaddr

#endif
