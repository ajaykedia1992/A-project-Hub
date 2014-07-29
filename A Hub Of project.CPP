#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<process.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
const int max=10;
int large(int [],int);
float cube(float);
void copystring(char str1[],char str2[]);
struct student
{

	int  roll;
	char name[20];
	float marks;

}a[5];
void enter()
{
    clrscr();
	 for(int i=0;i<5;i++)
	{
	cout<<"\nDetails of student no."<<i+1;
	cout<<"\nenter roll=";
	cin>>a[i].roll;
	cout<<"\nenter name=";
	gets(a[i].name);
	cout<<"\nenter total marks=";
	cin>>a[i].marks;
	}

}
void show()
{
	clrscr();
	for(int i=0;i<5;i++)
	{
	   cout<<"\nstudent no."<<i+1;
		cout<<"\nroll="<<a[i].roll;
		cout<<"\nname="<<a[i].name;
		cout<<"\nmarks="<<a[i].marks;
	}
}
void search()
{
	int r;
	cout<<"\nenter the roll no. which you want to search";
	cin>>r;
	for(int i=0;i<5;i++)
	{
		if(a[i].roll==r)
		{
		cout<<"\nroll="<<a[i].roll;
		cout<<"\nname="<<a[i].name;
		cout<<"\nmarks="<<a[i].marks;
		}
	}

}
void print(int array[])
{
	clrscr();
	int i,j,k,count=0;
	j=0;
	for(i=0;i<7;i++)
	{
		k=0;
		for(;j<7;j++)
		{
			while(k<count)
			{
				cout<<"\t";
				k++;
			}
			cout<<array[j]<<"\t";
		}
		count++;
		j=i+1;
		cout<<"\n";
	}
}
void demo(int a[])
{
	int b[7][7];
	int i,j;
	for(i=0;i<7;i++)
	{
		for(j=0;j<7;j++)
		{
			if(j<=i)
			b[i][j]=a[j];
			else
			b[i][j]=0;

		}
	}
	for(i=0;i<7;i++)
	{
		for(j=0;j<7;j++)
		{
			cout<<b[i][j]<<"\t";
		}
	cout<<endl;
	}
}
void capletter(char a[])
{
	int flag=1;
		for(int i=0;a[i]!='\0';i++)
		{
			if(isupper(a[i]))
			{
				flag=0;
				cout<<a[i]<<"is already in uppercase\n";

			}
			else if(islower(a[i]))
			{
				flag=1;
				a[i]=toupper(a[i]);

			}
	}
	if((flag==1)||(a[i]=='\0'))
	{
		cout<<"\nuppercase string is:\n";
		puts(a);
	}
}
struct address
{
	int lane_no;
	char colony[20];
	char district[20];
};
struct employee
{
	int emp_ID;
	char emp_name[20];
	float salary;
	address add;
};
void main()

