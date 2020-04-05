//  THIS IS CODE GENERATOR PROGRAM....................................
// SAVES YOUR DATA IN SECRET CODE

   // again running with different names..... LETS SEE THE RESULTS.......


  //THIS IS MY FIRST TEST , OF TRANSFERING DATA VIA PENDRIVE WITHIN SAME COMPUTER

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include <windows.h>

enum
  {
  black,
  dark_blue,
  dark_green,
  dark_cyan,
  dark_red,
  dark_magenta,
  dark_yellow,
  light_gray,
  dark_gray,
  light_blue,
  light_green,
  light_cyan,
  light_red,
  light_magenta,
  light_yellow,
  white
  };

int getcolors()
  {
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  GetConsoleScreenBufferInfo(
    GetStdHandle( STD_OUTPUT_HANDLE ),
    &csbi
    );
  return csbi.wAttributes;
  }

int getfgcolor()
  {
  return getcolors() & 0x0F;
  }

int getbgcolor()
  {
  return getcolors() >> 4;
  }

void setfgcolor( int color )
  {
  SetConsoleTextAttribute(
    GetStdHandle( STD_OUTPUT_HANDLE ),
    (getcolors() & 0xF0) | (color & 0x0F)
    );
  }

void setbgcolor( int color )
  {
  SetConsoleTextAttribute(
    GetStdHandle( STD_OUTPUT_HANDLE ),
    ((color & 0x0F) << 4) | (getcolors() & 0x0F)
    );
  }

void setcolors( int fg, int bg )
  {
  SetConsoleTextAttribute(
    GetStdHandle( STD_OUTPUT_HANDLE ),
    ((bg & 0x0F) << 4) | (fg & 0x0F)
    );
  }

void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

