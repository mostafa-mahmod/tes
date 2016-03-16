#include<PROCESS.H>
#include<conio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

//************* -CONCEPT OF CLASS & OBJECT********************
void cl_ob()
{
	int c = 1;
	for (; !c == 0;)
	{
		//system("cls");

		cout << "\t-------------CONCEPT OF CLASS & OBJECT------------";
		cout << "\n\n\n1) What is class & object?\n\n2)  What is the jeneral format of them?\n\n";
		cout << "3) Show example.\n\n";
		//cout<<"\n\t\t\t\t\t\t<< 0 for main menue>>";
		cout << "\n\n\nENTER YOUR CHOICE:      ";
		cin >> c;
		switch (c)
		{
		case 1:
		{
				  cout << "\n\n\nCLASS:- \n\nClass is a basic bulding block of \
						   object-orinted programming.\nIt is an abstraction that captures the \
						    common structure and common behaviour of a set of objects\n\n \
							 \n\n\nOBJECT:-\n\nAn objects is somthing that has an identity,\
							  a state,and a behaviour.The state is member variables\n\
							   or data members and the behaviour is member functions.\n\n\n\n";
				  cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
				  getch();
				  break;
		}

		case 2:
		{
				  cout << "\n\n\nGENERAL FORMAT OF CLASS:-\n";
				  cout << "class class_name{\n\n    private data & functions\
						   \n\n\tacess specifier:data & functions\n\n\tacess specifier:data & functions\
						    \n\n\t......\n.......\n};\n\n\n";
				  cout << "GENERAL FORMAT OF OBJECT:-\n\n\n";
				  cout << "class_name obj_name\n\n\n";
				  cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
				  getch();
				  break;
		}
		case 3:
		{
				  //      system("cls");
				  cout << "\t\t\t--------:EXAMPLE ZONE:----------\n\n\n\t\t\t\
						  \n\ninclude<iostream.h>\n\nclass test{\nint a;\npublic:\n\nvoid get(){a=10;}\
						  \nvoid print(){cout<<a;}\n\n\t};\n\n\nvoid main(void)\n{\ntest X;\n\
						  X.get();\nX.print();\n}\n\n\t\t\t<1 for run ,0 for back>\n\n\nENTER YOUR CHOICE FOR\
						  EXAMPLE:-       ";
				  int e;
				  cin >> e;
				  if (e == 1)
				  {
					  class test{
						  int a;
					  public:
						  void get(){ a = 10; }
						  void print(){ cout << a; }
					  };
					  test X;
					  X.get();
					  cout << "\nINPUT:-\n10\nOUTPUT:-\n";
					  X.print();
					  cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
					  getch();
					  break;
				  }
				  else if (e == 0)
					  break;
				  getch();
				  break;
		}
		}
	}
}
//**************  FEATURES OF OOP-*********************

void feature(void)
{
	int c = 1;
	for (; !c == 0;)
	{
		//   system("cls");
		cout << "--------------FEATURES OF OOP---------------\n\n\n";
		cout << "1. Abastraction\n\n2. Encapsulation\n\n3. Dynamic binding\n\n4. Inheritance ";
		cout << "\n\n\n\n\t\t\t\t\t\t<<0 for quit\n\n\n";
		cout << "ENTER YOUR CHOICE:      ";
		cin >> c;
		switch (c)
		{
		case 1:
		{
				  int c = 1;
				  for (; !c == 0;)
				  {
					  system("cls");
					  cout << "\t-------------ABSTRACTION------------";
					  cout << "\n\n\n1) What is abstraction?\n\n2) Why used abstraction?\n\n";
					  cout << "\n\t\t\t\t\t\t<< 0 for main menue>>";
					  cout << "\n\n\nENTER YOUR CHOICE:      ";
					  cin >> c;
					  switch (c)
					  {
					  case 1:
					  {
								cout << "\n\n\nABSTRACTION:-\n\nThe ability for a program to ignore\
										 some aspects of the information .That mean's ,abstraction is the ability \
										 to focus the essential.\n";
								cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
								getch();
								break;
					  }
					  case 2:
					  {
								cout << "\n\n Abstraction is used to focus essentials in a program.";
								cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
								getch();
								break;
					  }
					  }
				  }
				  break;
		}
		case 2:
		{
				  int c = 1;
				  for (; !c == 0;)
				  {
					  system("cls");
					  cout << "\t-------------ABSTRACTION------------";
					  cout << "\n\n\n1) What is encaptulation?\n\n2) Why used encaptulation?\n\n";
					  cout << "\n\t\t\t\t\t\t<< 0 for main menue>>";
					  cout << "\n\n\nENTER YOUR CHOICE:      ";
					  cin >> c;
					  switch (c)
					  {
					  case 1:
					  {
								cout << "\n\nENCAPSULATION:-\n\n\nEncapsulation meam's information hiding.\
										The wrapping up of data and functions into a single unit is known as\
										encapsulation.\n\nIt ensures that, objects cannot change the internal\
										state of other objects in unexpected ways; only the object's own\
										internal methods are allowed to access its state.\n";
								cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
								getch();
								break;
					  }
					  case 2:
					  {
								cout << "\n\n To hide data or information in a program so that a object\
										 can not change other object in unexpected ways is used encaptulation.";
								cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
								getch();
								break;
					  }
					  }
				  }
				  break;
		}

		case 3:
		{
				  int c = 1;
				  for (; !c == 0;)
				  {
					  system("cls");
					  cout << "\t-------------DYNAMIC BINDING------------";
					  cout << "\n\n\n1) What is dynamic binding?\n\n";
					  cout << "\n\t\t\t\t\t\t<< 0 for main menue>>";
					  cout << "\n\n\nENTER YOUR CHOICE:      ";
					  cin >> c;
					  switch (c)
					  {
					  case 1:
					  {
								cout << "\n\n\nDYNAMIC BINDING:-\n\nDynamic binding means that, the code \
										associated with a given procedure is not known untill the time of the call \
										at run time.Function overloading is the example of dynamic binding.Because \
										if we use function overloading then before runtime the compiller do not know\
										 what function is used.";
								cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
								getch();
								break;
					  }

					  }
				  }
				  break;
		}
		case 4:
		{
				  cout << "\n\nINHERITANCE:-\n\nInheritance is the process by which objects\
						  of one class acquire the properties of objects of another class. It\
						  supports the concept of hierichal classification or reuseability property.";
				  cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
				  getch();
				  break;
		}
		}
	}
}
//********* >PRIVATE,PUBLIC & PROTECTED MEMBERS< *******

