#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>


void main()
{
	int i;
	int gdriver = DETECT,gmode;
	initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
	clrscr();

       //	line(0,400,570,400);
    //	line(0,600,639,600);
	for(i=0;i<500;i++)
	{
		cleardevice();
		setcolor(YELLOW);
     //	setfillstyle(SOLID_FILL,RED);
	line(50+i,370,90+i,370);              //1st
	arc(110+i,370,0,180,20);
	line(130+i,370,220+i,370);
	arc(240+i,370,0,180,20);
	line(260+i,370,300+i,370);
	//vertical line
	line(300+i,370,300+i,350);
	line(300+i,350,300+i,330);
	line(300+i,330,300+i,310);
	line(300+i,310,300+i,290);
	//horizontal line
	line(50+i,290,90+i,290);
	line(90+i,290,110+i,290);
	line(110+i,290,200+i,290);
	line(130+i,290,220+i,290);
	line(150+i,290,240+i,290);
	line(170+i,290,260+i,290);
	line(190+i,290,280+i,290);
	line(210+i,290,300+i,290);
	//vertical line
	line(50+i,310,50+i,290);
	line(50+i,330,50+i,310);
	line(50+i,350,50+i,330);
	line(50+i,370,50+i,350);
  //	floodfill(52,369,WHITE);
	line(300+i,330,340+i,330);


	line(340+i,370,380+i,370);       //2nd
	arc(400+i,370,0,180,20);
	line(420+i,370,510+i,370);
	arc(530+i,370,0,180,20);
	line(550+i,370,590+i,370);
	//vertical
	line(590+i,370,590+i,350);
	line(590+i,350,590+i,330);
	line(590+i,330,590+i,310);
	line(590+i,310,590+i,290);
       //horizontal
	line(340+i,290,380+i,290);
	line(380+i,290,400+i,290);
	line(400+i,290,490+i,290);
	line(420+i,290,510+i,290);
	line(440+i,290,530+i,290);
	line(460+i,290,550+i,290);
	line(480+i,290,570+i,290);
	line(500+i,290,590+i,290);
	    //vertical
	line(340+i,310,340+i,290);
	line(340+i,330,340+i,310);
	line(340+i,350,340+i,330);
	line(340+i,370,340+i,350);



	line(165+i,305,165+i,360);
	line(165+i,360,200+i,360);
	line(200+i,360,200+i,305);
	line(200+i,305,165+i,305);
     //  floodfill(166,305,WHITE);
	 //windows
     //	setfillstyle(SOLID_FILL,BLUE);
	line(225+i,305,225+i,330);
	line(225+i,330,260+i,330);
	line(260+i,330,260+i,305);
	line(260+i,305,225+i,305);
	line(105+i,305,105+i,330);
	line(105+i,330,140+i,330);
	line(140+i,330,140+i,305);
	line(140+i,305,105+i,305);
	line(55+i,305,55+i,330);
	line(55+i,330,90+i,330);
	line(90+i,330,90+i,305);
	line(90+i,305,55+i,305);
      //	floodfill(226,305,WHITE);
	//door
	line(455+i,305,455+i,360);
	line(455+i,360,490+i,360);
	line(490+i,360,490+i,305);
	line(490+i,305,455+i,305);
		 //windows
	line(515+i,305,515+i,330);
	line(515+i,330,550+i,330);
	line(550+i,330,550+i,305);
	line(550+i,305,515+i,305);

	line(395+i,305,395+i,330);
	line(395+i,330,430+i,330);
	line(430+i,330,430+i,305);
	line(430+i,305,395+i,305);

	line(345+i,305,345+i,330);
	line(345+i,330,380+i,330);
	line(380+i,330,380+i,305);
	line(380+i,305,345+i,305);
	//wheels
	circle(110+i,370,17);
	circle(240+i,370,17);
	circle(400+i,370,17);
	circle(530+i,370,17);
       // track
       setcolor(RED);
	line(0,387,639,387);


	delay(30);
	cleardevice();
	}


getch();
closegraph();
}
