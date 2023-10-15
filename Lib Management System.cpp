#include<iostream>
using namespace std;
class Library{
	public:
     string name;
     string author;
Library(){	
}

Library(string name,string author){
	this-> name=name;
	this->author=author;
	
}

void display(){
	cout<<"The book name is "<<name<<endl;
	cout<<"The Author of book is: "<<author<<endl;
}

};


int main(){
    Library book[100];
    int numofbooks=0;
    int arraysize=100;
    
    
    while (true) {
    	cout<<""<<endl; 
        cout<<"1,To add a book in library"<<endl;
        cout<<"2,To display a library book"<<endl;
        cout<<"3,To search a book in library"<<endl;
        cout<<"4,To remove a book in  library"<<endl;
        cout<<"5,To exit the program"<<endl;
        int option;
        cout<<"Enter option"<<endl;
        cin>>option;
        
        switch(option)
        {
            case 1:
                if(numofbooks<arraysize)
                {
                    string name;
                    string author;
                    cout<<"Enter Book Name"<<endl;
                    getline(cin>>ws,name);
                    cout<<"Enter Author Name"<<endl;
                    getline(cin>>ws,author);
                    book[numofbooks]=Library(name,author);
                    numofbooks++;
                    cout<<"Book added succesfully..."<<endl;
                }
                else
                {
                    cout<<"Sorry the library is full, no space to add a book"<<endl;
                }
                break;
                
            case 2:
                cout<<"List of Book"<<endl;
                cout<<"........................................................."<<endl;
                cout<<"........................................................."<<endl;
                for(int i=0;i<numofbooks;i++){
                    book[i].display();
                }
                break;
            
			case 3:
        
    if (numofbooks == 0) {
        cout << "No books in the library to search." << endl;
    } else {
        string searchName;
        cout << "Enter the name of the book to search: ";
        cin.ignore(); // Clear the input buffer
        getline(cin, searchName);

        for (int i = 0; i < numofbooks; i++) {
            if (book[i].name == searchName) {
                cout << "Book found:" << endl;
                book[i].display();
            
            }
            else{
            	cout<<"Book not found"<<endl;
			}
      	  }

    }
    break;

                

            case 4:
                // code to remove a book
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid option. Please try again." << endl;
                break;
        }
    }
}
