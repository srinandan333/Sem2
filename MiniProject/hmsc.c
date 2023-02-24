#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<windows.h>

void add();
void list();
void info();
void edit();
void search();
void delete();
int login();
int registration();
int forget();
struct login                         
{
    char fname[1000];
    char lname[1000];
    char username[1000];
    char password[1000];
};

int login ()
{   int pos=-1; 
    char  username[1000],password[1000];
    FILE *fp= fopen("login.txt","r");
    if (fp == NULL)
    {
        fputs("Error at opening File!",stdout);
        exit(1);
    }

    struct login l;
    int t=1;
    printf("\nPlease Enter your login credentials below\n");
    printf("Username:");
    scanf("%s",username);
    printf("\nPassword:");
    scanf("%s",password);
    while(fread(&l,sizeof(l),1,fp)==1)        
        { 
            if(strcmp(username,l.username)!=0 && strcmp(password,l.password)!=0)

            {   
               t=1;

            }
                
        }

 
         if (t==1)        
               {printf("\nSuccessful Login\n");
                pos=2;}            

fclose(fp);
return pos;
  }
int registration()
{   int j,b=1; 
    char firstname[1000],username[1000],password[1000];
    FILE *fs=fopen("login.txt","w+");
    if (fs == NULL)
    {
        fputs("Error at opening File!", stdout);
        exit(1);
    }
    struct login l;
    printf("\nWelcome. We need to some details for registration.\n");
    int y=23;    
    printf("Now please choose a username and password as credentials for system login.\n");        
    printf("Enter Username:\n");
    scanf("%s",username);
    strcpy(l.username,username);
    printf("Enter Password:\n");
    printf("Password should be minimum of 6 characters.\n");
    while(b)
     {     
     scanf("%s",password);
     if ((strlen(password))>=6)
     
      { b=0;
        printf("Password set");
      }       
     else
     {printf("Enter re-enter a longer password:"); }
     }
    strcpy(l.password,password);
    fwrite(&l,sizeof(l),1,fs);
    printf("\nRegistration Successful!\n");
    fflush(stdin); 	
    getchar();
    printf("Press any key to continue...");
    getchar();
    fclose(fs);
    system("cls");
    j=login();
    return j;
}
int forget()
{  FILE *fp= fopen("login.txt","r");
    if (fp == NULL)
    {
        fputs("Error at opening File!",stdout);
        exit(1);
    }
   int t=1,n;
   struct login l;
   char username[100];
   struct login z;
   printf("Enter username:\n");
   scanf("%s",username);
   while(fread(&l,sizeof(l),1,fp)==1)        
        { 
            if(strcmp(username,l.username)==0)

            { t=10;  
             printf("This is password: %s",l.password);  
             n=login();

            }
                
        } 
    
if (t==1)
{
printf("Sorry username does not exist..");
exit(0);
}
fclose(fp);
return n;   
}

struct CustomerDetails   
{
	char roomnumber[10];
	char name[20];
	char address[25];
	char phonenumber[15];
	char nationality[15];	
	char email[20];
	char period[10];
	char arrivaldate[10];
}s;

