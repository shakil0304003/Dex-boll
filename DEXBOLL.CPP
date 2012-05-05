#include<iostream.h>
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<math.h>
#include <stdlib.h>
#include<string.h>

getmousepos(int *button,int *x,int *y);
restrictmouseptr(int x1,int y1,int x2, int y2);
showmouseptr();
union REGS i,o;
class shakil
{long int sa[4],r,score,sa1[4],d,r1,p,a,bool1[30],bool2[30],i,powe,bool3[30],b;
 long int bool4[30],sin1[8],sin2[8],sin3[8],kk,lave;
  float c;
public:
int li,oo,mn;
void life()
{li=3;score=0;oo=0;mn=0;lave=0; }
void get()
{r=30;r1=6;p=0;sa1[3]=3;powe=5;d=powe; oo=0; sin3[0]=0;sin3[1]=0;sin3[2]=0;sin3[3]=0;
 kk=0; sin3[4]=0;sin3[5]=0;mn=0;

}
void bo1()
{ a=12;
  for(i=0;i<10;i++)
  {bool1[i]=a+56;a=a+56;bool2[i]=68;bool3[i]=1;bool4[i]=0;}
   a=12;
   for(i=10;i<20;i++)
   {bool1[i]=a+56;a=a+56;bool2[i]=124;bool3[i]=1;bool4[i]=0;}
    a=12;
   for(i=20;i<30;i++)
   {bool1[i]=a+56;a=a+56;bool2[i]=180;bool3[i]=1;bool4[i]=0;}
   bool4[2]=12;bool4[11]=14;bool4[22]=16;bool4[27]=18;
   bool4[9]=10;bool4[25]=8;bool4[6]=6;bool4[17]=4;
}
void bo2()
{ a=12;
  for(i=0;i<10;i++)
  {bool1[i]=a+56;a=a+56;bool2[i]=68;bool3[i]=1;bool4[i]=0;}
   a=12; bool1[4]=68;bool2[4]=236;bool1[5]=124;bool2[5]=236;bool1[6]=68;bool2[6]=292;
   for(i=10;i<20;i++)
   {bool1[i]=a+56;a=a+56;bool2[i]=124;bool3[i]=1;bool4[i]=0;}
    a=12; bool1[11]=160;bool2[11]=280;bool1[12]=224;bool2[12]=236;bool1[19]=268;bool2[19]=292;
   for(i=20;i<30;i++)
   {bool1[i]=a+56;a=a+56;bool2[i]=180;bool3[i]=1;bool4[i]=0;}
    bool1[28]=368;bool2[28]=236;bool1[29]=300;bool2[29]=236;
    bool4[1]=12;bool4[10]=14;bool4[13]=16;bool4[16]=18;
    bool4[25]=10;bool4[7]=8;bool4[12]=6;bool4[24]=4;
}
void bo3()
{ a=12;
  for(i=0;i<10;i++)
  {bool1[i]=a+56;a=a+56;bool2[i]=68;bool3[i]=1;bool4[i]=0;}
   a=12; bool1[1]=68;bool2[1]=236;bool1[2]=124;bool2[2]=236;bool1[3]=68;bool2[3]=292;
   for(i=10;i<20;i++)
   {bool1[i]=a+56;a=a+56;bool2[i]=124;bool3[i]=1;bool4[i]=0;}
    a=12; bool1[16]=160;bool2[16]=280;bool1[18]=224;bool2[18]=236;bool1[19]=268;bool2[19]=292;
   for(i=20;i<30;i++)
   {bool1[i]=a+56;a=a+56;bool2[i]=180;bool3[i]=1;bool4[i]=0;}
    bool1[20]=368;bool2[20]=236;bool1[21]=300;bool2[21]=236;
    bool4[1]=12;bool4[10]=14;bool4[13]=16;bool4[16]=18;
    bool4[25]=10;bool4[7]=8;bool4[12]=6;bool4[24]=4;
}
void bo4()
{ a=12;
  for(i=0;i<10;i++)
  {bool1[i]=a+56;a=a+56;bool2[i]=68;bool3[i]=1;bool4[i]=0;}
   a=12;
   for(i=10;i<20;i++)
   {bool1[i]=a+56;a=a+56;bool2[i]=124;bool3[i]=1;bool4[i]=0;}
   bool1[11]=236;bool2[11]=236;bool1[12]=292;bool2[12]=236;bool1[13]=404;bool2[13]=236;
   bool1[14]=460;bool2[14]=236;bool1[15]=292;bool2[15]=292;bool1[16]=236;bool2[16]=292;
   bool1[17]=348;bool2[17]=292;bool1[18]=404;bool2[18]=292;
    a=12;
   for(i=20;i<30;i++)
   {bool1[i]=a+56;a=a+56;bool2[i]=180;bool3[i]=1;bool4[i]=0;}
   bool4[2]=12;bool4[11]=14;bool4[22]=16;bool4[27]=18;
   bool4[9]=10;bool4[25]=8;bool4[6]=6;bool4[17]=4;
}
void bo5()
{  a=12;
   for(i=10;i<20;i++)
   {bool1[i]=a+56;a=a+56;bool2[i]=124;bool3[i]=1;bool4[i]=0;}
   bool1[0]=68;bool2[0]=68;bool1[9]=572;bool2[9]=68;bool3[0]=1;bool4[0]=0;bool3[9]=1;bool4[9]=0;
   bool1[20]=68;bool2[20]=180;bool1[29]=572;bool2[29]=180;bool3[20]=1;bool4[20]=0;bool3[29]=1;bool4[29]=0;
   a=68;
  for(i=1;i<9;i++)
  {bool1[i]=a+56;a=a+56;bool2[i]=236;bool3[i]=1;bool4[i]=0;}
    a=68;
   for(i=21;i<29;i++)
   {bool1[i]=a+56;a=a+56;bool2[i]=292;bool3[i]=1;bool4[i]=0;}
    bool4[2]=12;bool4[11]=14;bool4[22]=16;bool4[27]=18;
   bool4[9]=10;bool4[25]=8;bool4[6]=6;bool4[17]=4;
}

void calcu(int x,int y)
{if(r==15)
{sa[0]=x-r;sa[1]=y;sa[2]=x+r;sa[3]=y;}
if(r==30)
{sa[0]=x-r/2;sa[1]=y;sa[2]=x+r+r/2;sa[3]=y;
if(x>300)
{sa[0]=x-r-r/2;sa[2]=x+r/2;}}
if(r==60)
{sa[0]=x-15;sa[1]=y;sa[2]=x+105;sa[3]=y;
if(x>100)
{sa[0]=x-40;sa[2]=x+80;  }
if(x>200)
{sa[0]=x-60;sa[2]=x+60;}
if(x>300)
{sa[0]=x-80;sa[2]=x+40; }
if(x>=450)
{sa[0]=x-105;sa[2]=x+15;}}
if(p==0)
{sa1[0]=(sa[0]+sa[2])/2;sa1[1]=y-5;}
if(p==1)
{if(sa1[0]>=sa[0]&&sa1[0]<=sa[2])
 if(sa1[1]+r1>=sa[1])
 {a=sa[0]+r;
 sa1[2]=(sa1[0]-a)/4;
 sa1[3]=-sa1[3];}
}
if(p==1)
{if(sa1[0]-r1<=40)
 sa1[2]=-sa1[2];
 if(sa1[1]-r1<=40)
 {
 sa1[3]=-sa1[3];  }
 if(sa1[0]+r1>=600)
 sa1[2]=-sa1[2];
}

if(p==1)
{for(i=0;i<30;i++)
 { if(bool3[i]==1)
   {   a=bool1[i]-sa1[0];
       if(a<0)
       a=-a;
       a=a*a;
      b=bool2[i]-sa1[1];
      if(b<0)
      b=-b;
      b=b*b;
      c=a+b;
      c=sqrt(c);
      a=(r1+28);
     if(c<=a)
     {bool3[i]=0;d=d-5;score=score+50;
     if(bool4[i]!=0)
     {sin1[kk]=bool1[i];sin2[kk]=bool2[i];sin3[kk]=bool4[i];
      kk++; }   }

   }
 }
 if(d<5)
 {d=powe;sa1[3]=-sa1[3];}
}
if(p==1)
{a=0;
for(i=0;i<30;i++)
if(bool3[i]==0)
a=a+1;
if(a>10)
{powe=10;oo=10;}
if(a>20)
{powe=15;oo=15;}
if(a>25)
{powe=20;oo=20;}
if(a==30)
{ lave=lave+1;
  switch(lave)
  {case 1:bo2();break;
  case 2:bo3();break;
  case 3:bo4();break;
  case 4:bo5();break;
  case 5:outtextxy(40,40,"YOU WON THE GAME AND YOUR SCORE:");
	 printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n          %ld",score);
	 delay(5000);
	 getch();
	 fil();
	 li=0;
	  break;
  }
   get();}
}
if(p==1)
{if(sa1[1]>=460)
 { outtextxy(150,350,"LIFE LOSE");
   li=li-1;
   delay(5000);
   if(li==0)
   {outtextxy(370,150,"GAME OVER");
    outtextxy(380,250,"YOUR SCORE");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n             %ld",score);
    delay(4000);

    fil();
	   }
   if(li!=0)
   {get();  }
	    }
  }
if(p==1)
{sa1[0]=sa1[0]+sa1[2];
sa1[1]=sa1[1]+sa1[3];
}
   }
void free()
{ p=1;
}
void show()
{
  cleardevice();
  setcolor(RED);
  rectangle(40,40,600,450);

  setcolor(RED);
  line(sa[0],sa[1],sa[2],sa[3]);
  rectangle(sa[0],sa[1],sa[2],sa[3]+5);
  setfillstyle(SOLID_FILL,RED);
  floodfill((sa[0]+sa[2])/2,(sa[1]+sa[3]+5)/2,RED);
  circle(sa1[0],sa1[1],r1);
  setfillstyle(SOLID_FILL,RED);
  floodfill(sa1[0]+1,sa1[1]+1,RED);
  setcolor(RED);
  for(i=0;i<30;i++)
  if(bool3[i]==1)
  { setcolor(rand()%5+1);
   circle(bool1[i],bool2[i],28);
    }

  for(i=0;i<kk;i++)
  {if(sin3[i]!=0)
   if(sin2[i]<=445)
   { sin2[i]=sin2[i]+5;
     circle(sin1[i],sin2[i],sin3[i]);
     switch(sin3[i])
     {case 12:outtextxy(sin1[i]-5,sin2[i],"+1");
	      break;
     case 14:outtextxy(sin1[i]-5,sin2[i],"-1");
	     break;
     case 16:outtextxy(sin1[i]-5,sin2[i],"+");
	      break;
     case 18: outtextxy(sin1[i]-5,sin2[i],"-");
	      break;
     case 8:outtextxy(sin1[i]-5,sin2[i],"@");
	     break;
     case 10:outtextxy(sin1[i]-5,sin2[i],"*");
	     break;
     case 6:outtextxy(sin1[i]-2,sin2[i],"O");
	     break;
     case 4:outtextxy(sin1[i]-1,sin2[i],"o");
	     break;
     }
    if(sin1[i]>=sa[0]&&sin1[i]<=sa[2])
    {
     if(sin2[i]+sin3[i]>=sa[1])
    {
     switch(sin3[i])
    {case 12:li=li+1;break;
     case 14:outtextxy(140,350,"LIFE LOSE");
	     li=li-1;score=score-50;
	     delay(2000);
	     if(li==0)
	    {cleardevice();
	     outtextxy(140,380,"GAME OVER AND YOUR SCORE");
	     printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n            %ld",score);
	     delay(4000);

	     fil();
	       }
	     get();
	     break;
     case 16:r=r*2;score=score+100;break;
     case 18:r=r/2;break;
     case 8:mn=20;score=score+100;break;
     case 10:powe=powe*powe;score=score+100;break;
     case 6:r1=r1*2;score=score+100;
	   break;
     case 4:r1=r1/2;
	    break;
     }

     sin3[i]=0;
     }}
   }
  }

}
void fil()
{ FILE *p1;
  char sd[24][10];
  i=0;
  clrscr();
  cleardevice();
  long int ii[24],j,k,max,my;

  p1=fopen("RESTORE","r");
  while(feof(p1)==0)
  {fscanf(p1,"%s %ld",sd[i],&ii[i]);
   i++;
     }
  fclose(p1);

  outtextxy(100,100,"GIVE YOUR NAME:");
  printf("\n\n\n\n\n\n\n                       ");
  scanf("%s",sd[i]);

  printf("\n\n");
  ii[i]=score;
  outtextxy(100,130,"THIS IS MADE BY SHAKIL (0304003)\n");
  p1=fopen("RESTORE","w");
  for(j=0;j<=i;j++)
  {max=0;
   for(k=0;k<=i;k++)
   if(max<ii[k])
   {max=ii[k];my=k;}
   if(max==0)
   break;
   fprintf(p1,"%s %ld",sd[my],ii[my]);
   ii[my]=0;
   if(j>19)
   break;
  }
  fclose(p1);
  p1=fopen("RESTORE","r");
  while(feof(p1)==0)
  {fscanf(p1,"%s %ld",sd[0],&ii[0]);
   printf("              %s   =    %ld\n",sd[0],ii[0]);}
   fclose(p1);
  getch();
}
void pic()
{setcolor(1234);
 outtextxy(50,50,"THIS IS MADE BY SHAKIL(0304003)");
 outtextxy(45,60,"IT HAS 5 LAP AND IN EVERY LAP IT HAS 8 EATTING THINGS.");
 outtextxy(45,70,"like +1,-1,+,-,*,@,0,o");
 outtextxy(45,80,"for increase life,discrease life,--- big or small");
 outtextxy(45,90,"speed high,boll power,big or small boll.");
 outtextxy(60,100,"PRESS ENTER.....");
 circle(250,250,100);
 setfillstyle(SOLID_FILL,1234);
 floodfill(250+1,250+1,1234);
 getch();
}

 };
