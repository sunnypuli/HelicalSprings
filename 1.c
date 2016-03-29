#include <stdio.h>
#include<math.h>
#define pi 3.1415
void staticload(void);
void fluctuatingload(void);
void colddrawn(void);
void oilhardened(void);
int c,g,ch,counter,end,type,grade[4],swgw[2],*pointer,*pointer1;
float p,d,ks,k,kc,t,td,nt,na,deflection,solidlen,freelen,G,D;
int main()
{
int choice;


printf(" \t\t\t\t\t\t\t\t\tHelical Spring Design Software by \n\t\t\t\t\t\t\t\t\tAkhilesh Reddy(1MS13ME069)\n\t\t\t\t\t\t\t\t\tSurya VS1MS13ME181)\n\t\t\t\t\t\t\t\t\tSahit Kumar Reddy(1MS13ME206)\n\t\t\t\t\t\t\t\t\tThanuskaran RK(1MS13ME185)\n\t\t\t\t\t\t\t\t\tUmer Farook Arihole(1MS13ME189)");

printf("\n\t\t\tUnder the expert guidance of Mr. D Venkatesh");
printf("\n\t\t\tDeveloped by Shrinivas Puli @ PuliInfoWay");


while(1)
{
printf("\n press 1 for static load");
printf("\n press 2 for fluctuating load");
printf("\n press 3 for exit ");
printf("\n enter ur choice between 1 ,2 ,3\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
staticload();
break;
case 2:
fluctuatingload();
break;
case 3:

exit(0);
}
}
}
void staticload()
{

printf(" enter applied force in Newton, in case of fluctuating enter pmax,\n\n spring index,\n\n choice for wire, 1 for cold drawn, 2 for oil hardened,\n\n grade of wire for cold drawn 1,2,3,4 or for oil hardened 1 for sw & 2 for vw,\n\nno. of active turn,\n\n style of ends, 1 for plain, 2 for plain & ground, 3 for square, 4 for square & ground,\n\ncompression/extension spring, 1 for comp. & 2 for exten.,\n\n value of G in N/mm^2.\n\n ");
scanf("%f %d %d %d %f %d %d %f",&p,&c,&ch,&g,&na,&end,&type,&G);
ks=1+(0.5/c);
k=((4*c-1)/(4*c-4)+(0.615/c));
kc=k/ks;





if(ch==1)
{
colddrawn();
printf(" wire dia=%f coil dia=%f no. of coil total=%f solid length=%f free length=%f",d,D,nt,solidlen,freelen);

printf("\n sut=%d",grade[g-1]);

}
else
{
oilhardened();
printf(" wire dia=%f coil dia=%f no. of coil total=%f solid length=%f free length=%f",d,D,nt,solidlen,freelen);

printf("\n sut=%d",swgw[g-1]);

}
}
void colddrawn()
{
pointer=&grade[0];
for(counter=1;counter<=8;counter=counter+1)
{
if(counter==1)
{
d=0.3;
t=(ks*8*p*c)/(pi*pow(d,2));
*pointer=1720;*(pointer+1)=2060;*(pointer+2)=2460;*(pointer+3)=2660;
}
else if(counter==2)
{
d=0.4;
t=(ks*8*p*c)/(pi*pow(d,2));
*pointer=1700;*(pointer+1)=2040;*(pointer+2)=2430;*(pointer+3)=2620;
}
else if(counter==3)
{
d=0.5;
t=(ks*8*p*c)/(pi*pow(d,2));
*pointer=1670;*(pointer+1)=2010;*(pointer+2)=2390;*(pointer+3)=2580;
}
else if(counter==4)
{
d=0.6;
t=(ks*8*p*c)/(pi*pow(d,2));
*pointer=1650;*(pointer+1)=1990;*(pointer+2)=2360;*(pointer+3)=2550;
}
else if(counter==5)
{
d=0.7;
t=(ks*8*p*c)/(pi*pow(d,2));
*pointer=1630;*(pointer+1)=1970;*(pointer+2)=2320;*(pointer+3)=2530;
}
else if(counter==6)
{




d=0.8;
t=(ks*8*p*c)/(pi*pow(d,2));
*pointer=1610;*(pointer+1)=1950;*(pointer+2)=2280;*(pointer+3)=2480;
}
else if(counter==7)
{
d=0.9;
t=(ks*8*p*c)/(pi*pow(d,2));
*pointer=1590;*(pointer+1)=1920;*(pointer+2)=2250;*(pointer+3)=2440;
}
else if(counter==8)
{
d=1.0;
t=(ks*8*p*c)/(pi*pow(d,2));
*pointer=1570;*(pointer+1)=1900;*(pointer+2)=2240;*(pointer+3)=2400;
}
td=0.3*grade[g-1];
if(td>t)
break;
}
if(td<t)
{
for(counter=1;counter<=5;counter=counter+1)
{
if(counter==1)
{
d=1.2;
t=(ks*8*p*c)/(pi*pow(d,2));
*pointer=1540;*(pointer+1)=1860;*(pointer+2)=2170;*(pointer+3)=2340;
}
else if(counter==2)
{
d=1.4;
t=(ks*8*p*c)/(pi*pow(d,2));
*pointer=1500;*(pointer+1)=1820;*(pointer+2)=2090;*(pointer+3)=2290;
}
else if(counter==3)
{
d=1.6;
t=(ks*8*p*c)/(pi*pow(d,2));
*pointer=1470;*(pointer+1)=1780;*(pointer+2)=2080;*(pointer+3)=2250;
}
else if(counter==4)
{
d=1.8;
t=(ks*8*p*c)/(pi*pow(d,2));
*pointer=1440;*(pointer+1)=1750;*(pointer+2)=2030;*(pointer+3)=2190;
}
else if(counter==5)
{
d=2.0;
t=(ks*8*p*c)/(pi*pow(d,2));
*pointer=1420;*(pointer+1)=1720;*(pointer+2)=1990;*(pointer+3)=2160;
}




td=0.3*grade[g-1];
if(td>t)
break;
}
}
if(td<t)
{
for(counter=1;counter<=6;counter=counter+1)
{
if(counter==1)
{
d=2.5;
t=(ks*8*p*c)/(pi*pow(d,2));
*pointer=1370;*(pointer+1)=1640;*(pointer+2)=1890;*(pointer+3)=2050;
}
else if(counter==2)
{
d=3.0;
t=(ks*8*p*c)/(pi*pow(d,2));
*pointer=1320;*(pointer+1)=1570;*(pointer+2)=1830;*(pointer+3)=1980;
}
else if(counter==3)
{
d=3.5;
t=(ks*8*p*c)/(pi*pow(d,2));
*pointer=1270;*(pointer+1)=1510;*(pointer+2)=1750;*(pointer+3)=1890;
}
else if(counter==4)
{
d=4.0;
t=(ks*8*p*c)/(pi*pow(d,2));
*pointer=1250;*(pointer+1)=1480;*(pointer+2)=1700;*(pointer+3)=1840;
}
else if(counter==5)
{
d=4.5;
t=(ks*8*p*c)/(pi*pow(d,2));
*pointer=1230;*(pointer+1)=1440;*(pointer+2)=1660;*(pointer+3)=1800;
}
else if(counter==6)
{
d=5.0;
t=(ks*8*p*c)/(pi*pow(d,2));
*pointer=1190;*(pointer+1)=1390;*(pointer+2)=1600;*(pointer+3)=1750;
}
td=0.3*grade[g-1];
if(td>t)
break;
}
}
if(td<t)
{
for(counter=1;counter<=3;counter=counter+1)
{




if(counter==1)
{
d=6.0;
t=(ks*8*p*c)/(pi*pow(d,2));
*pointer=1130;*(pointer+1)=1320;*(pointer+2)=1530;*(pointer+3)=1670;
}
else if(counter==2)
{
d=7.0;
t=(ks*8*p*c)/(pi*pow(d,2));
*pointer=1090;*(pointer+1)=1260;*(pointer+2)=1460;*(pointer+3)=1610;
}
else if(counter==3)
{
d=8.0;
t=(ks*8*p*c)/(pi*pow(d,2));
*pointer=1050;*(pointer+1)=1220;*(pointer+2)=1400;*(pointer+3)=1540;
}
td=0.3*grade[g-1];
if(td>t)
break;
}
}
if(td<t)
{
printf("\n out of range");
printf("\n press any key to exit");

exit(0);
}
if(end==1)
   nt=na;
else if(end==2)
   nt=na+0.5;
else if(end==3||end==4)
nt=na+2;
solidlen=nt*d;
D=c*d;
deflection=(8*p*pow(D,3)*na)/(G*pow(d,4));
if(type==1)
freelen=solidlen+deflection+na*0.5;
else if(type==2)
freelen=solidlen;
}
void oilhardened()
{
pointer1=&swgw[0];
for(counter=1;counter<=2;counter=counter+1)
{
if(counter==1)
{
d=1;
t=(k*8*p*c)/(pi*pow(d,2));
*pointer1=1760;*(pointer1+1)=1670;




}
else if(counter==2)
{
d=1.2;
t=(k*8*p*c)/(pi*pow(d,2));
*pointer1=1720;*(pointer1+1)=1620;
}
td=0.3*swgw[g-1];
if(td>t)
break;
}
if(td<t)
{
for(counter=1;counter<=4;counter=counter+1)
{
if(counter==2)
{
d=1.5;
t=(k*8*p*c)/(pi*pow(d,2));
*pointer1=1670;*(pointer1+1)=1570;
}
else if(counter==2)
{
d=2.0;
t=(k*8*p*c)/(pi*pow(d,2));
*pointer1=1620;*(pointer1+1)=1520;
}
else if(counter==2)
{
d=2.5;
t=(k*8*p*c)/(pi*pow(d,2));
*pointer1=1570;*(pointer1+1)=1470;
}
else if(counter==2)
{
d=3.0;
t=(k*8*p*c)/(pi*pow(d,2));
*pointer1=1520;*(pointer1+1)=1430;
}
td=0.3*swgw[g-1];
if(td>t)
break;
}
}
if(td<t)
{
for(counter=1;counter<=1;counter=counter+1)
{

if(counter==1)
{
d=3.6;
t=(k*8*p*c)/(pi*pow(d,2));
*pointer1=1480;*(pointer1+1)=1400;




}
td=0.3*swgw[g-1];
if(td>t)
break;
}
}
if(td<t)
{
for(counter=1;counter<=3;counter=counter+1)
{
if(counter==1)
{
d=4.0;
t=(k*8*p*c)/(pi*pow(d,2));
*pointer1=1480;*(pointer1+1)=1400;
}
else if(counter==2)
{
d=4.5;
t=(k*8*p*c)/(pi*pow(d,2));
*pointer1=1440;*(pointer1+1)=1370;
}
else if(counter==3)
{
d=5.0;
t=(k*8*p*c)/(pi*pow(d,2));
*pointer1=1440;*(pointer1+1)=1370;
}
td=0.3*swgw[g-1];
if(td>t)
break;
}
}
if(td<t)
{
for(counter=1;counter<=2;counter=counter+1)
{
if(counter==1)
{
d=6.0;
t=(k*8*p*c)/(pi*pow(d,2));
*pointer1=1400;*(pointer1+1)=1340;
}
else if(counter==2)
{
d=7.0;
t=(k*8*p*c)/(pi*pow(d,2));
*pointer1=1360;*(pointer1+1)=1300;
}
td=0.3*swgw[g-1];
if(td>t)
break;
}
}




if(td<t)
{
printf("\n out of range");
printf("\n press any key to exit");

exit(0);
}
if(end==1)
nt=na;
else if(end==2)
nt=na+0.5;
else if(end==3||end==4)
nt=na+2;
solidlen=nt*d;
D=c*d;
deflection=(8*p*pow(D,3)*na)/(G*pow(d,4));
if(type==1)
freelen=solidlen+deflection+na*0.5;
else if(type==2)
freelen=solidlen;
}
void fluctuatingload()
{
float pmin,pm,pa,tm,ta,sse,ssy,sut,fos;
staticload();
printf("\n\n and now enter p-min\n\n");
scanf("%f",&pmin);
if(ch==1)
{
d=d+1;
for(counter=1;counter<=1;counter=counter+1)
{
if(d==0.3)
{printf("\n taking d=d+1 for extra safety for fluctuating load");
*pointer=1720;*(pointer+1)=2060;*(pointer+2)=2460;*(pointer+3)=2660;}
else if(d==0.4)
{printf("\n taking d=d+1 for extra safety for fluctuating load");
*pointer=1700;*(pointer+1)=2040;*(pointer+2)=2430;*(pointer+3)=2620;}
else if(d==0.5)
{printf("\n taking d=d+1 for extra safety for fluctuating load");
*pointer=1670;*(pointer+1)=2010;*(pointer+2)=2390;*(pointer+3)=2580;}
else if(d==0.6)
{printf("\n taking d=d+1 for extra safety for fluctuating load");
*pointer=1650;*(pointer+1)=1990;*(pointer+2)=2360;*(pointer+3)=2550;}
else if(d==0.7)
{printf("\n taking d=d+1 for extra safety for fluctuating load");
*pointer=1630;*(pointer+1)=1970;*(pointer+2)=2320;*(pointer+3)=2530;}
else if(d==0.8)
{printf("\n taking d=d+1 for extra safety for fluctuating load");
*pointer=1610;*(pointer+1)=1950;*(pointer+2)=2280;*(pointer+3)=2480;}
else if(d==0.9)
{printf("\n taking d=d+1 for extra safety for fluctuating load");
*pointer=1590;*(pointer+1)=1920;*(pointer+2)=2250;*(pointer+3)=2440;}
else if(d==1.0)




{printf("\n taking d=d+1 for extra safety for fluctuating load");
*pointer=1570;*(pointer+1)=1900;*(pointer+2)=2240;*(pointer+3)=2400;}
else if(d==1.2)
{printf("\n taking d=d+1 for extra safety for fluctuating load");
*pointer=1540;*(pointer+1)=1860;*(pointer+2)=2170;*(pointer+3)=2340;}
else if(d==1.4)
{printf("\n taking d=d+1 for extra safety for fluctuating load");
*pointer=1500;*(pointer+1)=1820;*(pointer+2)=2090;*(pointer+3)=2290;}
else if(d==1.6)
{printf("\n taking d=d+1 for extra safety for fluctuating load");
*pointer=1470;*(pointer+1)=1780;*(pointer+2)=2080;*(pointer+3)=2250;}
else if(d==1.8)
{printf("\n taking d=d+1 for extra safety for fluctuating load");
*pointer=1440;*(pointer+1)=1750;*(pointer+2)=2030;*(pointer+3)=2190;}
else if(d==2.0)
{printf("\n taking d=d+1 for extra safety for fluctuating load");
*pointer=1420;*(pointer+1)=1720;*(pointer+2)=1990;*(pointer+3)=2160;}
else if(d==2.5)
{printf("\n taking d=d+1 for extra safety for fluctuating load");
*pointer=1370;*(pointer+1)=1640;*(pointer+2)=1890;*(pointer+3)=2050;}
else if(d==3.0)
{printf("\n taking d=d+1 for extra safety for fluctuating load");
*pointer=1320;*(pointer+1)=1570;*(pointer+2)=1830;*(pointer+3)=1980;}
else if(d==3.5)
{printf("\n taking d=d+1 for extra safety for fluctuating load");
*pointer=1270;*(pointer+1)=1510;*(pointer+2)=1750;*(pointer+3)=1890;}
else if(d==4.0)
{printf("\n taking d=d+1 for extra safety for fluctuating load");
*pointer=1250;*(pointer+1)=1480;*(pointer+2)=1700;*(pointer+3)=1840;}
else if(d==4.5)
{printf("\n taking d=d+1 for extra safety for fluctuating load");
*pointer=1230;*(pointer+1)=1440;*(pointer+2)=1660;*(pointer+3)=1800;}
else if(d==5.0)
{printf("\n taking d=d+1 for extra safety for fluctuating load");
*pointer=1190;*(pointer+1)=1390;*(pointer+2)=1600;*(pointer+3)=1750;}
else if(d==6.0)
{printf("\n taking d=d+1 for extra safety for fluctuating load");
*pointer=1130;*(pointer+1)=1320;*(pointer+2)=1530;*(pointer+3)=1670;}
else if(d==7.0)
{printf("\n taking d=d+1 for extra safety for fluctuating load");
*pointer=1090;*(pointer+1)=1260;*(pointer+2)=1460;*(pointer+3)=1610;}
else if(d==8.0)
{printf("\n taking d=d+1 for extra safety for fluctuating load");
*pointer=1050;*(pointer+1)=1220;*(pointer+2)=1400;*(pointer+3)=1540;}
else
{printf("\n taking original calculated dia because d+1 not exist ");d=d-1;}
}
D=c*d;
printf("\n d=%fD=%f",d,D);
sse=0.22*grade[g-1];
ssy=0.45*grade[g-1];
printf ("\n sut=%d",grade[g-1]);

}




else if(ch==2)
{
d=d+1;
for(counter=1;counter<=1;counter=counter+1)
{
if(d==1)
{printf("\n taking d=d+1 for extra safety for fluctuating load");*pointer1=1760;*(pointer1+1)=1670;}
else if(d==1.2)
{printf("\n taking d=d+1 for extra safety for fluctuating load");*pointer1=1720;*(pointer1+1)=1620;}
else if(d==1.5)
{printf("\n taking d=d+1 for extra safety for fluctuating load");*pointer1=1670;*(pointer1+1)=1570;}
else if(d==2.0)
{printf("\n taking d=d+1 for extra safety for fluctuating load");*pointer1=1620;*(pointer1+1)=1520;}
else if(d==2.5)
{printf("\n taking d=d+1 for extra safety for fluctuating load");*pointer1=1570;*(pointer1+1)=1470;}
else if(d==3.0)
{printf("\n taking d=d+1 for extra safety for fluctuating load");*pointer1=1520;*(pointer1+1)=1430;}
else if(d==3.6)
{printf("\n taking d=d+1 for extra safety for fluctuating load");*pointer1=1480;*(pointer1+1)=1400;}
else if(d==4.0)
{printf("\n taking d=d+1 for extra safety for fluctuating load");*pointer1=1480;*(pointer1+1)=1400;}
else if(d==4.5)
{printf("\n taking d=d+1 for extra safety for fluctuating load");*pointer1=1440;*(pointer1+1)=1370;}
else if(d==5.0)
{printf("\n taking d=d+1 for extra safety for fluctuating load");*pointer1=1440;*(pointer1+1)=1370;}
else if(d==6.0)
{printf("\n taking d=d+1 for extra safety for fluctuating load");*pointer1=1400;*(pointer1+1)=1340;}
else if(d==7.0)
{printf("\n taking d=d+1 for extra safety for fluctuating load");*pointer1=1360;*(pointer1+1)=1300;}
else
{printf("\n taking original calculated dia because d+1 not exist ");d=d-1;}
}
D=c*d;
printf("\n d=%fD=%f",d,D);
sse=0.22*swgw[g-1];
ssy=0.45*swgw[g-1];
printf ("\n sut=%d",swgw[g-1]);

}
else if(ch>2)
{
printf("\n error");

exit(0);
}
pm=0.5*(p+pmin);
pa=0.5*(p-pmin);
tm=(ks*8*pm*D)/(pi*pow(d,3));
ta=(k*8*pa*D)/(pi*pow(d,3));
fos=(0.5*sse*ssy)/(ta*(ssy-(0.5*sse))+tm*0.5*sse);
printf("\n\n factor of safety=%f",fos);

}

