#include <stdio.h>  
 #include <sys/types.h>  
 #include <sys/socket.h>  
 #include <netinet/in.h>  
 #include <netdb.h>  
 #include<string.h>  
 #include<stdlib.h>  
 void error(char *msg)  
 {  
 perror(msg);  
 exit(0);  
 }  
 int main(int argc,char *argv[])  
 {  
 int sockfd,portno,n,newsockfd;  
 struct sockaddr_in serv_addr;  
 struct hostent *server;  
 char buffer[256];  
 if(argc<3)  
 {  
 fprintf(stderr,"usage %s hostname port\n",argv[0]);  
 exit(0);  
 }  
 portno=atoi(argv[2]);  
 sockfd=socket(AF_INET,SOCK_STREAM,0);  
 if(sockfd<0)  
 {  
 error("error opening socket");  
 }  
 server=gethostbyname(argv[1]);  
 if(server==NULL)  
 {  
 fprintf(stderr,"error,no such host\n");  
 exit(0);  
 }  
 bzero((char*)&serv_addr,sizeof(serv_addr));  
 serv_addr.sin_family=AF_INET;  
 bcopy((char*)server->h_addr,(char*)&serv_addr.sin_addr.s_addr,server->h_length);  
 serv_addr.sin_port=htons(portno);  
 if(connect(sockfd,(struct sockaddr *)&serv_addr,sizeof(serv_addr))<0)  
 {  
 error("error connecting");  
 }  
 bzero(buffer,256);  
 printf("client->enter your message: %s ",buffer);  
 while  
 (fgets(buffer,256, stdin) != NULL){  
 n=write(sockfd,buffer,strlen(buffer));  
 if(n<0)  
 {  
 error("error writing to socket");  
 }  
 bzero(buffer,256);  
 n=read(sockfd,buffer,255);  
 if(n<0)  
 {  
 error("error reading rom socket");  
 }  
  else {   
   printf("server: ");   
   fputs(buffer, stdout);   
   printf("\n");   
  }    
  }   
  return 0;     
 }