#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
    int id;
    char name[10];
    char add[10];
    int phone;
};
int login()
{

   char ch;
   char userid[10];
   char pass[10];
   int i=0,j,k;
   printf("enter the userid\n");
   scanf("%s",&userid);
   printf("enter the password\n");
   while(ch !='\r')
   {
       ch=getch();
       printf("*");
       pass[i]=ch;
       if(i==9)
       {
           break;
       }
       i++;
   }
   pass[i]='\0';
   //printf("block%s",pass);
j=strcmp(userid,"1234");
//k=strcmp(pass,"1234");
printf("%d",j);
if(j==0)
{
return(1);
}
else
{
    return(0);
}
}

int process()
{
    int ch2,x,search;
    static struct student s[1];
    while(1)
    {
        printf("STUDENT MANAGEMENT SYSTEM\n");
        printf("press 1 for adding record\n");
        printf("press 2 for searching record\n");
        printf("press 3 for editing record\n");
        printf("press 4 for display all record\n");
        printf("enter your choice\n");
        scanf("%d",&ch2);
        if(ch2==1)
        {
            printf("ADDING RECORD\n");
                printf("enter the number of records to be added\n");
                scanf("%d",&s);
            for(int i=0;i<1;i++)
            {
            printf("enter the id of student\n");
            scanf("%d",&s[i].id);
            printf("enter name of student\n");
            scanf("%s",&s[i].name);
            printf("enter the address of student\n");
            scanf("%s",&s[i].add);
            printf("enter the phone number of student\n");
            scanf("%d",&s[i].phone);
            }
        }
        else
        if(ch2==2)
        {
            printf("SEARCHING RECORD\n");
           printf("enter the id number for the record to be searched\n");
           scanf("%d",&search);
           for(int i=0;i<=1;i++)
           {
               printf("%d\n",x);
               printf("id %d\n",s[i].id);
               if(search==s[i].id)
               {
                   printf("NAME OF STUDENT IS%s",s[i].name);
                   printf("ADDRESS OF STUDENT IS%s",s[i].add);
                   printf("PHONE NUMBER=%d",s[i].phone);
                   break;
               }
               else
               {
                   printf("the record for this id does not exists\n");
               }
           }
        }
        else
        if(ch2==3)
        {

            printf("EDITING RECORD\n");
            printf("enter the ID to edit data\n");
            scanf("%d",&x);
            for(int i=0;i<=1;i++)
            {
                if(x==s[i].id)
               {
                   printf("enter the name\n");
                   scanf("%s",&s[i].name);
                   printf("enter the adress\n");
                   scanf("%s",&s[i].add);
                   printf("enter the phone number\n");
                   scanf("%d",&s[i].phone);
                   break;
               }
               else
               {
                   printf("the record for this id does not exists\n");
               }
            }
        }
        else
            if(ch2==4)
        {
            printf("ALL RECORDS ARE AS FOLLOWS\n");
            for(int i=0;i<=1;i++)
            {
                printf("name of the student%s\n",s[i].name);
                printf("address of the students %s\n",s[i].add);
                printf("phone number of the student%d\n",s[i].phone);

            }
        }
        else
        {
            break;
        }

    }
}
void main()
{
  int i=login();
  printf("%d",i);
  if(i==1)
  {
      printf("\nlogin successful\n");
      printf("\n");

      process();
  }
  else
  {
      printf("re-login\n");
      getch();
      login();
  }

}