void ppp_m()
{
	int m = 1;
	for (; !m == 0;)
	{
		system("cls");
		cout << "-------->PRIVATE,PUBLIC & PROTECTED MEMBERS<-----------\n\n\n";
		cout << "1. Varribales\n\n2. Functions\n\n\n\t\t\t<0 for main menue>\n\n\n\t\
				       ENTER YOUR CHOICE:-      ";
		cin >> m;
		switch (m)
		{
		case 1:
		{
				  int c = 1;
				  for (; !c == 0;)
				  {
					  system("cls");
					  cout << "\n\n----------------PRIVATE,PUBLIC & PROTECTED VARRIABLES-\
							  -----------------\n\n\n1> what is private,public & protected varriables?\n\n\
							  2> why used private,public & protected varribales?\n\n3> show example\n\n\n\t\
							  \t\t<<0for back>>\n\n\n\nENTER YOUR CHOICE:-    ";
					  cin >> c;
					  switch (c)
					  {
					  case 1:
					  {
								cout << "\n\n\nPRIVATE VARRIABLE:-\n\nprivate varribales\
										are not accessible directly using dot opetrator.The scope of this varriables\
										 are only within class.It can be accessed by only public functions.\n\n\n\
										  PUBLIC VARRIABLES:-\n\npublic varribales are accessible directly using dot\
										   operator.The scope of this varriables are outside class.Any object or functin\
										    can directly access public varriables.\n\n\n PROTECTED VARRIBALES:-\n\nThe\
											 feature of protected varribales are same as private varriables.The main\
											  difference between private & protected varriavbles are ,private varribles\
											   cannot be inherited but protected varribles can be inherited.\n";
								cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
								getch();
								break;
					  }
					  case 2:
					  {
								cout << "\n\n\n1) private varriables are used to data\
										hiding.It also help us to not change any data unconciously\n\n2) public varriables\
										 are used to access any data directly using dot operator.\n\n3) protected varriables\
										  are used for inherit any private data.\n\n";
								cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
								getch();
								break;
					  }
					  case 3:
					  {
								system("cls");
								cout << "\n\n---------EXAMPLE ZONE-----------\n\n\n\n";
								cout << " #include<conio.h>\n#include<iostream.h>\n\
										class test1{\nprotected:\nint  x;\npublic:\ntest1(){x=20;}\n};\n\
										class test:public test1{\nint a;\npublic:\nint b;\nvoid get(){a=5;}\nint show()\
										{return a*x;}\n};\nvoid main(void)\n{\nclrscr();\ntest B;\ntest1 C;\nB.b=2;\n\
										B.get();\n\n\n\ncout<<multiplying a,b & c=<<B.show()*B.b;\n}\n\n\n\t\t\t<1 \
										for run o for back>\n\n\nENTER YOUR CHOICE:-          ";
								int e;
								cin >> e;
								if (e == 1)
								{
									class test1{
									protected:
										int  x;
									public:
										test1(){ x = 20; }
									};
									class test :public test1{
										int a;
									public:
										int b;
										void get(){ a = 5; }
										int show(){ return a*x; }
									};
									test B;
									test1 C;
									B.b = 2;
									B.get();
									cout << "\n\nINPUT:-\na=5,  b=2,  c=20\n\n";
									cout << "OUTPUT:-\n\nmultiplying a,b & c=" << B.show()*B.b;
									cout << "\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
									getch();
									break;
								}
								else if (e == 0)
									break;
								getch();
								break;
					  }
					  }

				  }
				  break;
		}
		case 2:
		{
				  int c = 1;
				  for (; !c == 0;)
				  {
					  system("cls");
					  cout << "\n\n----------------PRIVATE,PUBLIC & PROTECTED FUNCTION-\
							  -----------------\n\n\n1> what is private,public & protected member functions?\n\n\
							  2> why used private,public & protected functions?\n\n3> show example\n\n\n\t\
							  \t<0for main menu>\n\n\n\nENTER YOUR CHOICE:-    ";
					  cin >> c;
					  switch (c)
					  {
					  case 1:
					  {
								cout << "\n\n\nPRIVATE MEMBER FUNCTION:-\n\nprivate member functions\
										can not use directly using dot opetrator by any object.The scope of this functions\
										 are only within class.It can be accessed by only public functions.\n\n\n\
										  PUBLIC MEMBER FUNCTIONS:-\n\npublic member functions are accessible directly\
										   using dot operator under the object of that class.The scope of this functoins\
										    are outside class.Any object or member functin can directly access public\
											 functions.\n\n\nPROTECTED MEMBER FUNCTIONS:-\n\nThe feature of protected\
											  member functions are same as private private member functions.The main\
											   difference between private & protected functions are,private functions cannot\
											    be inherited but protected functions can be inherited.\n\n\n\n\n\n\t\t\t\
												 ->->->PRESS ENTER FOR NEXT<-<-<-";
								getch();
								break;
					  }
					  case 2:
					  {
								cout << "\n\n\na) private member functions are used\
										for data hiding.It is also used to hide perticular task within a class so that\
										 this task are not changed unconsiously.\n\n2) public member functions are\
										  used to access any private data and private functions.It can access any data\
										   or functions directly.\n\n3) protected member functions are used for inheritance.\
										    Protected member\n\n\functions can be inherited & derived class can be use \
											 it.\n\n\n\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
								getch();
								break;
					  }
					  case 3:
					  {
								system("cls");
								cout << "\n\n\n---------EXAMPLE ZONE-----------\n\n\n\n";
								cout << "#include<conio.h>\n#include<iostream.h>\nclass\
										pro{\nint x;\nprotected:\nint get(){return x;}\npublic:\npro(){x=2;}\n};\
										class test:public pro{\nint a;\nint pri(){a=5;return a;}\npublic:\nint c;\
										int access(){return pri()*get();}\n};\nvoid main(void)\n{\ntest B;\npro C;\nB.c=2;\
										cout<<\n\n\n\nmultiplying a and x, sum=<<B.access();\ngetch();\n}\n\n\n\t\t\t\
										<1 for run 0 for back>\n\n\nENTER YOUR CHPICE:-        ";
								int e;
								cin >> e;
								if (e == 1)
								{
									class pro{
										int x;
									protected:
										int get(){ return x; }
									public:
										pro(){ x = 2; }
									};
									class test2 :public pro{
										int a;
										int pri(){ a = 5; return a; }
									public:
										int c;
										int access(){ return pri()*get(); }
									};

									test2 B;
									pro C;
									B.c = 2;
									cout << "\n\nINPUT:-\n\na=5   x=2\n\nOUTPUT:-\n\n";
									cout << "multiplying a and x, sum=" << B.access();
									cout << "\n\n\t\t->PRESS ENTER FOR NEXT<-";

									getch();
									break;
								}
								else if (e == 0)
									break;
								getch();
								break;
					  }
					  }

				  }
		}

		}

	}
}

//************* FUNCTION OVERLOADING ******************


int add(int a, int b){ return a + b; }
double add(double a, double b){ return a + b; }

void over_l()
{
	int c = 1;
	for (; !c == 0;)
	{
		system("cls");
		cout << "\t-------------FUNCTION OVERLOADING------------";
		cout << "\n\n\n1) What is function overloading?\n\n2) Why used function overloading?\n\n";
		cout << "3) What is the jeneral format of function overloading?\n\n4) Show example.\n\n\n";
		cout << "\n\t\t\t\t<<0 for main menu";
		cout << "\n\n\nENTER YOUR CHOICE:      ";
		cin >> c;
		switch (c)
		{
		case 1:
		{
				  cout << "Function overloading means one name multiple forms.It allows us\
						   to have more than one functions with the same name but performs different tasks\
						    in a program depending on the argument lists in the function call.The\
							 correct function to be invoked is determined by checking the the number and\
							  type of the arguments but not on the functions type. \n\n\n";
				  cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
				  getch();
				  break;
		}
		case 2:
		{
				  cout << "Function overloading is used for same function name but\
						  different purposes.By using function overloading consecpt, we can design\
						  a family of functions with one function name but with different argument lists\
						  . n\n\n\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
				  getch();
				  break;
		}
		case 3:
		{
				  cout << "\n\n\n--->->GENERAL FORMAT OF FUNCTION OVERLOADING:<-<---\n";
				  cout << "\n\n\nDECLARATION:-\n\n\ndata_type1 function_name(data_type1);\
						  \n\ndata_type1 function_name(data_type1,data_type1);\n\ndata_type1 \
						  function_name(data_type1,data_type2);\n\ndata_type1 function_name\
						  (data_type2,data_type1);\n\ndata_type1 function_name(data_type2,data_type2);";
				  cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
				  getch();
				  break;
		}
		case 4:
		{
				  system("cls");
				  cout << "\n\t\t\t--------:EXAMPLE ZONE:----------\n\n\n\n\ninclude\
						  <iostream.h>\n\nint add(int a,int b)\n{\nreturn a+b;\n}\n\ndouble add\
						  (double a,double b)\n{\nreturn a+b;\n}\n\n\nvoid main(void)\n\n{\n\ncout<<\
						  after first adding sum=<<add(5,10)<<\n\nafter 2nd adding sum=<<add(5.5,5.4);\
						  \n}\n\n\t\t\t<<1 for run, 0 for back>>\n\n\n\nENTER YOUR CHOICE FOR EXAMPLE:-  ";
				  int e;
				  cin >> e;
				  if (e == 1)
				  {
					  cout << "\nINPUT:-\n\na=5    b=10\n\na=5.2   b=5 \n\n\nOUTPUT:-\n\n";
					  cout << "after first adding sum=" << add(5, 10) << "\n\nafter 2nd adding\
																		 sum=" << add(5.5, 5.4);
					  cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
					  getch();
					  break;
				  }
				  else if (e == 0)
					  break;
				  getch();
				  break;
		}
		}
	}
}
//************** DEFAULT PARAMETER *******************

