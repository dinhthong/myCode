/*
@brief This program is intended for deep understanding the struct type in C programming language. 
Because when it comes to the Microntroller programming. It requires deeply understanding.
*/
#include <stdio.h>
//#include <conio.h>
#include <math.h>
#include <string.h>
void printBook(struct Books book);
void printBook2(struct Books *book);
	/*Defining a structure Books
title is called structure member of structure Books	
The structure Books is defined outside the main because it's used in both main() and user define function!
	 */
struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
} book;  

int main()
{
	 struct Books Book1;        /* Declare Book1 of type Book */
	 //declaring a pointer pointing to a Book structure 
	 struct Books *struct_pointer;
	 struct_pointer=&Book1; // which is the same as declaring RCC=(RCC_TypeDef *)(an address in RAM)
	 //assgining values for the Book1 members
	  strcpy(Book1.title,"C Programming");
   strcpy(Book1.author,"Nuha Ali"); 
   strcpy(Book1.subject,"C Programming Tutorial");
   Book1.book_id = 6495407;
   //pass the value to the printBooks function
   printBook(Book1);
   printf("@-----------splitter--------------@\n");
   printBook(*struct_pointer);
   printf("@-----------splitter--------------@\n");
     printBook2(struct_pointer);
      printf("@-----------splitter--------------@\n");
      printf( "Book title2 : %s\n",struct_pointer->title); // RCC->AHB1ENR retrieval
      
      return 0;
}

void printBook(struct Books book) {

   printf( "Book title : %s\n", book.title);
   printf( "Book author : %s\n", book.author);
   printf( "Book subject : %s\n", book.subject);
   printf( "Book book_id : %d\n", book.book_id);
}
/* @brief    output the value with different function para type
@para     the address pointing to a Books structure
*/
void printBook2(struct Books *book) {

   printf( "Book title2 : %s\n", book->title);
   printf( "Book author2 : %s\n", book->author);
   printf( "Book subject2 : %s\n", book->subject);
   printf( "Book book_id2 : %d\n", book->book_id);
}