int main()
{      int opt,e;

    printf("Press '1' to Register\nPress '2' to Login\nPress '3' to get forgotten password\n");
    scanf("%d",&opt);      

    if(opt == 1)
        {
            system("cls");
            e=registration();
        }

    else if(opt == 2)
        {
            system("cls");
            e=login();         
        }
   else if(opt == 3)
  {
        system("cls");
        e=forget();

   }
	if (e==2)
    {    int i=0;
	
	time_t t;
	time(&t);
	char customername;
	char choice;
	system("cls");   
	printf(" -------------------------------------------------------------------------\n");
	printf("\t\t\t0     ----------     0  \n");
   	printf("\t\t\t00    ----------    00  \n");
	printf("\t\t\t000   ----------   000  \n");
	printf("\t\t\t0000  ----------  0000  \n");
	printf("\t\t\t 0000 ---------- 0000   \n");
	printf("\t\t\t0000  ----------  0000  \n");
	printf("\t\t\t000   ----------   000  \n");
	printf("\t\t\t00    ----------    00  \n"); 
	printf("\t\t\t0     ----------     0  \n");                      
	printf(" -------------------------------------------------------------------------\n");
 	printf("\t\t*************************************************\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*       -----------------------------           *\n");
	printf("\t\t*        WELCOME TO RESORT MONTANA              *\n");
	printf("\t\t*       -----------------------------           *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*    Brought To You By PES STUDENTS             *\n");
	printf("\t\t*     CONTACT US:xyz@org                        *\n");
	printf("\t\t*************************************************\n");
		for(i=0;i<80;i++)
		printf("-");
	    printf("\nCurrent date and time : %s",ctime(&t));
	    for(i=0;i<80;i++)
		printf("-");
	printf(" \n Press any key to continue:");
	
	getch();	
    system("cls");
           info();}
else
{
 printf("\nIncorrect Login Details\nPlease enter the correct credentials\n");
exit(0);
}
}
void info()
{	while (1)      
	{
		system("cls");
                int i;
		time_t t;
	        time(&t);
		 for(i=0;i<80;i++)
		printf("-");
		printf("\n");
		printf("   ******************************  |MAIN MENU|  ***************************** \n");
		for(i=0;i<80;i++)
		printf("-");
		printf("\n");
		printf("\t\t *Please enter your choice for menu*:");
		printf("\n\n");
		printf(" \n Enter 1 -> Book a room");
		printf("\n------------------------");
		printf(" \n Enter 2 -> View Customer Record");
		printf("\n----------------------------------");
		printf(" \n Enter 3 -> Delete Customer Record");
		printf("\n-----------------------------------");
		printf(" \n Enter 4 -> Search Customer Record");
		printf("\n-----------------------------------");
		printf(" \n Enter 5 -> Edit Record");
		printf("\n-----------------------");
		printf(" \n Enter 6 -> Exit");
		printf("\n-----------------");
		printf("\n");
		for(i=0;i<80;i++)
		printf("-");
	    printf("\nCurrent date and time : %s",ctime(&t));
	    for(i=0;i<80;i++)
		printf("-");
                char choice;
		
		choice=getche();
		
		switch(choice)          
		{	
			case '1':
				add();
				break;
			case '2':
				list();
				break;
			case '3':
				delete();
				break;
			case '4':
				search();
				break;
			case '5':
				edit();
				break;
			case '6':
				system("cls");
				printf("\n\n\t *****THANK YOU*****");
				printf("\n\t FOR TRUSTING OUR SERVICE");
			
				exit(0);
				break;
			default:
				system("cls");
				printf("Incorrect Input");
				printf("\n Press any key to continue");
				getch();
		}
	}
   
}

void add()
{
	FILE *f;
	char test;
	f=fopen("add.txt","a+");
	if(f==0)
	{   f=fopen("add.txt","w+");
		system("cls");
		printf("Please hold on while we set our database in your computer!!");
		printf("\n Process completed press any key to continue!! ");
		getch();
	}
	while(1)
	{
		system("cls");
		printf("\n Enter Customer Details:");
		printf("\n**************************");
		printf("\n Enter Room number:\n");
		scanf("\n%s",s.roomnumber);
		fflush(stdin);
		printf("Enter Name:\n");
		scanf("%s",s.name);
		fflush(stdin);
		printf("Enter Address:\n");
		scanf("%s",s.address);
		fflush(stdin);
		printf("Enter Phone Number:\n");
		scanf("%s",s.phonenumber);
		fflush(stdin);
		printf("Enter Nationality:\n");
		scanf("%s",s.nationality);
		fflush(stdin);
		printf("Enter Email:\n");
		scanf(" %s",s.email);
		fflush(stdin);
		printf("Enter Period(\'x\'days):\n");
		scanf("%s",&s.period);
		fflush(stdin);
		printf("Enter Arrival date(dd\\mm\\yyyy):\n");
		scanf("%s",&s.arrivaldate);
		fwrite(&s,sizeof(s),1,f);
		fflush(stdin);
		printf("\n\n1 Room is successfully booked!!");
		printf("\n Press esc key to exit,  any other key to add another customer detail:");
		test=getche();
		if(test==27)
			break;
			
	}
	fclose(f);
}
void list()
{
	FILE *f;
	int i;
	if((f=fopen("add.txt","r"))==NULL)
		exit(0);
	system("cls");
	printf("ROOM\t");
	printf("NAME\t ");
	printf("\tADDRESS ");
	printf("\tPHONENUMBER ");
	printf("\tNATIONALITY ");
	printf("\tEMAIL ");
	printf("\t\t PERIOD ");
	printf("\t ARRIVALDATE \n");
	
	for(i=0;i<118;i++)
		printf("-");
	while(fread(&s,sizeof(s),1,f)==1)
	{
		printf("\n%s\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s",s.roomnumber, s.name , s.address , s.phonenumber ,s.nationality ,s.email,s.period,  s.arrivaldate);
	}
	printf("\n");
	for(i=0;i<118;i++)
		printf("-");

	fclose(f);
	getch();
}
void delete()
{
	FILE *f,*t;
	int i=1;
	char roomnumber[20];
	if((t=fopen("temp.txt","w"))==NULL)
	exit(0);
	if((f=fopen("add.txt","r"))==NULL)
	exit(0);
	system("cls");
	printf("Enter the Room Number of the hotel to be deleted from the database: \n");
	fflush(stdin);
	scanf("%s",roomnumber);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.roomnumber,roomnumber)==0)
		{       i=0;
			continue;
		}
		else
			fwrite(&s,sizeof(s),1,t);
	}
	if(i==1)
	{       
		printf("\n\n Records of Customer in this  Room number is not found!!");
		getch();
		fclose(f);
		fclose(t);
		info();
	}
	fclose(f);
	fclose(t);
	remove("add.txt");
	rename("temp.txt","add.txt");
	printf("\n\nThe Customer is successfully removed....");
	fclose(f);
	fclose(t);
	getch();
}

