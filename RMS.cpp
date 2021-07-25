#include <iostream>
#include <windows.h>
#include <iomanip>
#include <string.h>
#include <sstream>
using namespace std;
char c,stdg[1000],sub;
int il=0,ol=0,nos;
float stdtm[1000][9],stdsm[1000];
string stddata[1000][2];
void pop();
void output(char);
void subject();
void ranking(char);
void marks(char,int);
void grade();
void average(char);
void tmarks();
void gpa();
int main()
{
	system("color F2");
cout << "\t\t\t\t\t  RESULT MANAGMENT SYSTEM\n";	
cout << "\t\t\t\t\t  "<<char(218);
    for(int i=0; i<21; i++)
	 {cout << char(196);}
	  cout << char(191) << endl;
cout << "\t\t\t\t\t  "<<char(179) << "                     " << char(179) << endl;
cout << "\t\t\t\t\t  "<<char(179) << "                     " << char(179) << endl;
cout << "\t\t\t\t\t  "<< char(179) <<"  1. SUBJECT-WISE    " << char(179) << endl;
cout << "\t\t\t\t\t  "<<char(179) << "  2. SEMESTER-WISE   " << char(179) << endl;
cout << "\t\t\t\t\t  "<<char(179) << "                     " << char(179) << endl;
cout << "\t\t\t\t\t  "<<char(179) << "                     " << char(179) << endl;
cout << "\t\t\t\t\t  "<<char(192);
      for(int i=0; i<21; i++)
	   {cout << char(196);}
	    cout << char(217) << endl;
cout<<endl<<endl<<"\t\t\t\t\t  ENTER CHOICE: ";
	cin>>c;
	switch(c)
    {
      case '1':
      	cout<<"\t\t\t\t\t  ENTER NUMBER OF STUDENTS: ";
	    cin>>nos;
	     system("CLS");
	     cout << "\t\t\t\t\t  RESULT MANAGMENT SYSTEM\n";
	      pop();
	      subject();	
	      ranking(c);
	      grade();
	      break;
	    
          case '2':
          	cout<<"\t\t\t\t\t  ENTER NUMBER OF STUDENTS: ";
	        cin>>nos;
	         system("CLS");
	         cout << "\t\t\t\t\t  RESULT MANAGMENT SYSTEM\n";
	            pop();
       		    tmarks();
       		    gpa();
       		    ranking(c);
       		    break;
                  default:
			        cout<<"CHOICE ENTERED IS OUT OF ORDER! PLEASE CONTACT THE OWNER.";
			        exit(0);	
    }
    system("CLS");
    cout << "\t\t\t\t\t  RESULT MANAGMENT SYSTEM\n";
	output(c);
	return 0;
}

void pop()
{
	for(ol=0;ol<nos;ol++)
	{
		DIGITS:
		cout<<"ENTER CMS ID OF STUDENT(XXXXXX): ";
		cin>>stddata[ol][0];
	    stringstream id(stddata[ol][0]);
		int a,b=0;
		id>>a;
		 if(a>=100000 && a<=999999)
		 {
		 	b=0;
		 	while(b!=ol)
		    {
		        if(stddata[ol][0]==stddata[b][0])
		        {
		  	      cout<<"ID ALREADY EXIST! PLEASE RE-ENTER CMS ID OF STUDENT(XXXXXX): ";
	 	          cin>>stddata[ol][0];
	 	    goto DIGITS;
		        }
	           b++;
	        }
	        
			cout<<"ENTER STUDENT NAME: ";
			cin>>ws;
		    getline(cin,stddata[ol][1]);
		 }
		 else
		   goto DIGITS;
		  system("CLS");
	}
}

