#ifndef papimain_h
#define papimain_h

#include "papi.h"

int main_loop(struct server_info * inf);
void *connection_handler(void *);
void *server_thread(void *);
void bnlisten(struct server_info *);
void clearbuf(char * buf, int size);
int getclinum();

#endif
