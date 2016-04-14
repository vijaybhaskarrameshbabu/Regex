#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<regex.h>


int main()
{
   int i,j;
   char username[300],pass[300]; // For Getting Input
char vijay[300]; //For Passing to perl
char checkusername[300],checkpass[300]; // For Perl Checking

   printf("\nEnter Username:");
   scanf("%s",username);
   printf("\nEnter Password:");
   scanf("%s",pass);

for(i=0,j=0;i<strlen(pass);i++,j++)
   {
      if(pass[i]=='&' || pass[i]=='#' || pass[i]=='<' || pass[i]=='|' || pass[i]=='`' || pass[i]=='~' || pass[i]=='^' || pass[i]=='>' ||
pass[i]==';' || pass[i]=='$' || pass[i]=='.' || pass[i]=='?' || pass[i]=='*' || pass[i]=='+' || pass[i]=='[' || pass[i]=='(' ||
pass[i]==')' || pass[i]=='|' || pass[i]=='\\' ||pass[i]=='{' || pass[i]=='}' || pass[i]=='@' || pass[i]=='/' || pass[i]=='\'' ||
pass[i]=='\"')
      {
         checkpass[j]='\\';
         checkpass[++j]=pass[i];
      }
      else
      {
         checkpass[j]=pass[i];
      }
   }
   checkpass[j]='\0';


   
   for(i=0,j=0;i<strlen(username);i++,j++)
   {
     if(username[i]=='#' || username[i]=='&' || username[i]=='`' || username[i]=='~' || username[i]=='^' || username[i]=='|' || username[i]=='<' ||
username[i]==';' || username[i]=='>' || username[i]=='$' || username[i]=='.' || username[i]=='?' || username[i]=='*' || username[i]=='+' || username[i]=='[' ||
username[i]=='(' || username[i]==')' || username[i]=='\\' || username[i]=='|' || username[i]=='{' || username[i]=='}' || username[i]=='@' || username[i]=='/' ||
username[i]=='\'' || username[i]=='\"')

     {
        checkusername[j]='\\';
        checkusername[++j]=username[i];
     }
     else
     {
        checkusername[j]=username[i];
     }
   }
   checkusername[j]='\0';


   


   //passing control to perl script
   sprintf(vijay,"./perl.pl %s %s",checkusername,checkpass);
   system(vijay);


   return 0;
}