int def(int a, int b = 10)
{
	return a + b;
}

void def_pa()
{
	int c = 1;
	for (; !c == 0;)
	{
		system("cls");
		cout << "\t-------------DEFAULT PARAMETER------------";
		cout << "\n\n\n1) What is default paramereter?\n\n2) Why used default parameter?\
				\n\n3) What is the jeneral format of default parameter?\n\n4) Show example.\
				\n\n5)specialty of default parameter.\n\n\t\t\t\t\t\t<< 0 for main menue>>";
		cout << "\n\n\nENTER YOUR CHOICE:      ";
		cin >> c;
		switch (c)
		{
		case 1:
		{
				  cout << "\n\n\nDEFAULT PARAMETER:-\n\nDefault parameter is a parameter, where the\
						  formal parameter is initialize primarily and this value is used if any actual\
						   parameter is missed at the time of function calling.If we pass the value for\
						    that default parameter as actual parameter then that passing value is used\
							 otherwise the primary value is used\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
				  getch();
				  break;
		}
		case 2:
		{
				  cout << "\n\n\nAt the time of function calling, if we don't pass or \
						  miss any actual parameter then to perform the task of that function properly\
						   we use default parameter.Thus to select a value for primarily and perform\
						    the task of that function default parameter is used.\n\n";
				  cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
				  getch();
				  break;
		}
		case 3:
		{
				  cout << "\n\n\nGENERAL FORMAT OF DEFAULT PARAMETER:-\n\n";
				  cout << "data_type function_name(data_type varr_name=\
						  value,data_type varr_name=value)\n\n{\n\n\\body;\n\n}\n\n";
				  cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
				  getch();
				  break;
		}
		case 4:
		{
				  system("cls");
				  cout << "\t\t\t--------:EXAMPLE ZONE:----------\n\n\n\
						  \n\ninclude<iostream.h>\nint def(int a,int b=10)\n{\n\nreturn a+b;\n\n}\n\n\nvoid main(void)\n{\
						  \n\n\n\cout<<a+b=<<def(20);\n\n}\n\n\t\t\t<<1 for run, 0 for quit >>\n\n\n\n\
						   ENTER YOUR CHOICE FOR EXAMPLE:-  ";
				  int e;
				  cin >> e;
				  if (e == 1)
				  {
					  cout << "\nINPUT:-\nas actual parameter a=20\nas default parameterb=10\
							  \n\nOUTPUT:-\n";
					  cout << "a+b=" << def(20);
					  cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
					  getch();
					  break;
				  }
				  else if (e == 0)
					  break;

				  break;
		}
		case 5:
		{
				  cout << "\n\nSPECIALTY OF DEFAULT PARAMETER:-\n\n\n<1> when we initialize\
						   any default argument, then only value is used not any varriable.suppose,we \
						   cannot write the follwing program -\n\nint spesal(int c,int a=10, int b=a)\
						   {return c+a+b;}\n\nvoid main(void)\n\n{\ncout<<spesal(10);\n\n}\n\n\n\
						   <2> after one default parameter, we have to use every parameter as default\
						    parameter in a function.that means we cannot write following coding -\n\n\
							 int spesal(int c=10,int a, int b){return c+a+b;}\n\n\nvoid main(void)\n\n\
							  {\ncout<<spesal(10,10);\n\n}\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
				  getch();
				  break;
		}
		}
	}

}
//********** PASSING AND RETURNING OBJECTS *************

class val{
	int x;
public:
	void put_x(int a){ x = a; }
	int get(){ return x; }
	void print(){ cout << x; }
};
val min(val B)
{
	val temp;
	int a = -B.get();
	temp.put_x(a);
	return temp;
}


class ref_a{
	int x;
public:
	void put(int a){ x = a; }
	int get(){ return x; }
	void print(){ cout << x << "      "; }
};
int add(ref_a *p, ref_a *q)
{
	int a, b;
	a = p->get();
	b = q->get();
	(*p).put(a + 1);
	(*q).put(b + 1);
	return p->get() + q->get();
}

