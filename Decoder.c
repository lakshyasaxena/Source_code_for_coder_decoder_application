//This is code reader program

#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<stdlib.h>

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
    gotoxy(3,4);
    //printf("HELLO");
    int id,e=0,tick=10,clock=20,chance=3;
    int l,  terminate=1,y;
    int date,time;
    char s[1000];
    char store,name1[20],name2[20];
    int len1,len2;
    int i,store2,w[1000];
    //puts(name1);
    //printf("\n");
    //puts(name2);
    //printf("\n");
    //printf("Enter the id     ");
    //scanf("%d",&id);
    FILE *fp, *fp2;
      fp=fopen("SecretCode.c","r");         //     changes have to be made here *******************************************************
      fp2=fopen("Names.c","r");
    if(fp==NULL)
    {
        printf("File not found");
        exit(1);
    }
    if(fp2==NULL)
    {
        printf("File could not be found");
        exit(1);
    }
    //date=getw(fp3);
    //time=getw(fp3);
    id=getw(fp2);
    l=getw(fp);
    len1=getw(fp2);
    //printf("%d",len1);
    //getch();
    len2=getw(fp2);
    //printf("%d",len2);
    //getch();
    //printf("  %d  %d  ",len1,len2);
    for(y=0;y<len1;y++)
    {
        name1[y]=getc(fp2);
    }
    name1[y]='\0';                   //   most important technique..  must remember
    y=0;
    for(y=0;y<len2;y++)
    {
        name2[y]=getc(fp2);
    }
    name2[y]='\0';                   //    most  important  , must remember
    //fp=fopen("SecretCode.c","r");
    store2=getw(fp);
    i=0;
    while (store2!=EOF)
    {
        //printf(" %d ",store2);
        w[i]=store2;
        store2=getw(fp);
        i++;
    }
    fclose(fp);
    fclose(fp2);
    setfgcolor(light_cyan);
    printf("  HELLO  ");
    //puts(name1);
    gotoxy(14,4);
    setfgcolor(light_yellow);
    puts(name2);
    gotoxy(5,6);
    setfgcolor(light_cyan);
    printf("THERE IS A MESSAGE FOR YOU ");
    gotoxy(5,8);
    //setfgcolor(light_yellow);
    printf("FROM : ");
    gotoxy(12,8);
        setfgcolor(light_yellow);
    puts(name1);
    gotoxy(8,10);
    setfgcolor(light_red);
    printf("PRESS  (2)  TO READ THE MESSAGE");
    gotoxy(8,12);
    printf("PRESS (1)  TO EXIT ");
    gotoxy(70,20);
    scanf("%d",&e);
    if(e==1)
    {
        tick=0;
     goto END;
    }
    else
        system("cls");
        gotoxy(4,3);
        setfgcolor(light_yellow);
        printf("PLEASE PROVIDE THE PASSWARD");
        int sum1,sum2,sum3,sum4,total=0;
        ATTEMP:
    {
         system("cls");
        gotoxy(4,3);
        setfgcolor(light_yellow);
        printf("PLEASE PROVIDE THE PASSWARD");
        int sum1=0,sum2=0,sum3=0,sum4=0,total=0;
        setfgcolor(light_cyan);
        gotoxy(6,9);
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
        total=sum1+sum4;
    total=total+total*sum2*sum3;
    total=total-sum4;
    total=total+total*sum2;
    if(total!=id)
    {
         if(chance==1)
        {
            system("cls");
            goto DEFAULT;
        }
        chance=chance-1;
        gotoxy(4,4);
        printf("YOU ENTERED WRONG PASS WARD");
        gotoxy(4,5);
        printf("PRESS ENTER TO RETRY");
        getch();
        system("cls");
        goto ATTEMP;
    }
        //total=sum1+sum2+sum3+sum4;
        //printf("%d",total);
        //getch();

       /* if(total==id);
        {
            clock=0;
            goto DEFAULT;
        } */

                         //  code for id ********************************************88

    printf("\n\n\n  THIS WAS YOUR SCREAT CODE :");
    for(i=0;i<l;i++)
    {
        printf("  %d  ",w[i]);
    }
    printf("\n\n   This was the original code");
    for (i=0;i<l;i++)
    {
        w[i]=w[i]-id;
        printf(" %d ",w[i]);
    }
    system("cls");
    //printf("\n\n\n\n\n\nPRESS ENTER TO READ THE MESSAGE");
    //getch();
    system("cls");
    if(id!=total)
    {
       // printf("  chal to raha he");
        clock=0;
        goto DEFAULT;

    }




    if(id==total)
    {
        int w=0;
        for(w=5;w<=10;w++)
        {
            gotoxy(w,5);
            Beep(0,50);
            printf(".");
        }
        gotoxy(10,10);
        setfgcolor(light_cyan);
        printf("PASS WARD MATCH\n\n");
        Beep(0,1000);

    }
    gotoxy(8,13);
    setfgcolor(light_red);
    printf("\n\n\n\n\n\nDECODING THE MESSAGE");
    //getch();
    int r=28;
    for(r=25;r<=35;r++)
    {
    gotoxy(r,19);
    Beep(0,80);
    printf(".");
    }
    Beep(0,1000);
    system("cls");
    gotoxy(2,3);
    //gotoxy(0,0);
   // printf("SENDING DATE OF MESSAGE: %s",date);
    //gotoxy(03);
    //printf("SENDING TIME OF MESSAGE: %s",time);
    setfgcolor(light_cyan);
    printf("FROM : ");
    gotoxy(10,3);
    setfgcolor(light_yellow);
    puts(name1);
    gotoxy(2,4);
    setfgcolor(light_cyan);
    printf("To :");
    gotoxy(10,4);
    setfgcolor(light_yellow);
    puts(name2);
    gotoxy(28,7);
    setfgcolor(light_red);
    printf("MESSAGE");
    gotoxy(0,10);
    setfgcolor(white);
    //getch();

   // printf("Enter the string");
    // input string for test code "AB CD;
   // printf("\n\nTHIS IS ORIGINAL MESSAGE :\n\n ");

    for(i=0;i<l;i++)
    {
        store2=w[i];
        //printf("  %c  ",s[i]);
        for(terminate=1;terminate<=2;terminate++)
        {

       if(w[i]==1)
        {
            store='a';
            break;
        }
        else if(w[i]==2)
        {
            store='b';
            break;
        }
        else if (w[i]==3)
        {
            store=' ';
            break;
        }
        else if(w[i]==4)
        {
            store='c';
            break;
        }
        else if (w[i]==5)
        {
            store='d';
            break;
        }
        else if (w[i]==6)
        {
            store='e';
            break;
        }
        else if (w[i]==7)
        {
            store='f';
            break;
        }
        else if (w[i]==8)
        {
            store='g';
            break;
        }
        else if (w[i]==9)
        {
            store='h';
            break;
        }
        else if (w[i]==10)
        {
            store='i';
            break;
        }
        else if (w[i]==11)
        {
            store='j';
            break;
        }
        else if (w[i]==12)
        {
            store='k';
            break;
        }
        else if (w[i]==13)
        {
            store='l';
            break;
        }
        else if (w[i]==14)
        {
            store='m';
            break;
        }
        else if (w[i]==15)
        {
            store='n';
            break;
        }
        //else if (w[i]==16)
        //{
        //    store='o';
        //}
        else if (w[i]==17)
        {
            store='p';
            break;
        }
        else if (w[i]==18)
        {
            store='q';
            break;
        }
        else if (w[i]==19)
        {
            store='r';
            break;
        }
        else if (w[i]==20)
        {
            store='s';
            break;
        }
        else if (w[i]==21)
        {
            store='t';
            break;
        }
        else if (w[i]==22)
        {
            store='u';
            break;
        }
        else if (w[i]==23)
        {
            store='v';
            break;
        }
        else if (w[i]==24)
        {
            store='w';
            break;
        }
        else if (w[i]==25)
        {
            store='x';
            break;
        }
        else if (w[i]==26)
        {
            store='y';
            break;
        }
        else if (w[i]==27)
        {
            store='z';
            break;
        }
        else if (w[i]==28)
        {
            store='.';
            break;
        }
        else if (w[i]==29)
        {
            store='A';
            break;
        }

        else if (w[i]==30)
        {
            store='B';
            break;
        }
        else if (w[i]==31)
        {
            store='C';
            break;
        }
        else if (w[i]==32)
        {
            store='D';
            break;
        }
        else if (w[i]==33)
        {
            store='E';
            break;
        }
        else if (w[i]==34)
        {
            store='F';
            break;
        }
        else if (w[i]==35)
        {
            store='G';
            break;
        }
        else if (w[i]==36)
        {
            store='H';
            break;
        }
        else if (w[i]==37)
        {
            store='I';
            break;
        }
        else if (w[i]==38)
        {
            store='J';
            break;
        }
        else if (w[i]==39)
        {
            store='K';
            break;
        }
        else if (w[i]==40)
        {
            store='L';
            break;
        }
        else if (w[i]==41)
        {
            store='M';
            break;
        }
        else if (w[i]==42)
        {
            store='N';
            break;
        }
        else if (w[i]==43)
        {
            store='O';
            break;
        }
       /* else if (w[i]==49)
        {
            store='1';
        }*/
        else if (w[i]==44)
        {
            store='P';
            break;
        }
        else if (w[i]==45)
        {
            store='Q';
            break;
        }
        else if (w[i]==46)
        {
            store='R';
            break;
        }
        else if (w[i]==47)
        {
            store='S';
            break;
        }
        else if (w[i]==48)
        {
            store='T';
            break;
        }
        else if (w[i]==49)
        {
            store='U';
            break;
        }
        else if (w[i]==50)
        {
            store='V';
            break;
        }
        else if (w[i]==51)
        {
            store='W';
            break;
        }
        else if (w[i]==52)
        {
            store='X';
            break;
        }
        else if (w[i]==53)
        {
            store='Y';
            break;
        }
        else if (w[i]==54)
        {
            store='Z';
            break;
        }
        else if (w[i]==55)
        {
            store='1';
            break;
        }
        else if (w[i]==56)
        {
            store='2';
            break;
        }
        else if (w[i]==57)
        {
            store='3';
            break;
        }
        else if (w[i]==58)
        {
            store='4';
            break;
        }
        else if (w[i]==59)
        {
            store='5';
            break;
        }
         else if (w[i]==60)
        {
            store='6';
            break;
        }
        else if (w[i]==61)
        {
            store='7';

        }
        else if (w[i]==62)
        {
            store='8';
            break;
        }
        else if (w[i]==63)
        {
            store='9';
            break;
        }
        else if (w[i]==64)
        {
            store='0';
            break;
        }
        else if (w[i]==65)
        {
            store='!';
            break;
        }
        else if(w[i]==111)
        {
            store='o';
            break;
        }
        else if (w[i]==66)
        {
            store='@';
            break;
        }
        else if (w[i]==67)
        {
            store='#';
            break;
        }
        else if (w[i]==68)
        {
            store='$';
            break;
        }
        else if (w[i]==69)
        {
            store='%';
            break;
        }
        else if (w[i]==70)
        {
            store='^';
            break;
        }
        else if (w[i]==71)
        {
            store='&';
            break;
        }
        else if (w[i]==72)
        {
            store='*';
            break;
        }
        else if (w[i]==73)
        {
            store='(';
            break;
        }
        else if (w[i]==74)
        {
            store=')';
            break;
        }
        else if (w[i]==75)
        {
            store='_';
            break;
        }
        else if (w[i]==76)
        {
            store='+';
            break;
        }
        else if (w[i]==77)
        {
            store='-';
            break;
        }
        else if (w[i]==78)
        {
            store='=';
            break;
        }
        else if (w[i]==79)
        {
            store='[';
            break;
        }
        else if (w[i]==80)
        {
            store=']';
            break;
        }
        else if (w[i]==81)
        {
            store='|';
            break;
        }
        else if (w[i]==82)
        {
            store=';';
            break;
        }
        else if (w[i]==83)                     //********************************* reading  '
        {
            store=39;
            break;
        }
        else if (w[i]==84)
        {
            store=',';
            break;
        }
        else if (w[i]==85)
        {
            store='.';
            break;
        }
        else if (w[i]==86)
        {
            store='/';
            break;
        }
        /*else if (w[i]==86)
        {
            store='{';
            break;
        } */
        else if (w[i]==87)
        {
            store='{';
            break;
        }
        else if (w[i]==88)
        {
            store='}';
            break;
        }
        else if (w[i]==89)
        {
            store=':';
            break;
        }
        else if (w[i]==90)
        {
            store=34;                                         //        ***************  ASCII value of " is 34
        }
        else if (w[i]==91)
        {
            store='<';
            break;
        }
        else if (w[i]==92)
        {
            store='>';
            break;
        }
        else if (w[i]==93)
        {
            store='?';
            break;
        }

        else
        {
          store='~';
          break;
        }
        }
       // w[i]=store;
        printf("%c",store);
       // w[i]=store2+id;
    }
    setfgcolor(black);
    //fclose(fp);
    printf("\n\n\n\n");
    }
    if(tick==0)
    {
    END:
        {
            system("cls");
            printf("Message NOT READ\n\n\nPRESS ENTER TO EXIT\n\n\n\n\n");
        }
    }
    if(clock==0)
    {
        DEFAULT:
            {
                gotoxy(4,4);
                printf("YOU ENTERED WRONG PASS WARD");
                gotoxy(4,6);
                printf("NOW PASSWARD HAS BEEN CHANGED");
                gotoxy(4,8);
                printf("GET THE NEW PASSWARD FROM SERVER COMPUTER AFTER VERIFICATION");
                gotoxy(4,10);
                printf("CONTACT : CODER_DECODER PRIVATE LTD..");
                gotoxy(4,12);
                printf("MAIL id:  CODER_DECODER_@first_to_code.c");
                gotoxy(4,14);
                FILE *fp2;
                fp2=fopen("Names.c","w");
                id=28;
                putw(id,fp2);
                fclose(fp2);

            }
    }
}
