/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "pali.h"
#include "string.h"

char **pali_1_svc(strpair *argp, struct svc_req *rqstp)
{
        static char * result;
        int i,len,flag=0;
        char str[10];

        len=strlen(argp->a);
         i=0;
         len=len-1;
        strcpy(str,argp->a);

        while(i<=len)
         {         
         if(str[i]!=str[len])          
            {  flag=1;
                 break;}
        else
            {
           flag=0;
            
            }   
         i++;
        len--;
       
        }

       if(flag==1)
        result="no";
   
        else
           result="yes";
    return &result;
}

char **
rev_1_svc(strpair *argp, struct svc_req *rqstp)
{
	static char * result;
       int i,len;
       char str[10];        
   
       len=strlen(argp->a);
         i=0;
         len=len-1;
          //strcpy(str,argp->a);	

        while(len>=0)
        {
          str[i]=argp->a[len];
           i++;
            len--;        
        }
           str[i]='\0';
           strcpy(argp->a,str);

           result=argp->a;

	return &result;
}