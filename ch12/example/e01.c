#include <stdio.h>
#include <stdlib.h>

typedef struct Student Student;

struct Student {
    int age;	// 4
    double height;	// 8
    int sex;	// 4
    char name[8];	// 8
    Student *neighbor;
};

typedef struct Class{
    int grade;
    int count;
    Student students[100];
} Class;

typedef struct String {
    int length;
    char *value;
    int capacity;
} String ;

String *valueOf(int num) {

    String *rlt = (String *) malloc(sizeof(String));
    rlt->length = 0;
    rlt->capacity = 100;
    rlt->value = (char *)calloc(rlt->capacity, sizeof(char));

    int index = 0;

    while (num) {
        rlt->value[index++] = num % 10 + '0';
        num /= 10;
    }

    rlt->value[index] = '\0';
    rlt->length = index;
    int temp;
	printf("string->value[0]=%c\n", rlt->value[0]);
    printf("%c\n", rlt->value[1]);
    printf("%c\n", rlt->value[2]);
    printf("%c\n", rlt->value[3]);
    printf("length = %d\n", rlt->length);
    for (int i = 0; i < rlt->length / 2; ++i) {
        temp = rlt->value[i];
        rlt->value[i] = rlt->value[rlt->length - i - 1];
        rlt->value[rlt->length - i - 1] = temp;
    }

    return rlt;
}

void printString(String *string) {
    printf("%d\n", strlen(string->value));
    printf("%c\n", string->value[0]);
    printf("%c\n", string->value[1]);
    printf("%c\n", string->value[2]);
    printf("String length=%d\nString value=%s\n", string->length, string->value);
}

Class *addStudent(Student student) {

    printf("sizeof(Class)=%lu\n", sizeof(Class));
    Class *classInside = (Class *)malloc(1 * sizeof(Class));
    classInside = (Class *)calloc(1, sizeof(Class));
    classInside = (Class *)realloc(classInside, 5 * sizeof(Class));

    classInside->count = 0;
    classInside->grade = 1;
    classInside->students[classInside->count++] = student;
    return classInside;

    // printf("inside class=%p\n", &class);
    // class->students[class->count++] = student;
    // printf("inside addStudent count = %d\n", class->count);
    // return &classInside;
}

void printStudent(Student student) {
    printf("student name=%s,age=%d,height=%f\n", student.name, student.age, student.height);
}


int main(int argc, char const *argv[]) {

    String *string = valueOf(1234);
    printString(string);
    // Student stuNeigh;
    // Student stu = {22, 185.0, 1, "xiao", &stuNeigh};
    // Class *classp = addStudent(stu);
    // // Class class1 = addStudent(&class, stu);

    // // printf("is equals = %d\n", &class == addStudent(stu));
    // // printf("class addr = %p\n", &class1);
    // // printf("outside class=%p\n", &class);
    // // printf("outside count = %d\n", class.count);

    // for (int i = 0; i < classp->count; ++i) {
    //     printStudent(classp->students[i]);
    // }

    // // printf("size = %d\n", (*((int *)classp - 4)));

    // free(classp);


    // stu.neighbor = &stuNeigh;

    // stu.neighbor->name[0] = '1';
    // stu.neighbor->name[1] = '2';
    // stu.neighbor->name[2] = '\0';

    // printf("%lu\n", sizeof(Student));
    // printf("%p\n", &stu.age);
    // printf("%p\n", &stu.height);
    // printf("%p\n", stu.name);

    // int a, b, c, d, e, f, g;
    // printf("=========\n");
    // printf("%p\n", &a);
    // printf("%p\n", &b);
    // printf("%p\n", &c);
    // printf("%p\n", &d);
    // printf("%p\n", &e);
    // printf("%p\n", &f);
    // printf("%p\n", &g);


    // // Student xiaoqiang;
    // // xiaoqiang = stu;
    // // stu.age = 20;
    // // stu.height = 176.5;
    // // stu.name[0] = 'x';
    // // stu.name[1] = 'm';
    // // stu.name[2] = '\0';

    // printf("student name=%s,age=%d,height=%f,stuNeighName=%s\n", stu.name, stu.age, stu.height, stu.neighbor->name);
    // printf("student name=%s,age=%d,height=%f\n",xiaoqiang.name,xiaoqiang.age,xiaoqiang.height);



    return 0;
}