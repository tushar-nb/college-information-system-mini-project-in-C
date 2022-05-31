#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
void student();
void displayteacherinfo();
void displayclassschedule();
void displaysubjectlist();
void displaycollageinfo();
void displaybusschedule();
void gotoxy (int x, int y);
void student_login();
void mainmenu();
void admin_in();
void admin();
void add_info();
void edit_info();
void delete_info();
void add_class_schedule();
void add_bus_schedule();
void add_teacher_info();
void add_collage_info();
void add_subject_list();
void edit_class_schedule();
void edit_bus_schedule();
void edit_teacher_info();
void edit_collage_info();
void edit_subject_list();
void delete_class_schedule();
void delete_bus_schedule();
void delete_teacher_info();
void delete_collage_info();
void delete_subject_list();
struct routine
{
char day[50];
char one[25];
char two[25];
char three[25];
char four[25];
char five[25];
char sic[25];
char seven[25];
char eight[25];
};
struct routine r;
typedef struct
{
char businfo[10000];
}bus;
bus b;

struct routine
{
char dayinfo[5000];
};
struct routine r;

struct subject
{
char subname[25000];
};
struct subject s;

typedef struct
{
char teainfo[10000];
}teach;
teach t;

typedef struct
{
char info[10000];
}infom;
infom inf;

