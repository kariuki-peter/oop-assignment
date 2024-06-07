// A program for library management system.
#include<iostream>
#include<conio.h>
#include<iostream>
using namespace std;


class Book{
	private:
		string bkn,title,author,edition,publication;
	public:

	    	void setBkn(string a){bkn = a;}
	    	void setTitle(string b){ title= b;}
	    	void setAuthor(string c){author = c;}
	    	void setEdition(string d){edition =d;}
	    	void setPublication(string e){publication =e;}

		    string getBkn(){return bkn;}
	     	string getTitle(){return title;}
	    	string getAuthor(){return author;}
	    	string getEdition(){return edition;}
		    string getPublication(){return publication;}
};
void addBook(int counter);
void removeBook(int counter);
void modifyBook(int counter);
void searchBook(int counter);
void viewAllBooks(int counter);

int counter=0;

void increament(int a){
	a++;
	counter=a;
}

void decreament(int a){
	a--;
	counter=a;
}

Book books[10];

int main() {

string choice;

system ("CLS");

cout<<" LIBRARY MANAGEMENT SYSTEM\n\n";
cout<<"[1] Add bkn\n";
cout<<"[2] Add Book\n";
cout<<"[3] Remove Book \n";
cout<<"[4] search Book\n";
cout<<"[5] view all Book\n";



cout<<"ENTER CHOICE: ";
getline(cin,choice);
system("CLS");

if(choice=="1"){
	addBook(counter);
}
else if(choice=="2"){
	removeBook(counter);
}
else if(choice=="3"){
	searchBook(counter);
}

else if(choice=="4"){
	viewAllBooks(counter);
}
else{
	main();
}

_getch();
return 0;
}

void addBook(int counter){
   string bkn,title,author,edition,publication;
	cout<<"ADD BOOK\n\n";
	if(counter<10){

		cout<<"Enter BKN:";
	    getline(cin,bkn);//
		cout<<"Enter Title:";
		getline(cin,title);
		cout<<"Enter Author:";
		getline(cin,author);
		cout<<"Enter Edition:";
		getline(cin,edition);
		cout<<"Enter Publication:";
		getline(cin,publication);

		books[counter].setBkn(bkn);
		books[counter].setTitle(title);
		books[counter].setAuthor(author);
		books[counter].setEdition(edition);
		books[counter].setPublication(publication);
		increament(counter);
        cout<<"Book added successful!\n\nPress any key to continue ...";
        _getch();
        main();
		}
	else{
	 cout<<"Can't Add more book!\n\nPress any key to continue ...";
     _getch();
	 main();
	}
}
 void removeBook(int counter){
    string bkn;
    int choice;
 	cout<<"Remove book\n\n";
 	if(counter==0){
 		cout<<"There is no book to delete!\nPress any key to continue ... ";
 		_getch();
 		main();
	 }
 	cout<<"Enter BKN :\n";
 	getline(cin,bkn);

 	for (int i = 0; i < counter; i ++){

 		if(books[i].getBkn()==bkn){
 		   cout<<"book is available\n\n";
 		   cout<<"Do you want to remove book?\n[1]Yes\n[2]NO\n\nEnter choice:";
 		   cin>>choice;
 		   if(choice==1){
 		   	books[i].setBkn("");
		    books[i].setTitle("");
		    books[i].setAuthor("");
		    books[i].setEdition("");
		    books[i].setPublication("");

		    for(int a=i;a<counter;a++){
		    	books[a] = books[a+1];
			}
		    books[9].setBkn("");
		    books[9].setTitle("");
		    books[9].setAuthor("");
		    books[9].setEdition("");
		    books[9].setPublication("");
		    decreament(counter);
			cout<<"Book is removed succesfully!\n\\n Press any key to continue ... ";
			_getch();
			 main();
		 }
          else{
          	main();
          }
      }
  }
  cout<<"\nBook is not available!\n\nPress any key to continue ... ";
  _getch();
    main();
}
   void searchBook(int counter) {
    	string bkn;
    	int choice;
    	bool print=false;
    	cout<<"Search book\n\n";
    	if(counter==0){
    		cout<<"There is no book\n\nPress any key to continue ...";
    		_getch();
	         main();
		}
		cout<<"Enter BKN: ";
	     getline(cin,bkn);
	     for(int i=0; i<counter;i++){
		if(books[i].getBkn()==bkn){
			cout<<"\nBOOK FOUND!\n\n";
			cout<<"BKN: "<<books[i].getBkn()<<endl;
		    cout<<"TITLE: "<<books[i].getTitle()<<endl;
	    	cout<<"AUTHOR: "<<books[i].getAuthor()<<endl;
	    	cout<<"EDITION: "<<books[i].getEdition()<<endl;
		    cout<<"PUBLICATION: "<<books[i].getPublication()<<endl;
		    print=true;
		}
	}
	if(print){
		cout<<"Press any key to continue ...";
		_getch();
	    main();
	}

	else{
		cout<<"\nBOOK NOT FOUND!\n\nPress any key to continue ...";
		_getch();
	    main();
	}
   }
   void viewAllBooks(int counter) {

   	        cout<<"VIEW ALL BOOKS\n\n";
   	        for(int i=0; i<counter; i++){
			cout<<"BKN: "<<books[i].getBkn()<<endl;
		    cout<<"TITLE: "<<books[i].getTitle()<<endl;
	    	cout<<"AUTHOR: "<<books[i].getAuthor()<<endl;
	    	cout<<"EDITION: "<<books[i].getEdition()<<endl;
		    cout<<"PUBLICATION: "<<books[i].getPublication()<<endl;
   	        }

   }










