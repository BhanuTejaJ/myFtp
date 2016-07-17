/*
 * TCP/IP File Transfer Server - MyFTP
 * -----------------------------------
 * Version: 1.0
 * Author : Bhanu Teja J
 * Date	  : June 2016
 *
 * Description: 
 */

#include"myFtpSrv.h"


int main(int argc, char * argv[]) 
{
 if(argc != 2)
 {
   printf("\nEnter in this Format: \"");
   printf("%s <listen Port no.>\"\n\n",argv[0]);
   //printCliArguments(argc,argv);
   exit(1);
 }
  
 unsigned int portNo = atoi(argv[1]);
 
 if((!(portNo>0)&&(portNo<65535))) //16 bit Unsigned Int 
 {
   printf("\nError: Invalid Port No., Enter any value b/w 1 to 65535.\n\n");
   exit(2);
 }
 
 printf("\nConnecting...\n");
 printf("Server IP: %u, PORT No:%u\n",htonl(INADDR_ANY),portNo);
 
 



exit(0);
}


// To Print Command Line Arguments
void printCliArguments(int argc, char *argv[])
{
 int i = 0;
 printf("\nArg count argc => %i\n",argc);
 printf("Command line args are \n");

 while(argv[i]!=NULL)
 {
  printf("argv[%i] => %s\n",i,argv[i]);
  i++;
 }
printf("\n");
return;
}