{
	clrscr();
	char y='y';
	 int ch;
	int i,per=0;
	long j;
	gotoxy(10,11);
	textcolor(RED);
	cprintf("Program is running,Please wait............");
	for(i=10;i<60;i++)
	{
		gotoxy(i,12);
		textcolor(YELLOW);
		cprintf("-");
		gotoxy(i,14);
		textcolor(YELLOW);

		cprintf("-");
	}
	for(i=10;i<60;i++)
	{
		for(j=0;j<10000000;j++)
		{


		}
	  gotoxy(i,13);
	  textcolor(GREEN);
	  cprintf("|");
	  per+=2;
	  gotoxy(10,17);
	  cout<<per;
	  textcolor(YELLOW);
	  cprintf("%Downloaded");
	}
	clrscr();
		char menu='y',B='a';
	while(menu=='y')
	{
	clrscr();
	gotoxy(15,12);
	textcolor(RED);
	cprintf("WELCOME TO ALL IN MY PROJECT");
	gotoxy(15,20);
	textcolor(YELLOW);
	cprintf("are you ready to see my project....... press  a......:");
	cin>>B;
	char choice3;
	if((B=='A')||(B=='a'))
	{
	    clrscr();
		  cout<<"In which file you want to enter......................\n";
		  cout<<"For file A................................Press......A\n"
		  <<"For File B....................................Press......B\n"
		  <<"For file C.....................................Press......C\n"
		  <<"For file D....................................Press......D\n"
		  <<"enter your choice....................................:";
		  cin>>choice3;
		  if((choice3=='A')||(choice3=='a'))
		  {
			clrscr();
			goto A;
		  }
		  else if((choice3=='B')||(choice3=='b'))
		  {
			clrscr();
			goto B;
		  }
		  else if((choice3=='C')||(choice3=='c'))
		  {

			clrscr();
			goto C;
		  }
		  else if((choice3=='D')||(choice3=='d'))
		  {
			clrscr();
			goto D;
		  }
		  else
		  {
			goto F;
		  }


	  A:
	  {
	  textcolor(RED);
	  cprintf("file no ..................A...........................");
	  cout<<"\n\n1.To find factorial of entered number\n"
	  <<"2.sum of natural no.\n"
	  <<"3.To generate ASCII code of a given letter\n"
	  <<"4.To show some of even & odd integers\n"
	  <<"5.To arrange the array integer in a tringular and other styles\n"
	  <<"6.put the single array value in double dimensional array\n"
	  <<"7.to generate the cube of given number\n"
	  <<"8.to generate no. of years,weeks,days from your entered totaldays\n"
	  <<"9.to generate next character of entered character\n"
	  <<"10.to generate no. of teams, no. of players and leftovers\n\n\n";
		cout<<"do you want to enter your choice(y/n)............\n"
		<<"for yes.............................press y..........\n"
		<<"for no..............................press n..........\n";
		cin>>y;
		if(y=='y')
		goto E;
		else
		goto F;
	  }

	  B:
	  {
	  textcolor(RED);
	  cprintf("File no...................B............................");
	  cout<<"\n\n11.temperature interchange\n"
	  <<"12.verifying whether you enter a digit or an alphabet\n"
	  <<"13.ax^2+bx+c form.........real,imaginary or unequal roots....\n"
	  <<"14.to find the area of triangle,circle,square & rectangle........\n"
	  <<"15.change entered string in uppercase.............\n"
	  <<"16.copy the smaller string into bigger string\n"
	  <<"17.to find that string is palindrome or not.......\n"
	  <<"18.Replace every space in a string with a hyphen.........\n"
	  <<"19.reverse the entered string............................\n"
	  <<"20.find a substring of a given string..................\n";
			cout<<"do you want to enter your choice(y/n)............\n"
			<<"for yes.........................press y............\n"
			<<"for no..........................press n.............\n";
		cin>>y;
		if(y=='y')
		goto E;
		else
		goto F;

	  }
	  C:
	  {
	  textcolor(RED);
	  cprintf("File no........................C...........................");
	  cout<<"\n\n21.to count number of words present in a line...........\n"
	  <<"22.restoring the details of the students in array........\n"
	  <<"23.to restore the introduction of working employee.......\n"
	  <<"24.to print largest element of the array using a finction..\n"
	  <<"25.to perform arithmetic calculation using switch..........\n"
	  <<"26.to print the table of entered number....................\n"
	  <<"27.enter the matrix & sum of row & column side.............\n"
	  <<"28.tell whether no. is prime or not........................\n"
	  <<"29.find out whether year leap year or not..................\n"
	  <<"30.print the sum of elements of above & below the diagonal..\n";
		cout<<"do you want to enter your choice(y/n)............\n"
		<<"for yes..............................press y........\n"
		<<"for no...............................press no.......\n";
		cin>>y;
		if(y=='y')
		goto E;
		else
		goto F;


	  }
	  D:
	  {
	  textcolor(RED);
	  cprintf("File no........................D............................");
	  cout<<"\n\n31.to print the largest & smallest number from a series of elements\n"
	  <<"32.to swap the number............................\n"
	  <<"33.A number is palindrome or not............................\n"
	  <<"34.to add two matrix........................................\n"
	  <<"35. to transpose two matrixes...............................\n"
	  <<"36.to print total vowel of the enter line or word...........\n"
	  <<"37.to concatenates to string or line.........................\n"
	  <<"38.to multiply two matrix....................................\n"
	  <<"39.Fibonic series............................................\n"
	  <<"40.to find the position of the character in the string........\n";
			cout<<"do you want to enter your choice(y/n)............\n"
		<<"for yes..............................press y........\n"
		<<"for no...............................press no.......\n";
		cin>>y;
		if(y=='y')
		goto E;
		else
		goto F;

	  }
	  E:
	  {

	  cout<<"\n\nenter your choice";
	  cin>>ch;
	  switch(ch)
	  {
	  case 1:
		clrscr();
		unsigned long p,num,fact; //because the range of unsigned int is
					//large thus fact would be storing
						//large values.
		char ch='y';
		do
		{
		clrscr();
		fact=1;
		cout<<"\nenter integer:";
		cin>>num;
		p=num;

		while(num)
		{
			fact=fact*num;
			num--;
		}   //while loop closed
		cout<<"\nthe factorial of"<<p<<"is"<<fact<<"\n";
		cout<<"\ndo you want to continue(y/n):";
		cin>>ch;
		}while(ch=='y');//do-while loop closed
		       break;
		case 2:

			clrscr();
		int sum,n;
		char a='y';
		while(a=='y')
		{
		   clrscr();
		cout<<"how many natural numbers?=";
		cin>>n;
		for(i=1,sum=0;i<=n;i++)
		{
			cout<<"\n"<<i;
			sum+=i;
		}
		cout<<"\n"<<"the sum of first"<<n
		<<"natural numbers is:"<<sum
		<<"\n";
		cout<<"\n do you want to continue(y/n):";
		cin>>a;
		 }  //while loop of second program is closed
		 break;

		 case 3:
				clrscr();
		char ch1;
		cout<<"enter a letter=";
		cin>>ch;
		num=ch;
		cout<<"\n the ASCII code of "<<ch1<<"is="<<num;
		break;

		case 4:
				clrscr();
	int n1,sum_even,sum_odd,ctr;
	char ch2='y';
	while(ch2=='y')
	{
	  clrscr();
	  ctr=1,sum_even=0,sum_odd=0;
		cout<<"\n upto which natural number ?";
		cin>>n1;
		while(ctr<=n1)
		{
			if(ctr%2==0)       //number is even
			sum_even+=ctr;
			else
			sum_odd+=ctr;
			ctr++;               //increment the counter
		}      //end of while
		cout<<"\n\n\n The sum of the even integer is"<<sum_even;
		cout<<"\n\n\nthe sum of the odd integers is"<<sum_odd;
		cout<<"\n\n\n do you want to continue(y/n):";
		cin>>ch2;
	}
	   break;

	   case 5:
		clrscr();
		int A[7];
		int ss;
		while(y=='y')
		{
		cout<<"\n1.a tringular shape.................\n"
		<<"2.an inverse tringular shape..............\n"
		<<"3.inverse pyramidal shape.................\n"
		<<"enter your choice.........................";
		cin>>ss;
		switch(ss)
		{
		case 1:
		cout<<"\nenter the elements in the array:\n";
		for(int i=0;i<7;i++)
		{
			cin>>A[i];
			cout<<"\t";

		}
		print(A);
		break;
		case 2:
			clrscr();
			int count5=0,size=7;
			for(i=0;i<4;i++)
			{
			      int	k=0;
			while(k<count5)
			{
			cout<<"\t";
				k++;
			}
			for(j=0;j<size;j++)
			{
			cout<<"&"<<"\t";
			}
			count5++;
			size-=2;
			cout<<endl;
			}  break;
		     case 3: 	clrscr();
			int j,k,count=0,size1=7;
			for(i=0;i<4;i++)
			{
				k=0;
				while(k<count)
				{
					cout<<"\t";
					k++;
				}
				for(j=0;j<size1;j++)
				{
					cout<<"&"<<"\t";
				}
				count++;
				size1-=2;
				cout<<endl;
			}       break;


		     default:
		     cout<<"\nInvalid choice......................!!!!!!!!\n";
		}//switch case of case 5
		cout<<"\ndo you want to continue(y/n)...........\n";
		cin>>y;
	       }
		break;

		  case 6:
			clrscr();
			int ajay[7];
			cout<<"enter the elements in array:";
			for(i=0;i<7;i++)
			{
			cin>>ajay[i];
			cout<<"\t";

			}
			demo(ajay);
			break;

		case 7:
			     clrscr();
		float num1;
		cout<<"enter your number=";
		cin>>num1;
		cout<<"\n"<<"The cube of"<<num1<<"is="
		<<cube(num1)<<"\n";
		break;

		case 8:
			       clrscr();
		    int totdays,years,weeks,days,num2;
		    cout<<"enter total no. of days=";
		    cin>>totdays;
		    years=totdays/365;
		 num2=totdays%365;
		    weeks=num2/7;
		    days=num2%7;
		    cout<<endl;
		    cout<<"years="<<years<<"\n"
		    <<"weeks="<<weeks<<"\n"
		  <<"Days="<<days<<"\n";
		     break;

		      case 9:
		     clrscr();
		char ch3;
		cout<<"enter one character b/w A and V=";
		cin>>ch3;
		cout<<"\n the next four characters are:";
		cout<<"\n"<<(char)(ch3+1)<<"\n"
		<<(char)(ch3+2)
		<<"\n"<<(char)(ch3+3)<<"\n"
		<<(char)(ch3+4);
		break;

		case 10:
		clrscr();
		int no_of_players,no_of_team,leftovers;
		cout<<"\nenter the no. of players=";
		cin>>no_of_players;
		no_of_team=no_of_players/5;
		leftovers=no_of_players%5;
		cout<<"\nno. of team:"<<no_of_team
		<<"\nno of leftovers:"<<leftovers;

		break;
		 case 11:
			clrscr();
		int choice;
		char ch4='y';
		double temp,conv_temp;
		do
		{
		cout<<"temperature conversion menu\n";
		cout<<"1.fahrenheit to celsius\n";
		cout<<"2.celsius to fahrenheit\n";
		cout<<"enter your choice\n";
		cin>>choice;

		if(choice==1)
		{
			cout<<"\nenter temperature in fahrenheit\n";
			cin>>temp;
			conv_temp=(temp-32)/1.8;
			cout<<"The temperature in celsius is"<<conv_temp<<"\n";

		}
		else
		{
			cout<<"\n"<<"enter temperature in celsius=";
			cin>>temp;
			conv_temp=(1.8*temp)+32;
			cout<<"\nthe temperature in fahrenheit is="<<conv_temp<<"\n";

		}
		cout<<"do you want to continue(y/n)";
		cin>>ch4;
		}while(ch4=='y');
		       break;
		case 12:
				clrscr();
	char ch5,menu2='y';
	do
	{
	cout<<"enter a character :";
	cin>>ch5;
	if(((ch5>='A')&&(ch5<='Z'))||((ch5>='a')&&(ch5<='z')))
	{
		cout<<"you entered an alphabet"<<"\n";
	}
		else
		 if(ch5>='0'&&ch5<='9')
		     {
			cout<<"you entered a digit\n";
		     }
				else
				{
				cout<<"you entered a character other than "
				<<"alphabets and digits\n";
				}
	       cout<<"\n"<<"do you want to continue(y/n)";
		cin>>menu2;
		 }while(menu2=='y');

		break;

		case 13:
			clrscr();
			float ab,b,c,root1,root2,delta;
			char menu3='y';
			while(menu3=='y')
			{
			cout<<"\nenter three no. a,b,& c of"
			<<"ax^2+bx+c:\n";
			cin>>ab>>b>>c;
			if(!ab)				//if a is zero
			{
			cout<<"value of \'a\'should not be zero"
			<<"\n Aborting !!!!!!!!\n";


			}
			else
			{
				delta=b*b-4*ab*c;		//begining of else's body
				if(delta>0)
				{
				root1=(-b+sqrt(delta))/(2*ab);
				root2=(-b-sqrt(delta))/(2*ab);
				cout<<"roots are REAL and UNEQUAL\n";
				cout<<"root1="<<root1;
				cout<<"\n"<<"root2="<<root2<<endl;

				}

				else if(delta==0)
				{
				root1=-b/(2*ab);
				cout<<"Roots are REAL and EQUAL \n";
				cout<<"root1="<<root1;
				cout<<"\nroot2="<<root2<<"\n";

				}
				else
				{
				cout<<"\n roots are COMPLEX and IMAGINARY\n";

				}
			 }	     //end of else's body
			 cout<<"\n do you want to continue(y/n)=";
			 cin>>menu3;
			}
			break;

		case 14:

			clrscr();
		float area,rad,len,bre,r,b2,c2,s;
		int t;

		  do
		  {
		   clrscr();
		cout<<"\n"<<"Area menu"<<"\n";
		cout<<"1.for circle\n"
		<<"2.for rectangle\n"
		<<"3.for triangle\n"
		<<"4.for square\n"
		<<"5.for exit\n"
		<<"enter your choice=";
		cin>>t;
		cout<<"\n";
		switch(t)
		{
			case 1:
			       clrscr();
				cout<<"enter radius of the circle:";
				cin>>rad;
				area=3.14*rad*rad;
				cout<<"\n the area of the circle is"<<area<<"\n";
				break;

			case 2:

				clrscr();
				cout<<"enter length and bredth of rectangle:\n";
				cout<<"\nlength=";
				cin>>len;
				cout<<"\nbredth=";
				cin>>bre;
				area=len*bre;
				cout<<"\nthe area of the rectangle is"<<area<<"\n";
				break;


			 case 3:
				clrscr();
				cout<<"enter three sides of the triangle:\n";
				cout<<"first side=";
				cin>>r;
				cout<<"\n second side=";
				cin>>b2;
				cout<<"\nthird side=";
				cin>>c2;
				s=(r+b2+c2)/2;
				area=sqrt(s*(s-r)*(s-b2)*(s-c2));
				cout<<"\n the area of the triangle is"<<area<<"\n";
				break;


			case 4:

				cout<<"enter the side of square";
				cin>>r;
				area=r*r;
				cout<<"\nthe area of the square is"<<area<<"\n";
				break;
			case 5:

				break;

			default:
				clrscr();
				cout<<"\ninvalid choice!!!!!!!!!!!!!!";

			}
		cout<<"\n\ndo you want to continue(y/n)";
		cin>>menu;
	       }while(menu=='y');
		     break;

		   case 15:
			clrscr();
			char str[25];
			cout<<"\nEnter a string(max 25 characters)\n\n";
			gets(str);
			capletter(str);
			break;

			case 16:

				clrscr();
				char strn1[25],strn2[25];
				cout<<"Enter first string(max. 25 letters):\n";
				gets(strn1);
				cout<<"enter second string(max. 25 letters)\n";
				gets(strn2);
				copystring(strn1,strn2);
				break;


			case 17:

					clrscr();
				char string[80];
				cout<<"Enter string(max.79 characters)\n";
				gets(string);
				//loop to find the length of the string
				for(int len5=0;string[len5]!='\0';len5++);
				int flag=1;
				for(i=0,j=len5-1;i<len5/2;i++,j--)
				{
					if(string[i]!=string[j])
					{
					flag=0;
					break;
					}

				}
				if(flag)
				cout<<"It is a palindrome.\n";
				else
				cout<<"It is not a palindrome.\n";
				break;

		   case 18:
			clrscr();
			char string1[80];
			cout<<"Enter string(max79 characters)\n";
			gets(string1);
			for(i=0;string1[i]!='\0';i++)
			{
				if(string1[i]==' ')
				string1[i]='-';
			}
			cout<<"The changed string is\n";
			puts(string1);
			break;

		   case 19:
				clrscr();
			       int k=0;
				char q[80],word[80];
				cout<<"Enter any string(max.80 chars)"<<endl;
				gets(q);
				strcat(q," ");           //concat a space at the end of string
		       for(i=0;q[i]!='\0';i++)
			{
				if(q[i]!=' ')
				{
				word[k]=q[i];
				k=k+1;
				}
				else
				{
					while(k>0)
					cout<<word[--k];
					cout<<q[i];
				}
			}
				break;

		   case 20:
					clrscr();
			char mainstr[50],substr[50];
			int pos,x1,count,m,l;
			cout<<"Enter the main string(max 49 characters)\n";
			gets(mainstr);
			l=strlen(mainstr);
			cout<<"\nEnter starting position of substring\n";
			cin>>pos;
			if(pos>l)
			{
				cout<<"\nStarting position exceeds the total"
				<<"length of the string!!!";
				exit(0);
			}
			cout<<"\nThe number of characters in substring?\n";
			cin>>count;
			if(pos<=0)
			{
				cout<<"\n\nExtracted string is EMPTY\!!!!!\n";
				exit(0);
			}
			else if(((pos+count)-1)>l)
			{
				cout<<"\n\nString to be extracted exceeds length\n";
				m=(l-pos);
			}
			else
			{
				m=count;
				cout<<"\nnum"<<m;
			}
			j=0;
			for(i=--pos;i<=(pos+m);++i)
			{
				substr[j]=mainstr[i];
				j++;
			}
			cout<<"\nSubstring is\n";
			cout.write(substr,j);
			      break;

		   case 21:
				clrscr();
			char z[80];
			cout<<"\nEnter any string(max.80):";
			gets(z);
			void wordnum(char a[]);
			wordnum(z);
			break;


		   case 22:
							clrscr();
				char choice1='y';
					int x;
				do
				{
				cout<<"\n1.to enter the record..................press......1";
				cout<<"\n2.to show the record...................press......2";
				cout<<"\n3.to search the record.................press......3";
				cout<<"\n4.to exit..............................press......4";
				cout<<"\nEnter your choice..................................:";
				cin>>x;
				switch(x)
				{
				   case 1:
					enter();
					break;
				   case 2:
					 show();
					break;
				   case 3:
					clrscr();
					 search();
					break;
				   case 4:
					 break;
				  default :
					cout<<"\nInvalid choice!!!!!!!!!!!!!!!";

				}
				cout<<"\ndo you want  to enter more(y/n)";
				cin>>choice1;
			}while(choice1=='y');
				break;


		   case 23:
			clrscr();
			employee e;
			cout<<"enter employee ID\n";
			cin>>e.emp_ID;
			cout<<"enter employee name\n";
			gets(e.emp_name);
			cout<<"enter salary\n";
			cin>>e.salary;
			cout<<"enter lane no.\n";
			cin>>e.add.lane_no;
			cout<<"enter colony\n";
			gets(e.add.colony);
			cout<<"enter district\n";
			gets(e.add.district);
			cout<<"the original records entered by you are\n";
			cout<<"\nEmployee ID="<<e.emp_ID
			<<"\nEmployee name="<<e.emp_name
			<<"\nsalary="<<e.salary
			<<"\nlane number="<<e.add.lane_no
			<<"\ncolony name="<<e.add.colony
			<<"\ndistrict name="<<e.add.district;
			break;

		   case 24:
					clrscr();
			int v[50],n7,max1;
			do
			{
			cout<<"\nEnter the size of an array:";
				cin>>n7;
			cout<<"\n Enter the elements of the array:";
			for(i=0;i<n7;i++)
			{
				cin>>v[i];
			}
				max1=large(v,n7);
				cout<<"\n The largest element of the given array is:"<<max1;
				cout<<"\ndo you want to continue(y/n)..............:";
				cin>>y;
			}while(y=='y');
				break;

		   case 25:
				clrscr();
				float op1,op2,res;
				char h;
				while(y=='y')
				{
				cout<<"enter two number....................\n"
				<<"first=";
				cin>>op1;
				cout<<"\nsecond=";
				cin>>op2;
				cout<<"\nenter an operator(+,-,*,/,%):";
				cin>>h;
				cout<<"\n";
				switch(h)
				{
				case '+':
				res=op1+op2;
				break;
				case '-':
				if(op1>op2)
				res=op1-op2;
				else if(op2>op1)
				res=op2-op1;
				else
				res=0;
				break;
				case '*':
				res=op1*op2;
				break;
				case '/':
				if(op2==0)
				cout<<"divided by zero ERROR!!!!!!!!!!!\n";
				else
				res=op2/op1;
				break;
				case '%':
				if(op2==0)
				cout<<"divided by zero ERROR!!!!!!!!!!!!\n";
				else
				{
					int r,q;
					q=op2/op1;
					r=op2-(q*op1);
					res=r;
				}
				break;
				default:
				cout<<"\n""\n Wrong operator";
			}
			cout<<"The calculated result is:"<<res<<"\n";
			cout<<"\n do you want to continue(y/n).......";
			cin>>y;
			cout<<endl;

			}//while loop closed!!!!!!!!!!!!!
				break;
		    case 26:
					clrscr();
				int number;
				cout<<"\n enter number which you want to print the table......:";
				cin>>number;
				for(i=1;i<11;i++)
				{
				cout<<"num*"<<i<<"="<<number*i<<"\n";
				}
				 break;
		    case 27:
						clrscr();
				int d[3][3],rp[10],cp[10],row,col;

				do
				{
				cout<<"\n 	Enter the number of rows & columes of matrix:";
				cin>>row>>col;
				cout<<"\n Enter the elements of a matrix:\n";
				for(i=0;i<row;++i)
				{
				for(j=0;j<col;++j)
				{
					cin>>d[i][j];
				}
				}
				cout<<"\n Given matrix:";
				for(i=0;i<row;++i)
				{
				cout<<"\n";
				for(j=0;j<col;j++)
				{
					cout<<d[i][j]<<"  ";
				}
				}
				for(i=0;i<row;i++)
				{
				rp[i]=0;
				for(j=0;j<col;++j)
				rp[i]+=d[i][j];
				}
				for(j=0;j<col;++j)
				{
					cp[j]=0;
				for(i=0;i<row;++i)
				cp[j]+=d[i][j];
				}
				for(i=0;i<row;++i)
				cout<<"\n Sum of row"<<i+1<<"is:"<<rp[i];
				for(j=0;j<col;++j)
				cout<<"\n Sum of column"<<i+1<<"is:"<<cp[j];
				cout<<"\n do you want to continue(y/n)..............";
				cout<<"\n for yes................press y............"
				<<"\n for no.....................press n............"
				<<"\n enter your choice.............................";
				cin>>y;
				}while(y=='y');
				break;

		   case 28:
					 clrscr();
					  while(y=='y')
					  {
					  int pq=0,numeb;
					   cout<<"enter number for num:";
					   cin>>numeb;
				  for(int b=2;b<=numeb/2;b++)
				  {
				 if(numeb%b==0)

				   {
				    pq=1;

				    break;
				    }
				 }
				  if(pq==1)
				  cout<<"it is not a prime number";
				  else
				  cout<<"it is a prime number";
				  cout<<"\n do you want to continue(y/n)...........";
				  cin>>y;
				  }
				  break;
		   case 29:
					 clrscr();
				  int year;
				   do
				   {
				      cout<<"Enter Your Number=" ;
				      cin>>year;
			      if (year%4==0)
			      cout<<"It Is A Leap Year";
			      else
			      cout<<"It Is Not A Leap Year";
			      cout<<"if you want to continoue press y";
			      cin>>y;
			      }while (y=='y');
			      break;

		   case 30:
					clrscr();
			  int ac[max][max],sbelow=0,sabove=0,size;
			  while(y=='y')
			  {
			  cout<<"\nEnter the size of square matrics:\n";
			  cin>>size;
			  cout<<"\nEnter the elements of a matrics :";
			  for(i=0;i<size;i++)
			    for(j=0;j<size;j++)
			       cin>>ac[i][j];
			  cout<<"\nGiven matrics is:";
			  for(i=0;i<size;i++)
			  {
			    cout<<"\n";
			    for(j=0;j<size;j++)
			       cout<<ac[i][j];
			  }
			  for(i=0;i<size;++i)
			    for(j=0;j<size;j++)
				if(i>j)
			  sbelow=sbelow+ac[i][j];
			  for(i=0;i<size;i++)
			     for(j=0;j<size;j++)
			if(i<j)
			   sabove=sabove+ac[i][j];
			  cout<<"\nSum of elements below diagonal :"<<sbelow;
			  cout<<"\nSum of elements above diagonal :"<<sabove;
			  cout<<"\ndo you want to continue............";
			  cin>>y;
			}
			  break;
		   case 31:
				 clrscr();
			 int vb[50],large,small;
			 while(y=='y')
			 {
			  cout<<"Enter how many elements(max 50)?\n";
			  cin>>n;
			  cout<<"Enter values in the vector \n";
			  for(i=0;i<n;i++)
			  cin>>vb[i];
			  large=vb[1];
			  small=vb[1];
			  for(i=0;i<n;i++)
			  {
			  if(vb[i]>large)
			  large=vb[i];
			  else if(vb[i]<small)
			  small=vb[i];
			  }
			  cout<<"\nLargest element="<<large;
			  cout<<"\nSmallest element="<<small;
			  cout<<"\n do you want to continue(y/n).......";
			  cin>>y;
			  }
			      break;
		 case 32:
							  clrscr();
			  void swap(int &,int &);
			   int ad,bc;
			   ad=7;
			   bc=4;
			   cout<<"\nThe original values are :\n";
			   cout<<"a="<<ad<<",b="<<bc<<"\n";
			   swap(ad,bc);
			   cout<<"\n The values after swap are:\n";
			   cout<<"a="<<ad<<",b="<<bc<<"\n";
			   break;
		   case 33:
		    clrscr();
		   long np,mq,digit,rev=0;
		    cout<<"\n  Input the number ";
		    cin>>mq;
		    np=mq;
		    do
		    {
			digit=m%10;
			rev=(rev*10)+digit;
			mq=mq/10;
		    }while(mq!=0);
		    cout<<"The reverse of the number is :"<<rev<<endl;
		    if(np==rev)
			 cout<<"the number is plindrom";
		     else
			  cout<<"the number is not plindrom";
				break;
		   case 34:
				 clrscr();
			 int aa[10][10],bb[10][10],cc[10][10];
			 int mm,nn,pp,qq;
			 cout<<"\nInput rows and column of matrics a:";
			 cin>>mm>>nn;
			 cout<<"\nInput rows and colmns of matrics b:";
			 cin>>pp>>qq;
			 if((mm==pp)&&(nn==qq) )
			   cout<<"\nMatrics can be added";
			   else
			     {
			       cout<<"\nMatrics can not be added";
			       exit(0);
			      }
			      cout<<"\nInput matrics a:";
			      for(i=0;i<m;i++)
			      {
				 for(j=0;j<n;j++)
				   cin>>aa[i][j];
			       }
			       cout<<"\nInput matrics b:";
			       for(i=0;i<p;i++)
			       {
				  for(j=0;j<qq;j++)
				    cin>>bb[i][j];
				}
				cout<<"\nMatrics a is";
				for(i=0;i<mm;i++)
				{
				  cout<<"\n";
				  for(j=0;j<n;j++)
				  {
				     cout<<" "<<aa[i][j];
				  }
				 }
				 cout<<"\nMatrics b is :";
				 for(i=0;i<p;i++)
				 {
				   cout<<"\n";
				   for(j=0;j<qq;j++)
				   {
			     cout<<" "<<bb[i][j];
				    }
				 }
				 for(i=0;i<m;i++)
				 {
				   for(j=0;j<n;j++)
				     cc[i][j]=aa[i][j]+bb[i][j];
				  }
				  cout<<"\nThe sum of two matrics is:";
				  for(i=0;i<m;i++)
				  {
				    cout<<"\n";
				    for(j=0;j<n;j++)
				      cout<<" "<<cc[i][j];
				  }
				     break;
		   case 35:
							 clrscr();
			 int sa[20][20],sb[20][20] ,lm,ln;
			    cout<<"\nInput row and columns of matrics a:\n";
			    cin>>lm>>ln;
			    cout<<"\nInput matrics a:";
			    for(i=0;i<lm;i++)
			      {
				  for(j=0;j<ln;j++)
				   cin>>sa[i][j];
			      }
			      cout<<"\nMtrics a : ";
			      for(i=0;i<lm;i++)
			      {
				 cout<<"\n";
				 for(j=0;j<ln;j++)
				   cout<<" "<<sa[i][j];
			       }
			       for(i=0;i<ln;i++)
			       {
				  for(j=0;j<lm;j++)
				    sb[i][j]=sa[j][i];
				}
				cout<<"\nTranspose of matrics is : \n";
				for(i=0;i<ln;i++)
				{
				    for(j=0;j<lm;j++)
				       cout<<" "<<sb[i][j];
				    cout<<"\n";
				 }
				     break;
		    case 36:
					 clrscr();
			  char line[80];
			  int vow_ctr=0;
			  cout<<"\n Enter the line :"<<endl;
			  gets(line);
			  for(i=0;line[i]!='\0';i++)
			  {
			     switch(line[i])
			     {
			       case 'a':
			       case 'A':
			       case 'e':
			       case 'E':
			       case 'i':
			       case 'I':
			       case 'o':
			       case 'O':
			       case 'u':
			       case 'U':
			       ++vow_ctr;
			     }
			  }
			  cout<<"The total number of vowels in the given line is"<<vow_ctr<<endl;
				      break;
		   case 37:
				 clrscr();
			 char st1[25],st2[25],st3[50];
			    int x3;
			    cout<<"\nEnter the first string(max 24 characters):\n";
			    cin.getline(st1,25);
			    cout<<"\nEnter the second string (max 24 characters):\n";
			    cin.getline(st2,25);
			    for(i=0;st1!='\0';i++)
			       st3[i]=st1[i];
			    for(k=0;st2[k]!='\0';k++)
			       st3[i+k]=st2[k];
			    st3[i+k]='\0';
			    x3=strlen(st3);
			    cout<<"\nThe concatenated string is :\n";
			    cout.write(st3,x3);
				    break;
		   case 38:
					clrscr();
			int za[10][10],zb[10][10],zc[10][10],zm,zn,zp,zq;
			cout<<"\nEnter the rows and coloms in matrics a ";
			cin>>zm>>zn;
			cout<<"\nEnter the rows and coloms in matrics b ";
			cin>>zp>>zq;
			if(zn==zp)
			 {
				cout<<"\nEnter the element in matrics a:";
				 for(i=0;i<m;i++)
				    for(j=0;j<n;j++)
				      cin>>za[zm][zn];
				cout<<"\nEnter the element in matrics b:";
				 for(i=0;i<zp;i++)
				   for(j=0;j<zq;j++)
			     cin>>zb[zp][zq];
			       cout<<"\nMatrics a is:";
			       for(i=0;i<zm;i++)
			       {
				 cout<<"\n";
				for(j=0;j<zn;j++)
				  cout<<za[i][j]<<" ";

				}
				cout<<"\nMatrics b is:";
				for(i=0;i<zp;i++)
				{
				   cout<<"\n";
				   for(j=0;j<zq;j++)
			      cout<<zb[i][j]<<" ";

			}
			cout<<"\nThe product of to matrics is:";
			for(i=0;i<zm;++i)
			{
			  cout<<"\n";
			  for(j=0;j<zq;j++)
			  {
			   zc[i][j]=0;
			    for(k=0;k<zn;k++)
			    {
				 zc[i][j]=zc[i][j]+za[i][k]*zb[k][j];
			      cout<<zc[i][j]<<" ";
			    }
			   }
			 }
		 }
			 else
			       cout<<"\nMatrics are not comptatible for multiplication.";
						break;
		 case 39:
					clrscr();
				int ah,bh,lh,nh;
				ah=0;
				bh=1;
				cout<<"how many elements(>5)?\n";
				cin>>nh;
				cout<<"Fibonic series\n";
				cout<<ah<<" "<<bh;
				lh=ah+bh;
				while(bh<nh)
				{
				cout<<" "<<lh;
				lh=ah+bh;
				ah=bh;
				bh=lh;
				}
				break;
		   case 40:
					clrscr();
			int findpos(char s[],char c);
			char str_ing[80],chh;
			int y7=0;
			cout<<"Enter main string :\n";
			gets(str_ing);
			cout<<"\nEnter character to be searched for :\n";
			cin>>chh;
			findpos(str_ing,chh);
			if(y7==-1)
			  cout<<"\nSorry! character is not found\n";
				      break;
		   default :
			      clrscr();
			  cout<<"\n\nInvalid choice!!!!!!!!!!!";
		}//switch closed
	     }//if statement loop closed
	   }  //D goto loop is closed
	    else
	    exit(0);

	    F:
	    {
	    cout<<"\n\ndo you want to reach list"
	    <<" of program"
	    <<"\n1. If yes  press...................y....."
	    <<"\n2. If no press.....................n.....";
	    }  //E goto loop closed
	    cin>>menu;
	    } //do_while loop closed



	getch();
}
float cube(float a)
{
return a*a*a;
}
void copystring(char str1[],char str2[])
{

	int len1,len2;
	   if(strlen(str1)>strlen(str2))
	   {
	   strcpy(str1,str2);
		cout<<"\n\nSecond string is copied into first string\n";
		len1=strlen(str1);
		cout.write(str1,len1);
	   }
	   else if(strlen(str2)>strlen(str1))
	   {
		strcpy(str2,str1);
		cout<<"\nFirst string is copied into second string\n";
		len2=strlen(str2);
		cout.write(str2,len2);
	   }
	   else if(strlen(str1)==strlen(str2))
	   {
		cout<<"\nString are of equal length.\n";

		cout<<"String1 is:\n";

		puts(str1);
		cout<<"\nString2 is:";
		puts(str2);
	   }
}
void wordnum(char a[])
{
	 int i,count=1;
	 for(i=0;a[i]!='\0';++i)
	 {
		if(a[i]==' ')
		{
			count++;
			while(a[i]==' ')
			i++;
		}
		if(a[i]=='\0')
		i--;
	 }
	 cout<<"\nNumber of words in the string are:"<<count;
}
int large(int b[],int n)
{
	int max,i;
	max=b[0];
	for(i=0;i<n;i++)
	{
		if(max<b[i])
		max=b[i];
	}
	return max;
}
void swap(int &x,int &y)
{
   int temp;
   temp=x;
   x=y;
   y=temp;
   cout<<"\nThe swapped values are :\n";
   cout<<"a="<<x<<",b="<<y<<"\n";
}
int findpos(char s[],char c)
{
int flag=-1;
for(int i=0;s[i]!='\0';i++)
{
   if(s[i]==c)
   {
     flag=0;
     cout<<"\n character is in the string at position"<<i+1;
   }
}
   return(flag);
}
