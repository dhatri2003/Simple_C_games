#include <windows.h>
#include<stdio.h>
#include<conio.h>

void cacti1(int p);
void cacti2(int p);
void dino_run(int x);
void dead_dino(int x);
void loss(int x,int y);
void sun();
void trex(int x,int y);
void cloud(int x,int y);
void bird1(int x,int y);
void bird2(int x,int y);
void red();
void yellow();
void green();
void blue();
void purple();
void cyan();
void reset();
int dino();
int tictactoe();
int win();
void platform();
void tictac(int x,int y);

COORD c = {0, 0};

void setxy (int x, int y)
{
 c.X = x; c.Y = y; // Set X and Y coordinates
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
char block[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int tictactoe()
{
char c;
int i,j;
system("cls");
tictac(35,18);
char ch;
ch=getchar();
if(ch=='\n')
{
j=1;
}
while (j)
{
    int player = 1, i, choice;

    char mark;
    do
    {
        platform();
        player = (player % 2) ? 1 : 2;
		
		green();
        printf("  PLAYER  %d -> The number you choose is :  ", player);
		reset();
        scanf("%d", &choice);
		

        mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && block[1] == '1')
            block[1] = mark;
            
        else if (choice == 2 && block[2] == '2')
            block[2] = mark;
            
        else if (choice == 3 && block[3] == '3')
            block[3] = mark;
            
        else if (choice == 4 && block[4] == '4')
            block[4] = mark;
            
        else if (choice == 5 && block[5] == '5')
            block[5] = mark;
            
        else if (choice == 6 && block[6] == '6')
            block[6] = mark;
            
        else if (choice == 7 && block[7] == '7')
            block[7] = mark;
            
        else if (choice == 8 && block[8] == '8')
            block[8] = mark;
            
        else if (choice == 9 && block[9] == '9')
            block[9] = mark;
            
        else
        {
			red();
            printf("Invalid move ");

            player--;
            getch();
        }
		reset();
        i = win();

        player++;
    }while (i ==  - 1);
    
    platform();
    
    if (i == 1)
	{ 
		yellow();
        printf("\n\t\t\t\t\t\t\t\aPlayer %d win!!! ", --player);
	}
    else
	{
		yellow();
        printf("\n\t\t\t\t\t\t\t\a'GAME DRAW'  : - )");
	}
	reset();
    getch();

    return 0;
}

}
int win()
{
    if (block[1] == block[2] && block[2] == block[3])
        return 1;
        
    else if (block[4] == block[5] && block[5] == block[6])
        return 1;
        
    else if (block[7] == block[8] && block[8] == block[9])
        return 1;
        
    else if (block[1] == block[4] && block[4] == block[7])
        return 1;
        
    else if (block[2] == block[5] && block[5] == block[8])
        return 1;
        
    else if (block[3] == block[6] && block[6] == block[9])
        return 1;
        
    else if (block[1] == block[5] && block[5] == block[9])
        return 1;
        
    else if (block[3] == block[5] && block[5] == block[7])
        return 1;
        
    else if (block[1] != '1' && block[2] != '2' && block[3] != '3' &&
        block[4] != '4' && block[5] != '5' && block[6] != '6' && block[7] 
        != '7' && block[8] != '8' && block[9] != '9')

        return 0;
    else
        return  - 1;
}
//board
void platform()
{
    system("cls");
	red();
    printf("\n\n\t\t\t\t\t\t\tTIC TAC TOE\n\n\n");
	cyan();
	printf("\t\t\t\tRULES:ENTER 1 NO. AT A TIME AND WIN THE GAME USING YOUR WITS   : )  !!!\n\n\n\n");
	reset();

	purple();
    printf("\t\t\t\t\t\t  Player 1 (X)  -  Player 2 (O)\n\n\n\n");
	reset();

	red();
    printf("							     |     |     \n");
	yellow();
    printf("					                  %c  |  %c  |  %c \n", block[1], block[2], block[3]);
	
	red();
    printf("							_____|_____|_____\n");
    printf("							     |     |     \n");
	
    yellow();
    printf("							  %c  |  %c  |  %c \n", block[4], block[5], block[6]);
	
	red();
    printf("							_____|_____|_____\n");
    printf("							     |     |     \n");

	yellow();
    printf("							  %c  |  %c  |  %c \n", block[7], block[8], block[9]);
	
	red();
    printf("							     |     |     \n\n");
	reset();
}

void tictac(int x,int y)
{
	blue();
setxy(x,y-1);
        printf("MMMM88MMMM  MM   ,adPPYba,    MMMM88MMMM   ,adPba,    ,adPPYba,    MMMM88MMMM  ,abdPPYba,   MMM88MMM"); 
	    setxy(x,y);
		printf("    88      88  a8P               88      a8     8a  a8P               88     a8P     P8a   88");
		yellow();
		setxy(x,y+1);
		printf("    88      88  8PP               88      88     88  8PP       	  88     8PP      PP8  88");
		setxy(x,y+2);
		printf("    88      88  8PP               88      88MM8MM88  8PP               88     8PP      PP8  88MM88");
		setxy(x,y+3);
		printf("    88      88  8PP               88      88     88  8PP		  88     8PP      PP8  88");
		blue();
		setxy(x,y+4);
		printf("    88      88  \"8b,              88      88     88  \"8b,              88     \"8b,    ,b8\"  88");
		setxy(x,y+5);
		printf("    88      MM   `\"Ybbd8\"'        88      MM     MM   `\"Ybbd8\"'        88      `\"8Ybbd8\"`   MMM88MMM");
		purple();
		setxy(x,y+10);
		printf("                                   WIN THE GAME WITH YOUR WIT\n");
		green();
		setxy(x,y+12);
		printf("                                 press enter to start the game");
		reset();
   
}
	
  
int main()
{
	int choice,j;
	char ch;
	system("cls");
	yellow();
	setxy(70,15);
	printf("Pick the game you wanna play ");
	setxy(80,16);
	printf("1.Trex");
	setxy(80,17);
	printf("2.TICTACTOE");
	setxy(80,18);
	printf("3.Exit");
	setxy(80,20);
	printf("HAVE FUN!!	");
	reset();
	scanf("%d",&choice);
	ch=getchar( );
	switch(choice)
	{
		case 1:dino();
		break;
		case 2:tictactoe();
		break;
		case 3:return 0;
	}
	return 0;
}

int dino()
{
    char ch;
    int i,j;
	int p=150,q=0,x;
	int score=0; 
	int k=0;
	system("cls");
	trex(65,18);
	ch=getchar( );
	if(ch=="\n")
	{
		j=1;
	}
	while(j)
    {

        for (;p>=5,q>=5,!kbhit();p=p-5,q=q-5)
		{
			system("cls");
			for(int i=7;i<160;i++)
			{
				setxy(i,35);
				printf("-");
			}
			setxy(140,5);
			yellow();
			printf("SCORE : %d",score);
			reset();
			sun();
			cloud(110,12);
			cloud(15,4);
			bird1(40,14);
			bird1(130,6);
			dino_run(0);
			cacti1(p);
			if(p==75 && k==0)
			{
				q=150;
				k++;
			}
			if(q>=5 && q<=150)
				cacti2(q);
			if(p==25 || q==25)
			{
				score=0;
				dead_dino(0);
				loss(65,18);
	            setxy(0,39);
				return 0;
			}
			if(p==5)
			{
				p=150;
				score++;
			}
			if(q==5)
			{
				q=150;
				score++;
			}
			for(int c=1;c<=50000000;c++)
			{
			}
		}       
		ch=getch();
		if(ch==' ')
		{
			for (x=0;p>=5,q>=5,x<=9;p=p-5,q=q-5,x+=3)
			{
				system("cls");
				for(int i=7;i<160;i++)
				{
					setxy(i,35);
					printf("-");
				}
				setxy(140,5);
				yellow();
				printf("SCORE : %d",score);
				reset();
				sun();
				cloud(110,12);
				cloud(15,4);
				bird2(40,14);
				bird2(130,6);
				dino_run(x);
				cacti1(p);
				if(q>=5 && q<=150)
				cacti2(q);
				if(((p>=10 && p<=25) || (q>=10 && q<=25)) && (x>=0 && x<3))
				{
					score=0;
					dead_dino(0);
					loss(65,18);
					setxy(0,39);
					return 0;
				}
				if(p==5)
				{
					p=150;
					score++;
				}
				if(q==5)
				{
					q=150;
					score++;
				}
				for(int c=1;c<=50000000;c++)
				{
				}
			}
			for (x=9;q>=5,p>=5,x>=0;p=p-5,x-=3,q=q-5)
			{
				system("cls");
				for(int i=7;i<160;i++)
				{
					setxy(i,35);
					printf("-");
				}
				setxy(140,5);
         		yellow();
				printf("SCORE : %d",score);
				reset();
				sun();
				cloud(110,12);
				cloud(15,4);
				bird2(40,14);
				bird2(130,6);				
				dino_run(x);
				cacti1(p);
				if(q>=5 && q<=150)
				cacti2(q);
				if(((p>=10 && p<=25) || (q>=10 && q<=25)) && (x>=0 && x<3))
				{
					score=0;
					dead_dino(0);
					loss(65,18);
					setxy(0,39);
					return 0;
				}
				if(p==5)
				{
					p=150;
					score++;
				}
				if(q==5)
				{
					q=150;
					score++;
				}
				for(int c=1;c<=50000000;c++)
				{
				}
			}
        }
        else if (ch=='x')
			return(0);
    }

}

//colours
void red () 
{
  printf("\033[1;31m");
}
void yellow()
 {
  printf("\033[1;33m");
}
void green()
{
	printf("\033[0;32m");
}
void reset () 
{
  printf("\033[0m");
}
void blue()
 {
  printf("\033[0;34m");
}
void purple()
{
  printf("\033[0;35m");
}
void cyan()
 {
  printf("\033[0;36m");
}
 

void dino_run(int x)
{
	yellow();
	setxy(10,30-x);
	printf("          o-o  \n");
	yellow();
	setxy(10,31-x);
	printf("        /(\\_/)\n");
	setxy(10,32-x);
	printf(",_.--`   /'-` \n");
	setxy(10,33-x);
	printf(" '-._, )/'\n");
	setxy(10,34-x);
	printf("      /\\\n");
	reset();
}

void dead_dino(int x)
{
	red();
	setxy(10,30-x);
	printf("	      x-x ");
	reset();
	yellow();
	setxy(10,31-x);
	printf("          /(\\_  ");
	setxy(10,32-x);
	printf("  ,___.--` /'- ");
	setxy(10,33-x);
	printf("   '-._, )/'");       
	setxy(10,34-x);
	printf("        ||");
	reset();
}

void cacti1(int p)
{
	green();
	setxy(p,29);
	printf("    _ \n");
	setxy(p,30);
	printf(" _ ( )   \n");
	setxy(p,31);
	printf("( \\| | _\n");
	setxy(p,32);
	printf(" \\,. |/ )\n");
	setxy(p,33);
	printf("   |  /'\n");
	setxy(p,34);
	printf("   | |\n");
	reset();
}

void cacti2(int p)
{
	green();
    setxy(p,29);
	printf("   _\n");
	setxy(p,30);
	printf("  ( ) _\n");
	setxy(p,31);
	printf(" _| |/ )\n");
	setxy(p,32);
	printf("( \\  /'\n");
	setxy(p,33);
	printf(" \\  |\n");
	setxy(p,34);
	printf("  | |\n");
	reset();
}

void loss(int x,int y)
{
	red();
	setxy(x,y);
	printf("88\n");
	setxy(x,y+1);
	printf("88\n");
	setxy(x,y+2);
	printf("88\n");
	setxy(x,y+3);
	printf("88  ,adPPYba,  ,adPPYba, ,adPPYba,\n");
	setxy(x,y+4);
	printf("88 a8\"     \"8a I8[    \"\" I8[    \"\"\n");
	setxy(x,y+5);
	printf("88 8b       d8  `\"Y8ba,   `\"Y8ba, \n");
	setxy(x,y+6);
	printf("88 \"8a,   ,a8\" aa    ]8I aa    ]8I\n");
	setxy(x,y+7);
	printf("88  `\"YbbdP\"\'  `\"YbbdP\"\' `\"YbbdP\"\'\n");
	reset();
}

void sun()
{	
	yellow();
	setxy(70,4);
	printf("      ;   :   ;\n");
	setxy(70,5);
	printf("   .   \\_,!,_/   ,\n");
	setxy(70,6);
	printf("    `.,'     `.,'\n");
	setxy(70,7);
	printf("     /         \\\n");
	setxy(70,8);
	printf("~ -- :         : -- ~\n");
	setxy(70,9);
	printf("     \\         /\n");
	setxy(70,10);
	printf("    ,'`._   _.'`.\n");
	setxy(70,11);
	printf("   '   / `!` \\   `\n");
	setxy(70,12);
	printf("      ;   :   ;\n");
	reset();
}

void trex(int x,int y)
{	
	green();
	setxy(x,y-1);
	printf("  ,d\n");
	setxy(x,y);
	printf("  88\n");
	setxy(x,y+1);
	printf("MM88MMM 8b,dPPYba,  ,adPPYba, 8b,     ,d8\n");
	setxy(x,y+2);
	printf("  88    88P\'   \"Y8 a8P ____88  `Y8, ,8P\' \n");
	setxy(x,y+3);
	printf("  88    88         8PP\"\"\"\"\"\"\"    )888(  \n");
	setxy(x,y+4);
	printf("  88,   88         \"8b,   ,aa  ,d8\" \"8b, \n");
	setxy(x,y+5);
	printf("  \"Y888 88          `\"Ybbd8\"' 8P\'     `Y8\n");
	blue();
	setxy(x,y+7);
	printf("       You can jump with a space key!");
	setxy(x,y+8);
	yellow();
	printf("             Exit with 'x' key!");
	setxy(x,y+9);
	purple();
	printf("         Tap enter to start the Game.");
	reset();
}

void cloud(int x,int y)
{
	blue();
	setxy(x,y);			    
	printf("     _\n");
	setxy(x,y+1);
	printf("  ,-' '-,\n");
	setxy(x,y+2);
	printf(" (_______)\n");
	reset();
				
}

void bird1(int x,int y)
{	
    red();
	setxy(x,y);
	printf("   /\\");
	yellow();
	setxy(x,y+1);
	printf("<0(^)K->");
	red();
	setxy(x,y+2);
	printf("  \\/");
	reset();
}

void bird2(int x,int y)
{
	red();
	setxy(x,y);
	printf("   /");
	yellow();
	setxy(x,y+1);
	printf("<0(^)K->");
	red();
	setxy(x,y+2);
	printf("   \\");
	reset();
}
