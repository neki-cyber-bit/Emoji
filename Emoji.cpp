#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int gd,gm;
	gd=DETECT;
	char n;
	int x,y;
	initgraph(&gd,&gm,"");
	x=getmaxx()/2;
	y=getmaxy()/2;
	//circle(100,100,50);
	printf("Enter s for smile and other for sad emoji\n");
	scanf("%c",&n);
	if(n=='s')
	{
		//emoji face
		setcolor(14);
		//face
		ellipse(x,y,0,360,60,50);
		//face color
		setfillstyle(SOLID_FILL,14);
		fillellipse(x,y,60,50);	
		//left eye
		setcolor(0);
		ellipse(x-30,y-15,0,360,6,5);
		//Eyecolor
		setfillstyle(SOLID_FILL,0);
		fillellipse(x-30,y-15,6,5);//left eye color
		fillellipse(x+30,y-15,6,5);//right eye color
		//right eye
		ellipse(x+30,y-15,0,360,6,5);
		//smile
		setcolor(0);
		arc(x,y-10,200,340,40);
	}
	else
	{
		//emoji face
		setcolor(14);
		//face
		ellipse(x,y,0,360,60,50);
		//face color
		setfillstyle(SOLID_FILL,14);
		fillellipse(x,y,60,50);	
		//left eye
		setcolor(0);
		ellipse(x-30,y-15,0,360,6,5);
		//Eyecolor
		setfillstyle(SOLID_FILL,0);
		fillellipse(x-30,y-15,6,5);//left eye color
		fillellipse(x+30,y-15,6,5);//right eye color
		//right eye
		ellipse(x+30,y-15,0,360,6,5);
		//sad
		setcolor(0);
		arc(x,y+40,40,140,40);
	}
	getch();
	closegraph();
}