void pass_ret()
{
	int m = 1;
	for (; !m == 0;)
	{
		system("cls");
		cout << "-------->PASSING AND RETURNING OBJECTS<-----------\n\n\n";
		cout << "1. Pass by value\n\n2. Pass by ref_aerence\n\n\n\t\t\t<0 for \
				main menue>\n\n\nENTER YOUR CHOICE:-   ";
		cin >> m;
		switch (m)
		{
		case 1:
		{
				  int c = 1;
				  for (; !c == 0;)
				  {
					  system("cls");
					  cout << "1> what is passing & returning by value?\n\n\
							  2> why used passing & returning by value of objects?\n\n3> Genaral format\
							  \n\n4> show example\n\n\n\t\t\t<<0for back>>\n\n\n\nENTER YOUR CHOICE:-    ";
					  cin >> c;
					  switch (c)
					  {
					  case 1:
					  {
								cout << "\n\n\nPASSING & RETURNING BY VALUE:-\n\nat \
										the time of function calling,if we pass value as actual parameter then it is \
										call pass by value.And at the time of returning from a function, if we \
										return value then it is called return by value.when we use pass by value, \
										then a coppy is passed to function, and so if we change the value in\
										that function, the main value is not changed.";
								cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
								getch();
								break;
					  }
					  case 2:
					  {
								cout << "\n\n\nsometime in program, we need to \
										change the value of formal parameter in a function,but we need to not change \
										that actual value in a function.In this situation we need to use pass by \
										value.Because in this case the copy of actual parameter(here object) is \
										passed to function.sometime we need to pass or return all the features of a \
										class.that time we use an object of that class to pass or return because an \
										object of a cllass posses all the features.";
								cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
								getch();
								break;
					  }
					  case 3:
					  {
								cout << "\n\nGENARAL FORMAT:-\n\n\nclass_name \
										function_name(class_name object_name)\n\n{\n\nclass_name object\n\n....\n..\
										...\n\nreturn object;\n\n}\n";
								getch();
								break;
					  }
					  case 4:
					  {
								system("cls");
								cout << "\n\n\n---------EXAMPLE ZONE-----------\n\n\n\n\
										\n#include<iostream.h>\nclass val{\nint x;\npublic:\n\void put_x(int a){x=a;}\
										\nint get(){return x;}\nvoid print(){cout<<x;}\n};\n\val min(val B)\n{\nval \
										temp;\nint a=-B.get();\ntemp.put_x(a);\nreturn temp;\n}\n\nvoid main(void)\
										\n{\nval B,C;\nB.put_x(15);\nC=min(B);\n C.print();\n}";
								int e;
								cout << "\n\n\nENTER YOUR CHOICE:-   ";
								cin >> e;
								if (e == 1)
								{
									cout << "\n\nINPUT:-\n\n  15\n\n\nOUTPUT:-\n\n";
									val B, C;
									B.put_x(15);
									C = min(B);
									C.print();
									cout << "\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
									getch();
									break;
								}
								else if (e == 0)
									break;
								break;
					  }
					  }
				  }
				  break;
		}
		case 2:
		{
				  int c = 1;
				  for (; !c == 0;)
				  {
					  system("cls");
					  cout << "1> what is passing & returning by ref_aerence?\n\n\
							  2> why used passing & returning by ref_aerence of objects?\n\n3> Genaral \
							  format \n\n4> show example\n\n\n\t\t\t<<0for back>>\n\n\n\nENTER YOUR CHOICE:-    ";
					  cin >> c;
					  switch (c)
					  {
					  case 1:
					  {
								cout << "\n\n\nPASSING & RETURNING BY ref_aERENCE:-\n\n\
										at the time of function calling,if we pass address as actual parameter\
										then it is call pass by ref_aerence.And at the time of returning from a \
										function, if we return address then it is called return by ref_aerence.when \
										we use pass by ref_aerence, then a the actual address is passed to function, \
										and so if we change the value in that function, the main value is changed.";
								cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
								getch();
								break;
					  }
					  case 2:
					  {
								cout << "\n\n\nsometime in program, we need to \
										change the value of formal parameter in a function,and we want to use that \
										change value outside that function in a program.In this situation we need \
										to use pass by ref_aerence.Because in this case the address of actual \
										parameter(here object) is passed to function.sometime we need to pass or \
										return all the features of a class.that time we use an object of that\
										class to pass or return because an object of a cllass posses all the \
										features.moreover if we want to use the changable value of that object \
										outside the function then we can use passing & returning object by ref_aerence.";
								cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";               getch();
								break;
					  }
					  case 3:
					  {
								cout << "\n\nGENARAL FORMAT OF PASS BY ref_aERENCE:-\n\
										\n\nreturn_type function_name(class_name *object_name)\n\n{\n\n\\\bobyn;\n\n\
										\n}\n\n\n\nFUNCTION CALLING:-\n\n\nfunction_name(& object_name);\n\n";
								getch();
								break;
					  }
					  case 4:
					  {
								system("cls");
								cout << "\n---------EXAMPLE ZONE-----------\n\n\n\n\
										#include<iostream.h>\nclass ref_a{\nint x;\npublic:\nvoid \
										put(int a){x=a;}\nint get(){return x;}\nvoid print(){cout<<x<<"      ";}\n\
										};\nint add(ref_a *p,ref_a *q)\n{\nint a,b;\na=p->get();\nb=q->get();\n(*p).\
										put(a+1);\n(*q).put(b+1);\nreturn p->get()+q->get();\n}\n\nvoid main(void)\
										\n{\n ref_a x,y;\nx.put(5);\ny.put(10);\nint z=add(&x,&y);\nx.print();\n\
										y.print();\ncout<<z;\n}\n\n\t\t<1 for run, 0 for back>\n\nENTERYOUR CHOICE:-   ";
								int e;
								cin >> e;
								if (e == 1)
								{
									cout << "\n\nINPUT:-\n\n5      10 \n\nOUTPUT:-\n\n";
									ref_a x, y;
									x.put(5);
									y.put(10);
									int z = add(&x, &y);
									x.print();
									y.print();
									cout << z;
									cout << "\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
									getch();
									break;
								}
								else if (e == 0)
									break;
								getch();
								break;
					  }
					  }
				  }
		}
		}
	}
}
//*************** CONSTRUCTERS & DESTRUCTORS *****************

void cons_des()
{
	int c = 1;
	for (; !c == 0;)
	{
		system("cls");
		cout << "\t-------------CONSTRUCTERS & DESTRUCTORS ------------";
		cout << "\n\n\n1) What is constructor & destructor?\n\n2) Why used \
				constructor & destructor?\n\n3) What is the jeneral format of them?\n\n\
				4) Show example.\n\n5) speciality \n\t\t\t\t\t\t<< 0 for main menue>>";
		cout << "\n\n\nENTER YOUR CHOICE:      ";
		cin >> c;
		switch (c)
		{
		case 1:
		{
				  cout << "\n\n\nCONSTRUCTOR:-\n\nConstructor is a public member \
						  function which is called implicitly(clmpiller's automatically call is known \
						  as implicit call but manually call is known as explicit call) when a object \
						  is created.It's name is same as class name and it has no return type but can \
						  have parameter.\n\n\nDESTRUCTOR:-\n\nDestructor is a public member function \
						  which is called implicitly when a object is destructed from memmory.\
						  Destructor name is same as class name and it has no return type and no \
						  argument and a tilde(~)charector is situated before it's name.";
				  cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
				  getch();
				  break;
		}
		case 2:
		{
				  cout << "\n\n\nwe know that constructor  & destructor are called \
						  implictly when an object is created, so we can use them to perform that \
						  things which is needed all time in a program.suppose, if we want to allocate\
						  memmory dynamically then we can use constructor and to free memmory we\
						  can use destructor because the time to create each object constructor is\
						  called implicitly and allocate memmory for that object and at the time to \
						  vanish that object destructor is called implictly and free allocated memmory \
						  for that object.moreover, by using parameterical constructor we can assing\
						  value for private varriables.";
				  cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
				  getch();
				  break;
		}
		case 3:
		{
				  cout << "\n\n\nGENERAL FORMAT OF CONSTRUCTOR:-\n\n\nDECLARATION:-\n\n\n\
						  class_name(argument_list);\n\nCALLING:-\n\n*)IMPLICITLY:-    class_name\
						  (actual_parameter_list);\n\n*)EXPLICITLY:- class_name obj_name=class_name\
						  (actual_parameter_list);\n\n\n\nGENERAL FORMAT OF DESTRUCTOR:-\n\n\n\
						  ~class_name();";
				  cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
				  getch();
				  break;
		}
		case 4:
		{
				  system("cls");
				  cout << "\t\t\t--------:EXAMPLE ZONE:----------\n\n\
						  \n#include<iostream.h>\nclass test{\nint a;\npublic:\ntest(){cout<<\
						  constructing........;}\n~test(){cout<<destructing......;}\nvoid get()\
						  {a=10;}\nvoid print(){cout<<a<<endl;}\n};\n\nvoid main(void)\n{\ntest X;\n\
						  X.get();\nX.print();\n}\n\n\t\t\t<<1 for run, 0 for back >>\n\n\n\nENTER \
						  YOUR CHOICE FOR EXAMPLE:-  ";
				  int e;
				  cin >> e;
				  if (e == 1)
				  {
					  cout << "\nINPUT:-\n   10\nOUTPUT:-\n\n\n";
					  class test{
						  int a;
					  public:
						  test(){ cout << "constructing........\n"; }
						  ~test(){ cout << "destructing......\n"; }
						  void get(){ a = 10; }
						  void print(){ cout << a << endl; }
					  };
					  {
						  test X;
						  X.get();
						  X.print();
					  }
					  cout << "\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
					  getch();
					  break;
				  }
				  else if (e == 0)
					  break;
				  getch();
				  break;
		}
		case 5:
		{
				  cout << "If there is a constructor with one parameter then we can use\
						       assingment operator(=) as follows\n\nclass_name obj_name=actual_parameter.\n\n ";
				  cout << "EXAMPLE:-\n\n\nclass special{\nint x;\npublic:\nspecial(int a){x=a;}\n\
						       void print(){cout<<x;}\n};\n\nvoid main(void)\n{\nspecial ob=5;\nob.print();\n}\n\
							        \n\nINPUT:-\n5\n\nOUTPUT:-\n5\n\n";
				  getch();
				  break;
		}
		}
	}
}
//****************** FRIEND FUNCTION ***********************

