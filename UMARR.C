#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void jan();
void feb();
void march();
void april();
void may();
void june();
void july();
void august();
void sept();
void oct();
void nov();
void dec();
void quarter();
void yearly();

struct amt
{
 float jtb;
 float ftb;
 float mtb;
 float atb;
 float matb;
 float jutb;
 float jjtb;
 float autb;
 float stb;
 float otb;
 float ntb;
 float dtb;
 }amt;
 struct qua
 {
 float qt1;
 float qt2;
 float qt3;
 float qt4;
 }qua;
 struct year
 {
 int id;
 float tt;
 }year;

void main()
 {
 FILE *ptr;
 int idd;
 int select,month,records;
 char yn ;
 int gd = DETECT , gm;
 initgraph(&gd,&gm,"C:\\TC\\BGI");
 cleardevice();
 gotoxy(20,12);
 printf("I.T Tower Utilities Management System");
 getch();
 cleardevice();
 main:
 gotoxy(4,4);
 printf("Select Bill For:");
 gotoxy(5,6);
 printf("1. Monthly");
 gotoxy(5,8);
 printf("2. Quarterly");
 gotoxy(5,10);
 printf("3. Yearly");
 gotoxy(5,12);
 printf("4. Check records");
 gotoxy(6,15);
 printf("Enter no:");
 scanf("%d",&select);
 cleardevice();

 if(select==1)
 {
 cleardevice();
 printf("Input ID:");
 fflush(stdin);
 scanf("%d",&year.id);
 cleardevice();
 month:
 gotoxy(4,6);
 printf("Januray ----> 1");
 gotoxy(4,7);
 printf("February ----> 2");
 gotoxy(4,8);
 printf("March ----> 3");
 gotoxy(4,9);
 printf("April ----> 4");
 gotoxy(4,10);
 printf("May ----> 5");
 gotoxy(4, 11);
 printf("June ----> 6");
 gotoxy(4,12);
 printf("July ----> 7");
 gotoxy(4,13);
 printf("August ----> 8");
 gotoxy(4,14);
 printf("September ----> 9");
 gotoxy(4,15);
 printf("October ----> 10");
 gotoxy(4,16);
 printf("November ----> 11");
 gotoxy(4,17);
 printf("December ----> 12");
 gotoxy(4,20);
 printf("Enter month:");
 scanf(" %d",&month);
 //}
  if(month == 1)
 {
 jan();
 getch();
 cleardevice();
 goto month;
 }
 if (month == 2)
 {
 feb();
 getch();
 cleardevice();
 goto month;
 }
 if (month == 3)
 {
 march();
 getch();
 cleardevice();
 goto month;
 }
 if (month == 4)
 {
 april();
 getch();
 cleardevice();
 goto month;
 }
 if(month == 5)
 {
 may();
 getch();
 cleardevice();
 goto month;
 }
 if(month == 6)
 {
 june();
 getch();
 cleardevice();
 goto month;
 }
 if(month == 7)
 {
 july();
 getch();
 cleardevice();
 goto month;
 }
 if(month == 8)
 {
 august();
 getch();
 cleardevice();
 goto month;
 }
 if(month == 9)
 {
 sept();
 getch();
 cleardevice();
 goto month;
 }
 if (month == 10)
 {
 oct();
 getch();
 cleardevice();
 goto month;
 }
 if (month == 11)
 {
 nov();
 getch();
 cleardevice();
 goto month;
 }
 if (month == 12)
 {
 dec();
 getch();
 cleardevice();
 goto main;
 }
 }
  else if (select==2)
 {
 quarter();
 getch();
 cleardevice();
 goto main;
 }
 else if(select==3)
 {
 yearly();
 getch();
 cleardevice();
 goto main;
 }
 else if(select==4)
 {
 rec:
 cleardevice();
 printf("Input ID:");
 fflush(stdin);
 scanf("%d",&idd);
 cleardevice();
 rectangle(100,200,400,300);
 gotoxy(15,15);
 if(strcmp(year.id,idd)==0){
 if((ptr=fopen("bill.txt","r"))==NULL){
 printf("Error opening file");
 exit(1);
 }
 fscanf(ptr,"%d",&year.tt);
 printf("Total Amount: %.2f\n",year.tt);
 fclose(ptr);
 }
 }
 getch();
 closegraph();
 end:
 }

 void jan()
 {
 float jgac,jgtt,jfac,jftt,jsac,jstt,jtac,jttt,jftac,jfott,jffac,jfftt,jssac,jsstt,jt,jed,jd;
 int ac,fan,tubelights,choice;
 float mwf=4,tts=5,fu=1,tu=0.5,rpu=22;
 char yn,discount;
 cleardevice();
 top:
 gotoxy(3,3);
 printf("Generate Bill for:");
 gotoxy(5,5);
 printf("1) Ground Floor");
 gotoxy(5,7);
 printf("2) 1st Floor");
 gotoxy(5,9);
 printf("3) 2nd Floor");
 gotoxy(5,11);
 printf("4) 3rd Floor");
 gotoxy(5,13);
 printf("5) 4th Floor");
 gotoxy(5,15);
 printf("6) 5th Floor");
 gotoxy(5,17);
 printf("7) 6th Floor");
 gotoxy(5,22);
 printf("Enter your choice:");
 scanf("%d",&choice);
 cleardevice();
 switch(choice)
 {
 case 1:
 cleardevice();
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 jgac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 jgtt=jgac*30;
 gotoxy(4 , 12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top;
	}
	else
	{
	goto end;
	}
 case 2:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 jfac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 jftt=jfac*30;
 gotoxy(4,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top;
	}
	else
	{
	goto end;
       }
 case 3:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 jsac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 jstt=jsac*30;
 gotoxy(4 ,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top;
	}
	else
	{
	goto end;
	}
 case 4:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 jtac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 jttt=jtac*30;
 gotoxy(4,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top;
	}
	else
	{
	goto end;
	}
 case 5:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 jftac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 jfott=jftac*30;
 gotoxy(4,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top;
	}
	else
	{
	goto end;
	}
 case 6:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 jffac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 jfftt=jffac*30;
 gotoxy(4 ,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top;
	}
	else
	{
	goto end;
	}
 case 7:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 jssac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 jsstt=jssac*30;
 cleardevice();
 rectangle(30,80,300,400);
 gotoxy(5,5);
 printf("Per Day Bill");
 gotoxy(10,8);
 printf("Ground Floor %.2f",jgac);
 gotoxy(10,10);
 printf("1st Floor %.2f",jfac);
 gotoxy(10,12);
 printf("2nd Floor %.2f",jsac);
 gotoxy(10,14);
 printf("3rd Floor %.2f",jtac);
 gotoxy(10,16);
 printf("4th Floor %.2f",jftac);
 gotoxy(10,18);
 printf("5th Floor %.2f",jffac);
 gotoxy(10,20);
 printf("6thFloor %.2f",jssac);
 gotoxy(6 , 22);
 getch();
 cleardevice();
 gotoxy(9,6);
 printf("Do you have more than 4000 students in your university (y/n):");
 scanf(" %c",&discount);
 if(discount!='y')
 {
 cleardevice();
 jt=jgtt+jftt+jstt+jttt+jfott+jfftt+jsstt;
 jed=(jt*30)/100;
 amt.jtb=jt+jed;
 cleardevice();
 gotoxy(8,2);
 printf("January Total Bill");
 rectangle(50,40,550,400);
 gotoxy(30,4);
 printf("Rate per Unit is 22");
 gotoxy(11,6);
 printf("Ground Floor Amount");
 gotoxy(60,6);
 printf("%.2f",jgtt);
 gotoxy(11,8);
 printf("1st Floor Amount");
 gotoxy(60,8);
 printf("%.2f",jftt);
 gotoxy(11,10);
 printf("2nd Floor Amount");
 gotoxy(60,10);
 printf("%.2f",jstt);
 gotoxy(11,12);
 printf("3rd Floor Amount");
 gotoxy(60,12);
 printf("%.2f",jttt);
 gotoxy(11,14);
 printf("4rd Floor Amount");
 gotoxy(60,14);
 printf("%.2f",jfott);
 gotoxy(11,16);
 printf("5th Floor Amount");
 gotoxy(60,16);
 printf("%.2f",jfftt);
 gotoxy(11,18);
 printf("6th Floor Amount");
 gotoxy(60,18);
 printf("%.2f",jsstt);
 gotoxy(11,20);
 printf("Include 30 percent exercise duty");
 gotoxy(60,20);
 printf("%.2f",jed);
 line(430,40,430,400);
 line(50,360,550,360);
 gotoxy(9,24);
 printf("Total Amount");
 gotoxy(60,24);
 printf("%.2f",amt.jtb);
 }
 else if (discount =='y')
 {
 cleardevice();
 jt=jgtt+jftt+jstt+jttt+jfott+jfftt+jsstt;
 jed=(jt*30)/100;
 jd=(jt*24)/100;
 amt.jtb=jt-jd+jed;
 gotoxy(8,2);
 printf("January Total Bill");
 rectangle(50,40,550,400);
 gotoxy(30,4);
 printf("Rate per Unit is 22");
 gotoxy(11,6);
 printf("Ground Floor Amount");
 gotoxy(60,6);
 printf("%.2f",jgtt);
 gotoxy(11,8);
 printf("1st Floor Amount");
 gotoxy(60,8);
 printf("%.2f",jftt);
 gotoxy(11,10);
 printf("2nd Floor Amount");
 gotoxy(60,10);
 printf("%.2f",jstt);
 gotoxy(11,12);
 printf("3rd Floor Amount");
 gotoxy(60,12);
 printf("%.2f",jttt);
 gotoxy(11,14);
 printf("4rd Floor Amount");
 gotoxy(60,14);
 printf("%.2f",jfott);
 gotoxy(11,16);
 printf("5th Floor Amount");
 gotoxy(60,16);
 printf("%.2f",jfftt);
 gotoxy(11,18);
 printf("6th Floor Amount");
 gotoxy(60,18);
 printf("%.2f",jsstt);
 gotoxy(11,19);
 printf("Total Amount");
 gotoxy(60,19);
 printf("%.2f",jt);
 gotoxy(11,21);
 printf("Include 30 percent on exercise duty");
 gotoxy(60,21);
 printf("%.2f",jed);
 gotoxy(11,22);
 printf("Less 24 percent on Total Amount");
 gotoxy(60,22);
 printf("%.2f",jd);
 line(430,40,430,400);
 line(50,360,550,360);
 gotoxy(9,24);
 printf("Final Amount");
 gotoxy(60,24);
 printf("%.2f",amt.jtb);
 }
 }
 end:
 }
 void feb()
 {
 float fgac,fgtt,ffac,fftt,fsac,fstt,ftac,fttt,fftac,ffott,fffac,ffftt,fssac,fsstt,ft,fed,fd;
 int ac,fan,tubelights,choice;
 float mwf=4,tts=5,fu=1,tu=0.5,rpu=22;
 char yn,discount;
 top1:
 cleardevice();
 gotoxy(3,3);
 printf("Generate Bill for:");
 gotoxy(5,5);
 printf("1) Ground Floor");
 gotoxy(5,7);
 printf("2) 1st Floor");
 gotoxy(5,9);
 printf("3) 2nd Floor");
 gotoxy(5,11);
 printf("4) 3rd Floor");
 gotoxy(5,13);
 printf("5) 4th Floor");
 gotoxy(5,15);
 printf("6) 5th Floor");
 gotoxy(5,17);
 printf("7) 6th Floor");
 gotoxy(5,22);
 printf("Enter your choice:");
 scanf("%d",&choice);
 cleardevice();
 switch(choice)
 {
 case 1:
 cleardevice();
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 fgac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 fgtt=fgac*28;
 gotoxy(4 , 12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top1;
	}
	else
	{
	goto end;
	}
 case 2:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 ffac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 fftt=ffac*28;
 gotoxy(4,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top1;
	}
	else
	{
	goto end;
       }
 case 3:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 fsac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 fstt=fsac*28;
 gotoxy(4 ,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top1;
	}
	else
	{
	goto end;
	}
 case 4:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 ftac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 fttt=ftac*28;
 gotoxy(4,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top1;
	}
	else
	{
	goto end;
	}
 case 5:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 fftac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 ffott=fftac*28;
 gotoxy(4,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top1;
	}
	else
	{
	goto end;
	}
 case 6:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 fffac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 ffftt=fffac*28;
 gotoxy(4 ,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top1;
	}
	else
	{
	goto end;
	}
 case 7:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 fssac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 fsstt=fssac*28;
 cleardevice();
 rectangle(30,80,300,400);
 gotoxy(5,5);
 printf("Per Day Bill");
 gotoxy(10,8);
 printf("Ground Floor %.2f",fgac);
 gotoxy(10,10);
 printf("1st Floor %.2f",ffac);
 gotoxy(10,12);
 printf("2nd Floor %.2f",fsac);
 gotoxy(10,14);
 printf("3rd Floor %.2f",ftac);
 gotoxy(10,16);
 printf("4th Floor %.2f",fftac);
 gotoxy(10,18);
 printf("5th Floor %.2f",fffac);
 gotoxy(10,20);
 printf("6thFloor %.2f",fssac);
 gotoxy(6 , 22);
 getch();
 cleardevice();
 gotoxy(4,6);
 printf("Do you have more than 4000 students in your university (y/n):");
 scanf(" %c",&discount);
 if(discount!='y')
 {
 cleardevice();
 ft=fgtt+fftt+fstt+fttt+ffott+ffftt+fsstt;
 fed=(ft*30)/100;
 amt.ftb=ft+fed;
 gotoxy(8,2);
 printf("Feburary Total Bill");
 rectangle(50,40,550,400);
 gotoxy(30,4);
 printf("Rate per Unit is 22");
 gotoxy(11,6);
 printf("Ground Floor Amount");
 gotoxy(60,6);
 printf("%.2f",fgtt);
 gotoxy(11,8);
 printf("1st Floor Amount");
 gotoxy(60,8);
 printf("%.2f",fftt);
 gotoxy(11,10);
 printf("2nd Floor Amount");
 gotoxy(60,10);
 printf("%.2f",fstt);
 gotoxy(11,12);
 printf("3rd Floor Amount");
 gotoxy(60,12);
 printf("%.2f",fttt);
 gotoxy(11,14);
 printf("4rd Floor Amount");
 gotoxy(60,14);
 printf("%.2f",ffott);
 gotoxy(11,16);
 printf("5th Floor Amount");
 gotoxy(60,16);
 printf("%.2f",ffftt);
 gotoxy(11,18);
 printf("6th Floor Amount");
 gotoxy(60,18);
 printf("%.2f",fsstt);
 gotoxy(11,20);
 printf("Include 30 percent exercise duty");
 gotoxy(60,20);
 printf("%.2f",fed);
 line(430,40,430,400);
 line(50,360,550,360);
 gotoxy(9,24);
 printf("Total Amount");
 gotoxy(60,24);
 printf("%.2f",amt.ftb);
  }
 else if (discount =='y')
 {
 cleardevice();
 ft=fgtt+fftt+fstt+fttt+ffott+ffftt+fsstt;
 fed=(ft*30)/100;
 fd=(ft*24)/100;
 amt.ftb=ft-fd+fed;
 gotoxy(8,2);
 printf("Feburary Total Bill");
 rectangle(50,40,550,400);
 gotoxy(30,4);
 printf("Rate per Unit is 22");
 gotoxy(11,6);
 printf("Ground Floor Amount");
 gotoxy(60,6);
 printf("%.2f",fgtt);
 gotoxy(11,8);
 printf("1st Floor Amount");
 gotoxy(60,8);
 printf("%.2f",fftt);
 gotoxy(11,10);
 printf("2nd Floor Amount");
 gotoxy(60,10);
 printf("%.2f",fstt);
 gotoxy(11,12);
 printf("3rd Floor Amount");
 gotoxy(60,12);
 printf("%.2f",fttt);
 gotoxy(11,14);
 printf("4rd Floor Amount");
 gotoxy(60,14);
 printf("%.2f",ffott);
 gotoxy(11,16);
 printf("5th Floor Amount");
 gotoxy(60,16);
 printf("%.2f",ffftt);
 gotoxy(11,18);
 printf("6th Floor Amount");
 gotoxy(60,18);
 printf("%.2f",fsstt);
 gotoxy(11,19);
 printf("Total Amount");
 gotoxy(60,19);
 printf("%.2f",ft);
 gotoxy(11,21);
 printf("Include 30 percent on exercise duty");
 gotoxy(60,21);
 printf("%.2f",fed);
 gotoxy(11,22);
 printf("Less 24 percent on Total Amount");
 gotoxy(60,22);
 printf("%.2f",fd);
 line(430,40,430,400);
 line(50,360,550,360);
 gotoxy(9,24);
 printf("Final Amount");
 gotoxy(60,24);
 printf("%.2f",amt.ftb);
 }
 }
 end:
 }
 void march()
 {
 float mgac,mgtt,mfac,mftt,msac,mstt,mtac,mttt,mftac,mfott,mffac,mfftt,mssac,msstt,mt,med,md;
 int ac, tubelights,fan,choice;
 float mwf=4,tts=5,fu=1,tu=0.5,rpu=22;
 char yn,discount;
 top2:
 cleardevice();
 gotoxy(3,3);
 printf("Generate Bill for:");
 gotoxy(5,5);
 printf("1) Ground Floor");
 gotoxy(5,7);
 printf("2) 1st Floor");
 gotoxy(5,9);
 printf("3) 2nd Floor");
 gotoxy(5,11);
 printf("4) 3rd Floor");
 gotoxy(5,13);
 printf("5) 4th Floor");
 gotoxy(5,15);
 printf("6) 5th Floor");
 gotoxy(5,17);
 printf("7) 6th Floor");
 gotoxy(5,22);
 printf("Enter your choice:");
 scanf("%d",&choice);
 cleardevice();
 switch(choice)
 {
 case 1:
 cleardevice();
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 mgac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 mgtt=mgac*31;
 gotoxy(4 , 12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top2;
	}
	else
	{
	goto end;
	}
 case 2:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 mfac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 mftt=mfac*31;
 gotoxy(4,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top2;
	}
	else
	{
	goto end;
       }
 case 3:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 msac=(ac*mwf+ac*tts*rpu)+(fan*fu*31)+(tubelights*tu*31);
 mstt=msac*31;
 gotoxy(4 ,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top2;
	}
	else
	{
	goto end;
	}
 case 4:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 mtac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 mttt=mtac*31;
 gotoxy(4,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top2;
	}
	else
	{
	goto end;
	}
 case 5:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 mftac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 mfott=mftac*31;
 gotoxy(4,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top2;
	}
	else
	{
	goto end;
	}
 case 6:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 mffac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 mfftt=mffac*31;
 gotoxy(4 ,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top2;
	}
	else
	{
	goto end;
	}
 case 7:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 mssac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 msstt=mssac*31;
 cleardevice();
 rectangle(30,80,300,400);
 gotoxy(5,5);
 printf("Per Day Bill");
 gotoxy(10,8);
 printf("Ground Floor %.2f",mgac);
 gotoxy(10,10);
 printf("1st Floor %.2f",mfac);
 gotoxy(10,12);
 printf("2nd Floor %.2f",msac);
 gotoxy(10,14);
 printf("3rd Floor %.2f",mtac);
 gotoxy(10,16);
 printf("4th Floor %.2f",mftac);
 gotoxy(10,18);
 printf("5th Floor %.2f",mffac);
 gotoxy(10,20);
 printf("6thFloor %.2f",mssac);
 gotoxy(6 , 22);
 getch();
 cleardevice();
 gotoxy(4,6);
 printf("Do you have more than 4000 students in your university (y/n):");
 scanf(" %c",&discount);
 if(discount!='y')
 {
 cleardevice();
 mt=mgtt+mftt+mstt+mttt+mfott+mfftt+msstt;
 med=(mt*30)/100;
 amt.mtb=mt+med;
 gotoxy(8,2);
 printf("March Total Bill");
 rectangle(50,40,550,400);
 gotoxy(30,4);
 printf("Rate per Unit is 22");
 gotoxy(11,6);
 printf("Ground Floor Amount");
 gotoxy(60,6);
 printf("%.2f",mgtt);
 gotoxy(11,8);
 printf("1st Floor Amount");
 gotoxy(60,8);
 printf("%.2f",mftt);
 gotoxy(11,10);
 printf("2nd Floor Amount");
 gotoxy(60,10);
 printf("%.2f",mstt);
 gotoxy(11,12);
 printf("3rd Floor Amount");
 gotoxy(60,12);
 printf("%.2f",mttt);
 gotoxy(11,14);
 printf("4rd Floor Amount");
 gotoxy(60,14);
 printf("%.2f",mfott);
 gotoxy(11,16);
 printf("5th Floor Amount");
 gotoxy(60,16);
 printf("%.2f",mfftt);
 gotoxy(11,18);
 printf("6th Floor Amount");
 gotoxy(60,18);
 printf("%.2f",msstt);
 gotoxy(11,20);
 printf("Include 30 percent exercise duty");
 gotoxy(60,20);
 printf("%.2f",med);
 line(430,40,430,400);
 line(50,360,550,360);
 gotoxy(9,24);
 printf("Total Amount");
 gotoxy(60,24);
 printf("%.2f",amt.mtb);
 }
 else if (discount =='y')
 {
 cleardevice();
 mt=mgtt+mftt+mstt+mttt+mfott+mfftt+msstt;
 med=(mt*30)/100;
 md=(mt*24)/100;
 amt.mtb=mt-md+med;
 gotoxy(8,2);
 printf("March Total Bill");
 rectangle(50,40,550,400);
 gotoxy(30,4);
 printf("Rate per Unit is 22");
 gotoxy(11,6);
 printf("Ground Floor Amount");
 gotoxy(60,6);
 printf("%.2f",mgtt);
 gotoxy(11,8);
 printf("1st Floor Amount");
 gotoxy(60,8);
 printf("%.2f",mftt);
 gotoxy(11,10);
 printf("2nd Floor Amount");
 gotoxy(60,10);
 printf("%.2f",mstt);
 gotoxy(11,12);
 printf("3rd Floor Amount");
 gotoxy(60,12);
 printf("%.2f",mttt);
 gotoxy(11,14);
 printf("4rd Floor Amount");
 gotoxy(60,14);
 printf("%.2f",mfott);
 gotoxy(11,16);
 printf("5th Floor Amount");
 gotoxy(60,16);
 printf("%.2f",mfftt);
 gotoxy(11,18);
 printf("6th Floor Amount");
 gotoxy(60,18);
 printf("%.2f",msstt);
 gotoxy(11,19);
 printf("Total Amount");
 gotoxy(60,19);
 printf("%.2f",mt);
 gotoxy(11,21);
 printf("Include 30 percent on exercise duty");
 gotoxy(60,21);
 printf("%.2f",med);
 gotoxy(11,22);
 printf("Less 24 percent on Total Amount");
 gotoxy(60,22);
 printf("%.2f",md);
 line(430,40,430,400);
 line(50,360,550,360);
 gotoxy(9,24);
 printf("Final Amount");
 gotoxy(60,24);
 printf("%.2f",amt.mtb);
 }
 }
 end:
 }
 void april()
 {
 float agac,agtt,afac,aftt,asac,astt,atac,attt,aftac,afott,affac,afftt,assac,asstt,at,aed,ad;
 int ac,fan,tubelights,choice;
 float mwf=4,tts=5,fu=1,tu=0.5,rpu=22;
 char yn,discount;
 top3:
 cleardevice();
 gotoxy(3,3);
 printf("Generate Bill for:");
 gotoxy(5,5);
 printf("1) Ground Floor");
 gotoxy(5,7);
 printf("2) 1st Floor");
 gotoxy(5,9);
 printf("3) 2nd Floor");
 gotoxy(5,11);
 printf("4) 3rd Floor");
 gotoxy(5,13);
 printf("5) 4th Floor");
 gotoxy(5,15);
 printf("6) 5th Floor");
 gotoxy(5,17);
 printf("7) 6th Floor");
 gotoxy(5,22);
 printf("Enter your choice:");
 scanf("%d",&choice);
 cleardevice();
 switch(choice)
 {
 case 1:
 cleardevice();
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 agac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 agtt=agac*30;
 gotoxy(4 , 12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top3;
	}
	else
	{
	goto end;
	}
 case 2:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 afac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 aftt=afac*30;
 gotoxy(4,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top3;
	}
	else
	{
	goto end;
       }
 case 3:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 asac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 astt=asac*30;
 gotoxy(4 ,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top3;
	}
	else
	{
	goto end;
	}
 case 4:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 atac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 attt=atac*30;
 gotoxy(4,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top3;
	}
	else
	{
	goto end;
	}
 case 5:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 aftac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 afott=aftac*30;
 gotoxy(4,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top3;
	}
	else
	{
	goto end;
	}
 case 6:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 affac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 afftt=affac*30;
 gotoxy(4 ,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top3;
	}
	else
	{
	goto end;
	}
 case 7:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 assac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 asstt=assac*30;
 cleardevice();
 rectangle(30,80,300,400);
 gotoxy(5,5);
 printf("Per Day Bill");
 gotoxy(10,8);
 printf("Ground Floor %.2f",agac);
 gotoxy(10,10);
 printf("1st Floor %.2f",afac);
 gotoxy(10,12);
 printf("2nd Floor %.2f",asac);
 gotoxy(10,14);
 printf("3rd Floor %.2f",atac);
 gotoxy(10,16);
 printf("4th Floor %.2f",aftac);
 gotoxy(10,18);
 printf("5th Floor %.2f",affac);
 gotoxy(10,20);
 printf("6thFloor %.2f",assac);
 gotoxy(6 , 22);
 getch();
 cleardevice();
 gotoxy(4,6);
 printf("Do you have more than 4000 students in your university (y/n):");
 scanf(" %c",&discount);
 if(discount!='y')
 {
 cleardevice();
 at=agtt+aftt+astt+attt+afott+afftt+asstt;
 aed=(at*30)/100;
 amt.atb=at+aed;
 gotoxy(8,2);
 printf("April Total Bill");
 rectangle(50,40,550,400);
 gotoxy(30,4);
 printf("Rate per Unit is 22");
 gotoxy(11,6);
 printf("Ground Floor Amount");
 gotoxy(60,6);
 printf("%.2f",agtt);
 gotoxy(11,8);
 printf("1st Floor Amount");
 gotoxy(60,8);
 printf("%.2f",aftt);
 gotoxy(11,10);
 printf("2nd Floor Amount");
 gotoxy(60,10);
 printf("%.2f",astt);
 gotoxy(11,12);
 printf("3rd Floor Amount");
 gotoxy(60,12);
 printf("%.2f",attt);
 gotoxy(11,14);
 printf("4rd Floor Amount");
 gotoxy(60,14);
 printf("%.2f",afott);
 gotoxy(11,16);
 printf("5th Floor Amount");
 gotoxy(60,16);
 printf("%.2f",afftt);
 gotoxy(11,18);
 printf("6th Floor Amount");
 gotoxy(60,18);
 printf("%.2f",asstt);
 gotoxy(11,20);
 printf("Include 30 percent exercise duty");
 gotoxy(60,20);
 printf("%.2f",aed);
 line(430,40,430,400);
 line(50,360,550,360);
 gotoxy(9,24);
 printf("Total Amount");
 gotoxy(60,24);
 printf("%.2f",amt.atb);
 }
 else if (discount =='y')
 {
 cleardevice();
 at=agtt+aftt+astt+attt+afott+afftt+asstt;
 aed=(at*30)/100;
 ad=(at*24)/100;
 amt.atb=at-ad+aed;
 gotoxy(8,2);
 printf("April Total Bill");
 rectangle(50,40,550,400);
 gotoxy(30,4);
 printf("Rate per Unit is 22");
 gotoxy(11,6);
 printf("Ground Floor Amount");
 gotoxy(60,6);
 printf("%.2f",agtt);
 gotoxy(11,8);
 printf("1st Floor Amount");
 gotoxy(60,8);
 printf("%.2f",aftt);
 gotoxy(11,10);
 printf("2nd Floor Amount");
 gotoxy(60,10);
 printf("%.2f",astt);
 gotoxy(11,12);
 printf("3rd Floor Amount");
 gotoxy(60,12);
 printf("%.2f",attt);
 gotoxy(11,14);
 printf("4rd Floor Amount");
 gotoxy(60,14);
 printf("%.2f",afott);
 gotoxy(11,16);
 printf("5th Floor Amount");
 gotoxy(60,16);
 printf("%.2f",afftt);
 gotoxy(11,18);
 printf("6th Floor Amount");
 gotoxy(60,18);
 printf("%.2f",asstt);
 gotoxy(11,19);
 printf("Total Amount");
 gotoxy(60,19);
 printf("%.2f",at);
 gotoxy(11,21);
 printf("Include 30 percent on exercise duty");
 gotoxy(60,21);
 printf("%.2f",aed);
 gotoxy(11,22);
 printf("Less 24 percent on Total Amount");
 gotoxy(60,22);
 printf("%.2f",ad);
 line(430,40,430,400);
 line(50,360,550,360);
 gotoxy(9,24);
 printf("Final Amount");
 gotoxy(60,24);
 printf("%.2f",amt.atb);
 }
 }
 end:
 }
 void may()
 {
 float magac,magtt,mafac,maftt,masac,mastt,matac,mattt,maftac,mafott,maffac,mafftt,massac,masstt,mat,maed,mad;
 int ac,fan,tubelights,choice;
 float mwf=4,tts=5,fu=1,tu=0.5,rpu=22;
 char yn,discount;
 top4:
 cleardevice();
 gotoxy(3,3);
 printf("Generate Bill for:");
 gotoxy(5,5);
 printf("1) Ground Floor");
 gotoxy(5,7);
 printf("2) 1st Floor");
 gotoxy(5,9);
 printf("3) 2nd Floor");
 gotoxy(5,11);
 printf("4) 3rd Floor");
 gotoxy(5,13);
 printf("5) 4th Floor");
 gotoxy(5,15);
 printf("6) 5th Floor");
 gotoxy(5,17);
 printf("7) 6th Floor");
 gotoxy(5,22);
 printf("Enter your choice:");
 scanf("%d",&choice);
 cleardevice();
 switch(choice)
 {
 case 1:
 cleardevice();
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 magac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 magtt=magac*31;
 gotoxy(4 , 12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top4;
	}
	else
	{
	goto end;
	}
 case 2:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 mafac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 maftt=mafac*31;
 gotoxy(4,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top4;
	}
	else
	{
	goto end;
       }
 case 3:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 masac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 mastt=masac*31;
 gotoxy(4 ,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top4;
	}
	else
	{
	goto end;
	}
 case 4:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 matac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 mattt=matac*31;
 gotoxy(4,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top4;
	}
	else
	{
	goto end;
	}
 case 5:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 maftac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 mafott=maftac*31;
 gotoxy(4,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top4;
	}
	else
	{
	goto end;
	}
 case 6:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 maffac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 mafftt=maffac*31;
 gotoxy(4 ,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top4;
	}
	else
	{
	goto end;
	}
 case 7:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 massac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 masstt=massac*31;
 cleardevice();
 rectangle(30,80,300,400);
 gotoxy(5,5);
 printf("Per Day Bill");
 gotoxy(10,8);
 printf("Ground Floor %.2f",magac);
 gotoxy(10,10);
 printf("1st Floor %.2f",mafac);
 gotoxy(10,12);
 printf("2nd Floor %.2f",masac);
 gotoxy(10,14);
 printf("3rd Floor %.2f",matac);
 gotoxy(10,16);
 printf("4th Floor %.2f",maftac);
 gotoxy(10,18);
 printf("5th Floor %.2f",maffac);
 gotoxy(10,20);
 printf("6thFloor %.2f",massac);
 gotoxy(6 , 22);
 getch();
 cleardevice();
 gotoxy(4,6);
 printf("Do you have more than 4000 students in your university (y/n):");
 scanf(" %c",&discount);
 if(discount!='y')
 {
 cleardevice();
 mat=magtt+maftt+mastt+mattt+mafott+mafftt+masstt;
 maed=(mat*30)/100;
 amt.matb=mat+maed;
 gotoxy(8,2);
 printf("May Total Bill");
 rectangle(50,40,550,400);
 gotoxy(30,4);
 printf("Rate per Unit is 22");
 gotoxy(11,6);
 printf("Ground Floor Amount");
 gotoxy(60,6);
 printf("%.2f",magtt);
 gotoxy(11,8);
 printf("1st Floor Amount");
 gotoxy(60,8);
 printf("%.2f",maftt);
 gotoxy(11,10);
 printf("2nd Floor Amount");
 gotoxy(60,10);
 printf("%.2f",mastt);
 gotoxy(11,12);
 printf("3rd Floor Amount");
 gotoxy(60,12);
 printf("%.2f",mattt);
 gotoxy(11,14);
 printf("4rd Floor Amount");
 gotoxy(60,14);
 printf("%.2f",mafott);
 gotoxy(11,16);
 printf("5th Floor Amount");
 gotoxy(60,16);
 printf("%.2f",mafftt);
 gotoxy(11,18);
 printf("6th Floor Amount");
 gotoxy(60,18);
 printf("%.2f",masstt);
 gotoxy(11,20);
 printf("Include 30 percent exercise duty");
 gotoxy(60,20);
 printf("%.2f",maed);
 line(430,40,430,400);
 line(50,360,550,360);
 gotoxy(9,24);
 printf("Total Amount");
 gotoxy(60,24);
 printf("%.2f",amt.matb);
 }
 else if (discount =='y')
 {
 cleardevice();
 mat=magtt+maftt+mastt+mattt+mafott+mafftt+masstt;
 maed=(mat*30)/100;
 mad=(mat*24)/100;
 amt.matb=mat-mad+maed;
 gotoxy(8,2);
 printf("May Total Bill");
 rectangle(50,40,550,400);
 gotoxy(30,4);
 printf("Rate per Unit is 22");
 gotoxy(11,6);
 printf("Ground Floor Amount");
 gotoxy(60,6);
 printf("%.2f",magtt);
 gotoxy(11,8);
 printf("1st Floor Amount");
 gotoxy(60,8);
 printf("%.2f",maftt);
 gotoxy(11,10);
 printf("2nd Floor Amount");
 gotoxy(60,10);
 printf("%.2f",mastt);
 gotoxy(11,12);
 printf("3rd Floor Amount");
 gotoxy(60,12);
 printf("%.2f",mattt);
 gotoxy(11,14);
 printf("4rd Floor Amount");
 gotoxy(60,14);
 printf("%.2f",mafott);
 gotoxy(11,16);
 printf("5th Floor Amount");
 gotoxy(60,16);
 printf("%.2f",mafftt);
 gotoxy(11,18);
 printf("6th Floor Amount");
 gotoxy(60,18);
 printf("%.2f",masstt);
 gotoxy(11,19);
 printf("Total Amount");
 gotoxy(60,19);
 printf("%.2f",mat);
 gotoxy(11,21);
 printf("Include 30 percent on exercise duty");
 gotoxy(60,21);
 printf("%.2f",maed);
 gotoxy(11,22);
 printf("Less 24 percent on Total Amount");
 gotoxy(60,22);
 printf("%.2f",mad);
 line(430,40,430,400);
 line(50,360,550,360);
 gotoxy(9,24);
 printf("Final Amount");
 gotoxy(60,24);
 printf("%.2f",amt.matb);
 }
 }
 end:
 }
 void june()
 {
 float jugac,jugtt,jufac,juftt,jusac,justt,jutac,juttt,juftac,jufott,juffac,jufftt,jussac,jusstt,jut,jued,jud;
 int ac,fan,tubelights,choice;
 float mwf=4,tts=5,fu=1,tu=0.5,rpu=22;
 char yn,discount;
 top5:
 cleardevice();
 gotoxy(3,3);
 printf("Generate Bill for:");
 gotoxy(5,5);
 printf("1) Ground Floor");
 gotoxy(5,7);
 printf("2) 1st Floor");
 gotoxy(5,9);
 printf("3) 2nd Floor");
 gotoxy(5,11);
 printf("4) 3rd Floor");
 gotoxy(5,13);
 printf("5) 4th Floor");
 gotoxy(5,15);
 printf("6) 5th Floor");
 gotoxy(5,17);
 printf("7) 6th Floor");
 gotoxy(5,22);
 printf("Enter your choice:");
 scanf("%d",&choice);
 cleardevice();
 switch(choice)
 {
 case 1:
 cleardevice();
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 jugac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 jugtt=jugac*30;
 gotoxy(4 , 12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top5;
	}
	else
	{
	goto end;
	}
 case 2:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 jufac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 juftt=jufac*30;
 gotoxy(4,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top5;
	}
	else
	{
	goto end;
       }
 case 3:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 jusac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 justt=jusac*30;
 gotoxy(4 ,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top5;
	}
	else
	{
	goto end;
	}
 case 4:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 jutac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 juttt=jutac*30;
 gotoxy(4,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top5;
	}
	else
	{
	goto end;
	}
 case 5:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 juftac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 jufott=juftac*30;
 gotoxy(4,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top5;
	}
	else
	{
	goto end;
	}
 case 6:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 juffac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 jufftt=juffac*30;
 gotoxy(4 ,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top5;
	}
	else
	{
	goto end;
	}
 case 7:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 jussac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 jusstt=jussac*30;
 cleardevice();
 rectangle(30,80,300,400);
 gotoxy(5,5);
 printf("Per Day Bill");
 gotoxy(10,8);
 printf("Ground Floor %.2f",jugac);
 gotoxy(10,10);
 printf("1st Floor %.2f",jufac);
 gotoxy(10,12);
 printf("2nd Floor %.2f",jusac);
 gotoxy(10,14);
 printf("3rd Floor %.2f",jutac);
 gotoxy(10,16);
 printf("4th Floor %.2f",juftac);
 gotoxy(10,18);
 printf("5th Floor %.2f",juffac);
 gotoxy(10,20);
 printf("6thFloor %.2f",jussac);
 gotoxy(6 , 22);
 getch();
 cleardevice();
 gotoxy(4,6);
 printf("Do you have more than 4000 students in your university (y/n):");
 scanf(" %c",&discount);
 if(discount!='y')
 {
 cleardevice();
 jut=jugtt+juftt+justt+juttt+jufott+jufftt+jusstt;
 jued=(jut*30)/100;
 amt.jutb=jut+jued;
 gotoxy(8,2);
 printf("June Total Bill");
 rectangle(50,40,550,400);
 gotoxy(30,4);
 printf("Rate per Unit is 22");
 gotoxy(11,6);
 printf("Ground Floor Amount");
 gotoxy(60,6);
 printf("%.2f",jugtt);
 gotoxy(11,8);
 printf("1st Floor Amount");
 gotoxy(60,8);
 printf("%.2f",juftt);
 gotoxy(11,10);
 printf("2nd Floor Amount");
 gotoxy(60,10);
 printf("%.2f",justt);
 gotoxy(11,12);
 printf("3rd Floor Amount");
 gotoxy(60,12);
 printf("%.2f",juttt);
 gotoxy(11,14);
 printf("4rd Floor Amount");
 gotoxy(60,14);
 printf("%.2f",jufott);
 gotoxy(11,16);
 printf("5th Floor Amount");
 gotoxy(60,16);
 printf("%.2f",jufftt);
 gotoxy(11,18);
 printf("6th Floor Amount");
 gotoxy(60,18);
 printf("%.2f",jusstt);
 gotoxy(11,20);
 printf("Include 30 percent exercise duty");
 gotoxy(60,20);
 printf("%.2f",jued);
 line(430,40,430,400);
 line(50,360,550,360);
 gotoxy(9,24);
 printf("Total Amount");
 gotoxy(60,24);
 printf("%.2f",amt.jutb);
 }
 else if (discount =='y')
 {
 cleardevice();
 jut=jugtt+juftt+justt+juttt+jufott+jufftt+jusstt;
 jued=(jut*30)/100;
 jud=(jut*24)/100;
 amt.jutb=jut-jud+jued;
 gotoxy(8,2);
 printf("June Total Bill");
 rectangle(50,40,550,400);
 gotoxy(30,4);
 printf("Rate per Unit is 22");
 gotoxy(11,6);
 printf("Ground Floor Amount");
 gotoxy(60,6);
 printf("%.2f",jugtt);
 gotoxy(11,8);
 printf("1st Floor Amount");
 gotoxy(60,8);
 printf("%.2f",juftt);
 gotoxy(11,10);
 printf("2nd Floor Amount");
 gotoxy(60,10);
 printf("%.2f",justt);
 gotoxy(11,12);
 printf("3rd Floor Amount");
 gotoxy(60,12);
 printf("%.2f",juttt);
 gotoxy(11,14);
 printf("4rd Floor Amount");
 gotoxy(60,14);
 printf("%.2f",jufott);
 gotoxy(11,16);
 printf("5th Floor Amount");
 gotoxy(60,16);
 printf("%.2f",jufftt);
 gotoxy(11,18);
 printf("6th Floor Amount");
 gotoxy(60,18);
 printf("%.2f",jusstt);
 gotoxy(11,19);
 printf("Total Amount");
 gotoxy(60,19);
 printf("%.2f",jut);
 gotoxy(11,21);
 printf("Include 30 percent on exercise duty");
 gotoxy(60,21);
 printf("%.2f",jued);
 gotoxy(11,22);
 printf("Less 24 percent on Total Amount");
 gotoxy(60,22);
 printf("%.2f",jud);
 line(430,40,430,400);
 line(50,360,550,360);
 gotoxy(9,24);
 printf("Final Amount");
 gotoxy(60,24);
 printf("%.2f",amt.jutb);
 }
 }
 end:
 }
 void july()
 {
 float jjgac,jjgtt,jjfac,jjftt,jjsac,jjstt,jjtac,jjttt,jjftac,jjfott,jjffac,jjfftt,jjssac,jjsstt,jjt,jjed,jjd;
 int ac,fan,tubelights,choice;
 float mwf=4,tts=5,fu=1,tu=0.5,rpu=22;
 char yn,discount;
 top6:
 cleardevice();
 gotoxy(3,3);
 printf("Generate Bill for:");
 gotoxy(5,5);
 printf("1) Ground Floor");
 gotoxy(5,7);
 printf("2) 1st Floor");
 gotoxy(5,9);
 printf("3) 2nd Floor");
 gotoxy(5,11);
 printf("4) 3rd Floor");
 gotoxy(5,13);
 printf("5) 4th Floor");
 gotoxy(5,15);
 printf("6) 5th Floor");
 gotoxy(5,17);
 printf("7) 6th Floor");
 gotoxy(5,22);
 printf("Enter your choice:");
 scanf("%d",&choice);
 cleardevice();
 switch(choice)
 {
 case 1:
 cleardevice();
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 jjgac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 jjgtt=jjgac*31;
 gotoxy(4 , 12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top6;
	}
	else
	{
	goto end;
	}
 case 2:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 jjfac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 jjftt=jjfac*31;
 gotoxy(4,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top6;
	}
	else
	{
	goto end;
       }
 case 3:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 jjsac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 jjstt=jjsac*31;
 gotoxy(4 ,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top6;
	}
	else
	{
	goto end;
	}
 case 4:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 jjtac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 jjttt=jjtac*31;
 gotoxy(4,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top6;
	}
	else
	{
	goto end;
	}
 case 5:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 jjftac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 jjfott=jjftac*31;
 gotoxy(4,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top6;
	}
	else
	{
	goto end;
	}
 case 6:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 jjffac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 jjfftt=jjffac*31;
 gotoxy(4 ,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top6;
	}
	else
	{
	goto end;
	}
 case 7:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 jjssac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 jjsstt=jjssac*31;
 cleardevice();
 rectangle(30,80,300,400);
 gotoxy(5,5);
 printf("Per Day Bill");
 gotoxy(10,8);
 printf("Ground Floor %.2f",jjgac);
 gotoxy(10,10);
 printf("1st Floor %.2f",jjfac);
 gotoxy(10,12);
 printf("2nd Floor %.2f",jjsac);
 gotoxy(10,14);
 printf("3rd Floor %.2f",jjtac);
 gotoxy(10,16);
 printf("4th Floor %.2f",jjftac);
 gotoxy(10,18);
 printf("5th Floor %.2f",jjffac);
 gotoxy(10,20);
 printf("6thFloor %.2f",jjssac);
 gotoxy(6 , 22);
 getch();
 cleardevice();
 gotoxy(4,6);
 printf("Do you have more than 4000 students in your university (y/n):");
 scanf(" %c",&discount);
 if(discount!='y')
 {
 cleardevice();
 jjt=jjgtt+jjftt+jjstt+jjttt+jjfott+jjfftt+jjsstt;
 jjed=(jjt*30)/100;
 amt.jjtb=jjt+jjed;
 gotoxy(8,2);
 printf("July Total Bill");
 rectangle(50,40,550,400);
 gotoxy(30,4);
 printf("Rate per Unit is 22");
 gotoxy(11,6);
 printf("Ground Floor Amount");
 gotoxy(60,6);
 printf("%.2f",jjgtt);
 gotoxy(11,8);
 printf("1st Floor Amount");
 gotoxy(60,8);
 printf("%.2f",jjftt);
 gotoxy(11,10);
 printf("2nd Floor Amount");
 gotoxy(60,10);
 printf("%.2f",jjstt);
 gotoxy(11,12);
 printf("3rd Floor Amount");
 gotoxy(60,12);
 printf("%.2f",jjttt);
 gotoxy(11,14);
 printf("4rd Floor Amount");
 gotoxy(60,14);
 printf("%.2f",jjfott);
 gotoxy(11,16);
 printf("5th Floor Amount");
 gotoxy(60,16);
 printf("%.2f",jjfftt);
 gotoxy(11,18);
 printf("6th Floor Amount");
 gotoxy(60,18);
 printf("%.2f",jjsstt);
 gotoxy(11,20);
 printf("Include 30 percent exercise duty");
 gotoxy(60,20);
 printf("%.2f",jjed);
 line(430,40,430,400);
 line(50,360,550,360);
 gotoxy(9,24);
 printf("Total Amount");
 gotoxy(60,24);
 printf("%.2f",amt.jjtb);
 }
 else if (discount =='y')
 {
 cleardevice();
 jjt=jjgtt+jjftt+jjstt+jjttt+jjfott+jjfftt+jjsstt;
 jjed=(jjt*30)/100;
 jjd=(jjt*24)/100;
 amt.jjtb=jjt-jjd+jjed;
 gotoxy(8,2);
 printf("July Total Bill");
 rectangle(50,40,550,400);
 gotoxy(30,4);
 printf("Rate per Unit is 22");
 gotoxy(11,6);
 printf("Ground Floor Amount");
 gotoxy(60,6);
 printf("%.2f",jjgtt);
 gotoxy(11,8);
 printf("1st Floor Amount");
 gotoxy(60,8);
 printf("%.2f",jjftt);
 gotoxy(11,10);
 printf("2nd Floor Amount");
 gotoxy(60,10);
 printf("%.2f",jjstt);
 gotoxy(11,12);
 printf("3rd Floor Amount");
 gotoxy(60,12);
 printf("%.2f",jjttt);
 gotoxy(11,14);
 printf("4rd Floor Amount");
 gotoxy(60,14);
 printf("%.2f",jjfott);
 gotoxy(11,16);
 printf("5th Floor Amount");
 gotoxy(60,16);
 printf("%.2f",jjfftt);
 gotoxy(11,18);
 printf("6th Floor Amount");
 gotoxy(60,18);
 printf("%.2f",jjsstt);
 gotoxy(11,19);
 printf("Total Amount");
 gotoxy(60,19);
 printf("%.2f",jjt);
 gotoxy(11,21);
 printf("Include 30 percent on exercise duty");
 gotoxy(60,21);
 printf("%.2f",jjed);
 gotoxy(11,22);
 printf("Less 24 percent on Total Amount");
 gotoxy(60,22);
 printf("%.2f",jjd);
 line(430,40,430,400);
 line(50,360,550,360);
 gotoxy(9,24);
 printf("Final Amount");
 gotoxy(60,24);
 printf("%.2f",amt.jjtb);
 }
 }
 end:
 }
 void august()
 {
 float augac,augtt,aufac,auftt,ausac,austt,autac,auttt,auftac,aufott,auffac,aufftt,aussac,ausstt,aut,aued,aud;
 int ac,fan,tubelights,choice;
 float mwf=4,tts=5,fu=1,tu=0.5,rpu=22;
 char yn,discount;
 top7:
 cleardevice();
 gotoxy(3,3);
 printf("Generate Bill for:");
 gotoxy(5,5);
 printf("1) Ground Floor");
 gotoxy(5,7);
 printf("2) 1st Floor");
 gotoxy(5,9);
 printf("3) 2nd Floor");
 gotoxy(5,11);
 printf("4) 3rd Floor");
 gotoxy(5,13);
 printf("5) 4th Floor");
 gotoxy(5,15);
 printf("6) 5th Floor");
 gotoxy(5,17);
 printf("7) 6th Floor");
 gotoxy(5,22);
 printf("Enter your choice:");
 scanf("%d",&choice);
 cleardevice();
 switch(choice)
 {
 case 1:
 cleardevice();
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 augac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 augtt=augac*31;
 gotoxy(4 , 12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top7;
	}
	else
	{
	goto end;
	}
 case 2:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 aufac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 auftt=aufac*31;
 gotoxy(4,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top7;
	}
	else
	{
	goto end;
       }
 case 3:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 ausac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 austt=ausac*31;
 gotoxy(4 ,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top7;
	}
	else
	{
	goto end;
	}
 case 4:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 autac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 auttt=autac*31;
 gotoxy(4,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top7;
	}
	else
	{
	goto end;
	}
 case 5:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 auftac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 aufott=auftac*31;
 gotoxy(4,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top7;
	}
	else
	{
	goto end;
	}
 case 6:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 auffac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 aufftt=auffac*31;
 gotoxy(4 ,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top7;
	}
	else
	{
	goto end;
	}
 case 7:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 aussac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 ausstt=aussac*31;
 cleardevice();
 rectangle(30,80,300,400);
 gotoxy(5,5);
 printf("Per Day Bill");
 gotoxy(10,8);
 printf("Ground Floor %.2f",augac);
 gotoxy(10,10);
 printf("1st Floor %.2f",aufac);
 gotoxy(10,12);
 printf("2nd Floor %.2f",ausac);
 gotoxy(10,14);
 printf("3rd Floor %.2f",autac);
 gotoxy(10,16);
 printf("4th Floor %.2f",auftac);
 gotoxy(10,18);
 printf("5th Floor %.2f",auffac);
 gotoxy(10,20);
 printf("6thFloor %.2f",aussac);
 gotoxy(6 , 22);
 getch();
 cleardevice();
 gotoxy(4,6);
 printf("Do you have more than 4000 students in your university (y/n):");
 scanf(" %c",&discount);
 if(discount!='y')
 {
 cleardevice();
 aut=augtt+auftt+austt+auttt+aufott+aufftt+ausstt;
 aued=(aut*30)/100;
 amt.autb=aut+aued;
 gotoxy(8,2);
 printf("August Total Bill");
 rectangle(50,40,550,400);
 gotoxy(30,4);
 printf("Rate per Unit is 22");
 gotoxy(11,6);
 printf("Ground Floor Amount");
 gotoxy(60,6);
 printf("%.2f",augtt);
 gotoxy(11,8);
 printf("1st Floor Amount");
 gotoxy(60,8);
 printf("%.2f",auftt);
 gotoxy(11,10);
 printf("2nd Floor Amount");
 gotoxy(60,10);
 printf("%.2f",austt);
 gotoxy(11,12);
 printf("3rd Floor Amount");
 gotoxy(60,12);
 printf("%.2f",auttt);
 gotoxy(11,14);
 printf("4rd Floor Amount");
 gotoxy(60,14);
 printf("%.2f",aufott);
 gotoxy(11,16);
 printf("5th Floor Amount");
 gotoxy(60,16);
 printf("%.2f",aufftt);
 gotoxy(11,18);
 printf("6th Floor Amount");
 gotoxy(60,18);
 printf("%.2f",ausstt);
 gotoxy(11,20);
 printf("Include 30 percent exercise duty");
 gotoxy(60,20);
 printf("%.2f",aued);
 line(430,40,430,400);
 line(50,360,550,360);
 gotoxy(9,24);
 printf("Total Amount");
 gotoxy(60,24);
 printf("%.2f",amt.autb);
 }
 else if (discount =='y')
 {
 cleardevice();
 aut=augtt+auftt+austt+auttt+aufott+aufftt+ausstt;
 aued=(aut*30)/100;
 aud=(aut*24)/100;
 amt.autb=aut-aud+aued;
 gotoxy(8,2);
 printf("August Total Bill");
 rectangle(50,40,550,400);
 gotoxy(30,4);
 printf("Rate per Unit is 22");
 gotoxy(11,6);
 printf("Ground Floor Amount");
 gotoxy(60,6);
 printf("%.2f",augtt);
 gotoxy(11,8);
 printf("1st Floor Amount");
 gotoxy(60,8);
 printf("%.2f",auftt);
 gotoxy(11,10);
 printf("2nd Floor Amount");
 gotoxy(60,10);
 printf("%.2f",austt);
 gotoxy(11,12);
 printf("3rd Floor Amount");
 gotoxy(60,12);
 printf("%.2f",auttt);
 gotoxy(11,14);
 printf("4rd Floor Amount");
 gotoxy(60,14);
 printf("%.2f",aufott);
 gotoxy(11,16);
 printf("5th Floor Amount");
 gotoxy(60,16);
 printf("%.2f",aufftt);
 gotoxy(11,18);
 printf("6th Floor Amount");
 gotoxy(60,18);
 printf("%.2f",ausstt);
 gotoxy(11,19);
 printf("Total Amount");
 gotoxy(60,19);
 printf("%.2f",aut);
 gotoxy(11,21);
 printf("Include 30 percent on exercise duty");
 gotoxy(60,21);
 printf("%.2f",aued);
 gotoxy(11,22);
 printf("Less 24 percent on Total Amount");
 gotoxy(60,22);
 printf("%.2f",aud);
 line(430,40,430,400);
 line(50,360,550,360);
 gotoxy(9,24);
 printf("Final Amount");
 gotoxy(60,24);
 printf("%.2f",amt.autb);
 }
 }
 end:
 }
 void sept()
 {
 float sgac,sgtt,sfac,sftt,ssac,sstt,stac,sttt,sftac,sfott,sffac,sfftt,sssac,ssstt,st,sed,sd;
 int ac,fan,tubelights,choice;
 float mwf=4,tts=5,fu=1,tu=0.5,rpu=22;
 char yn,discount;
 top8:
 cleardevice();
 gotoxy(3,3);
 printf("Generate Bill for:");
 gotoxy(5,5);
 printf("1) Ground Floor");
 gotoxy(5,7);
 printf("2) 1st Floor");
 gotoxy(5,9);
 printf("3) 2nd Floor");
 gotoxy(5,11);
 printf("4) 3rd Floor");
 gotoxy(5,13);
 printf("5) 4th Floor");
 gotoxy(5,15);
 printf("6) 5th Floor");
 gotoxy(5,17);
 printf("7) 6th Floor");
 gotoxy(5,22);
 printf("Enter your choice:");
 scanf("%d",&choice);
 cleardevice();
 switch(choice)
 {
 case 1:
 cleardevice();
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 sgac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 sgtt=sgac*30;
 gotoxy(4 , 12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top8;
	}
	else
	{
	goto end;
	}
 case 2:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 sfac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 sftt=sfac*30;
 gotoxy(4,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top8;
	}
	else
	{
	goto end;
       }
 case 3:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 ssac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 sstt=ssac*30;
 gotoxy(4 ,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top8;
	}
	else
	{
	goto end;
	}
 case 4:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 stac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 sttt=stac*30;
 gotoxy(4,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top8;
	}
	else
	{
	goto end;
	}
 case 5:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 sftac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 sfott=sftac*30;
 gotoxy(4,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top8;
	}
	else
	{
	goto end;
	}
 case 6:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 sffac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 sfftt=sffac*30;
 gotoxy(4 ,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top8;
	}
	else
	{
	goto end;
	}
 case 7:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 sssac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 ssstt=sssac*30;
 cleardevice();
 rectangle(30,80,300,400);
 gotoxy(5,5);
 printf("Per Day Bill");
 gotoxy(10,8);
 printf("Ground Floor %.2f",sgac);
 gotoxy(10,10);
 printf("1st Floor %.2f",sfac);
 gotoxy(10,12);
 printf("2nd Floor %.2f",ssac);
 gotoxy(10,14);
 printf("3rd Floor %.2f",stac);
 gotoxy(10,16);
 printf("4th Floor %.2f",sftac);
 gotoxy(10,18);
 printf("5th Floor %.2f",sffac);
 gotoxy(10,20);
 printf("6thFloor %.2f",sssac);
 gotoxy(6 , 22);
 getch();
 cleardevice();
 gotoxy(4,6);
 printf("Do you have more than 4000 students in your university (y/n):");
 scanf(" %c",&discount);
 if(discount!='y')
 {
 cleardevice();
 st=sgtt+sftt+sstt+sttt+sfott+sfftt+ssstt;
 sed=(st*30)/100;
 amt.stb=st+sed;
 gotoxy(8,2);
 printf("September Total Bill");
 rectangle(50,40,550,400);
 gotoxy(30,4);
 printf("Rate per Unit is 22");
 gotoxy(11,6);
 printf("Ground Floor Amount");
 gotoxy(60,6);
 printf("%.2f",sgtt);
 gotoxy(11,8);
 printf("1st Floor Amount");
 gotoxy(60,8);
 printf("%.2f",sftt);
 gotoxy(11,10);
 printf("2nd Floor Amount");
 gotoxy(60,10);
 printf("%.2f",sstt);
 gotoxy(11,12);
 printf("3rd Floor Amount");
 gotoxy(60,12);
 printf("%.2f",sttt);
 gotoxy(11,14);
 printf("4rd Floor Amount");
 gotoxy(60,14);
 printf("%.2f",sfott);
 gotoxy(11,16);
 printf("5th Floor Amount");
 gotoxy(60,16);
 printf("%.2f",sfftt);
 gotoxy(11,18);
 printf("6th Floor Amount");
 gotoxy(60,18);
 printf("%.2f",ssstt);
 gotoxy(11,20);
 printf("Include 30 percent exercise duty");
 gotoxy(60,20);
 printf("%.2f",sed);
 line(430,40,430,400);
 line(50,360,550,360);
 gotoxy(9,24);
 printf("Total Amount");
 gotoxy(60,24);
 printf("%.2f",amt.stb);
 }
 else if (discount =='y')
 {
 cleardevice();
 st=sgtt+sftt+sstt+sttt+sfott+sfftt+ssstt;
 sed=(st*30)/100;
 sd=(st*24)/100;
 amt.stb=st-sd+sed;
 gotoxy(8,2);
 printf("September Total Bill");
 rectangle(50,40,550,400);
 gotoxy(30,4);
 printf("Rate per Unit is 22");
 gotoxy(11,6);
 printf("Ground Floor Amount");
 gotoxy(60,6);
 printf("%.2f",sgtt);
 gotoxy(11,8);
 printf("1st Floor Amount");
 gotoxy(60,8);
 printf("%.2f",sftt);
 gotoxy(11,10);
 printf("2nd Floor Amount");
 gotoxy(60,10);
 printf("%.2f",sstt);
 gotoxy(11,12);
 printf("3rd Floor Amount");
 gotoxy(60,12);
 printf("%.2f",sttt);
 gotoxy(11,14);
 printf("4rd Floor Amount");
 gotoxy(60,14);
 printf("%.2f",sfott);
 gotoxy(11,16);
 printf("5th Floor Amount");
 gotoxy(60,16);
 printf("%.2f",sfftt);
 gotoxy(11,18);
 printf("6th Floor Amount");
 gotoxy(60,18);
 printf("%.2f",ssstt);
 gotoxy(11,19);
 printf("Total Amount");
 gotoxy(60,19);
 printf("%.2f",st);
 gotoxy(11,21);
 printf("Include 30 percent on exercise duty");
 gotoxy(60,21);
 printf("%.2f",sed);
 gotoxy(11,22);
 printf("Less 24 percent on Total Amount");
 gotoxy(60,22);
 printf("%.2f",sd);
 line(430,40,430,400);
 line(50,360,550,360);
 gotoxy(9,24);
 printf("Final Amount");
 gotoxy(60,24);
 printf("%.2f",amt.stb);
 }
 }
 end:
 }
 void oct()
 {
 float ogac,ogtt,ofac,oftt,osac,ostt,otac,ottt,oftac,ofott,offac,offtt,ossac,osstt,ot,oed,od;
 int ac,fan,tubelights,choice;
 float mwf=4,tts=5,fu=1,tu=0.5,rpu=22;
 char yn,discount;
 top9:
 cleardevice();
 gotoxy(3,3);
 printf("Generate Bill for:");
 gotoxy(5,5);
 printf("1) Ground Floor");
 gotoxy(5,7);
 printf("2) 1st Floor");
 gotoxy(5,9);
 printf("3) 2nd Floor");
 gotoxy(5,11);
 printf("4) 3rd Floor");
 gotoxy(5,13);
 printf("5) 4th Floor");
 gotoxy(5,15);
 printf("6) 5th Floor");
 gotoxy(5,17);
 printf("7) 6th Floor");
 gotoxy(5,22);
 printf("Enter your choice:");
 scanf("%d",&choice);
 cleardevice();
 switch(choice)
 {
 case 1:
 cleardevice();
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 ogac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 ogtt=ogac*31;
 gotoxy(4 , 12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top9;
	}
	else
	{
	goto end;
	}
 case 2:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 ofac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 oftt=ofac*31;
 gotoxy(4,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top9;
	}
	else
	{
	goto end;
       }
 case 3:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 osac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 ostt=osac*31;
 gotoxy(4 ,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top9;
	}
	else
	{
	goto end;
	}
 case 4:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 otac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 ottt=otac*31;
 gotoxy(4,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top9;
	}
	else
	{
	goto end;
	}
 case 5:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 oftac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 ofott=oftac*31;
 gotoxy(4,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top9;
	}
	else
	{
	goto end;
	}
 case 6:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 offac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 offtt=offac*31;
 gotoxy(4 ,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top9;
	}
	else
	{
	goto end;
	}
 case 7:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 ossac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 osstt=ossac*31;
 cleardevice();
 rectangle(30,80,300,400);
 gotoxy(5,5);
 printf("Per Day Bill");
 gotoxy(10,8);
 printf("Ground Floor %.2f",ogac);
 gotoxy(10,10);
 printf("1st Floor %.2f",ofac);
 gotoxy(10,12);
 printf("2nd Floor %.2f",osac);
 gotoxy(10,14);
 printf("3rd Floor %.2f",otac);
 gotoxy(10,16);
 printf("4th Floor %.2f",oftac);
 gotoxy(10,18);
 printf("5th Floor %.2f",offac);
 gotoxy(10,20);
 printf("6thFloor %.2f",ossac);
 gotoxy(6 , 22);
 getch();
 cleardevice();
 gotoxy(4,6);
 printf("Do you have more than 4000 students in your university (y/n):");
 scanf(" %c",&discount);
 if(discount!='y')
 {
 cleardevice();
 ot=ogtt+oftt+ostt+ottt+ofott+offtt+osstt;
 oed=(ot*30)/100;
 amt.otb=ot+oed;
 gotoxy(8,2);
 printf("October Total Bill");
 rectangle(50,40,550,400);
 gotoxy(30,4);
 printf("Rate per Unit is 22");
 gotoxy(11,6);
 printf("Ground Floor Amount");
 gotoxy(60,6);
 printf("%.2f",ogtt);
 gotoxy(11,8);
 printf("1st Floor Amount");
 gotoxy(60,8);
 printf("%.2f",oftt);
 gotoxy(11,10);
 printf("2nd Floor Amount");
 gotoxy(60,10);
 printf("%.2f",ostt);
 gotoxy(11,12);
 printf("3rd Floor Amount");
 gotoxy(60,12);
 printf("%.2f",ottt);
 gotoxy(11,14);
 printf("4rd Floor Amount");
 gotoxy(60,14);
 printf("%.2f",ofott);
 gotoxy(11,16);
 printf("5th Floor Amount");
 gotoxy(60,16);
 printf("%.2f",offtt);
 gotoxy(11,18);
 printf("6th Floor Amount");
 gotoxy(60,18);
 printf("%.2f",osstt);
 gotoxy(11,20);
 printf("Include 30 percent exercise duty");
 gotoxy(60,20);
 printf("%.2f",oed);
 line(430,40,430,400);
 line(50,360,550,360);
 gotoxy(9,24);
 printf("Total Amount");
 gotoxy(60,24);
 printf("%.2f",amt.otb);
 }
 else if (discount =='y')
 {
 cleardevice();
 ot=ogtt+oftt+ostt+ottt+ofott+offtt+osstt;
 oed=(ot*30)/100;
 od=(ot*24)/100;
 amt.otb=ot-od+oed;
 gotoxy(8,2);
 printf("October Total Bill");
 rectangle(50,40,550,400);
 gotoxy(30,4);
 printf("Rate per Unit is 22");
 gotoxy(11,6);
 printf("Ground Floor Amount");
 gotoxy(60,6);
 printf("%.2f",ogtt);
 gotoxy(11,8);
 printf("1st Floor Amount");
 gotoxy(60,8);
 printf("%.2f",oftt);
 gotoxy(11,10);
 printf("2nd Floor Amount");
 gotoxy(60,10);
 printf("%.2f",ostt);
 gotoxy(11,12);
 printf("3rd Floor Amount");
 gotoxy(60,12);
 printf("%.2f",ottt);
 gotoxy(11,14);
 printf("4rd Floor Amount");
 gotoxy(60,14);
 printf("%.2f",ofott);
 gotoxy(11,16);
 printf("5th Floor Amount");
 gotoxy(60,16);
 printf("%.2f",offtt);
 gotoxy(11,18);
 printf("6th Floor Amount");
 gotoxy(60,18);
 printf("%.2f",osstt);
 gotoxy(11,19);
 printf("Total Amount");
 gotoxy(60,19);
 printf("%.2f",ot);
 gotoxy(11,21);
 printf("Include 30 percent on exercise duty");
 gotoxy(60,21);
 printf("%.2f",oed);
 gotoxy(11,22);
 printf("Less 24 percent on Total Amount");
 gotoxy(60,22);
 printf("%.2f",od);
 line(430,40,430,400);
 line(50,360,550,360);
 gotoxy(9,24);
 printf("Final Amount");
 gotoxy(60,24);
 printf("%.2f",amt.otb);
 }
 }
 end:
 }
 void nov()
 {
 float ngac,ngtt,nfac,nftt,nsac,nstt,ntac,nttt,nftac,nfott,nffac,nfftt,nssac,nsstt,nt,ned,nd;
 int ac,fan,tubelights,choice;
 float mwf=4,tts=5,fu=1,tu=0.5,rpu=22;
 char yn,discount;
 top10:
 cleardevice();
 gotoxy(3,3);
 printf("Generate Bill for:");
 gotoxy(5,5);
 printf("1) Ground Floor");
 gotoxy(5,7);
 printf("2) 1st Floor");
 gotoxy(5,9);
 printf("3) 2nd Floor");
 gotoxy(5,11);
 printf("4) 3rd Floor");
 gotoxy(5,13);
 printf("5) 4th Floor");
 gotoxy(5,15);
 printf("6) 5th Floor");
 gotoxy(5,17);
 printf("7) 6th Floor");
 gotoxy(5,22);
 printf("Enter your choice:");
 scanf("%d",&choice);
 cleardevice();
 switch(choice)
 {
 case 1:
 cleardevice();
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 ngac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 ngtt=ngac*30;
 gotoxy(4 , 12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top10;
	}
	else
	{
	goto end;
	}
 case 2:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 nfac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 nftt=nfac*30;
 gotoxy(4,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top10;
	}
	else
	{
	goto end;
       }
 case 3:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 nsac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 nstt=nsac*30;
 gotoxy(4 ,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top10;
	}
	else
	{
	goto end;
	}
 case 4:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 ntac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 nttt=ntac*30;
 gotoxy(4,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top10;
	}
	else
	{
	goto end;
	}
 case 5:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 nftac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 nfott=nftac*30;
 gotoxy(4,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top10;
	}
	else
	{
	goto end;
	}
 case 6:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 nffac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 nfftt=nffac*30;
 gotoxy(4 ,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top10;
	}
	else
	{
	goto end;
	}
 case 7:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 nssac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 nsstt=nssac*30;
 cleardevice();
 rectangle(30,80,300,400);
 gotoxy(5,5);
 printf("Per Day Bill");
 gotoxy(10,8);
 printf("Ground Floor %.2f",ngac);
 gotoxy(10,10);
 printf("1st Floor %.2f",nfac);
 gotoxy(10,12);
 printf("2nd Floor %.2f",nsac);
 gotoxy(10,14);
 printf("3rd Floor %.2f",ntac);
 gotoxy(10,16);
 printf("4th Floor %.2f",nftac);
 gotoxy(10,18);
 printf("5th Floor %.2f",nffac);
 gotoxy(10,20);
 printf("6thFloor %.2f",nssac);
 gotoxy(6 , 22);
 getch();
 cleardevice();
 gotoxy(4,6);
 printf("Do you have more than 4000 students in your university (y/n):");
 scanf(" %c",&discount);
 if(discount!='y')
 {
 cleardevice();
 nt=ngtt+nftt+nstt+nttt+nfott+nfftt+nsstt;
 ned=(nt*30)/100;
 amt.ntb=nt+ned;
 gotoxy(8,2);
 printf("November Total Bill");
 rectangle(50,40,550,400);
 gotoxy(30,4);
 printf("Rate per Unit is 22");
 gotoxy(11,6);
 printf("Ground Floor Amount");
 gotoxy(60,6);
 printf("%.2f",ngtt);
 gotoxy(11,8);
 printf("1st Floor Amount");
 gotoxy(60,8);
 printf("%.2f",nftt);
 gotoxy(11,10);
 printf("2nd Floor Amount");
 gotoxy(60,10);
 printf("%.2f",nstt);
 gotoxy(11,12);
 printf("3rd Floor Amount");
 gotoxy(60,12);
 printf("%.2f",nttt);
 gotoxy(11,14);
 printf("4rd Floor Amount");
 gotoxy(60,14);
 printf("%.2f",nfott);
 gotoxy(11,16);
 printf("5th Floor Amount");
 gotoxy(60,16);
 printf("%.2f",nfftt);
 gotoxy(11,18);
 printf("6th Floor Amount");
 gotoxy(60,18);
 printf("%.2f",nsstt);
 gotoxy(11,20);
 printf("Include 30 percent exercise duty");
 gotoxy(60,20);
 printf("%.2f",ned);
 line(430,40,430,400);
 line(50,360,550,360);
 gotoxy(9,24);
 printf("Total Amount");
 gotoxy(60,24);
 printf("%.2f",amt.ntb);
 }
 else if (discount =='y')
 {
 cleardevice();
 nt=ngtt+nftt+nstt+nttt+nfott+nfftt+nsstt;
 ned=(nt*30)/100;
 nd=(nt*24)/100;
 amt.ntb=nt-nd+ned;
 gotoxy(8,2);
 printf("November Total Bill");
 rectangle(50,40,550,400);
 gotoxy(30,4);
 printf("Rate per Unit is 22");
 gotoxy(11,6);
 printf("Ground Floor Amount");
 gotoxy(60,6);
 printf("%.2f",ngtt);
 gotoxy(11,8);
 printf("1st Floor Amount");
 gotoxy(60,8);
 printf("%.2f",nftt);
 gotoxy(11,10);
 printf("2nd Floor Amount");
 gotoxy(60,10);
 printf("%.2f",nstt);
 gotoxy(11,12);
 printf("3rd Floor Amount");
 gotoxy(60,12);
 printf("%.2f",nttt);
 gotoxy(11,14);
 printf("4rd Floor Amount");
 gotoxy(60,14);
 printf("%.2f",nfott);
 gotoxy(11,16);
 printf("5th Floor Amount");
 gotoxy(60,16);
 printf("%.2f",nfftt);
 gotoxy(11,18);
 printf("6th Floor Amount");
 gotoxy(60,18);
 printf("%.2f",nsstt);
 gotoxy(11,19);
 printf("Total Amount");
 gotoxy(60,19);
 printf("%.2f",nt);
 gotoxy(11,21);
 printf("Include 30 percent on exercise duty");
 gotoxy(60,21);
 printf("%.2f",ned);
 gotoxy(11,22);
 printf("Less 24 percent on Total Amount");
 gotoxy(60,22);
 printf("%.2f",nd);
 line(430,40,430,400);
 line(50,360,550,360);
 gotoxy(9,24);
 printf("Final Amount");
 gotoxy(60,24);
 printf("%.2f",amt.ntb);
 }
 }
 end:
 }
 void dec()
 {
 float dgac,dgtt,dfac,dftt,dsac,dstt,dtac,dttt,dftac,dfott,dffac,dfftt,dssac,dsstt,dt,ded,dd;
 int ac,fan,tubelights,choice;
 float mwf=4,tts=5,fu=1,tu=0.5,rpu=22;
 char yn,discount;
 top11:
 cleardevice();
 gotoxy(3,3);
 printf("Generate Bill for:");
 gotoxy(5,5);
 printf("1) Ground Floor");
 gotoxy(5,7);
 printf("2) 1st Floor");
 gotoxy(5,9);
 printf("3) 2nd Floor");
 gotoxy(5,11);
 printf("4) 3rd Floor");
 gotoxy(5,13);
 printf("5) 4th Floor");
 gotoxy(5,15);
 printf("6) 5th Floor");
 gotoxy(5,17);
 printf("7) 6th Floor");
 gotoxy(5,22);
 printf("Enter your choice:");
 scanf("%d",&choice);
 cleardevice();
 switch(choice)
 {
 case 1:
 cleardevice();
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 dgac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 dgtt=dgac*31;
 gotoxy(4 , 12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top11;
	}
	else
	{
	goto end;
	}
 case 2:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 dfac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 dftt=dfac*31;
 gotoxy(4,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top11;
	}
	else
	{
	goto end;
       }
 case 3:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 dsac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 dstt=dsac*31;
 gotoxy(4 ,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top11;
	}
	else
	{
	goto end;
	}
 case 4:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 dtac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 dttt=dtac*31;
 gotoxy(4,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top11;
	}
	else
	{
	goto end;
	}
 case 5:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 dftac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 dfott=dftac*31;
 gotoxy(4,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top11;
	}
	else
	{
	goto end;
	}
 case 6:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 dffac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 dfftt=dffac*31;
 gotoxy(4 ,12);
 printf("Do you want to go back (y|n) : ");
 scanf(" %c" , &yn);
	if (yn == 'y')
	{
	cleardevice();
	goto top11;
	}
	else
	{
	goto end;
	}
 case 7:
 gotoxy(3,5);
 printf("How many ac used:");
 scanf("%d",&ac);
 gotoxy(3,6);
 printf("How many fan used:");
 scanf("%d",&fan);
 gotoxy(3,7);
 printf("How many tuelights used:");
 scanf("%d",&tubelights);
 dssac=(ac*mwf+ac*tts*rpu)+(fan*fu*rpu)+(tubelights*tu*rpu);
 dsstt=dssac*31;
 cleardevice();
 rectangle(30,80,300,400);
 gotoxy(5,5);
 printf("Per Day Bill");
 gotoxy(10,8);
 printf("Ground Floor %.2f",dgac);
 gotoxy(10,10);
 printf("1st Floor %.2f",dfac);
 gotoxy(10,12);
 printf("2nd Floor %.2f",dsac);
 gotoxy(10,14);
 printf("3rd Floor %.2f",dtac);
 gotoxy(10,16);
 printf("4th Floor %.2f",dftac);
 gotoxy(10,18);
 printf("5th Floor %.2f",dffac);
 gotoxy(10,20);
 printf("6thFloor %.2f",dssac);
 gotoxy(6 , 22);
 getch();
 cleardevice();
 gotoxy(4,6);
 printf("Do you have more than 4000 students in your university (y/n):");
 scanf(" %c",&discount);
 if(discount!='y')
 {
 cleardevice();
 dt=dgtt+dftt+dstt+dttt+dfott+dfftt+dsstt;
 ded=(dt*30)/100;
 amt.dtb=dt+ded;
 gotoxy(8,2);
 printf("December Total Bill");
 rectangle(50,40,550,400);
 gotoxy(30,4);
 printf("Rate per Unit is 22");
 gotoxy(11,6);
 printf("Ground Floor Amount");
 gotoxy(60,6);
 printf("%.2f",dgtt);
 gotoxy(11,8);
 printf("1st Floor Amount");
 gotoxy(60,8);
 printf("%.2f",dftt);
 gotoxy(11,10);
 printf("2nd Floor Amount");
 gotoxy(60,10);
 printf("%.2f",dstt);
 gotoxy(11,12);
 printf("3rd Floor Amount");
 gotoxy(60,12);
 printf("%.2f",dttt);
 gotoxy(11,14);
 printf("4rd Floor Amount");
 gotoxy(60,14);
 printf("%.2f",dfott);
 gotoxy(11,16);
 printf("5th Floor Amount");
 gotoxy(60,16);
 printf("%.2f",dfftt);
 gotoxy(11,18);
 printf("6th Floor Amount");
 gotoxy(60,18);
 printf("%.2f",dsstt);
 gotoxy(11,20);
 printf("Include 30 percent exercise duty");
 gotoxy(60,20);
 printf("%.2f",ded);
 line(430,40,430,400);
 line(50,360,550,360);
 gotoxy(9,24);
 printf("Total Amount");
 gotoxy(60,24);
 printf("%.2f",amt.dtb);
 }
 else if (discount =='y')
 {
 cleardevice();
 dt=dgtt+dftt+dstt+dttt+dfott+dfftt+dsstt;
 ded=(dt*30)/100;
 dd=(dt*24)/100;
 amt.dtb=dt-dd+ded;
 gotoxy(8,2);
 printf("December Total Bill");
 rectangle(50,40,550,400);
 gotoxy(30,4);
 printf("Rate per Unit is 22");
 gotoxy(11,6);
 printf("Ground Floor Amount");
 gotoxy(60,6);
 printf("%.2f",dgtt);
 gotoxy(11,8);
 printf("1st Floor Amount");
 gotoxy(60,8);
 printf("%.2f",dftt);
 gotoxy(11,10);
 printf("2nd Floor Amount");
 gotoxy(60,10);
 printf("%.2f",dstt);
 gotoxy(11,12);
 printf("3rd Floor Amount");
 gotoxy(60,12);
 printf("%.2f",dttt);
 gotoxy(11,14);
 printf("4rd Floor Amount");
 gotoxy(60,14);
 printf("%.2f",dfott);
 gotoxy(11,16);
 printf("5th Floor Amount");
 gotoxy(60,16);
 printf("%.2f",dfftt);
 gotoxy(11,18);
 printf("6th Floor Amount");
 gotoxy(60,18);
 printf("%.2f",dsstt);
 gotoxy(11,19);
 printf("Total Amount");
 gotoxy(60,19);
 printf("%.2f",dt);
 gotoxy(11,21);
 printf("Include 30 percent on exercise duty");
 gotoxy(60,21);
 printf("%.2f",ded);
 gotoxy(11,22);
 printf("Less 24 percent on Total Amount");
 gotoxy(60,22);
 printf("%.2f",dd);
 line(430,40,430,400);
 line(50,360,550,360);
 gotoxy(9,24);
 printf("Final Amount");
 gotoxy(60,24);
 printf("%.2f",amt.dtb);
 }
 }
 end:
 }
 void quarter()
 {
  char yn;
  cleardevice();
  rectangle(50,40,400,400);
  line(50,120,400,120);
  line(50,200,400,200);
  line(50,280,400,280);
  gotoxy(24,4);
  printf("Quarterly 1 Bill");
  gotoxy(12,6);
  printf("  January ,    Feburary ,     March");
  gotoxy(25,7);
  qua.qt1=amt.jtb+amt.ftb+amt.mtb;
  printf("Total: %.2f",qua.qt1);
  gotoxy(24,9);
  printf("Quarterly 2 Bill");
  gotoxy(12,11);
  printf("  April ,       May ,      June");
  qua.qt2=amt.atb+amt.matb+amt.jutb;
  gotoxy(25,12);
  printf("Total: %.2f",qua.qt2);
  gotoxy(24,14);
  printf("Quarterly 3 Bill");
  gotoxy(12,16);
  printf("  July ,      August ,     September");
  qua.qt3=amt.jjtb+amt.autb+amt.stb;
  gotoxy(25,17);
  printf("Total: %.2f",qua.qt3);
  gotoxy(24,19);
  printf("Quarterly 4 Bill");
  gotoxy(12,21);
  printf("  October ,   November ,    December");
  qua.qt4=amt.otb+amt.ntb+amt.dtb;
  gotoxy(25,23);
  printf("Total: %.2f",qua.qt4);
 }
 void yearly()
{
  char yn;
  FILE *ptr;
  ptr=fopen("bill.txt","a");
  gotoxy(5,2);
  printf("Yearly Bill");
  rectangle(20,35,600,405);
  line(20,90,600,90);
  line(20,140,600,140);
  line(20,195,600,195);
  line(20,245,600,245);
  line(20,295,600,295);
  line(20,345,600,345);
  line(145,35,145,345);
  line(290,35,290,345);
  line(440,35,440,405);
  gotoxy(6,4);
  printf("January Bill");
  gotoxy(8,8);
  printf("%.2f",amt.jtb);
  gotoxy(22,4);
  printf("February Bill");
  gotoxy(25,8);
  printf("%.2f",amt.ftb);
  gotoxy(41,4);
  printf("March Bill");
  gotoxy(44,8);
  printf("%.2f",amt.mtb);
  gotoxy(60,4);
  printf("April Bill");
  gotoxy(61,8);
  printf("%.2f",amt.atb);
  gotoxy(7,11);
  printf("May Bill");
  gotoxy(8,14);
  printf("%.2f",amt.matb);
  gotoxy(24,11);
  printf("June Bill");
  gotoxy(25,14);
  printf("%.2f",amt.jutb);
  gotoxy(41,11);
  printf("July Bill");
  gotoxy(44,14);
  printf("%.2f",amt.jjtb);
  gotoxy(60,11);
  printf("August Bill");
  gotoxy(61,14);
  printf("%.2f",amt.autb);
  gotoxy(5,18);
  printf("September Bill");
  gotoxy(8,21);
  printf("%.2f",amt.stb);
  gotoxy(22,18);
  printf("October Bill");
  gotoxy(25,21);
  printf("%.2f",amt.otb);
  gotoxy(40,18);
  printf("November Bill");
  gotoxy(44,21);
  printf("%.2f",amt.ntb);
  gotoxy(60,18);
  printf("December Bill");
  gotoxy(61,21);
  printf("%.2f",amt.dtb);
  year.tt=amt.jtb+amt.ftb+amt.mtb+amt.atb+amt.matb+amt.jutb+amt.jjtb+amt.autb+amt.stb+amt.otb+amt.ntb+amt.dtb;
  gotoxy(12,24);
  printf("Total Amount");
  gotoxy(66,24);
  printf("%.2f",year.tt);
  fprintf(ptr,"%d",&year.tt);
  fclose(ptr);
  }