void search()
{
system("cls");
	FILE *f;
	char roomnumber[20];
	int flag=1;
	f=fopen("add.txt","r+");
	if(f==0)
		exit(0);
	fflush(stdin);
	printf("Enter Room number of the customer to search its details: \n");
	scanf("%s", roomnumber);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.roomnumber,roomnumber)==0){
			flag=0;
			printf("\n\tRecord Found\n ");
			printf("\nRoom Number:\t%s",s.roomnumber);
			printf("\nName:\t%s",s.name);
			printf("\nAddress:\t%s",s.address);
			printf("\nPhone number:\t%s",s.phonenumber);
			printf("\nNationality:\t%s",s.nationality);
			printf("\nEmail:\t%s",s.email);
			printf("\nPeriod:\t%s",s.period);
			printf("\nArrival date:\t%s",s.arrivaldate);
			flag=0;
			break;
		}
	}
	if(flag==1){	
		printf("\n\tRequested Customer could not be found!");
	}
	getch();
	fclose(f);
}

void edit()
{
	FILE *f;
	int k=1;
	char roomnumber[20];
	long int size=sizeof(s);
	if((f=fopen("add.txt","r+"))==NULL)
		exit(0);
	system("cls");
	printf("Enter Room number of the customer to edit:\n");
	scanf("%s",roomnumber);
	fflush(stdin);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.roomnumber,roomnumber)==0)
		{
			k=4;
			printf("\nEnter Room Number  :");
			gets(s.roomnumber);
			printf("\nEnter Name         :");
			fflush(stdin);
			scanf("%s",&s.name);
			printf("\nEnter Address      :");
                        fflush(stdin);
			scanf("%s",&s.address);
			printf("\nEnter Phone number :");
                        fflush(stdin);
			scanf("%s",s.phonenumber);
                        fflush(stdin); 
			printf("\nEnter Nationality  :");
                        fflush(stdin);
			scanf("%s",&s.nationality);
			printf("\nEnter Email        :");
                        fflush(stdin); 
			scanf("%s",&s.email);
			printf("\nEnter Period       :");
                        fflush(stdin); 
			scanf("%s",&s.period);
			printf("\nEnter Arrival date :");
                        fflush(stdin);
			scanf("%s",&s.arrivaldate);
			fseek(f,size,SEEK_CUR);  
			fwrite(&s,sizeof(s),1,f);
                        printf("\n\n\t\tYOUR RECORD IS SUCCESSFULLY EDITED!!!"); 
			break;
		}
        	     
        }
        if (k==1)             
               {printf("\n\n\t\tYOUR RECORD IS NOT EXISTING!!!");}

   fclose(f);
   getch();
}