class complex{
	int x, y;
public:
	complex(){}
	complex(int r, int i){ x = r; y = i; }
	void print(){ cout << "after adding:     " << x << "+i" << y; }
	friend complex add(complex, complex);
};
complex add(complex a, complex b)
{
	complex z;
	z.x = a.x + b.x;
	z.y = a.y + b.y;
	return z;
}


void fr_function()
{
	int c = 1;
	for (; !c == 0;)
	{
		system("cls");
		cout << "\t-------------FRIEND FUNCTION------------";
		cout << "\n\n\n1) What is friend function?\n\n2) special charectaristics \
				of friend function\n\n3) Why used friens function?\n\n4) What is the jeneral \
				format of friend function?\n\n5) Show example.\n\n6) special case\n\n\n\
				\n\t\t\t\t\t\t<< 0 for main menue>>";
		cout << "\n\n\nENTER YOUR CHOICE:-      ";
		cin >> c;
		switch (c)
		{
		case 1:
		{
				  cout << "\n\n\nFRIEND FUNCTION:-\n\nFriend function is generally a \
						  nonmember function but can access any private or public data & functions \
						  using dot operator.It is declared within class but defined outside class.\
						  The keyword 'friend' is used before function return type at the time to \
						  declare but not used at the time to defined.";
				  cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
				  getch();
				  break;
		}
		case 2:
		{
				  cout << "\n\n\nSPECIAL CHARECTERISTICS OF FRIEND FUNCTION:-\n\n\
						  a> Friend function is not in the scope of the class to which it is declared \
						  as friend\n\b>It cannot be called using the object of the class c> Called \
						  like normal function\n\nd) cannot directly access members\n\ne) Friend \
						  function may be either public or private\n\nf) usally it has object as \
						  arguments\n\n";
				  cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
				  getch();
				  break;
		}
		case 3:
		{
				  cout << "1. operator overloading\n\n2. make the creation of some \
						  I/Ofunctions easily(like template)\n\n3.Two or more class objects interect \
						  each other.\n";
				  getch();
				  break;
		}
		case 4:
		{
				  cout << "\n\n\nGENERAL FORMAT OF FRIEND FUNCTION:-\n\nclass class_name\
						  {\n....\n......\npublic:\nfriend return_type function_name(parameter_list);\
						  \n\n.....\n.....\n\n};\n\nreturn_type function_name(parameter_list)\n\
						  {\nbody\n}\n";
				  cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
				  getch();
				  break;
		}
		case 5:
		{
				  system("cls");
				  cout << "\t\t\t--------:EXAMPLE ZONE:----------\n\n\ninclude<iostream.h>\
						  \nclass complex{\nint x,y;\npublic:\ncomplex(){}\ncomplex(int r,int i)\
						  {x=r;y=i;}\n\nvoid print(){cout<<after adding:     <<x<<+i<<y;}\n\
						  friend complex add(complex,complex);\n};\n\ncomplex add(complex a,complex b)\
						  \n{\ncomplex z;\nz.x=a.x+b.x;\nz.y=a.y+b.y;\nreturn z;\n}\n\nvoid main(void)\
						  \n{\ncomplex p(2,3),q(4,5),r;\nr=add(p,q);\nr.print();\n}\n\n\n\t\t\t<<1 \
						  for run, 0 for back>>\n\n\n\nENTER YOUR CHOICE FOR EXAMPLE:-  ";
				  int e;
				  cin >> e;
				  if (e == 1)
				  {
					  cout << "\n\nINPUT:-\n2+i3\n4+i5\n\nOUTPUT:-\n\n";
					  complex p(2, 3), q(4, 5), r;
					  r = add(p, q);
					  r.print();
					  cout << "\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
					  getch();
					  break;
				  }
				  else if (e == 0)
					  break;
				  getch();
				  break;
		}
		case 6:
		{
				  system("cls");
				  cout << " \nSPECIAL CASE:-\n1)friend function has no 'this' pointer \
						  and instead of 'this' pointer ref_aerence is used there.0\n\n2)we can use \
						  a member function of a class as a friend function of another class.Then we \
						  have to use scope resulation operator(::)to define that function and have to \
						  use dot operator to call that function.It is the special case.EXAMPLE:-\n\n\
						  class A;\nclass X{\nint x;\npublic:\nX(){}\nX(int a){x=a;}\nvoid max(A);\n};\
						  \n\nclass A{\nint a;\npublic:\nA(){}\nA(int p){a=p;}\nfriend void X::max(A);\
						  \n};\nvoid X::max(A q)\n{\nif(x>q.a)\ncout<<x;\nelse\ncout<<q.a is greater \
						  number\n;\n}\nvoid main(void)\n{\n X x(10);\nA y(12);\nx.max(y);\n}\n\n\
						  INPUT:-\n10   12\naOUTPUT:-\n12 is greater number\n";
				  cout << "\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
				  getch();
				  break;
		}
		}
	}
}
//****************** FRIEND CLASS *******************

class A{
	int a;
public:
	A(int m){ a = m; }
	friend class B;
};
class B{
	int b;
public:
	B(int n){ b = n; }
	int mul(A);
};
int B::mul(A x)
{
	return x.a*b;
}

void fr_class()
{
	int c = 1;
	for (; !c == 0;)
	{
		system("cls");
		cout << "\t-------------FRIEND CLASS------------";
		cout << "\n\n\n1) What is friend class?\n\n2) Why used friend class?\n\n";
		cout << "3) What is the jeneral format of friend class?\n\n4) Show example.\n\n\n";
		cout << "\n\t\t\t\t\t\t<< 0 for main menue>>";
		cout << "\n\n\nENTER YOUR CHOICE:      ";
		cin >> c;
		switch (c)
		{
		case 1:
		{
				  cout << "\n\n\nFRIEND CLASS:- \n\nIf there is two class class A and class B\
						  ,and class B is the friend of class A then,all of the member function of class B\
						  can use all of the private member of class A.  \n\n\n\n";
				  cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
				  getch();
				  break;
		}
		case 2:
		{
				  cout << "\n\nIf we want to use all of the membr function of a class as\
						   friend function of another class then it is very difficult to write friend \
						    keyword before every function.In this situation we can use friend class.\
							 It is very helpful to use all the member function of a class as friend of \
							  another class.\n\n";
				  cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
				  getch();
				  break;
		}
		case 3:
		{
				  cout << "\n\n\nGENERAL FORMAT OF FRIEND CLASS:-\n";
				  cout << "\n\nfriend class class_name;\n\n\n";
				  cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
				  getch();
				  break;
		}
		case 4:
		{
				  system("cls");
				  cout << "\t\t\t--------:EXAMPLE ZONE:----------\n\n\n\n\
						  #include<iostream.h>\nclass A{\nint a;\npublic:\nA(int m){a=m;}\nfriend class B;\
						  \n};\nclass B{\nint b;\npublic:\nB(int n){b=n;}\nint mul(A);\n};\nint B::mul(A x)\
						  \n{\nreturn x.a*b;\n}\nvoid main(void)\n{\nB p(10);\nA q(10);\ncout<<p.mul(q);\
						  \n}\n\n\t\t\t<<1 for run 0 for exit >>\n\n\n\nENTER YOUR CHOICE FOR EXAMPLE:-  ";
				  int e;
				  cin >> e;
				  if (e == 1)
				  {
					  B p(10);
					  A q(10);
					  cout << "INPUT:-\na=10   b=10\nOUTPUT:-\n";
					  cout << p.mul(q);
				  }
				  else if (e == 0)
					  break;
				  getch();
				  break;
		}
		}
	}
}

