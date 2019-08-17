#ifndef CLIENT_H
#define CLIENT_H
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<arpa/inet.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<netdb.h>

int run_client(char* direccion_ip, char* numero_de_puerto);

#endif
