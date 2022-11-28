//1
#include<iostream>
using namespace std;
class Book{
public:
	string title;
	string author;
	int pages; //class init end
	//constructor
	Book(){
	cout<<"creating objects"<<endl;
	}
};
int main()
{
 Book book1; //data type var. name
 book1.title = "harry potter";
 book1.author = "JK rowling";
 book1.pages = 500;

cout<<book1.title;
return 0;
}

//2
#include<iostream>
using namespace std;
class Book{
public:
	string title;
	string author;
	int pages;
	Book(string name){
	cout<<name<<endl;
	}
};
int main()
{
 Book book1("new harry potter book"); //para 

pass/output lso
 book1.title = "harry potter";
 book1.author = "JK rowling";
 book1.pages = 500;

cout<<book1.title;
return 0;
}

//3
#include<iostream>
using namespace std;
class Book{
public:
	string title;
	string author;
	int pages;
	//constructor
	Book(string aTitle, string aAuthor, int aPages){
	title = aTitle;
	author = aAuthor;
	pages = aPages;
	}
};
int main()
{
  Book book1("harry potter", "JK rowling", 500); 
  Book book2("xyz", "JK", 900);	

cout<<book1.title;
return 0;
}
