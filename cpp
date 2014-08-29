# include "stdafx.h"
# include<stdio.h>
# include<windows.h>
# include<stdio.h>
# include<fstream.h>
# include<ctype.h>
# include<time.h>
# include<math.h>
# include <iostream.h>

class blackground
{
private:
    int x;
    int y;
    int m;
	int n;
    WORD w;
public:
blackground::blackground(int x0,int y0,int m0,int n0,WORD w0);        //重载blackground()
    display0();
};

blackground::blackground(int x0,int y0,int m0,int n0,WORD w0)
   	{		 m=m0;
			 n=n0;
			 y=y0;
			 x=x0;
			 w=w0;

             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),w);
			 COORD pos;
			 pos.X=x+m;
			 pos.Y=y+n;
			 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	}
blackground::display0()
	{	   
	         printf(" ");
	}

///////////////////////////////////////复数运算///////////////////////////////////////////////

class complex
{
  public:complex()
		 { real=imag=0; }

         complex(double r, double i)
		 {real = r, imag = i;}

         complex operator +(const complex &c);
         complex operator -(const complex &c);
         complex operator *(const complex &c);
         complex operator /(const complex &c);
		 friend void print(const complex &c);

private:double real, imag;
};
		inline complex complex::operator +(const complex &c)
		{
			return complex(real + c.real, imag + c.imag);
		}
		inline complex complex::operator -(const complex &c)
		{
			return complex(real - c.real, imag - c.imag);
		}
		inline complex complex::operator *(const complex &c)
		{
			return complex(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
		}
		inline complex complex::operator /(const complex &c)
		{
			return complex((real * c.real + imag + c.imag) / (c.real * c.real + c.imag * c.imag),(imag * c.real - real * c.imag) / (c.real * c.real + c.imag * c.imag));
		}

		void print(const complex &c)
		{
		//	blackground z01(88,12,0,0,240);
            //printf("!!!!!!!!");
			if(c.imag<0)
			{	blackground z01(75,12,0,0,240);
		      //  cout<<c.real<<c.imag<<'i';
			
			    printf("%f+%fi",c.real,c.imag);
			}
		    else
			{	blackground z01(75,12,0,0,240);
			//	cout<<c.real<<'+'<<c.imag<<'i';
			    printf("%f+%fi",c.real,c.imag);
			}
		}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

HANDLE hOut,hIn;
void HandleMouse(MOUSE_EVENT_RECORD Mouse,int p[2])
{
  
  if(Mouse.dwButtonState==1||Mouse.dwButtonState==2)
  {  p[0]=Mouse.dwMousePosition.X;
	 p[1]=Mouse.dwMousePosition.Y;
  }
}

void first()
{    ///////////////////////////////////第一行//////////////////////////////////////

	blackground pi(22,18,0,0,129);          
	printf("  PI  ");    //深灰底绿

    blackground e(30,18,0,0,129);     
	printf("  E   ");
    
	blackground ns(38,18,0,0,141);         
	printf(" d.ns ");    //深灰底粉红

	blackground cu(46,18,0,0,140);          
	printf(" 存储 ");    //深灰底红

    blackground chu(75,18,0,0,140);
	printf("  /  ");

	blackground yu(83,18,0,0,140);
	printf(" 取余 ");

    blackground fu(91,18,0,0,130);
	printf(" 复数 ");

}

void second()
{     
	/////////////////////////////////第二行/////////////////////////////////////////

	blackground pi(22,20,0,0,141);          
	printf("  (   ");    

    blackground e(30,20,0,0,141);     
	printf("   )  ");
    
	blackground cu(46,20,0,0,140);          
	printf(" 取存 ");    //深灰底红

    blackground chu(75,20,0,0,140);
	printf("  *  ");

	blackground yu(83,20,0,0,140);
	printf(" 取整 ");

    blackground fu(91,20,0,0,135);
	printf(" 实部 ");

}

void third()
{     /////////////////////////////////第三行/////////////////////////////////////////   

    blackground e(30,22,0,0,141);     
	printf("  x^y ");

	blackground cu(46,22,0,0,140);          
	printf(" 累存 ");    //深灰底红

    blackground chu(75,22,0,0,140);
	printf("  -  ");

	blackground yu(83,22,0,0,140);
	printf("      ");

    blackground fu(91,22,0,0,135);
	printf(" 虚部 ");
}

void fourth()
{   	/////////////////////////////////第四行/////////////////////////////////////////
   
	blackground e(30,24,0,0,141);     
	printf("  x^3 ");
    
	blackground ns(38,24,0,0,141);         
	printf("  n!  ");    //深灰底粉红

	blackground cu(46,24,0,0,140);          
	printf(" 积存 ");    //深灰底红

	blackground qi(54,24,0,0,129);
	printf("  0  ");

    blackground ba(61,24,0,0,129);
	printf(" +/- ");

	blackground jiu(68,24,0,0,129);
	printf("  .  ");

    blackground chu(75,24,0,0,140);
	printf("  +  ");

	blackground yu(83,24,0,0,140);
	printf("  ==  ");

    blackground fu(91,24,0,0,135);
	printf("  模  ");

}

void fifth()
{  	/////////////////////////////////第五行/////////////////////////////////////////
  
    blackground e(30,26,0,0,141);     
	printf("  x^2 ");
    
	blackground ns(38,26,0,0,141);         
	printf("  l/x ");    //深灰底粉红

	blackground cu(46,26,0,0,140);          
	printf(" 清存 ");    //深灰底红

}

void shangdang()
{   
	blackground as(22,22,0,0,141);          
	printf(" asin ");

	blackground ac(22,24,0,0,141);          
	printf(" acos ");

	blackground at(22,26,0,0,141);          
	printf(" atan ");

	blackground de(38,18,0,0,141);         
	printf(" deg  ");    //深灰底粉红
    
	blackground ex(38,20,0,0,141);         
	printf(" exp  ");
	
	blackground ed(38,22,0,0,141);         
	printf(" expd ");
}

void xiadang()
{  	
	blackground as(22,22,0,0,141);          
	printf(" sin  ");

	blackground pi(22,24,0,0,141);          
	printf(" cos  "); 

	blackground at(22,26,0,0,141);          
	printf(" tan  ");

	blackground ns(38,18,0,0,141);         
	printf(" d.ns "); 
    
	blackground ns1(38,20,0,0,141);         
	printf("  ln  "); 
	
	blackground ns2(38,22,0,0,141);         
	printf("  log ");
	
}

void shuzi(int x)
{   int x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,xa,xb,xc,xd,xe,xf;

    if (x==10)
	{ x0=129;x1=129;x2=129;x3=129;x4=129;x5=129;x6=129;x7=129;x8=129;x9=129;xa=135;xb=135;xc=135;xd=135;xe=135;xf=135;
	  blackground jz(21,14,0,0,127);         //    灰底白字
	  printf(" ● 十六进制  ● 十进制  ● 八进制  ● 二进制"); 
      blackground jz1(35,14,0,0,115);       //    灰底深绿字
	  printf("● 十进制");
	}

    else if (x==16)
	{ x0=129;x1=129;x2=129;x3=129;x4=129;x5=129;x6=129;x7=129;x8=129;x9=129;xa=129;xb=129;xc=129;xd=129;xe=129;xf=129;
	  blackground jz(21,14,0,0,127);         //    灰底白字
	  printf(" ● 十六进制  ● 十进制  ● 八进制  ● 二进制"); 
      blackground jz1(22,14,0,0,115);       //    灰底深绿字
	  printf("● 十六进制");
	}

    else if (x==8)
	{ x0=129;x1=129;x2=129;x3=129;x4=129;x5=129;x6=129;x7=129;x8=135;x9=135;xa=135;xb=135;xc=135;xd=135;xe=135;xf=135;
      blackground jz(21,14,0,0,127);         //    灰底白字
	  printf(" ● 十六进制  ● 十进制  ● 八进制  ● 二进制"); 
      blackground jz1(46,14,0,0,115);       //    灰底深绿字
	  printf("● 八进制");	
	}
	else if (x==2)
	{ x0=129;x1=129;x2=135;x3=135;x4=135;x5=135;x6=135;x7=135;x8=135;x9=135;xa=135;xb=135;xc=135;xd=135;xe=135;xf=135;
      blackground jz(21,14,0,0,127);         //    灰底白字
	  printf(" ● 十六进制  ● 十进制  ● 八进制  ● 二进制"); 
      blackground jz1(57,14,0,0,115);       //    灰底深绿字
	  printf("● 二进制");	
	}

	blackground lin(54,24,0,0,x0);
	printf("  0  ");
	
	blackground yi(54,22,0,0,x1);
	printf("  1  ");

	blackground er(61,22,0,0,x2);
	printf("  2  ");

	blackground san(68,22,0,0,x3);
	printf("  3  ");

	blackground si(54,20,0,0,x4);
	printf("  4  ");

    blackground wu(61,20,0,0,x5);
	printf("  5  ");

	blackground liu(68,20,0,0,x6);
	printf("  6  ");

    blackground qi(54,18,0,0,x7);
	printf("  7  ");

    blackground ba(61,18,0,0,x8);
	printf("  8  ");

	blackground jiu(68,18,0,0,x9);
	printf("  9  "); 

    blackground a(54,26,0,0,xa);
	printf("  A  ");

    blackground b(61,26,0,0,xb);
	printf("  B  ");

	blackground c(68,26,0,0,xc);
	printf("  C  ");

    blackground d(75,26,0,0,xd);
	printf("  D  ");

	blackground e(83,26,0,0,xe);
	printf("  E   ");

    blackground f(91,26,0,0,xf);
	printf("  F   ");
}

void jiemian(int k)
{
    int m,n;
	for(n=0;n<32-8-6;n++)                     //       灰色底色
	{    for(m=0;m<60+k;m++)
		{    blackground z2(20,10,m,n,120);
			 z2.display0();
		}
	}
		for(n=0;n<2;n++)                  //       灰色上
	{    for(m=0;m<60+k;m++)
		{    blackground z2(20,8,m,n,120);
			 z2.display0();
		}
	}
		for(n=0;n<2;n++)                 //        蓝色顶
	{    for(m=0;m<60+k;m++)
		{    blackground z2(20,6,m,n,17);
			 z2.display0();
		}
	}
        blackground z21(73+k,6,0,0,199|1024);
		printf("  ×  ");
        blackground z22(69+k,6,0,0,183|1024);
		printf(" □ ");
        blackground z23(65+k,6,0,0,183|1024);
		printf(" — ");
		blackground z24(65+k,6,3,0,183|1024*4);
		printf(" ");
		blackground z25(65+k,6,0,0,183|1024*2);
		printf(" ");

		for(n=0;n<36-8-6;n++)                 //        蓝色左
	{    for(m=0;m<56+4+k;m++)
		{    blackground z2(19,6,0,n,17);
			 z2.display0();
		}
	}
		for(n=0;n<36-8-6;n++)                 //        蓝色右
	{    for(m=0;m<56;m++)
		{    blackground z2(75+4+k,6,0,n,17);
			 z2.display0();
		}
	}
                                            //        蓝色下
	{    for(m=0;m<57+4+k;m++)
		{    blackground z2(19,42-8-6,m,0,17);
			 z2.display0();
		}
	}
    	for(n=0;n<32-8-6;n++)                 //        灰色右
	{    for(m=0;m<2;m++)
		{    blackground z2(73+4+k,10,m,n,120);
			 z2.display0();
		}
	}
    	for(n=0;n<30;n++)                 //        灰色下
	{    for(m=0;m<53+4+k;m++)
		{    blackground z2(20,41-8-6,m,0,120);
			 z2.display0();
		}
	}
    
       for(n=0;n<2;n++)
		for(m=0;m<55+k;m++)               //     白色显示
	{  blackground z2(22,11,m,n,240);
		printf(" ");
	}

	blackground js(21,7,0,0,16);
	printf(" ※   计算器");

	blackground bj(21,9,0,0,633);
	printf(" 编辑(E)   查看(V)   帮助(H)");

	blackground x1(22,13,0,0,120);
	printf("---------------------------------------------------------------------------");
	
    blackground jz(21,13+1,0,0,127);         //    灰底白字
	printf(" ● 十六进制  ● 十进制  ● 八进制  ● 二进制");   

    blackground ji(21,15+1,0,0,127);         //    灰底白字
	printf(" ■ 上档功能  ■ 双曲函数");
    
    blackground tui(62+8,15+1,0,0,140);         //    深灰红字
	printf(" 退格 ");

	blackground qing(70+8,15+1,0,0,140);         //    深灰红字
	printf(" 清屏 ");

	blackground quan(78+8,15+1,0,0,140);         //    深灰红字
	printf(" 全清 ");

    blackground z0(73+k,12,0,0,240);
	printf("0.");
	
	blackground x2(22,16+1,0,0,120);
	printf("---------------------------------------------------------------------------");

    first();
	second();
	third();
	fourth();
	fifth();
	shuzi(10);
	xiadang();
}

void bai()
{   for(int n=0;n<2;n++)
		for(int m=0;m<55+20;m++)               //     白色显示
	{  blackground z2(22,11,m,n,240);
		printf(" ");
	}
}

void chakan()
{   int x,y,p[2];

	HANDLE hOut,hIn;
    DWORD Result; 
    INPUT_RECORD Buf;
 
	 hOut=GetStdHandle(STD_OUTPUT_HANDLE);
	 hIn=GetStdHandle(STD_INPUT_HANDLE);

	 do
		{
			ReadConsoleInput(hIn,&Buf,1,&Result);
			if(Buf.EventType==MOUSE_EVENT)
			{
				HandleMouse(Buf.Event.MouseEvent,p);
				x=p[0];
	   			y=p[1];
			}
		} while(!(Buf.EventType==MOUSE_EVENT&&(Buf.Event.MouseEvent.dwButtonState==1||Buf.Event.MouseEvent.dwButtonState==2)));

     if(Buf.Event.MouseEvent.dwButtonState==1)
	 {      blackground ji0(32,10,0,0,120);
		    printf("              ");
		    blackground ji1(32,11,0,0,240);
			printf("              ");
			blackground ji2(32,12,0,0,240);
			printf("              ");
			blackground ji3(32,13,0,0,120);
            printf("--------------");
			blackground ji4(31,14,0,0,127);
			printf("制  ● 十进制  ");
  	 }
}

////////////////////////////////将多个单个字符转换为数字//////////////////////////////////

void show(char cha[20],char ch,int m)
{  	bai();
    
    //if(cha[0]>='A'+97&&cha[0]<='F'+97)
    //printf("%d,%c",cha[0],cha[0]);    

	int t=0;
	for(int m1=0;m1<=m;m1++)
	{	if(!((cha[m1]>='A'&&cha[m1]<='F')||(cha[m1]>='a'&&cha[m1]<='j')||cha[m1]=='.'))
	    break;
	   
	}
    
	//printf("m1=%d,%c",m1,cha[m1-1]);
	for(int m2=m1-1;m2>-1;m2--)
	{  

		blackground z0(93-t,12,0,0,240);
		if(cha[m2]>='a'&&cha[m2]<='j')
		    printf("%d",cha[m2]-97);
        else if(cha[m2]=='.')
			printf(".");
		else if(cha[m2]>=65&&cha[m2]<=71)
			printf("%c",cha[m2]);
		t=t+1;
	}
    
}

void yunsuan(int jz,float b[20],char c[20],int m1)
{  bai();
  
   float result=b[0];
   int zheng,yu,zheng1,zheng2;
   float yu1; 
   float result1;
   int t=1;
   int n=0;
   
   for(int m=1;m<=m1;m++)                               //////////注意
       {  
	      if(c[m-1]=='/')
	         result=result/b[m];
	      else if(c[m-1]=='*')
		     result=result*b[m];
		  else if(c[m-1]=='+')
		     result=result+b[m];
		  else if(c[m-1]=='-')
		     result=result-b[m];

		  else if(c[m-1]=='%')
	         result=(int)b[m-1]%(int)b[m];
	      else if(c[m-1]=='1')                     // 取整
		     result=(int)b[m-1];
		  else if(c[m-1]=='2')                     // sin
		     result=sin(b[m]);
		  else if(c[m-1]=='3')                     // cos
		     result=cos(b[m]);
		  else if(c[m-1]=='4')                     // tan 
		     result=tan(b[m]);

		  else if(c[m-1]=='5')                     // x^y 
		     result=pow(b[m-1],b[m]);
		  else if(c[m-1]=='6')                     // x^3
	         result=b[m-1]*b[m-1]*b[m-1];
	      else if(c[m-1]=='7')                     // x^2 
		     result=b[m-1]*b[m-1];

		  else if(c[m-1]=='8')                     // ln 
		     result=log(b[m]);
		  else if(c[m-1]=='9')                     // log
		     result=log10(b[m]);
          else if(c[m-1]=='o')                     // n! 
	         {   
			     float cm=1.0;
			     for(int cn=2;cn<=(int)b[m-1];cn++)
				 {	 cm=cm*cn;
				 }
				 result=cm;
			}

	      else if(c[m-1]=='p')                    // 1/x 
		     result=1.0/b[m-1];

		  else if(c[m-1]=='q')                    // asin 
		     result=asin(b[m]);
		  else if(c[m-1]=='r')                    // acos 
		     result=acos(b[m]);
		  else if(c[m-1]=='s')                    // atan  
             result=atan(b[m]);
		  else if(c[m-1]=='t')                    // exp 
             result=exp(b[m]);

	   }

    if(result>9&&result<100)           n=1;
	else if(result>99&&result<1000)     n=2;
	else if(result>999&&result<10000)    n=3;
	else if(result>9999&&result<100000)   n=4;
    else if(result>99999&&result<1000000)  n=5;
	else if(result>999999&&result<10000000) n=6;

	if(jz==10)
	{
	   int result2=(int)result;
	   if(result2-result==0.000000)
	   { 
	      blackground z01(93-n,12,0,0,240);
          printf("%d.",result2);	
	   }
	   else 
	   {
          blackground z01(88-n,12,0,0,240);
          printf("%f",result);
	   }
	}
    else
	{   int result3=(int)result; 
	    int j[15];
        int js=0;
        for(js=0;js<15;js++)
		{   j[js]=result3%jz;
			result3=result3/jz;
	        blackground z01(94-js,12,0,0,240);
			if(j[js]<10)
               printf("%d",j[js]);
			else if(j[js]>9)
				printf("%c",j[js]+55);
			if(result3==0)
                break;
		}
	}

}

void fushuyunsuan(int jz,float b[20],char c[20],int m1)
{//  printf("        b=%d,%d,%d,%d,%d,%d,%c,%c,%c",b[0],b[1],b[2],b[3],b[4],b[5],c[0],c[1],c[2]);
	bai();
  
   float result=b[0];
   int zheng,yu,zheng1,zheng2;
   float yu1; 
   float result1;
   int t=1;
   int n=0;

   complex c1(b[1],b[2]), c2(b[4],b[5]),c3;
   
  // for(int m=0;m<20;m++)
   {   if(c[2]=='/')
		{ c3=c1/c2;
          print(c3);
		}
       else if(c[2]=='*')
		{ c3=c1*c2;
          print(c3);
		}
       else if(c[2]=='+')
		{ c3=c1+c2;
          print(c3);
		}
       else if(c[2]=='-')
		{ c3=c1-c2;
          print(c3);
		}
	} 
}

void zhuanhuan(int jz,char a[20][22],float b[20],int m1)                        /////////////jz是表示多少进制///////////////////////
{   
	int zheng;
	int yu;
    int t=0;
	int t2=0;
	int t5=1;
	int j1=1;
	int am;

	if(jz!=16)
	{	for(int m=0;m<=m1;m++)
		{   float b1=0;
			int t4=1;
			int t1=1;
			if(a[m][0]!='P'&&a[m][0]!='I')
			{   for(int n=0;n<22;n++)
				{   
				   t1=jz*t1;
			    	if(!(a[m][n]>='a'&&a[m][n]<='j'||a[m][n]=='P'||a[m][n]=='I'))
					{  if(a[m][n]!='.')
						{  
						   t=t1/(jz*jz);
						   for(int n1=0;n1<n;n1++)
						   {   
							  am=a[m][n1]-97;
							  b1=b1+am*t;
							  t=t/jz;
								
						   }
							 int b0=(int)b1;
							 t1=1;
							 break;
						}
				  
					if(a[m][n]=='.')
					{   for(int n2=n+1;n2<12;n2++)
						{     t4=jz*t4;
					          if(!(a[m][n2]>='a'&&a[m][n2]<='j'))
							  {      t4=t4/jz;
									 t5=t1*t4/(jz*jz);
									 for(int t3=0;t3<n2+1;t3++)
									 {   
										 if(a[m][t3]>='a'&&a[m][t3]<='j')
										 {    
                                             am=a[m][t3]-97;
					                         b1=b1+am*t5;
				                             t5=t5/jz;
										 }
                                     }
									 b1=b1/t4;
									 break;
								}
							}
                            b1=b1*t4;
                            zheng=(int)b1/t4;
						    yu=(int)b1%t4;
						    b1=b1/t4;
                            break;
						}
					} 
				}
			}
			else if(a[m][0]=='P')
				b1=3.141593;
		    else if(a[m][0]=='I')
			    b1=2.718282;

		    b[m]=b1;
	   	}
	}

	else if(jz==16)
    {   for(int m=0;m<=m1;m++)
		{   float b1=0;
			int t4=1;
			int t1=1;

			for(int n=0;n<22;n++)
			{     t1=16*t1;
                
				if(!(a[m][n]>='a'&&a[m][n]<='j'||(a[m][n]>='A'&&a[m][n]<='F')))
				{ 
				  t=t1/(16*16);
					for(int n1=0;n1<n;n1++)
					{   if(a[m][n1]>='a'&&a[m][n1]<='j')
						{    am=a[m][n1]-97;
							 b1=b1+am*t;
							 t=t/16;

						}
					    else if(a[m][n1]>='A'&&a[m][n1]<='F')
						{    am=a[m][n1]-55;
						     b1=b1+am*t;
							 t=t/16;

						//	 blackground z01(100,n1,0,0,240);
						//	 printf("a[%d][%d]=%d",m,n1,am);
						}
					}
					
					blackground z0(94-n,12,0,0,240);
					int b0=(int)b1;
					t1=1;
					break;
				}
			}
		b[m]=b1;
	//	blackground z0(0,m,0,0,240);
	//	printf("b[%d]=%f,",m,b[m]);
		}
	}
}


void click(char a[20][22],float b[20],char c[20],char cha[20],int * sflag,int * i,int * j,int * fflag,int * z,int * f)
{   
	int m=(* i);
	int n=(* j);
	int x,y,p[2];
	int m0,n0;
	int x0,y0;

	HANDLE hOut,hIn;
    DWORD Result; 
    INPUT_RECORD Buf;
 
	 hOut=GetStdHandle(STD_OUTPUT_HANDLE);
	 hIn=GetStdHandle(STD_INPUT_HANDLE);

	 do
		{
			ReadConsoleInput(hIn,&Buf,1,&Result);
			if(Buf.EventType==MOUSE_EVENT)
			{
				HandleMouse(Buf.Event.MouseEvent,p);
				x=p[0];
	   			y=p[1];
			}
		} while(!(Buf.EventType==MOUSE_EVENT&&(Buf.Event.MouseEvent.dwButtonState==1||Buf.Event.MouseEvent.dwButtonState==2)));

     if(Buf.Event.MouseEvent.dwButtonState==1)
	    {     
              if(x>72+20&&x<78+20&&y==6)                           // 关闭
			  {    
				  for(x0=0;x0<90;x0++) 
					  for(y0=0;y0<30;y0++)
					{   blackground clo(10+x0,4+y0,0,0,263);
			            printf(" ");
					}
			  }
              else if(x>64+20&&x<70+20&&y==6)                      // 最小化
			  {
				  for(x0=0;x0<90;x0++) 
					  for(y0=0;y0<30;y0++)
					{   blackground clo1(10,4,x0,y0,263);
			            printf(" ");
					}
				  for(x0=0;x0<21;x0++) 
					  for(y0=0;y0<3;y0++)
					{   blackground clo2(18,30,x0,y0,281);
			            printf(" ");
					}
				  blackground clo3(18,30,0,1,281);
			            printf("     ※  计算器 ");
				  
			  }

			  else if(x>17&&x<39&&y==30||y==31||y==32)        // 恢复界面
			  {     
				    for(x0=0;x0<21;x0++) 
					  for(y0=0;y0<3;y0++)
					{   blackground clo2(18,30,x0,y0,263);
			            printf(" ");
					}

				    jiemian(20);

			        * j=0;    * i=0;    * f=0;   * z=1;
			        for(m0=0;m0<20;m0++)
					   {  for(n0=0;n0<22;n0++)
							   a[m0][n0]='0';
					      cha[m0]='0';
						  c[m0]='0';
					   }
			  }
		      
              else if(x>21&&x<29&&y==9)                      //  编辑
			  {     //blackground ji(21,9,0,0,127);
			        //printf("")
			  }
              else if(x>31&&x<39&&y==9)                     //  查看
			  {    
				   blackground ji0(32,10,0,0,120);
			       printf("--------------");
				   blackground ji1(32,11,0,0,120);
			       printf(" \003  标准型    ");
				   blackground ji2(32,12,0,0,120);
				   printf("--------------");
				   blackground ji3(32,13,0,0,120);
                   printf("    科学型    ");
				   blackground ji4(32,14,0,0,120);
				   printf("--------------");

				   chakan();
			  }

              else if(x>41&&x<49&&y==9)                      //  帮助
                    MessageBox(NULL,"计算器使用规则              \n\nUser\nwh","help",MB_OK|MB_ICONWARNING);
		      else if(x>21&&x<24&&y==14)                     // 十六进制 
			  {   * fflag=16;
				  shuzi(16);
			  }
              
		      else if(x>34&&x<37&&y==14)                     // 十进制
			  {   * fflag=10;
				  shuzi(10);
			  }

			  else if(x>45&&x<48&&y==14)                     // 八进制
			  {   * fflag=8;
				  shuzi(8);
			  }

			  else if(x>56&&x<59&&y==14)                     // 二进制
			  {   * fflag=2;
				  shuzi(2);
			  }
              
			  else if(x>21&&x<24&&y==16)
			  {   
                  if(* sflag%2==0)
				  {
				     blackground ji(21,16,0,0,115);         //    灰底深绿字
	                 printf(" ■ 上档功能 "); 
				     shangdang();
				  }
				  else if(* sflag%2==1)
				  {
					 blackground ji(21,16,0,0,127);         //    灰底白字
	                 printf(" ■ 上档功能 "); 
				     xiadang();
				  }
                  (* sflag)++;
			  } 
            
               //////////////////////////////////////////////////////////////

			  else if(x>69&&x<76&&y==16)                  //   退格
              {    a[m][n-1]=0;
			       cha[n-1]=0;
				   show(cha,a[m][n-1],n-1);
				   (* j)--;
			  }

              else if(x>69+8&&x<76+8&&y==16)                //   清屏
                   bai();

		      else if(x>69+16&&x<76+16&&y==16)            //   全清
			  {      bai();
					  * j=0;    * i=0;    * f=0;   * z=1;
				       for(m0=0;m0<20;m0++)
					   {  for(n0=0;n0<22;n0++)
							   a[m0][n0]='0';
					      cha[m0]='0';
						  c[m0]='0';
					   }

					       blackground fu(91,20,0,0,135);
	                       printf(" 实部 ");

						   blackground xu(91,22,0,0,135);
	                       printf(" 虚部 ");

						   blackground mo(91,24,0,0,135);
	                       printf("  模  ");
			  }

			  ////////////////////////////////复数运算///////////////////////////////////////////////

			  else if(x>90&&x<97&&y==18)
			  {  (* f)=1;
			     (* j)=0;(* i)=0;

				  for(m0=0;m0<20;m0++)
					   {  for(n0=0;n0<22;n0++)
							   a[m0][n0]='0';
					      cha[m0]='0';
						  c[m0]='0';
					   }
				  blackground z01(88,12,0,0,240);
				  printf("复数运算");
                
				  blackground fu(91,20,0,0,138);
	              printf(" 实部 ");

				  blackground xu(91,22,0,0,138);
	              printf(" 虚部 ");

				  blackground mo(91,24,0,0,138);
	              printf("  模  ");
 
			  }
      
			  /////////////////////////////////数字////////////////////////////////////////////////////


		      else if((* fflag)!=2&&x>54-1&&x<59+1&&y==18)                //  7
              {   if(* z==1)
					{  a[m][n]=7+97;
				       cha[n]=7+97;
				       show(cha,a[m][n],n);
				       (* j)++;
					   
					}
			       else if(* z==0)
				   {   * j=0;    * i=0;
				       for(m0=0;m0<20;m0++)
					   {  for(n0=0;n0<22;n0++)
							   a[m0][n0]='0';
					      cha[m0]='0';
						  c[m0]='0';
					   }

						  a[0][0]=7+97;
				          cha[0]=7+97;
				          show(cha,a[0][0],n);
				          (* j)++;
						  (* z)=1;
				   }
				  
			  }
			  else if((* fflag)==2&&x>54-1&&x<59+1&&y==18) 
			  {
				  MessageBox(NULL,"      “  错误操作  ”                         \n\n        请重新输入                           ","error",MB_OK|MB_ICONWARNING); 
			  }

	          else if((* fflag)!=2&&(* fflag)!=8&&x>61-1&&x<66+1&&y==18)                //  8
              {  
				    if(* z==1)
					{  a[m][n]=8+97;
				       cha[n]=8+97;
				       show(cha,a[m][n],n);
				       (* j)++;
					   
					}
			       else if(* z==0)
				   {   * j=0;    * i=0;
				       for(m0=0;m0<20;m0++)
					   {  for(n0=0;n0<22;n0++)
							   a[m0][n0]='0';
					      cha[m0]='0';
						  c[m0]='0';
					   }

						 a[0][0]=8+97;
				          cha[0]=8+97;
				          show(cha,a[0][0],n);
				          (* j)++;
						  (* z)=1;
				   }

			  }
              else if((((* fflag)==2||(* fflag)==8))&&x>61-1&&x<66+1&&y==18) 
			  {
				  MessageBox(NULL,"      “  错误操作  ”                         \n\n        请重新输入                           ","error",MB_OK|MB_ICONWARNING); 
			  }


			  else if((* fflag)!=2&&(* fflag)!=8&&x>68-1&&x<73+1&&y==18)                //  9
              {   
				    if(* z==1)
					{  a[m][n]=9+97;
				       cha[n]=9+97;
				       show(cha,a[m][n],n);
				       (* j)++;
					   
					}
			       else if(* z==0)
				   {   * j=0;    * i=0;
				       for(m0=0;m0<20;m0++)
					   {  for(n0=0;n0<22;n0++)
							   a[m0][n0]='0';
					      cha[m0]='0';
						  c[m0]='0';
					   }

						  a[0][0]=9+97;
				          cha[0]=9+97;
				          show(cha,a[0][0],n);
				          (* j)++;
						  (* z)=1;

				   }

			  }
              else if(((* fflag)==2||(* fflag)==8)&&x>68-1&&x<73+1&&y==18) 
			  {
				  MessageBox(NULL,"      “  错误操作  ”                         \n\n        请重新输入                           ","error",MB_OK|MB_ICONWARNING); 
			  }

			  else if((* fflag)!=2&&x>54-1&&x<59+1&&y==20)                //  4
              {  
				   if(* z==1)
					{  a[m][n]=4+97;
				       cha[n]=4+97;
				       show(cha,a[m][n],n);
				       (* j)++;
					   
					}
			       else if(* z==0)
				   {   * j=0;    * i=0;
				       for(m0=0;m0<20;m0++)
					   {  for(n0=0;n0<22;n0++)
							   a[m0][n0]='0';
					      cha[m0]='0';
						  c[m0]='0';
					   }

						  a[0][0]=4+97;
				          cha[0]=4+97;
				          show(cha,a[0][0],n);
				          (* j)++;
						  (* z)=1;

				   }

			  }
              else if((* fflag)==2&&x>54-1&&x<59+1&&y==20) 
			  {
				  MessageBox(NULL,"      “  错误操作  ”                         \n\n        请重新输入                           ","error",MB_OK|MB_ICONWARNING); 
			  }

			  else if((* fflag)!=2&&x>61-1&&x<66+1&&y==20)                //  5
              {  
				   if(* z==1)
					{  a[m][n]=5+97;
				       cha[n]=5+97;
				       show(cha,a[m][n],n);
				       (* j)++;
					   
					}
			       else if(* z==0)
				   {   * j=0;    * i=0;
				       for(m0=0;m0<20;m0++)
					   {  for(n0=0;n0<22;n0++)
							   a[m0][n0]='0';
					      cha[m0]='0';
						  c[m0]='0';
					   }

						  a[0][0]=5+97;
				          cha[0]=5+97;
				          show(cha,a[0][0],n);
				          (* j)++;
						  (* z)=1;

				   }

			  }
              else if((* fflag)==2&&x>61-1&&x<66+1&&y==20) 
			  {
				  MessageBox(NULL,"      “  错误操作  ”                         \n\n        请重新输入                           ","error",MB_OK|MB_ICONWARNING);
			  }

			  else if((* fflag)!=2&&x>68-1&&x<73+1&&y==20)                //  6
			  { 
				    if(* z==1)
					{  a[m][n]=6+97;
				       cha[n]=6+97;
				       show(cha,a[m][n],n);
				       (* j)++;
					   
					}
			       else if(* z==0)
				   {   * j=0;    * i=0;
				       for(m0=0;m0<20;m0++)
					   {  for(n0=0;n0<22;n0++)
							   a[m0][n0]='0';
					      cha[m0]='0';
						  c[m0]='0';
					   }

						  a[0][0]=6+97;
				          cha[0]=6+97;
				          show(cha,a[0][0],n);
				          (* j)++;
						  (* z)=1;

				   }

			  }
              else if((* fflag)==2&&x>68-1&&x<73+1&&y==20) 
			  {
				  MessageBox(NULL,"      “  错误操作  ”                         \n\n        请重新输入                           ","error",MB_OK|MB_ICONWARNING);
			  }

			  else if(x>54-1&&x<59+1&&y==22)                //  1
              { 
				   if(* z==1)
					{  a[m][n]=1+97;
				       cha[n]=1+97;
				       show(cha,a[m][n],n);
				       (* j)++;
					   
					}
			       else if(* z==0)
				   {   * j=0;    * i=0;
				       for(m0=0;m0<20;m0++)
					   {  for(n0=0;n0<22;n0++)
							   a[m0][n0]='0';
					      cha[m0]='0';
						  c[m0]='0';
					   }

						  a[0][0]=1+97;
				          cha[0]=1+97;
				          show(cha,a[0][0],n);
				          (* j)++;
						  (* z)=1;

				   }

			  }

			  else if((* fflag)!=2&&x>61-1&&x<66+1&&y==22)                //  2
              { 
				   if(* z==1)
					{  a[m][n]=2+97;
				       cha[n]=2+97;
				       show(cha,a[m][n],n);
				       (* j)++;
					   
					}
			       else if(* z==0)
				   {   * j=0;    * i=0;
				       for(m0=0;m0<20;m0++)
					   {  for(n0=0;n0<22;n0++)
							   a[m0][n0]='0';
					      cha[m0]='0';
						  c[m0]='0';
					   }

						  a[0][0]=2+97;
				          cha[0]=2+97;
				          show(cha,a[0][0],n);
				          (* j)++;
						  (* z)=1;

				   }

			  }
              else if((* fflag)==2&&x>61-1&&x<66+1&&y==22) 
			  {
				  MessageBox(NULL,"      “  错误操作  ”                         \n\n        请重新输入                           ","error",MB_OK|MB_ICONWARNING);
			  }

			  else if((* fflag)!=2&&x>68-1&&x<73+1&&y==22)                //  3
			  { 
				   if(* z==1)
					{  a[m][n]=3+97;
				       cha[n]=3+97;
				       show(cha,a[m][n],n);
				       (* j)++;
					   
					}
			       else if(* z==0)
				   {   * j=0;    * i=0;
				       for(m0=0;m0<20;m0++)
					   {  for(n0=0;n0<22;n0++)
							   a[m0][n0]='0';
					      cha[m0]='0';
						  c[m0]='0';
					   }

						  a[0][0]=3+97;
				          cha[0]=3+97;
				          show(cha,a[0][0],n);
				          (* j)++;
						  (* z)=1;

				   }

			  }
              else if((* fflag)==2&&x>68-1&&x<73+1&&y==22) 
			  {
				  MessageBox(NULL,"      “  错误操作  ”                         \n\n        请重新输入                           ","error",MB_OK|MB_ICONWARNING);
			  }

              else if(x>54-1&&x<59+1&&y==24)                //  0
              { 
				   if(* z==1)
					{  a[m][n]=0+97;
				       cha[n]=0+97;
				       show(cha,a[m][n],n);
				       (* j)++;
					   
					}
			       else if(* z==0)
				   {   * j=0;    * i=0;
				       for(m0=0;m0<20;m0++)
					   {  for(n0=0;n0<22;n0++)
							   a[m0][n0]='0';
					      cha[m0]='0';
						  c[m0]='0';
					   }

						 a[0][0]=0+97;
				          cha[0]=0+97;
				          show(cha,a[0][0],n);
				          (* j)++;
						  (* z)=1;

				   }

			  }

			  else if((* fflag)==16&&x>54-1&&x<59+1&&y==26)                //  A
              { 
				   if(* z==1)
					{  a[m][n]='A';
				       cha[n]='A';
				       show(cha,a[m][n],n);
					   b[m]=10;
				       (* j)++;
					//   printf("%c",cha[n]-97);
					   
					}
			       else if(* z==0)
				   {   * j=0;    * i=0;
				       for(m0=0;m0<20;m0++)
					   {  for(n0=0;n0<22;n0++)
							   a[m0][n0]='0';
					      cha[m0]='0';
						  c[m0]='0';
					   }

						 a[0][0]='A';
				          cha[0]='A';
				          show(cha,a[0][0],n);
				          (* j)++;
						  (* z)=1;

				   }

			  }

			  else if((* fflag)==16&&x>54-1+7&&x<59+1+7&&y==26)                //  B
              { 
				   if(* z==1)
					{  a[m][n]='B';
				       cha[n]='B';
				       show(cha,a[m][n],n);
					   b[m]=11;
				       (* j)++;
					   
					}
			       else if(* z==0)
				   {   * j=0;    * i=0;
				       for(m0=0;m0<20;m0++)
					   {  for(n0=0;n0<22;n0++)
							   a[m0][n0]='0';
					      cha[m0]='0';
						  c[m0]='0';
					   }

						 a[0][0]='B';
				          cha[0]='B';
				          show(cha,a[0][0],n);
				          (* j)++;
						  (* z)=1;

				   }

			  }

			  else if((* fflag)==16&&x>67&&x<74&&y==26)                //  C
              { 
				   if(* z==1)
					{  a[m][n]='C';
				       cha[n]='C';
				       show(cha,a[m][n],n);
					   b[m]=12;
				       (* j)++;
					   
					}
			       else if(* z==0)
				   {   * j=0;    * i=0;
				       for(m0=0;m0<20;m0++)
					   {  for(n0=0;n0<22;n0++)
							   a[m0][n0]='0';
					      cha[m0]='0';
						  c[m0]='0';
					   }

						 a[0][0]='C';
				          cha[0]='C';
				          show(cha,a[0][0],n);
				          (* j)++;
						  (* z)=1;

				   }

			  }

			  else if((* fflag)==16&&x>67+7&&x<74+7&&y==26)                //  D
              { 
				   if(* z==1)
					{  a[m][n]='D';
				       cha[n]='D';
				       show(cha,a[m][n],n);
					   b[m]=13;
				       (* j)++;
					   
					}
			       else if(* z==0)
				   {   * j=0;    * i=0;
				       for(m0=0;m0<20;m0++)
					   {  for(n0=0;n0<22;n0++)
							   a[m0][n0]='0';
					      cha[m0]='0';
						  c[m0]='0';
					   }

						 a[0][0]='D';
				          cha[0]='D';
				          show(cha,a[0][0],n);
				          (* j)++;
						  (* z)=1;

				   }

			  }

			  else if((* fflag)==16&&x>67+7+8&&x<74+7+8&&y==26)                //  E
              { 
				   if(* z==1)
					{  a[m][n]='E';
				       cha[n]='E';
				       show(cha,a[m][n],n);
					   b[m]=14;
				       (* j)++;
					   
					}
			       else if(* z==0)
				   {   * j=0;    * i=0;
				       for(m0=0;m0<20;m0++)
					   {  for(n0=0;n0<22;n0++)
							   a[m0][n0]='0';
					      cha[m0]='0';
						  c[m0]='0';
					   }

						 a[0][0]='E';
				          cha[0]='E';
				          show(cha,a[0][0],n);
				          (* j)++;
						  (* z)=1;

				   }

			  }

			  else if((* fflag)==16&&x>67+7+8+8&&x<74+7+8+8&&y==26)                //  F
              { 
				   if(* z==1)
					{  a[m][n]='F';
				       cha[n]='F';
				       show(cha,a[m][n],n);
					   b[m]=15;
				       (* j)++;
					   
					}
			       else if(* z==0)
				   {   * j=0;    * i=0;
				       for(m0=0;m0<20;m0++)
					   {  for(n0=0;n0<22;n0++)
							   a[m0][n0]='0';
					      cha[m0]='0';
						  c[m0]='0';
					   }

						 a[0][0]='F';
				          cha[0]='F';
				          show(cha,a[0][0],n);
				          (* j)++;
						  (* z)=1;

				   }

			  }
          
              else if((* fflag)!=16&&y==26&&((x>53&&x<60)||(x>60&&x<67)||(x>67&&x<74)||(x>74&&x<81)||(x>82&&x<89)||(x>90&&x<97))) 
			  {
				  MessageBox(NULL,"      “  错误操作  ”                         \n\n        请重新输入                           ","error",MB_OK|MB_ICONWARNING); 
			  }

	          /////////////////////////////////////////////////////////////////////
              
			  else if(x>21&&x<29&&y==18)                   // PI
              {    
				   bai();
				   blackground zp(84,12,0,0,240);
				   printf("3.141592654");

				   if(* z==1)
					{  
					   (* i)++;   (* j)=0;
					   m=(* i);
					   n=(* j);
					   a[m][0]='P';
					}
			       else if(* z==0)
				   {   
					   * j=0;    * i=0;
				       for(m0=0;m0<20;m0++)
					   {  for(n0=0;n0<22;n0++)
							   a[m0][n0]='0';
					   }
						 a[0][0]='P';
				   }

			  }
			   else if(x>21+8&&x<29+8&&y==18)                   //e 
              {    bai();
				   blackground zp(84,12,0,0,240);
				   printf("2.718281828");

				   if(* z==1)
					{  
					   (* i)++;   (* j)=0;
					   m=(* i);
					   n=(* j);
					   a[m][0]='I';
					}
			       else if(* z==0)
				   {   
					   * j=0;    * i=0;
				       for(m0=0;m0<20;m0++)
					   {  for(n0=0;n0<22;n0++)
							   a[m0][n0]='0';
					   }
						 a[0][0]='I';
				   }
			  }

              ///////////////////////////////////////////////////////////////////////
     		  else if(x>67&&x<74&&y==24)                   //  浮点数
			  {     a[m][n]='.';
			        cha[n]='.';
			        show(cha,a[m][n],n);
			        (* j)++;
			  }

              //////////////////////运算符//////////////////////////////////////////

              else if(x>74&&x<81&&y==18)                   // 除
			  {    //(* i)++;    (* j)=0;
			       c[m]='/';
				   bai();
				   blackground z0(94,12,0,0,240);
				   printf("/");
				   (* i)++;    (* j)=0;
				   (* z)=1;
			  }
			  else if(x>74&&x<81&&y==20)                   // 乘
			  {    //(* i)++;   (* j)=0;
			       c[m]='*';
				   bai();
				   blackground z0(94,12,0,0,240);
				   printf("*");
				   (* i)++;    (* j)=0;
				   (* z)=1;
			  }
			  else if(x>74&&x<81&&y==22)                   // 减
              {    //(* i)++;   (* j)=0;
			       c[m]='-';
				   bai();
				   blackground z0(94,12,0,0,240);
				   printf("-");
				   (* i)++;    (* j)=0;
				   (* z)=1;
			  }
			  else if(x>74&&x<81&&y==24)                   // 加
              {    //(* i)++;   (* j)=0;
			       c[m]='+';
				   bai();
				   blackground z0(94,12,0,0,240);
				   printf("+");
				   (* i)++;    (* j)=0;
				   (* z)=1;
			  }
			  else if(x>83&&x<91&&y==24)                   // ==
              {  
				 // blackground ji(11,0,0,0,127); 
				 //  printf("%c,%c,%c,%c,%c",c[0],c[1],c[2],c[3],c[4]);
			     
				  zhuanhuan(* fflag,a,b,m);
				 /* blackground ji(11,0,0,0,127); 
			      printf("b=%f,%f,%f,%f,%f,%f",b[0],b[1],b[2],b[3],b[4],b[5]);
				  printf("%c,%c,%c,%c,%c",c[0],c[1],c[2],c[3],c[4]);*/
			      if(* f==0)
				      yunsuan(* fflag,b,c,m);
				  if(* f==1)
					  fushuyunsuan(* fflag,b,c,m);
				  (* z)=0;
			  }
			  else if(x>83&&x<91&&y==18)                   // 取余
              {    (* i)++;   (* j)=0;
			       c[m]='%';
				   bai();
				   blackground z0(94,12,0,0,240);
				   printf("%");
			  }
			  else if(x>83&&x<91&&y==20)                   // 取整
              {    (* i)++;   (* j)=0;
			       c[m]='1';
				   bai();
				   blackground z0(94,12,0,0,240);
				   printf("/");
			  }

//////////////////////////////////模块1/////////////////////////////////////////////////
			  
			  else if(x>21+8&&x<29+8&&y==22)                   // x^y
              {    (* i)++;   (* j)=0;
			       c[m]='5';
				   bai();
				   blackground z0(92,12,0,0,240);
				   printf("x^y");
			  }
			  else if(x>21+8&&x<29+8&&y==24)                   // x^3
              {    (* i)++;   (* j)=0;
			       c[m]='6';
				   bai();
				   blackground z0(92,12,0,0,240);
				   printf("x^3");
			  }
			  else if(x>21+8&&x<29+8&&y==26)                   // x^2
              {    (* i)++;   (* j)=0;
			       c[m]='7';
				   bai();
				   blackground z0(92,12,0,0,240);
				   printf("x^2");
				  // printf("m=%d,c=%c,",m,c[m]);
			  }
			  else if(x>21+16&&x<29+16&&y==24)                   // n!
              {   // (* i)++;   (* j)=0;
			       c[m]='o';
				   bai();
				   blackground z0(94,12,0,0,240);
				   printf("n!");
				  // printf("c=%c,",c[m]);
				   (* i)++;   (* j)=0;
			  }
			  else if(x>21+16&&x<29+16&&y==26)                   // 1/x
              {    (* i)++;   (* j)=0;
			       c[m]='p';
				   bai();
				   blackground z0(94,12,0,0,240);
				   printf("1/x");
				  // printf("c=%c,",c[m]);
			  }

///////////////////////////////////下档///////////////////////////////////////			  

			  else if((* sflag)%2==0&&x>21&&x<29&&y==22)                   // sin
              {    (* i)++;   (* j)=0;
			       c[m]='2';
				   bai();
				   blackground z0(92,12,0,0,240);
				   printf("sin");
			  }
			  else if((* sflag)%2==0&&x>21&&x<29&&y==24)                   // cos
              {    (* i)++;   (* j)=0;
			       c[m]='3';
				   bai();
				   blackground z0(92,12,0,0,240);
				   printf("cos");
			  }
			  else if((* sflag)%2==0&&x>21&&x<29&&y==26)                   // tan
              {    (* i)++;   (* j)=0;
			       c[m]='4';
				   bai();
				   blackground z0(92,12,0,0,240);
				   printf("tan");
			  }

			  else if((* sflag)%2==0&&x>21+16&&x<29+16&&y==20)                   // ln
              {    (* i)++;   (* j)=0;
			       c[m]='8';
				   bai();
				   blackground z0(93,12,0,0,240);
				   printf("ln");
			  }
			  else if((* sflag)%2==0&&x>21+16&&x<29+16&&y==22)                   // log
              {    (* i)++;   (* j)=0;
			       c[m]='9';
				   bai();
				   blackground z0(92,12,0,0,240);
				   printf("log");
			  }


//////////////////////////////////上档////////////////////////////////////

              else if((* sflag)%2==1&&x>21&&x<29&&y==22)                   // asin
              {    (* i)++;   (* j)=0;
			       c[m]='q';
				   bai();
				   blackground z0(91,12,0,0,240);
				   printf("asin");
			  }
			  else if((* sflag)%2==1&&x>21&&x<29&&y==24)                   // acos
              {    (* i)++;   (* j)=0;
			       c[m]='r';
				   bai();
				   blackground z0(91,12,0,0,240);
				   printf("acos");
			  }
			  else if((* sflag)%2==1&&x>21&&x<29&&y==26)                   // atan
              {    (* i)++;   (* j)=0;
			       c[m]='s';
				   bai();
				   blackground z0(91,12,0,0,240);
				   printf("atan");
			  }

			  else if((* sflag)%2==1&&x>21+16&&x<29+16&&y==20)                   // exp
              {    (* i)++;   (* j)=0;
			       c[m]='t';
				   bai();
				   blackground z0(92,12,0,0,240);
				   printf("exp");
			  }
			  else if((* sflag)%2==1&&x>21+16&&x<29+16&&y==22)                   // expd
              {    (* i)++;   (* j)=0;
			       c[m]='u';
				   bai();
				   blackground z0(91,12,0,0,240);
				   printf("expd");
			  }
         
//
///////////////////////////////////复数运算///////////////////////////////////////////////////////
              else if(x>90&&x<97&&y==20)                                      //实数
			  {    (* i)++;   (* j)=0;
			       c[m]='v';
				   bai();
				   blackground z0(91,12,0,0,240);
				   printf("实数");
				 //  printf("m=%d,%c",m,c[m]);
			  }
			  else if(x>90&&x<97&&y==22)                                      //虚数
			  {    (* i)++;   (* j)=0;
			       c[m]='w';
				   bai();
				   blackground z0(91,12,0,0,240);
				   printf("虚数");
				  // printf("m=%d,%c",m,c[m]);
			  }

///////////////////////////////////错误//////////////////////////////////
			 /* else if(x>54-1&&x<59+1&&(y==18||y==20||y==22||y==24))
			  {
				  MessageBox(NULL,"   错误操作","error",MB_OK|MB_ICONWARNING); 
			  }
			  else if((* fflag)!=8&&(x>61-1&&x<66+1)&&(y==18||y==20||y==22||y==24))
			  {
				  MessageBox(NULL,"   错误操作","error",MB_OK|MB_ICONWARNING); 
			  }
			  else if((* fflag)!=8&&x>68-1&&x<73+1&&y==18)
			  {
				  MessageBox(NULL,"   错误操作","error",MB_OK|MB_ICONWARNING); 
			  }
			  else if()
			  {
				  MessageBox(NULL,"   错误操作","error",MB_OK|MB_ICONWARNING); 
			  }
			  else if()
			  {
				  MessageBox(NULL,"   错误操作","error",MB_OK|MB_ICONWARNING); 
			  }
			  else if()
			  {
				  MessageBox(NULL,"   错误操作","error",MB_OK|MB_ICONWARNING); 
			  }
			  else if()
			  {
				  MessageBox(NULL,"   错误操作","error",MB_OK|MB_ICONWARNING); 
			  }*/


	 }


}

void main()
{   
	int m=0;int n=0;               // 数字保存的标志
	char a[20][22];
	int sflag=0;                   // 上档/下档选择的标志
    int fflag=10;                  //  多少进制的标志
    float b[20]={0};
	char c[20];                   // 存储数学运算符
    char cha[20];
	int shuzi=1;                  // 作为可以继续运算的标志
	int fs=0;                     //  复数运算的标志

	jiemian(20);
    while(1)
	{
	   click(a,b,c,cha,& sflag,&m,&n,& fflag,&shuzi,&fs);
    }
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|120);
    COORD pos1;
	      pos1.X=21;
		  pos1.Y=50;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos1);

}