main()
{
      int initial_fg_color = getfgcolor();
      int initial_bg_color = getbgcolor();
    char name1[20],name2[20];
    int name1_length,name2_length;
    int date,time;
    date=__DATE__;
    time=__TIME__;
      setfgcolor(light_yellow);
    printf("  %s\n",date);
    printf("  %s",time);
    setfgcolor(initial_fg_color);
    //FILE *fp3;
    //fp3=fopen("date.c","w");
    //while(__DATE__!=EOF)
    //putw(__DATE__,fp);
    //fclose(fp3);
    gotoxy(30,4);
    setfgcolor(light_cyan);
    printf("HELLO USER  ");
    gotoxy(20,7);
    printf(" THIS IS CODER DECODER APPLIATION");
    gotoxy(2,15);
    setfgcolor(light_red);
    printf("   YOUR MAIL ID / NAME: ");
    gotoxy(5,17);
    printf("TO ID / NAME : ");
    gotoxy(25,16);
    setfgcolor(light_cyan);
    printf("  ~~~~~~~~~~~~~~~~~~~~~~~~~~");
    gotoxy(25,18);
    printf("  ~~~~~~~~~~~~~~~~~~~~~~~~~~");
    setfgcolor(white);
    gotoxy(27,15);
    gets(name1);
    gotoxy(27,17);
    gets(name2);
    name1_length=strlen(name1);
    name2_length=strlen(name2);
    //printf("%s\n%s\n%d\n%d\n",name1,name2,name1_length,name2_length); //,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,<<<<<<<<<<<<
    //getch();
    system("cls");
    char s[1000];
    char store;
    int i,store2,w[1000],  terminate=1;
    int l; //length of string
    gotoxy(2,3);
    setfgcolor(light_red);
    printf("Enter your message here\n\n");
    setfgcolor(white);
    // input string for test code "ab cd";
    gets(s);
    l=strlen(s);
    /*FILE *fp;
    fp=fopen("SecretCode.c","a");
    if(fp==NULL)
    {
        printf("The file could not be found");
        exit(1);
    }
    putw(l,fp);
    fclose(fp);    */
    //printf("LENGTH OF STRING IS %d\n",l);
    system("cls");
    int id=0,sum1=0,sum2=0,sum3=0,sum4=0,OTPA;
    gotoxy(2,4);
    setfgcolor(light_yellow);
    printf("PLEASE GENERATE A FOUR DIGIT PASSWARD                   ");
    gotoxy(6,9);
    setfgcolor(light_red);
    printf(" [   ]  ");
    gotoxy(14,9);
    printf(" [   ]  ");
    gotoxy(22,9);
    printf("  [   ]  ");
    gotoxy(30,9);
    printf("  [   ]  ");
    gotoxy(9,9);
    setfgcolor(white);
    scanf("%d",&sum1);
    gotoxy(17,9);
    scanf("%d",&sum2);
    gotoxy(26,9);
    scanf("%d",&sum3);
    gotoxy(34,9);
    scanf("%d",&sum4);
    id=sum1+sum4;
    id=id+id*sum2*sum3;
    id=id-sum4;
    id=id+id*sum2;
    //printf("%d",id);
    //getch();                         //  code for id ********************************************88
    gotoxy(10,15);
    setfgcolor(light_red);
    printf("PLEASE WAIT");
    Beep(0,1500);
    srand;
    /*OTPA=rand();
    system("cls");
    gotoxy(3,3);
    printf("THIS IS YOUR SENDING ID ADDRESS -> %d",OTPA);*/
    gotoxy(3,10);
    //printf("PRESS ENTER TO SEND THE MESSAGE");
    //getch();
    //printf("\n\nThis is original code :");
    for(i=0;i<=l;i++)
    {
        store=s[i];
        //printf("  %c  ",s[i]);
        for (terminate=1;terminate<2;terminate++)
        {

       if(store=='a')
        {
            store2=1;
            break;
        }
        else if(store=='b')
        {
            store2=2;
            break;
        }
        else if (store==' ')
        {
            store2=3;
            break;
        }
        else if(store=='c')
        {
            store2=4;
            break;
        }
        else if (store=='d')
        {
            store2=5;
            break;
        }
        else if (store=='e')
        {
            store2=6;
            break;
        }
        else if (store=='f')
        {
            store2=7;
            break;
        }
        else if (store=='g')
        {
            store2=8;
            break;
        }
        else if (store=='h')
        {
            store2=9;
            break;
        }
        else if(store=='i')
        {
            store2=10;
            break;
        }
        else if(store=='j')
        {
            store2=11;
            break;
        }
        else if(store=='k')
        {
            store2=12;
            break;
        }
        else if(store=='l')
        {
            store2=13;
            break;
        }
        else if(store=='m')
        {
            store2=14;
            break;
        }
       /* else if(store=='i')
        {
            store2=14
        }     */
        else if(store=='n')
        {
            store2=15;
            break;
        }
        //else if(store=='o')
       // {
        //    store2=16;
       // }
        else if(store=='p')
        {
            store2=17;
            break;
        }
        else if(store=='q')
        {
            store2=18;
            break;
        }
        else if(store=='r')
        {
            store2=19;
            break;
        }
        else if(store=='s')
        {
            store2=20;
            break;
        }
        else if(store=='t')
        {
            store2=21;
            break;
        }
        else if(store=='u')
        {
            store2=22;
            break;
        }
        else if(store=='v')
        {
            store2=23;
            break;
        }
        else if(store=='w')
        {
            store2=24;
            break;
        }
        else if(store=='x')
        {
            store2=25;
            break;
        }
        else if(store=='y')
        {
            store2=26;
            break;
        }
        else if(store=='z')
        {
            store2=27;
            break;
        }
        else if(store=='.')
        {
            store2=28;
            break;
        }
        else if(store=='A')
        {
            store2=29;
            break;
        }
        else if(store=='B')
        {
            store2=30;
            break;
        }
        else if(store=='C')
        {
            store2=31;
            break;
        }
        else if(store=='D')
        {
            store2=32;
            break;
        }
        else if(store=='E')
        {
            store2=33;
            break;
        }
        else if(store=='F')
        {
            store2=34;
            break;
        }
        else if(store=='G')
        {
            store2=35;
            break;
        }
        else if(store=='H')
        {
            store2=36;
            break;
        }
        else if(store=='I')
        {
            store2=37;
            break;
        }
        else if(store=='J')
        {
            store2=38;
            break;
        }
        else if(store=='K')
        {
            store2=39;
            break;
        }
        else if(store=='L')
        {
            store2=40;
            break;
        }
        else if(store=='M')
        {
            store2=41;
            break;
        }
        else if(store=='N')
        {
            store2=42;
            break;
        }
        else if(store=='O')
        {
            store2=43;
            break;
        }
        /*else if store=='1')
        {
            store2=49;
        }      */
        else if (store=='P')
        {
            store2=44;
            break;
        }
        else if (store=='Q')
        {
            store2=45;
            break;
        }
        else if (store=='R')
        {
            store2=46;
            break;
        }
        else if (store=='S')
        {
            store2=47;
            break;
        }
        else if (store=='T')
        {
            store2=48;
            break;
        }
        else if (store=='U')
        {
            store2=49;
            break;
        }
        else if (store=='V')
        {
            store2==50;
            break;
        }
        else if (store=='W')
        {
            store2=51;
            break;
        }
        else if (store=='X')
        {
            store2=52;
            break;
        }
        else if (store=='Y')
        {
            store2=53;
            break;
        }
        else if (store=='Z')
        {
            store2=54;
            break;
        }
        else if (store=='1')
        {
            store2=55;
            break;
        }
        else if (store=='2')
        {
            store2=56;
            break;
        }
        else if (store=='3')
        {
            store2=57;
            break;
        }
        else if (store=='4')
        {
            store2=58;
            break;
        }
        else if (store=='5')
        {
            store2=59;
            break;
        }
        else if (store=='6')
        {
            store2=60;
            break;
        }
         else if (store=='7')
        {
            store2=61;
            break;
        }
         else if (store=='8')
        {
            store2=62;
            break;
        }
         else if (store=='9')
        {
            store2=63;
            break;
        }
         else if (store=='0')
        {
            store2=64;
            break;
        }
         else if (store=='!')
        {
            store2=65;
            break;
        }
        else if (store=='o')
        {
            store2=111;
            break;
        }
        else if (store=='@')
        {
            store2=66;
            break;
        }
        else if (store=='#')
        {
            store2=67;
            break;
        }
        else if (store=='$')
        {
            store2=68;
            break;
        }
        else if (store=='%')
        {
            store2=69;
            break;
        }
        else if (store=='^')
        {
            store2=70;
            break;
        }
        else if (store=='&')
        {
            store2=71;
            break;
        }
        else if (store=='*')
        {
            store2=72;
            break;
        }
        else if (store=='(')
        {
            store2=73;
            break;
        }
        else if (store==')')
        {
            store2=74;
            break;
        }
        else if (store=='_')
        {
            store2=75;
            break;
        }
        else if (store=='+')
        {
            store2=76;
        break;
        }
        else if (store=='-')
        {
            store2=77;
            break;
        }
        else if (store=='=')
        {
            store2=78;
            break;
        }
        else if (store=='[')
        {
            store2=79;
            break;
        }
        else if (store==']')
        {
            store2=80;
            break;
        }
        else if (store=='|')
        {
            store2=81;
            break;
        }
        else if (store==';')
        {
            store2=82;
            break;
        }
        else if (store==39)                                  //***********************  ASCII VALUE OF ' is 39
        {
            store2=83;
            break;
        }
        else if (store==',')
        {
            store2=84;
            break;
        }
        else if (store=='.')
        {
            store2=85;
            break;
        }
        /*else if (store=='/')
        {
            store2=86;
            break;
        }  */
        else if (store==123)
        {
            store2=87;
            break;
        }
        else if (store==125)
        {
            store2=88;
            break;
        }
        else if (store==':')
        {
            store2=89;
            break;
        }
        else if (store==34)   //******************************************* ASCII value of " is 34
        {
            store2=90;
            break;
        }
        else if (store=='<')
        {
            store2=91;
            break;
        }
        else if (store=='>')
        {
            store2=92;
            break;
        }
        else if (store=='?')
        {
            store2=93;
            break;
        }


        else
        {
            //store2=100;
            break;

        }
        }
       // w[i]=store;
        printf(" %d ",store2);
        w[i]=store2+id;
    }
    printf("\n");
    setfgcolor(light_red);
    printf(" THIS IS SECRET CODE : ");
    for(i=0;i<l;i++)
    {
        printf(" %d ",w[i]);
    }
    //getch();
    //printf("\n\nTHIS CODE is saved in SecretCode.c \n\n\n//COPY THE CONTENT IN SecretCode2.c for receiver\n\n\n\n\n\n ");
    FILE *fp, *fp2;
    fp=fopen("SecretCode.c","w");     //     changes have to be made here**********************************************888
    fp2=fopen("Names.c","w");
    if(fp==NULL)
    {
        printf("FILE 1 COULD NOT BE CREATED");
        exit(1);
    }
    if(fp2==NULL)
    {
        printf("FILE 2 COULD NOT BE CREATED");
        exit(1);
    }
    int k,y;
    char name;
    putw(id,fp2);                   // ID STORED IN FILE OF NAMES>>>>>>>>>>.
    putw(l,fp);
    putw(name1_length,fp2);
    putw(name2_length,fp2);
    for(y=0;y<name1_length;y++)
    {
        name=name1[y];
        putc(name,fp2);
    }
    y=0;
    for(y=0;y<name2_length;y++)
    {
        name=name2[y];
        putc(name,fp2);
    }
    for(i=0;i<l;i++)
    {
        k=w[i];
        putw(k,fp);
    }
    fclose(fp);
    fclose(fp2);
    system("cls");
    gotoxy(5,2);
    setfgcolor(light_yellow);
    printf("    SENDIND MESSAGE    ");
    int u=1;
    gotoxy(5,5);
    puts(name1);
    gotoxy(5,7);
    setfgcolor(dark_yellow);
    printf("!##!\n      ** \n     !##!");
    //printf("-------");
    gotoxy(40,5);
    puts(name2);
    gotoxy(40,7);
    {
        printf("!##!\n");
        gotoxy(40,8);
        printf(" ** ");
        gotoxy(40,9);
        printf("!##!");
    }
setfgcolor(light_cyan);
    for(u=10;u<38;u++)
    {
        gotoxy(u,8);
        Beep(0,90);
        printf(">");
    }
    system("cls");
    gotoxy(5,5);
    setfgcolor(light_yellow);
    printf("MESSAGE SENT");
    gotoxy(7,10);
    setfgcolor(white);
    printf("PRESS ENTER TO EXIT");
    setfgcolor(black);
    gotoxy(10,18);
}