void subject()
{
cout << "\t\t\t\t\t  RESULT MANAGMENT SYSTEM\n";
cout << "\t\t\t\t\t  "<< char(201);      for(int i=0; i<34; i++){cout << char(205);}      cout << char(187) << endl;
cout << "\t\t\t\t\t  "<<char(186) << "                                  " << char(186) << endl;
cout << "\t\t\t\t\t  "<<char(186) << "  MATHEMATICS=m                   " << char(186) << endl;
cout << "\t\t\t\t\t  "<<char(186) << "  APPLIED PHYSICS=a               " << char(186) << endl;
cout << "\t\t\t\t\t  "<<char(186) << "  FUNDAMENTALS OF PROGRAMMING=p   " << char(186) << endl;
cout << "\t\t\t\t\t  "<<char(186) << "  ENGLISH=e                       " << char(186) << endl;
cout << "\t\t\t\t\t  "<<char(186) << "  WORKSHOP=w                      " << char(186) << endl;
cout << "\t\t\t\t\t  "<<char(186) << "  PAKISTAN STUDIES=k              " << char(186) << endl;
cout << "\t\t\t\t\t  "<<char(186) << "  DISCERETE MATHEMATICS=d         " << char(186) << endl;
cout << "\t\t\t\t\t  "<<char(186) << "                                  " << char(186) << endl;
cout << "\t\t\t\t\t  "<<char(200);      for(int i=0; i<34; i++){cout << char(205);}      cout << char(188) << endl<<endl<<"\t\t\t\t\t  ENTER THE SUBJECT: ";
	cin>>sub;
	if(sub=='m'||sub=='M'||sub=='a'||sub=='A'||sub=='p'||sub=='P'||sub=='e'||sub=='E'||sub=='w'||sub=='W'||sub=='k'||sub=='K'||sub=='d'||sub=='D')
	marks(c,il);
	else
	{
	 cout<<"COURSE ENTERED IS NOT REGISTERED. CONTACT THE RESPECTED DEPARTMENT! \n";
	 exit(0);
    }
}

void marks(char c,int il)
{
	float asg=0,quiz=0,total=0,x=1,mrk=0,emq,ema,totalq,totala;
	    cout<<"\t\t\t\t\t  ENTER NUMBER OF ASSIGNMENTS: ";
		cin>>asg;
		cout<<"\t\t\t\t\t  ENTER ASSIGNMENT's TOTAL MARKS: ";
		cin>>ema;
		
		cout<<"\t\t\t\t\t  ENTER NUMBER OF QUIZ: ";
		cin>>quiz;
		cout<<"\t\t\t\t\t  ENTER QUIZ's TOTAL MARKS: ";
		cin>>emq;
		
	for(ol=0;ol<nos;ol++)
	{
		total=0;
		cout<<"\t\t\t\t\t  STUDENT NUMBER "<<ol+1<<endl;
		for(x=1;x<=asg;x++)
		{
			cout<<"\t\t\t\t\t  ENTER MARKS FOR ASSIGNMENT "<<x<<": ";
			cin>>mrk;
			assignment:
			 if(mrk>ema)
			 {
			  cout<<"\t\t\t\t\t  INCORRECT MARKS.PLEASE RE-ENTER: ";
			  cin>>mrk;
			goto assignment;
		     }
			total+=mrk;
		}
		
		for(x=1;x<=quiz;x++)
		{
			cout<<"\t\t\t\t\t  ENTER MARKS FOR QUIZ "<<x<<": ";
			cin>>mrk;
			quiz:
			 if(mrk>emq)
			 {
			  cout<<"\t\t\t\t\t  INCORRECT MARKS.PLEASE RE-ENTER: ";
			  cin>>mrk;
			goto quiz;
		     }
			total+=mrk;
		}
		total=(total/((emq*quiz)+(ema*asg))*100);
		if (c=='1')
		stdsm[ol]=total;
		if(c=='2')
		stdtm[ol][il]=total;
	}
}

void ranking(char sub)
{
	switch(sub)
	{
	case'1':	
	  for( ol=0; ol<nos; ol++)
	  {  
		for( il=0; il<nos; il++)
		{
			if(stdsm[ol]>stdsm[il])
			{
				swap(stdsm[ol], stdsm[il]);
				swap(stddata[ol][0], stddata[il][0]);
				swap(stddata[ol][1], stddata[il][1]);
			}
		}
	  }
	  break;
	  
	  case'2':
	  	for( ol=0; ol<nos; ol++)
	    {  
		 for( il=0; il<nos; il++)
		 {
			if(stdtm[ol][8]>stdtm[il][8])
			{
				swap(stddata[ol][0], stddata[il][0]);
				swap(stddata[ol][1], stddata[il][1]);
				 for (int swapCOL=0;swapCOL<9;swapCOL++)
				    swap(stdtm[ol][swapCOL], stdtm[il][swapCOL]);
			}
		 }
	    } 
     }	
}