//***************POINTER TO MEMBER & POINTER TO OBJECT ********

class ptom{
	int a, b;
public:
	void get(int x, int y){ a = x; b = y; }
	friend int mul(ptom);
};
int mul(ptom A)
{
	int ptom::*pva = &ptom::a;
	int ptom::*pvb = &ptom::b;
	return (A.*pva)*(A.*pvb);
}

void poi_m_o()
{
	int c = 1;
	for (; !c == 0;)
	{
		system("cls");
		cout << "\t-------------POINTER TO MEMBER & POINTER TO OBJECT------------";
		cout << "\n\n\n1) What is pointer to member & pointer to object?\n\n2) Why \
								used pointer to member & pointer to object?\n\n3) What is the jeneral format \
												of them?\n\n4) Show example.\n\n\n";
		cout << "\n\t\t\t\t\t\t<< 0 for main menue>>";
		cout << "\n\n\nENTER YOUR CHOICE:      ";
		cin >> c;
		switch (c)
		{
		case 1:
		{
				  cout << "\n\n\nPOINTER TO MEMBER:-\n\nPointer to member is a pointer \
						  						  which can hold the address of a member like varriables and functions and by \
												  						  using this pointer within the scope of this class ,we can access that member.\
																		  						  \n\n\nPOINTER TO OBJECT:-\n\npointer to object is also a pointer, which can\
																								  						  holds the address of an object and by using this pointer we can access that \
																														  						  object.";
				  cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
				  getch();
				  break;
		}
		case 2:
		{
				  cout << "\n\n\nUSE OF POINTER TO MEMBER & POINTER TO OBJECT:-\n\na| pointer\
						  						   to member is used to hold the address of member like varriables and functions.\
												   						   \n\nb| pointer to object is used to hold the address of an object.";
				  cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
				  getch();
				  break;
		}
		case 3:
		{
				  cout << "\n\n\nGENERAL FORMAT POINTER TO MEMBER:-\n\n";
				  cout << "FOR VARRIABLE:-\n\ndata_type class_name ::* pointer_name=\
						  						  &class_name::member_varriable;\n\nFOR FUNCTION:-\n\nreturn_type\
												  						  (class_name::*pointer_name)(parameter_list)=&class_name::function_name\n\n\n\
																		  						  GENARAL FORMAT OF POINTER TO OBJECT:-\n\nclass_name *pointer_name=&object_name\n\n";
				  cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
				  getch();
				  break;
		}
		case 4:
		{
				  system("cls");
				  cout << "\t\t\t--------:EXAMPLE ZONE:----------\n\n\n\t\t\t\
						  						  \n\n#include<iostream.h>\nclass ptom{\nint a,b;\npublic:\nvoid get\
												  						  (int x,int y){a=x;b=y;}\nfriend int mul(ptom);\n};\nint mul(ptom A)\n{\n\
																		  						  int ptom::*pva=&ptom::a;\nint ptom::*pvb=&ptom::b;\nreturn (A.*pva)*(A.*pvb);\n\
																								  						  }\nvoid main(void)\n{\nptom X;\nvoid(ptom::*pm)(int,int)=&ptom::get;\n\
																														  						  (X.*pm)(5,5);\ncout<<multiplying a & b sum=<<mul(X);\nptom *po=&X;\n\
																																				  						  (po->*pm)(10,10);\ncout<<multiplying a & b sum=<<mul(*po);\n}\n\n\t\t\t\
																																										  						  <1 for run ,0 for back>\n\n\nENTER YOUR CHOICE FOR EXAMPLE:-       ";
				  int e;
				  cin >> e;
				  if (e == 1)
				  {
					  ptom X;
					  void(ptom::*pm)(int, int) = &ptom::get;
					  (X.*pm)(5, 5);
					  cout << "\n\nINPUT:-\na=5   b=5\na=10   b=10\n\nOUTPUT:-\n";
					  cout << "multiplying a & b sum=" << mul(X);
					  ptom *po = &X;
					  (po->*pm)(10, 10);
					  cout << "\nmultiplying a & b sum=" << mul(*po);
					  cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
					  getch();
					  break;
				  }
				  else if (e == 0)
					  break;
				  getch();
				  break;
		}
		}
	}
}

//************* 'this' POINTER  *********************

class t_pointer{
	int x, y, z;
public:
	t_pointer(int a, int b){ x = a; y = b; }
	t_pointer add(){ z = x + y; return *this; }
	void print(){ cout << z; }
};
void this_ptr()
{
	int c = 1;
	for (; !c == 0;)
	{
		system("cls");
		cout << "\t-------------'this' POINTER------------";
		cout << "\n\n\n1) What is this pointer?\n\n2) Why used this pointer?\n\n";
		cout << "3) What is the jeneral format of this pointer?\n\n4) Show example.\n\n\n";
		cout << "\n\t\t\t\t\t\t<< 0 for main menue>>";
		cout << "\n\n\nENTER YOUR CHOICE:      ";
		cin >> c;
		switch (c)
		{
		case 1:
		{
				  cout << "\n\n'this' is a special type of pointer which points to the\
						  object for which this function is called.this pointer is passed autometically\
						   when a member function is called.Infact, it behaves like as implicit argumwnts\
						    to all the member functions.suppose:-\n\nclass test{\nint a;\npublic:\ntest(){a=10;}\
							\nvoid print(){cout<<a;}\n};\nvoid main(void)\n{\ntest X;\nX.print();\n}\n\n\
							In the above program when we write 'X.print();' then actually compller takes\
							 it as 'X.print(*this)' and the *this points to the object X. similiarly 'cout\
							  <<a' is taken as 'cout<<this->a'.\n'this' pointer can be also called explicitly. ";
				  cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
				  getch();
				  break;
		}
		case 2:
		{
				  cout << "\n\nWhen we call a member function then 'this' pointer is \
						  passed autometically as argument and that's why we can use the the private\
						   varribales for calling object whitout passing explicitly that object.Again\
						    when we overload a binary operator using a member function then,we pass\
							 only one parameter to the funvction.The other parameter is implicitly passed\
							  using 'this' pointer.Moreover when we compare two or more object using a\
							   member function then we can return the calling object as result using this\
							    pointer. 'this' pointer is used also for cascading.\n\n";
				  cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
				  getch();
				  break;
		}
		case 3:
		{
				  cout << "\n\n\nGENERAL FORMAT OF THIS POINTER:-\n";
				  cout << "\n\n\n\return *this;";
				  cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
				  getch();
				  break;
		}
		case 4:
		{
				  system("cls");
				  cout << "\t\t\t--------:EXAMPLE ZONE:----------\n\n#include<iostream.h>\n\
						  class t_pointer{\nint x,y,z;\npublic:\nt_pointer(int a,int b){x=a;y=b;}\n\
						  t_pointer add()\n{\nz=x+y;\nreturn *this;\n}\nvoid print(){cout<<z;}\n};\n\n\
						  void main(void)\n{\nt_pointer A(10,15);\ncout<<here add() is called by A object\
						   and this function returnsthe obj A using this pointer(*this) and again by using 'A.print()'\
						    print() is called and so \nsum=;\nA.add().print();\n}\n\n\n\n\t\t\t\t<<1 for run 0 for exit >> ";
				  cout << "\n\n\n\nENTER YOUR CHOICE FOR EXAMP:-";
				  int e;
				  cin >> e;
				  if (e == 1)
				  {
					  t_pointer A(10, 15);
					  cout << "\n\nINPUT:-\n\nx=10   y=15\n\nOUTPUT:-\n\n";
					  cout << "here add() is called by A object and this function returns\
							  the obj A using this pointer(*this) and again by using 'A.print()'\
							  print() is called and so sum\nz=";
					  A.add().print();
					  cout << "\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
				  }
				  else if (e == 0)
					  break;
				  getch();
				  break;
		}
		}
	}
}
//********* OPERATOR OVERLOADING ****************