void student()
{
system("cls");
printf("\n\n\n\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2 STUDENT SECTION \xb2\xb2\xb2\xb2\xb2\xb2\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 1.Class schedule \n");
printf("\n\t\t\t\xdb\xdb\xdb\xb2 2.Bus schedule \n");
printf("\n\t\t\t\xdb\xdb\xdb\xb2 3. Teacher info\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 4. College info\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 5. Subject list\n\n");
printf("\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
printf("\n enter your choice: ");
int de;
scanf("%d",&de);
switch(de)
{
case 1:
displayclassschedule();
break;
case 2:
displaybusschedule();
break;
case 3:
displayteacherinfo();
break;
case 4:
displaycollageinfo();
break;
case 5:
displaysubjectlist();
break;
default:
printf("\aInvalid choice");
break;
}
}
int i,j,k,l,m,n,p,d;
FILE *fptr;

void displayteacherinfo()
{
//system("cls");
fptr=fopen("C:/project/teacherinfo.txt","rb+");
printf("\t\t\n\n\n\n");
printf("\t\t****************TEACHER INFORMATION********************");
printf("\t\t\n\n\n\n");
if(fptr==NULL)
{
   printf("error in opening file");
}
while(fread(&t,sizeof(t),1,fptr)==1)
for(i=0;i<=80;i++)
printf("-");
printf("\n");
{
printf("%s",t.teainfo);
}
printf("\n");
for(j=0;j<=80;j++)
printf("-");
}


void admin()
{
printf("\n\n\n\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2 ADMIN SECTION \xb2\xb2\xb2\xb2\xb2\xb2\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 1. Add info\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 2. Edit info\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 3. Delete info\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 4.Exit\n\n");
printf("\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
printf("\t\t\tEnter your choice");
int c;
scanf("%d",&c);
switch(c)
{
case 1:
	add_info();
	break;
case 2:
	edit_info();
	break;
case 3:
	delete_info();
	break;
case 4:
	exit(0);
default:
	printf("\tINVALID CHOICE");
	admin();
	break;
}
}



void displayclassschedule()
{
fptr=fopen("C:/project/classschedule.txt","rb+");
printf("\t\t\n\n\n\n");
printf("\t\t****************CLASS SCHEDULE********************");
printf("\t\t\n\n\n\n");
if(fptr==NULL)
{
   printf("error in opening file");
}
while(fread(&r,sizeof(r),1,fptr)==1)
for(i=0;i<=80;i++)
printf("-");
printf("\n");
{
printf("%s",r.dayinfo);
}
printf("\n");
for(j=0;j<=80;j++)
printf("-");
printf("\nEnter 'E' to exit and 'c' to continue: ");
char z;
scanf("%c",&z);
if(z=='c')
mainmenu();
else
exit(0);
}



void displaysubjectlist()
{
fptr=fopen("C:/project/subjectlist.txt","rb+");
printf("\t\t\n\n\n\n");
printf("\t\t****************SUBJECT LIST INFORMATION********************");
printf("\t\t\n\n\n\n");
if(fptr==NULL)
{
   printf("error in opening file");
}
while(fread(&s,sizeof(s),1,fptr)==1)
for(i=0;i<=80;i++)
printf("-");
printf("\n");
{
printf("%s",s.subname);
}
printf("\n");
for(j=0;j<=80;j++)
printf("-");
}



void displaycollageinfo()
{
fptr=fopen("C:/project/college_info.txt","rb+");
printf("\t\t\n\n\n\n");
printf("\t\t****************COLLAGE INFORMATION********************");
printf("\t\t\n\n\n\n");
while(fread(&inf,sizeof(inf),1,fptr)==1)
for(i=0;i<=80;i++)
printf("-");
printf("\n");
{
printf("%s",inf.info);
}
printf("\n");
for(j=0;j<=80;j++)
printf("-");
}



void displaybusschedule()
{
system("cls");
fptr=fopen("C:/project/businfo.txt","rb+");
printf("\t\t\n\n\n\n");
printf("\n\n\t\t********************BUS INFORMATION*******************\n");
printf("\t\t\n\n\n\n");
while(fread(&b,sizeof(b),1,fptr)==1)
for(i=0;i<=80;i++)
printf("-");
printf("\n");
{
printf("%s",b.businfo);
}
printf("\n");
for(j=0;j<=80;j++)
printf("-");
}

int main()
{
system("cls");
mainmenu();
getch();
}
void student_login()
{
	printf("Enter student SRN/PRN: ");
	char srn[3];
	scanf("%s",srn);
	if(strcmpi("PES",srn)==0)
	{
		printf("\nEntered SRN/PRN is found\n");
		Sleep(2000);
		student();
	}
	else
{
printf("\nEntered SRN/PRN is not found\n");
Sleep(5000);
system("cls");
mainmenu();
}
}
void admin_in()
{

	char user_name[10];
	char password[10];
	printf("\nEnter username:  ");
	scanf("%s",user_name);
	fflush(stdin);
	printf("\nEnter your password: ");
	scanf("%s",password);
	fflush(stdin);
	if(strcmp("NARU",user_name)==0)
	{
		if(strcmp("padma",password)==0)
		{
			admin();
		}
		else
		{
			printf("\nPASSWORD is INCORRECT\n");
		}
	}
	else
	{
		printf("\nEntered username is INCORRECT\n");
		Sleep(3000);
		system("cls");
		mainmenu();
	}
	
}


void gotoxy (int x, int y)
{
COORD coord = { 0 ,0 };
coord.X = x; coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void mainmenu()
{
char d[40] = "WELCOME TO COLLEGE INFO SYSTEM";
int i,j,k,l,m;
gotoxy(20,5);
for(j=0;j<40;j++)
{
Sleep(10);
printf("\xb2");
}
gotoxy(20,5);printf("\xB2");
Sleep(20);
gotoxy(20,6);printf("\xB2");
Sleep(20);
gotoxy(20,7);printf("\xB2");
Sleep(20);
gotoxy(20,8);printf("\xB2");
gotoxy(20,9);printf("\xB2");
Sleep(20);
gotoxy(20,10);printf("\xB2");
Sleep(20);
gotoxy(20,11);printf("\xB2");
Sleep(20);
gotoxy(20,12);printf("\xB2");
gotoxy(20,13);printf("\xB2");
Sleep(20);
gotoxy(20,14);printf("\xB2");
Sleep(20);
gotoxy(20,15);printf("\xB2");
Sleep(20);
gotoxy(20,16);printf("\xB2");
gotoxy(20,17);printf("\xB2");
Sleep(20);
gotoxy(20,18);printf("\xB2");
Sleep(20);
gotoxy(20,19);printf("\xB2");
Sleep(20);
gotoxy(20,20);printf("\xB2");

gotoxy(60,5);printf("\xB2");
Sleep(20);
gotoxy(60,6);printf("\xB2");
Sleep(20);
gotoxy(60,7);printf("\xB2");
Sleep(20);
gotoxy(60,8);printf("\xB2");
Sleep(20);
gotoxy(60,9);printf("\xB2");
gotoxy(60,9);printf("\xB2");
Sleep(20);
gotoxy(60,10);printf("\xB2");
Sleep(20);
gotoxy(60,11);printf("\xB2");
Sleep(20);
gotoxy(60,12);printf("\xB2");
Sleep(20);
gotoxy(60,13);printf("\xB2");
Sleep(20);
gotoxy(60,14);printf("\xB2");
Sleep(20);
gotoxy(60,15);printf("\xB2");
Sleep(20);
gotoxy(60,16);printf("\xB2");
Sleep(20);
gotoxy(60,17);printf("\xB2");
Sleep(20);
gotoxy(60,18);printf("\xB2");
Sleep(20);
gotoxy(60,19);printf("\xB2");
Sleep(20);
gotoxy(60,20);printf("\xB2");

gotoxy(20,20);
for(j=0;j<40;j++)
{
Sleep(20);
printf("\xb2");
}

gotoxy(20,9);
for(j=0;j<40;j++)
{
Sleep(20);
printf("\xb2");
}

gotoxy(21,7);
printf("\t ");
for(m=0;m<30;m++)
{
Sleep(50);
printf("%c",d[m]);
}

gotoxy(23,11);
printf("\t \xdb\xdb\xdb\xb2 S. Student");
gotoxy(23,14);
printf("\t \xdb\xdb\xdb\xb2 A.Admin ");
gotoxy(23,17);
printf("\t \xdb\xdb\xdb\xb2 Q.Quit ");

char n;
gotoxy(21,22);
printf("\nEnter choice:");
n=getch();
printf("\nUser entered choice is:%c\n ",n);
switch(n)
{
case 's':
student_login();
break;
case 'a':
admin_in();
break;
case 'q':
system("cls");
//getch();
exit(0);
//break;
default:
printf("\n\a\t\t\t Invalid choice!!");
Sleep(1000);
system("cls");
mainmenu();
}
}


void add_info()
{
printf("\n\n\n\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2 Add info\xb2\xb2\xb2\xb2\xb2\xb2\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 1.Class Schedule \n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 2.Bus Schedule \n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 3. Teacher info\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 4. College info\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 5. Subject List\n\n");
printf("\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
printf("\t\t\tEnter your choice");
int ch;
scanf("%d",&ch);
switch(ch)
{
case 1:
	add_class_schedule();
	break;
case 2:
	add_bus_schedule();
	break;
case 5:
	add_subject_list();
	break;
case 3:
	add_teacher_info();
	break;
case 4:
	add_collage_info();
	break;
default:
	printf("\tINVALID CHOICE!");
	break;
}
void edit_info()
{
printf("\n\n\n\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2 Edit info\xb2\xb2\xb2\xb2\xb2\xb2\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 1.Class Schedule \n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 2.Bus Schedule \n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 3. Teacher info\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 4. College info\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 5. Subject List\n\n");
printf("\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
printf("\t\t\tEnter your choice");
int ch;
scanf("%d",&ch);
switch(ch)
{
case 1:
	edit_class_schedule();
	break;
case 2:
	edit_bus_schedule();
	break;
case 5:
	edit_subject_list();
	break;
case 3:
	edit_teacher_info();
	break;
case 4:
	edit_collage_info();
	break;
default:
	printf("\tINVALID CHOICE!");
	break;
}
void delete_info()
{
printf("\n\n\n\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2 Delete info\xb2\xb2\xb2\xb2\xb2\xb2\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 1.Class Schedule \n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 2.Bus Schedule \n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 3. Teacher info\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 4. College info\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 5. Subject List\n\n");
printf("\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
printf("\t\t\tEnter your choice");
int ch;
scanf("%d",&ch);
switch(ch)
{
case 1:
	delete_class_schedule();
	break;
case 2:
	delete_bus_schedule();
	break;
case 5:
	delete_subject_list();
	break;
case 3:
	delete_teacher_info();
	break;
case 4:
	delete_collage_info();
	break;
default:
	printf("\tINVALID CHOICE!");
	break;
}
void add_class_schedule()
{
FILE *f;
char test;
f=fopen("C:/project/classschedule.txt","ab+");
if(f==0)
{ 
printf("Error in opening file");
}
while(1)
{
system("cls");
int i=1;
printf("\n enter day:");
scanf("%s[^\n]",&r.day);
fflush(stdin);
printf("\n Enter 1st period:");
scanf("%s[^\n]",&r.one);
printf("\n Enter 2nd period:");
scanf("%s[^\n]",&r.two);
printf("\n Enter 3rd period:");
scanf("%s[^\n]",&r.three);
printf("\n Enter 4th period:");
scanf("%s[^\n]",&r.four);
printf("\n Enter 5th period:");
scanf("%s[^\n]",&r.five);
printf("\n Enter 6th period:");
scanf("%s",&r.sic);
fwrite(&r,sizeof(r),1,f);
fflush(stdin);
system("cls");
printf("\n1 record successfully added");
i++;
printf("\n Press esc key to exit, any other key to add other record:");
test=getche();
if(test==27)
break;
}
fclose(f);
}