void grade()
{
	int marks;
	 for( ol=0; ol<nos; ol++)
	 {
		 marks=stdsm[ol];
		 if (marks>=85 && marks <=100)
		 stdg[ol]='A';
		 else if (marks>=72 && marks<=84)
		 stdg[ol]='B';
		 else if (marks>=60 && marks<=71)
		 stdg[ol]='C';
		 else if (marks>=50 && marks<=59) 
		 stdg[ol]='D';
		 else if(marks>=0 && marks<=49)
		 stdg[ol]='F';
		 else
		 cout<<" MARKS ENTERED ARE OUT OF RANGE! \n";    
	 }
}

void tmarks()
{	
	for( ol=0; ol<nos; ol++)
	{
		for(int i=0;i<7;i++)
		{
			   cout << "\t\t\t\t\t  RESULT MANAGMENT SYSTEM\n";
	           char sub;
                cout << "\t\t\t\t\t  "<< char(201);      for(int i=0; i<34; i++){cout << char(205);}      cout << char(187) << endl;
                cout << "\t\t\t\t\t  "<<char(186) << "                                  " << char(186) << endl;
                cout << "\t\t\t\t\t  "<<char(186) << "  MATHEMATICS=m                   " << char(186) << endl;
                cout << "\t\t\t\t\t  "<<char(186) << "  APPLIED PHYSICS=a               " << char(186) << endl;
                cout << "\t\t\t\t\t  "<<char(186) << "  FUNDAMENTALS OF PROGRAMMING=p   " << char(186) << endl;
                cout << "\t\t\t\t\t  "<<char(186) << "  ENGLISH=e                       " << char(186) << endl;
                cout << "\t\t\t\t\t  "<<char(186) << "  WOERKSHOP=w                     " << char(186) << endl;
                cout << "\t\t\t\t\t  "<<char(186) << "  PAKISTAN STUDIES=k              " << char(186) << endl;
                cout << "\t\t\t\t\t  "<<char(186) << "  DISCERETE MATHEMATICS=d         " << char(186) << endl;
                cout << "\t\t\t\t\t  "<<char(186) << "                                  " << char(186) << endl;
                cout << "\t\t\t\t\t  "<<char(200);      for(int i=0; i<34; i++){cout << char(205);}      cout << char(188) << endl<<endl<<"\t\t\t\t\t  ENTER THE SUBJECT: ";
			   cin>>sub;
				if(sub=='m' || sub=='M')
			    {
				 il = 0;
				 marks(c,il);		
			    }
			    if(sub=='a' || sub=='A')
			    {
				 il = 1;
				 marks(c,il);
			    }
			    if(sub=='p' || sub=='P')
			    {
				 il = 2;
				 marks(c,il);
			    }
                if(sub=='e' || sub=='E')
				{
				 il = 3;
				 marks(c,il);
			    }
			    if(sub=='w' || sub=='W')
				{
				 il = 4;
				 marks(c,il);
			    }
			    if(sub=='k' || sub=='K')
			    {
				 il = 5;
				 marks(c,il);
			    }
			    if(sub=='d' || sub=='D')
			    {
				 il = 6;
				 marks(c,il);
			    }
			    system("CLS");
		}
	}
}

void gpa()
{
	float total,gpa,avg,marks;
	for(ol=0;ol<nos;ol++)
	{
		total=0;
		for(il=0;il<7;il++)
		{
			 marks=stdtm[ol][il];
			 stdtm[ol][8]+=marks;
		     if (marks>=85 && marks <=100)
		     {
		     gpa=4.0;
		     total+=gpa;
		     }
		     else if (marks>=72 && marks<=84)
		     {
			 gpa=3.5;
		     total+=gpa;
		     }
		     else if (marks>=60 && marks<=71)
		     {
			 gpa=3.0;
		     total+=gpa;
		     }
			 else if (marks>=50 && marks<=59) 
		     {
			 gpa=2.0;
		     total+=gpa;
		     }
			 else if(marks>=0 && marks<=49)
		     {
			 gpa=1.0;
		     total+=gpa;
		     }
		 } 
	    avg=total/7;
	    stdtm[ol][7]=avg;
	}	
}

