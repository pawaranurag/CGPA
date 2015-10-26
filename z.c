#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//declaring here some thing

void userdetail(void);
void mainmenu(void);
//void menu(void);
void menu_two(void);
void lines(void);
void getsubject(void);
void getCalculation(void);
void about(void);
float marksToGP(float);

int sumh = 0;
double sumchxGP = 0;
char Subjectname[100];
char name[100][100];
char id[100][100];
int loop;
int numSubject;
int ch[100];
float GP[100];
float  TargetCGPA[100];
char namesubject[100][40];
float mark[100];


// show on sreen


void main()
{ 
mainmenu();
}

// defined here

void mainmenu(void)
{
	int choice;
	lines();
	printf("FINDING UR LIFE TURN SCORE \n");
	lines();
	printf("*<1> Enter ur happy score information about this year with subject\n");
	lines();
	printf("*<2> about this\n");
	lines();
	printf("*<3> .....EXIT.......\n");
	lines();
	printf("Enter what u want to do now..... :");
	lines();
	scanf("%d", &choice);
     	lines();
	if (choice == 1)
	{
	userdetail();
	getsubject();
        
    	}
    	else if (choice == 2)
    	{
        	about();
       		getchar();
        	mainmenu();
    	}
    	else if (choice == 3)
    	{
        	system("cls");
        	printf("******  THANK YOU FOR USING MY MINI PROJECT PROGRAM ******* \n");
       	 getchar();
    	}
    	else
    	{
        	printf("\a\a WRONG INPUT! \n");
        	lines();
        	getchar();
        	system("cls");
        	mainmenu();
    }
}
void lines(void)
{
    printf("********");
}
void userdetail(void)
{
  

    printf("Enter your full name :  ");
    scanf("%s", name);
    printf("Enter your student ID :   ");
    scanf("%s", id);
}

void getsubject(void)
{
    	int temp;

 //   	system("cls");

    	lines();
    	printf("Enter total subject :");
    	scanf("%d", &numSubject);
    	lines();

	for (loop = 0; loop <= numSubject-1; loop++)
    	{
        printf("Subject %d \n", loop+1);

	printf("Enter subject name (4 character only) : ");
	scanf("%s", namesubject[loop]);

	
        printf("Credit hour :");
        scanf("%d", &ch[loop]);

	printf("Enter your mark (type ur score like 10-20-30-40-50 ):");
        scanf("%f", &mark[loop]);

	GP[loop] = marksToGP(mark[loop]);

	printf("Your Grade pointer is : %d\n", GP[loop]);

	//strcpy(id[loop], markToid(mark[loop]));

	lines();


	}



	printf("Enter your targeted CGPA for this semester :");
	    scanf("%f", &TargetCGPA);
	    lines();
	    printf("Press \" ENTER \" or any button");
	    getchar();
//	    system("cls");
	    menu_two();
}
	
	 void menu_two(void)	
	    {
	    int choice;
	    printf("Enter \"1\" - CGPA Calculation\n");
	    printf("Enter \"3\" - Exit\n");

	    lines();

	    printf("Enter your choice :");
	    scanf("%d", &choice);

	  if (choice == 1)
	    {
		system ("cls");
		getCalculation();
	    }
	    else if (choice == 3)
	    {
//		system("cls");
		printf("\t\t  THANK YOU FOR USING MY MINI PROJECT PROGRAM =D \n");
		getchar();
	    }
	    else
	    {
		printf("\a\a WRONG INPUT! \n");
		getchar();
//		system("cls");
		menu_two();
	    }
}

	void getCalculation(void)
	    {
		
	//    system("cls");
		

	    lines();
	    printf("Student Name : %s", name);
	    printf("Student ID : %s", id);
	    

	  
	    printf("No.\t Subject name\t  Credit Hour\t  mark\t  Grade Point\t");
	 


	    for (loop = 0; loop <= numSubject-1; loop++)
	    {
		printf("\n%d %s\t %d\t%f\t%f\t", loop+1, namesubject[loop], ch[loop], mark[loop], GP[loop]);
	    }

	    for (loop = 0; loop <= numSubject-1; loop++)
	    {
		sumh = sumh + ch[loop];
		sumchxGP = sumchxGP + ch[loop] * GP[loop];
	    }

	    lines();
	    printf("Total credit hour is = %d\n\n", sumh);
	    printf("Total credit hour X grade point is = %f\n\n", sumchxGP);
	    printf("Grade point average is = %.2f", sumchxGP / sumh);

	    lines();
	    getchar();
	    //menu();
		about();
   }




	void about(void)
	{
//	    system("cls");

	    lines();

	    printf("\n\t Anurag cha Mini Project\n");
	    lines();
	    printf("created by :COEP student [ANURAG BHUJANG PAWAR] \n");
	    printf("Institute name : College of engineering pune\n\n\n");
	    lines();
	    printf("Branch IT,S3,MIS NUMBER is 111408047");
	    lines();
	}

	float marksToGP(float marks)
	{
	    if (marks == 90 && marks <=100)
	    {
		return(float)9.00;
	    }
	    else if (marks== 80 && marks <=90)
	    {
		return(float)8.00;
	    }
	    else if (marks ==70 && marks <= 80 )
	    {
		return(float)7.00;
	    }
	    else if (marks == 60 && marks <= 70)
	    {
		return(float)6.00;
	    }
	    else if (marks == 55 && marks <= 60)
	    {
		return(float)5.00;
	    }
	    else if ( marks ==50&& marks <= 55 )
	    {
		return(float)4.80;
	    }
	    else if (marks == 45 && marks <= 50)
	    {
		return(float)4.70;
	    }
	    else if (marks  == 40 && marks <= 45)
	    {
		return(float)4.60;
	    }
	    else if (marks  == 35 && marks <= 40)
	    {
		return(float)4.50;
	    }
	    else if (marks== 30 && marks <= 35)
	    {
		return(float)3.00;
	    }
	    else if (marks == 25 && marks <= 30)
	    {
		return(float)2.00;
	    }
	    else if (marks == 20 && marks <= 25)
	    {
		return(float)1.00;
	    }
	    else
	    {
		    return(float)0.00;
	    }
	} 
