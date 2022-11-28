#include<iostream>
using namespace std;
class Book{
public:
	string title;
	string author;
	int pages;
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