class bin{
	int a, b;
public:
	bin(){ a = 0; b = 0; }
	bin(int m, int n){ a = m; b = n; }
	bin operator +(bin);
	void print(){ cout << "1st sum=" << a << endl << "2nd sum=" << b; }
};

bin bin::operator+(bin x)
{
	bin p;
	p.a = a + x.a;
	p.b = b + x.b;
	return p;
}


class frnd{
	int a, b;
public:
	frnd(){ a = 0; b = 0; }
	frnd(int m, int n){ a = m; b = n; }
	friend frnd operator +(frnd, frnd);
	void print(){ cout << a << endl << b; }
};

frnd operator+(frnd x, frnd y)
{
	frnd p;
	p.a = x.a + y.a;
	p.b = x.b + y.b;
	return p;
}


class mem{
	int a, b;
public:
	mem(){ a = 0; b = 0; }
	mem(int m, int n){ a = m; b = n; }
	mem operator ++();
	void print(){ cout << a << endl << b << endl; }
};

mem mem::operator++()
{
	a++;
	b++;
	return *this;
}


class fru{
	int a, b;
public:
	fru(){ a = 0; b = 0; }
	fru(int m, int n){ a = m; b = n; }
	friend void operator ++(fru &);
	void print(){ cout << a << endl << b << endl; }
};

void operator++(fru &x)
{
	x.a++;
	x.b++;
}

void op_ovr()
{
	int m = 1;
	for (; !m == 0;)
	{
		system("cls");
		cout << "-----------OPERATOR OVERLOADING><-----------\n\n\n";
		cout << "1. Using member function\n\n2. Using friend function\n\n\n\t\t\t<0 for main menue>\n\n\n\t\
				       ENTER YOUR CHOICE:-      ";
		cin >> m;
		switch (m)
		{
		case 1:
		{
				  int c = 1;
				  for (; !c == 0;)
				  {
					  system("cls");
					  cout << "\t1> what is operator overloading using member function?\
							  \n\n2> why use operator over loading?\n\n3>rules of operator overloading\
							  \n\n4> genaral format\n\n5> show example\n\n\n\t\t\t\<<0for back>>\n\n\n\n\
							  ENTER YOUR CHOICE:-    ";
					  cin >> c;
					  switch (c)
					  {
					  case 1:
					  {
								cout << "\n\n\nOPERATOR OVERLOADING:-\n\nIn C++ user defined\
										 data type can be used the same way as the built in data type.suppose, in C++\
										  we can add two varriables of user defined types with the same syntax that is\
										   applied to the basic type.That is to say,C++ provides the operators with a\
										    special meaning for a data type.The process of giving such special meaning\
											 to an operator is known as operator overloading.To overload an operator a \
											  special function is needed which is called operator function.If we use a\
											   member function as this operator function then it is called operator overloading\
											    with member function.";
								cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
								getch();
								break;
					  }
					  case 2:
					  {
								cout << "\n\n\nIn C++ by using operator overloading,\
										 we can use the same syntax that is applied to the basic data type for an operator.\
										  It provides an easy way to create a new defination and a new meaning for most\
										   of the C++ operator.But we should not chnge the main meaning of operator. \
										    \n\n";
								cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
								getch();
								break;
					  }
					  case 3:
					  {
								cout << "RULES OF OPERATOR OVERLOADING:-\n\na) The over\
										 loaded operator must have at least one user defined operand.\n\nb) Over loaded\
										  operator must have follow the syntax rules of original operators.\n\nc) We can\
										   not change the original meaning of an operator.\n\nd) Operator function can not\
										    have any default argument.\n\ne) When we overload an unary operator then we need\
											 not declare any parameter for operator function.\n\nf) Only existing operator\
											  can be overloaded.\n\n";
								cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
								getch();
								break;
					  }
					  case 4:
					  {
								cout << "GENARAL FORMAT OF OPERATOR OVERLOADING USING \
										 MEMBER FUNCTION:-\n\n\nDECLARATION:-\n\nreturn_type operator overloadable_operator\
										 (parameter_list);\n\nDEFINATION:-\n\nreturn_type class_name::operator\
										  overloadable_operator(parameter_list)\n{\n\n\\body;\n\n}";
								cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
								getch();
								break;
					  }
					  case 5:
					  {
								system("cls");
								cout << "\n\n\n---------EXAMPLE ZONE-----------\n\n\n\n\
										1. binary operator over loading using member function\n\n2. unary operator \
										overloading using member function\n\n\n\n\n\t\t\tENTER YOUR CHOICE:-   ";
								int ch;
								cin >> ch;
								if (ch == 1)
								{
									cout << "#include<iostream.h>\nclass bin{\nint a,b;\npublic:\nbin(){a=0;b=0;}\n\
											bin(int m,int n){a=m;b=n;}\nbin operator +(bin);\nvoid print(){cout<<1st sum=\
											<<a<<endl<<2nd sum=<<b;}\n};\n\nbin bin::operator+(bin x)\n{\nbin p;\np.a=a+x.a;\np.b=b+x.b;\nreturn p;\
											}\n\n\nvoid main(void)\n{\nbin A(10,20),B(30,40),C;\nC=A+B;\nC.print();\n}\n\n";
									int e;
									cout << "\n\n\nENTER YOUR CHOICE:-   ";
									cin >> e;
									if (e == 1)
									{
										cout << "INPUT:-\n\na=10  b=30\n\na=20   b=40\n\
												\n\nOUTPUT:-\n\n";
										bin A(10, 20), B(30, 40), C;
										C = A + B;
										C.print();
										getch();
										break;
									}
									else if (e == 0)
										break;
								}
								else if (ch == 2)
								{
									cout << "#include<iostream.h>\nclass mem{\nint a,b;\npublic:\n\
											mem(){a=0;b=0;}\nmem(int m,int n){a=m;b=n;}\nmem operator ++();\n\
											void print(){cout<<a<<endl<<b;}\n};\nmem mem::operator++()\n{\na++;\nb++;\n\
											return *this;\n}\nvoid main(void)\n{\nmem A(10,20),C;\n++C;\n++A;\n\
											C.print();\nA.print();\n}\n";
									int e;
									cout << "\n\n\nENTER YOUR CHOICE:-   ";
									cin >> e;
									if (e == 1)
									{
										cout << "INPUT:-\n\na=0  b=0\n\na=10   b=20\n\
												\n\nOUTPUT:-\n\n";
										mem A(10, 20), B(30, 40), C;
										++C;
										++A;
										C.print();
										A.print();
										getch();
										break;
									}
									else if (e == 0)
										break;

								}
								else if (ch == 0)
									break;
								getch();
								break;
					  }
					  }
				  }
				  break;
		}
		case 2:
		{
				  int c = 1;
				  for (; !c == 0;)
				  {
					  system("cls");
					  cout << "1> what is operator overloading using friendfunction?\n\n\
							  2> why used friend function for operator overloading?\n\n\3> genaral format\n\n\
							  4> show example\n\n\n\t\t\t<0for main menu>\n\n\n\nENTER YOUR CHOICE:-    ";
					  cin >> c;
					  switch (c)
					  {
					  case 1:
					  {
								cout << "\n\n\nOPERATOR OVERLOADING USING FRIEND FUNCTION:-\n\n\
										In C++ user defined data type can be used the same way as the built in data type.suppose, in C++\
										 we can add two varriables of user defined types with the same syntax that is\
										  applied to the basic type.That is to say,C++ provides the operators with a\
										   special meaning for a data type.The process of giving such special meaning\
										    to an operator is known as operator overloading.To overload an operator a \
											 special function is needed which is called operator function.If we use a\
											  friend function as this operator function then it is called operator overloading\
											   with friend function.For using this we have to pass all the operand as parameter.";
								cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
								getch();
								break;
					  }
					  case 2:
					  {
								cout << "\n\n\nIf we want to add a user defined data\
										 type and a built in data type using operator overloading with member function\
										  then we must have to use the user defined data type as an left operand.But \
										   for the similar case, if we use operator overloading with friend function\
										    then there is no such restriction to use operand.It is very easy and comfortable\
											 to use such case.And that's why friend function is used as operator function.";
								cout << "\n\n\n\n\n\t\t\t->->->PRESS ENTER FOR NEXT<-<-<-";
								getch();
								break;
					  }
					  case 3:
					  {
								cout << "\n\nGENARAL FORMAT OF OPERATOR OVERLOADING WITH\
										 FRIEND FUNCTION:-\n\n\nDECLARATION:-\n\n\nfriend return_type operator\
										  overloadable_operator(parameter_list);\n\n\nDEFINATION:-\n\n\n\
										  return_type operator overloadable_operator(parameter_list)\n{\n\n\\body\n\n}\n";
								getch();
								break;
					  }
					  case 4:
					  {
								system("cls");
								cout << "\n\n\n---------EXAMPLE ZONE-----------\n\n\n\n\
										1. binary operator over loading using member function\n\n2. unary operator \
										overloading using member function\n\n\n\n\t\t\tENTER YOUR CHOICE:-   ";
								int ch;
								cin >> ch;
								if (ch == 1)
								{
									cout << "#include<iostream.h>\nclass frnd{\nint a,b;\npublic:\nfrnd(){a=0;b=0;}\n\
											frnd(int m,int n){a=m;b=n;}\nfriend frnd operator +(frnd,frnd);\nvoid print()\
											{cout<<a<<endl<<b;}\n};\n\nfrnd operator+(frnd x,frnd y)\n{\nfrnd p;\n\
											p.a=x.a+y.a;\np.b=x.b+y.b;\nreturn p;\n}\n\n\nvoid main(void)\n{\n\
											frnd A(10,20),B(30,40),C;\nC=A+B;\nC.print();\n}\n";
									int e;
									cout << "\n\n\nENTER YOUR CHOICE:-   ";
									cin >> e;
									if (e == 1)
									{
										cout << "INPUT:-\n\na=10  b=30\n\na=20   b=40\n\
												\n\nOUTPUT:-\n\n";
										frnd A(10, 20), B(30, 40), C;
										C = A + B;
										C.print();
										getch();
										break;
									}
									else if (e == 0)
										break;
								}
								else if (ch == 2)
								{
									cout << "#include<iostream.h>\nclass fru{\nint a,b;\npublic:\
											\nfru(){a=0;b=0;}\nfru(int m,int n){a=m;b=n;}\nfriend void operator ++(fru &);\n\
											void print(){cout<<a<<endl<<b<<endl;}\n};\n\nvoid operator++(fru &x)\n{\nx.a++;\n\
											x.b++;\n}\nvoid main(void)\n{\nfru A(10,20),B(30,40),C;\n++C;\n++A;\nC.print();\n\
											A.print();\n}\n";
									int e;
									cout << "\n\n\nENTER YOUR CHOICE:-   ";
									cin >> e;
									if (e == 1)
									{
										cout << "INPUT:-\n\na=0  b=0\n\na=10   b=20\n\
												\n\nOUTPUT:-\n\n";
										fru A(10, 20), B(30, 40), C;
										++C;
										++A;
										C.print();
										A.print();
										getch();
										break;
									}
									else if (e == 0)
										break;


									getch();
									break;
								}
								else if (ch == 0)
									break;
								getch();
								break;
					  }
					  }

				  }
		}

		}

	}
}