void main()
{int gd=DETECT,gm;
initgraph(&gd,&gm,"e:\\tc\\bgi");
int button,x,y;
restrictmouseptr(55,445,585,445);  //55,445,585,455

xx: int yy;
shakil ob;
ob.life();
ob.get();
ob.bo1();
ob.pic();
while(1)
{
 getmousepos(&button,&x,&y);
 ob.calcu(x,y);
 ob.show();
 int a=ob.oo+ob.mn;
 if(a>=25)
  a=25;
 delay(40-a);
 if((button & 2)==2)
 {goto xy;
  }
 if((button & 1)==1)
 ob.free();
 if(ob.li==0)
 {outtextxy(30,300,"IF YOU WANT TO PLAY AGAIN PRESS 1 OR OTHED");
  scanf("%d",&yy);
  if(yy==1)
  goto xx;
  else
  goto xy;
 }
}
xy:

closegraph();
}



initmouse()
{i.x.ax=0;
 int86(0x33,&i,&o);
 return(o.x.ax);
}
getmousepos(int *button,int *x,int *y)
{i.x.ax=3;
 int86(0x33,&i,&o);
 *button=o.x.bx;
 *x=o.x.cx;
 *y=o.x.dx;
}
showmouseptr()
{i.x.ax=1;
 int86(0x33,&i,&o);
}
restrictmouseptr(int x1,int y1,int x2, int y2)
{i.x.ax=7;
 i.x.cx=x1;
 i.x.dx=x2;
 int86(0x33,&i,&o);
 i.x.ax=8;
 i.x.cx=y1;
 i.x.dx=y2;
 int86(0x33,&i,&o);
 }