void output(char c)
{
	switch (c)
	{
	 case '1':
	   cout<<"\n\t\t    GRADE SHEET \n";
	   if(sub=='m'||sub=='M')
	   cout<<"\n\t\t    CALCULUS\n";
	   if(sub=='a'||sub=='A')
	   cout<<"\n\t\t    APPLIED PHYSICS\n";
	   if(sub=='p'||sub=='P')
	   cout<<"\n\t\t    FUNDAMENTALS OF PROGRAMMING\n";
	   if(sub=='e'||sub=='E')
	   cout<<"\n\t\t    ENGLISH\n";
	   if(sub=='w'||sub=='W')
	   cout<<"\n\t\t    WORKSHOP\n";
	   if(sub=='k'||sub=='K')
	   cout<<"\n\t\t    PAKISTAN STUDIES\n";
	   if(sub=='d'||sub=='D')
	   cout<<"\n\t\t    DISCERETE MATHEMATICS\n";
	   cout<<char(218);
        for(int i=0; i<53; i++)
	      {cout << char(196);}
	       cout << char(191) << endl;
	   cout<<"|SR NO|CMS ID|           NAME            |MARKS|GRADES|\n";
	   cout<<"|_____|______|___________________________|_____|______|\n";
	   for(ol=0;ol<nos;ol++)
	   {
		  cout<<"|"<<setw(5)<<ol+1;
		  for(il=0;il<2;il++)
		  {
                if(il==0)
		   	    cout<<"|"<<setw(6)<<stddata[ol][il];
		   	    if(il==1)
		  	    cout<<"|"<<setw(27)<<stddata[ol][il];
		  }
		  cout<<"|"<<setw(5)<<fixed<<setprecision(1)<<stdsm[ol];
		  cout<<"|"<<setw(6)<<stdg[ol]<<"|";
		  cout<<endl;
		  cout <<char(192); 
	 	   for(int i=0; i<53; i++)
	        {cout<< char(196);}
	          cout << char(217) << endl;
	   }
	   average(c);
	   cout<<"THE GOLD MEDALIST IS:-\nCMS ID: "<<stddata[0][0]<<"\tNAME: "<<stddata[0][1]<<"\tWITH TOTAL MARKS: "<<stdsm[0];
	   break;
	 
	 case'2':
	 	
	    cout<<"\n\t\t\t\t\t\t GRADE SHEET \n ";
	    cout<<char(218);
        for(int i=0; i<112; i++)
	      {cout << char(196);}
	       cout << char(191) << endl;
	    cout<<" |SR NO|CMS ID|           NAME            |CALCULUS|PHYSICS |   FOP  |ENGLISH |   WS   |   PSt  |   DM   |   GPA  |\n";
	    cout<<" |_____|______|___________________________|________|________|________|________|________|________|________|________|\n";
	 	for(ol=0;ol<nos;ol++)
	 	{
	 		 cout<<" |"<<setw(5)<<ol+1;
		  for(il=0;il<2;il++)
		  {
                if(il==0)
		   	    cout<<"|"<<setw(6)<<stddata[ol][il];
		   	    if(il==1)
		  	    cout<<"|"<<setw(27)<<stddata[ol][il];
		  }
			for(il=0;il<8;il++)
			{
				cout<<"|"<<setw(8)<<fixed<<setprecision(1)<<stdtm[ol][il];
			}
			cout<<"|"<<endl;
		}
		cout <<" "<<char(192); 
		for(int i=0; i<112; i++)
	     {cout<< char(196);}
	      cout << char(217) << endl;
		average(c);
		cout<<"THE GOLD MEDALIST IS:-\nCMS ID: "<<stddata[0][0]<<"\tNAME: "<<stddata[0][1]<<"\tWITH TOTAL MARKS: "<<stdtm[0][8];
    }
}

void average(char c)
{
	float avg,total=0;
switch(c)
  {
	case '1':
		cout<<"| THE CLASS AVERAGE IS: \t    ";
	 for( ol=0;ol< nos;ol++)
		total=total+stdsm[ol];
	   avg=total/nos;
	   cout<<fixed<<setprecision(1)<<avg<<"\t      |\n";
        cout <<char(192); 
		for(int i=0; i<53; i++)
	     {cout<< char(196);}
	      cout << char(217) << endl;
    break;
    
    case '2':
    	cout<<" | THE CLASS AVERAGE IS: \t\t  ";
   	  	for(ol=0;ol<7;ol++)
	    { 	
	  	 total=0;
		 avg=0;
		 for(il=0;il<nos;il++)
		 {
		 	total+=stdtm[il][ol];
		 	avg=total/nos;
		 }
		 cout<<"|"<<setw(8)<<fixed<<setprecision(1)<<avg;
        }
        cout<<"|\t  |\n";
        cout <<" "<<char(192); 
		for(int i=0; i<112; i++)
	     {cout<< char(196);}
	      cout << char(217) << endl;
   }
}