//************* MAIN FUNCTION *********************

int main(void)
{
	int a;
	for (;;)
	{
		system("cls");
		cout << "\n\n\n\n\n\n\n\n\n\tHere you can learn OOP(Object oriented programming).  \
				        \n\tTo Know about it here is some important articles to learn OOP.     \
						        \n\tHere We will learn OOP by CPP(C Plus Plus)\n";
		cout << "\n\n\tLeft side numerical value will help you to get the choice  \
				        \n\tNow enter your chioce to know about what you want----     \n\
						        \n\tPress 0 for exit the program!\n";
		cout << "   -> TOPICS OF INTEREST :-----------\n\n\n";
		cout << "1. Concept of class & object.\n\n2. Feature of OOP.\n\n";
		cout << "3. Private,public & protected members.\n\n4. Function overloading.\n\n";
		cout << "5. Default parameter\n\n6.Passing & returning objects\n\n";
		cout << "7.Constructors & destructors\n\n8. Friend function\n\n";
		cout << "9. Friend class\n\n\n\t";
		cout << "\t\t\t\t<<99 for next,   0 for quit>>";
		cout << "\n\n\n\n\n\n\n\nENTER YOUR CHOICE :-        ";
		cin >> a;

		if (a == 99)
		{
			system("cls");
			cout << "\n\n\n\n\n\n\n\n\n\tHere you can learn OOP(Object oriented programming).  \
					        \n\tTo Know about it here is some important articles to learn OOP.     \
							        \n\tHere We will learn OOP by CPP(C Plus Plus)\n";
			cout << "\n\n\tLeft side numerical value will help you to get the choice  \
					        \n\tNow enter your chioce to know about what you want----     \n\
							        \n\tPress 0 for exit the program!\n";
			cout << "   -> TOPICS OF INTEREST :-----------\n\n\n";
			cout << "10. Pointer to member & pointer to object\n\n11. This pointer\n\n";
			cout << "12. Operator overloadings\n\n";
			cout << "\t\t\t\t\t<<52 for back,    0 for quit >>";
			cout << "\n\n\n\n\n\n\n\nENTER YOUR CHOICE :-        ";
			cin >> a;
			if (a == 52)
				continue;
		}
		if (a == 1)
		{
			cl_ob();
			continue;
		}
		else if (a == 2)
		{
			feature();
			continue;
		}
		else if (a == 3)
		{
			ppp_m();
			continue;
		}

		else if (a == 4)
		{
			over_l();
			continue;
		}


		else if (a == 5)
		{
			def_pa();
			continue;
		}

		else if (a == 6)
		{
			pass_ret();
			continue;
		}

		else if (a == 7)
		{
			cons_des();
			continue;
		}
		else if (a == 8)
		{
			fr_function();
			continue;
		}
		else if (a == 9)
		{
			fr_class();
			continue;
		}
		else if (a == 10)
		{
			poi_m_o();
			continue;
		}

		else if (a == 11)
		{
			this_ptr();
			continue;
		}
		else if (a == 12)
		{
			op_ovr();
			continue;
		}

		if (a == 0)
			exit(0);
		getch();
		return(0);
	}
}
