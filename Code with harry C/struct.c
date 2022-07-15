#include <stdio.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
};
struct Student harry, ravi, shubham;

int main()
{

    harry.id = 1;
    ravi.id = 2;
    harry.id = 3;
    harry.marks = 421;
    shubham.marks = 321;
    ravi.marks = 321;
    harry.fav_char = 'p';
    shubham.fav_char = 'p';
    ravi.fav_char = 'p';
    printf("Harry got %d marks,id of harry is %d\nharry's favourite character is %c", harry.marks, harry.id, harry.fav_char);
    printf("Harry got %d marks,id of harry is %d\nharry's favourite character is %c", harry.marks, harry.id, harry.fav_char);
    printf("shubham got %d marks,id of shubham is %d\nshubham's favourite character is %c", shubham.marks, shubham.id, shubham.fav_char);

    return 0;
}