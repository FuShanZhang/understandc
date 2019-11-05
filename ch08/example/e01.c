/*判断三角形*/
#include<stdio.h>
#include<stdlib.h>
enum Triangle {normal=1, twoEq=2, threeEq=3, not=4};

void mynormal(void) {
    puts("不是三角形");
}

void mytwoEq(void) {
    puts("等腰");
}

void mythreeEq(void) {
    puts("等边");
}

void mynot(void) {
    puts("不是三角形");
}

enum Triangle judgeTri(int a, int b , int c) {
	if (a + b <= c || a + c <= b || b + c <= a || abs(a-b)>=c || abs(a-c)>=b || abs(b-c)>=a) {
        return not;
    }
    else if (a == b && b== c) {
        return threeEq;

    } else if (a == b || a == c || b == c) {
        return twoEq;
    } else {
        return normal;
    }

}

int main(void) {
    enum Triangle myjudge;


    switch (judgeTri(1, 10, 1)) {
    case normal : mynormal(); break;

    case twoEq : mytwoEq(); break;

    case threeEq : mythreeEq() ; break;

    case not : mynot(); break;

    }
}



