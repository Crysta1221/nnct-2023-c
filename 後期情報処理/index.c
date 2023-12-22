#define practice20

#ifdef program01

#include <stdio.h>
#include <ctype.h>

int main(void) {
	int param,a = 0,i = 0,u = 0,e = 0,o = 0;
	printf("Enter anything param...\n");
	param = getchar();
	while (param != EOF) {
		param = tolower(param);
		switch (param) {
		case 'a':
			a = a + 1;
			break;
		case 'i':
			i = i + 1;
			break;
		case 'u':
			u = u + 1;
			break;
		case 'e':
			e = e + 1;
			break;
		case 'o':
			o = o + 1;
			break;
		default:
			break;
		}
		param = getchar();
	}
	printf("The following the vaule of a,i,u,e,o... -->\n a: %d\n i: %d\n u: %d\n e: %d\n o: %d",a,i,u,e,o);
	return 0;
}
#endif

#ifdef program02
#include <stdio.h>
#include <math.h>

int main(void) {
	int a, b, c, d, sum, ave;
	printf("Enter a four number with spaces.\n");
	scanf_s("%d %d %d %d", &a, &b, &c, &d);
	sum = a + b + c + d;
	ave = sum / 4;
	printf("Calculated the number.\nSUM: %d AVE: %d", sum, ave);
	return 0;
}
#endif

#ifdef program03_1
#include <stdio.h>

int main(void) {
	int card[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i, calc;

	calc = 0;
	for (i = 0; i < 10; i++) {
		calc = card[i];
		printf("card: %d\n", calc);
	}
}
#endif

#ifdef program03_2
#include <stdio.h>

int main(void) {
	int card[10];
	int i, calc, data;
	
	printf("Enter the 10 value.\n");
	for (i = 0; i < 10; i++) {
		scanf_s("%d", &data);
		card[i] = data;
	}
	calc = 0;
	for (i = 0; i < 10; i++) {
		calc = card[i];
		printf("card: %d\n", calc);
	}

}
#endif

#ifdef practice9
#include <stdio.h>

int main(void) {
	int card[100];
	int i, calc, data;
	float ave;

	printf("Enter the 10 value.\n");
	for (i = 0; i < 10; i++) {
		scanf_s("%d", &data);
		card[i] = data;
	}
	calc = 0;
	for (i = 0; i < 10; i++) {
		calc += card[i];
	}
	ave = calc / 10;
	printf("calc: %d, ave: %f\n", calc, ave);
	printf("================================\n");

	for (i = 0; i < 10; i++) {
		data = card[i];
		printf("card[%d]: %d\n", i, data);
	}

}
#endif

#ifdef practice10
#include <stdio.h>
int main(void) {
	int card[10];
	int evn[10];
	int i, data, check = 0, data2 = 0;
	
	printf("Enter the 10 number.\n");
	// Get values
	for (i = 0; i < 10; i++) {
		scanf_s("%d", &data);
		card[i] = data;
	}
	// Search Even nums
	for (i = 0; i < 10; i++) {
		check = card[i] % 2;
		if (check == 0) {
			evn[i] = card[i];
		}
		else {
			evn[i] = 0;
		}
	}

	printf("=======Entered values:=======\n");
	for (i = 0; i < 10; i++) {
		data = card[i];
		printf("card[%d]: %d\n", i, data);
	}

	printf("=======Found Even values:=======\n");
	for (i = 0; i < 10; i++) {	
		data2 = evn[i];
		if (data2 != 0) {
			printf("evn[%d]:%d\n", i, data2);
		}
	}

}
#endif

#ifdef practice11
#include <stdio.h>
int main(void) {
	int card[10];
	int i, data, cal = 0, maxint = 0;
	
	printf("Enter the 10 values.\n");
	for (i = 0; i < 10; i++) {
		scanf_s("%d", &data);
		card[i] = data;
	}

	for (i = 0; i < 10; i++) {
		cal = card[i];
		if (cal > maxint) {
			maxint = cal;
		}
	}

	printf("Max int: %d", maxint);

}
#endif

#ifdef try05
#include <stdio.h>

int main(void) {
	int card[10];
	int i, data, view = 0;
	printf("Enter the 10 values.\n");
	for (i = 0; i < 10; i++) {
		scanf_s("%d", &data);
		card[i] = data;
	}
	
	for (i = 0; i < 10; i++) {
		printf("card[%d]: %d\n", i,card[9-i]);
	}

}
#endif

#ifdef try
#include <stdio.h>

int main(void) {
	int box1, box2, tmp;
	printf("Enter the 2 number.\n");
	scanf_s("%d %d",&box1,&box2);
	printf("Entered: box1: %d | box2: %d\n", box1, box2);
	tmp = box1;
	box1 = box2;
	box2 = tmp;
	printf("Entered: box1: %d | box2: %d", box1, box2);
	return 0;
}
#endif

#ifdef practice12
#include <stdio.h>

int main(void) {
	int point[10] = { 60,80,40,90,100,80,70,30,50,20 };
	int i, j, temp;

	printf("Before:\n");
	for (i = 0; i < 10; i++) {
		printf("%d,", point[i]);
	}
	printf("\nSorting...\n");
	for (i = 0; i < 9; i++) {
		for (j = i + 1; j < 10; j++) {
			if (point[i] > point[j]) {
				temp = point[i];
				point[i] = point[j];
				point[j] = temp;
			}
		}
	}
	printf("After:\n");
	for (i = 0; i < 10; i++) {
		printf("%d,", point[i]);
	}
	return 0;
}
#endif

#ifdef practice13
#include <stdio.h>

int main(void) {
	int data[3][4] = { {25,10,20,70},{20,80,13,28},{63,14,40,100} };
	int i, j, totalx, totaly,test;
	
	// calculate x index
	for (i = 0; i < 3; i++) {
		totalx = 0;
		printf("\x1b[102m  %d  \x1b[0m|", i + 1);
		for (j = 0; j < 4; j++) {		
			printf("%4d  |", data[i][j]);
			totalx += data[i][j];
		}
		printf(" \x1b[92m%3d\x1b[0m\n", totalx);
		printf("---------------------------------------\n");
	}
	// calculate y index
	printf("\x1b[101m SUM \x1b[0m|");
	for (j = 0; j < 4; j++) {
		totaly = 0;
		for (i = 0; i < 3; i++) {
			totaly += data[i][j];
		}
		printf("\x1b[91m%4d  \x1b[0m|", totaly);	
	}
	printf("\n");
	return 0;
}
#endif

#ifdef practice14
#include <stdio.h>

int main(void) {
	int data[4][5] = { {80,63,59,60,78},{35,70,34,78,65},{65,88,85,43,80},{55,56,89,78,98} };
	int i, j, totalx, totaly;

	printf(" NUM |  çë  |  êî  |  óù  |  é–  |  âp  |\n");
	printf("=========================================\n");
	// calculate x index
	for (i = 0; i < 4; i++) {
		totalx = 0;
		printf("\x1b[102m  %d  \x1b[0m|", i + 1);
		for (j = 0; j < 5; j++) {
			printf("%4d  |", data[i][j]);
			totalx += data[i][j];
		}
		printf("\n");
		printf("-----------------------------------------\n");
	}
	// calculate y index
	printf("\x1b[101m MAX \x1b[0m|");
	for (j = 0; j < 5; j++) {
		totaly = 0;
		for (i = 0; i < 4; i++) {
			if (totaly < data[i][j]) {
				totaly = data[i][j];
			}
		}
		printf("\x1b[91m%4d  \x1b[0m|", totaly);
	}
	printf("\n");
	return 0;
}
#endif

#ifdef practice15
#include <stdio.h>
int main(void) {
	char text[21];
	int i;
	printf("Enter the any text...\n");
	gets(text); // scanf_s("%s",&text ,sizeof(text);
	for (i = 0; text[i] != '\0'; i++);
	printf("Entered the text: %s\nEntered the text length: %d", text, i);
	return 0;
}
#endif

#ifdef try151
#include <stdio.h>
int main(void) {
	char text1[65],text2[65];
	int i;
	printf("Enter the any text...\n");
	gets(text1);
	printf("text1: %s\n", text1);
	for (i = 0; text1[i] != '\0'; i++) {
		text2[i] = text1[i];
	}
	text2[i] = text1[i];
	printf("text2: %s", text2);
}

#endif

#ifdef try152
#include <stdio.h>
int main(void) {
	char text1[65], text2[65];
	int i,j;
	printf("Enter the First name...\n");
	gets(text1);
	printf("Enter the Last name...\n");
	gets(text2);
	for (i = 0; text1[i] != '\0'; i++);
	for (j = 0; text2[j] != '\0'; j++) {
		text1[i] = text2[j];
		i++;
	}
	text1[i] = text2[j];
	printf("Full name: %s", text1);

}
#endif

#ifdef practice16
#include <stdio.h>

void school_num(int num) {
	printf("School Number: %d", num);
	return;
}

void school_name(char name[]) {
	printf("School Name: %s", name);
	return;
}

void personal(int num, char name[]) {
	school_num(num);
	printf("\n");
	school_name(name);
	return;
}

int main(void) {
	int num;
	char name[65];
	printf("Enter the your school number...\n");
	scanf_s("%d", &num);
	while (getchar() != '\n');
	printf("Enter the your school name...\n");
	fgets(name, sizeof(name), stdin);
	personal(num, name);
	return 0;
}
#endif

#ifdef practice17
#include <stdio.h>
int division (int a, int b) {
	int div;
	div = a / b;
	return(div);
}
int multi(int a, int b) {
	int multi;
	multi = a * b;
	return(multi);
}

int main(void) {
	int a, b, d, m;
	printf("Enter the 2 number...\n");
	scanf_s("%d %d", &a, &b);
	d = division(a, b);
	m = multi(a, b);
	printf("Division: %d, Multi: %d", d, m);
}
#endif

#ifdef try16
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

float circumference(float rad) {
	float cir;
	cir = 2 * 3.14 * rad;
	return(cir);
}

int triangle(int base, int height) {
	int tri;
	tri = base * height / 2;
	return(tri);
}

int factorial(int n) {
	int i, fact = 1;
	for (i = 1; i <= n; i++) {
		fact = fact * i;
	}
	return(fact);
}
int main(void) {
	printf("Select the Menu:\n1.Calculate circumference\n2.Calculate triangle's area\n3.Calculate n factorial\n> ");
	int select, rad, base, height, case2, case3, n;
	float case1;
	scanf_s("%d", &select);
	switch (select) {
	default: 
		printf("Error: Please enter the 1-3 number.");
		break;
	case 1:
		printf("Calculate circumference\n");
		printf("Enter the circle's radius...\n");
		scanf_s("%d", &rad);
		case1 = circumference(rad);
		printf("Circumference: %lf",case1);
		break;
	case 2:
		printf("Calculate triangle's area\n");
		printf("Enter the triangle's base and height...\n");
		scanf_s("%d %d", &base, &height);
		case2 = triangle(base, height);
		printf("Triangle's area: %d", case2);
		break;
	case 3:
		printf("Calculate n factorial\n");
		printf("Enter the n...\n");
		scanf_s("%d", &n);
		case3 = factorial(n);
		printf("Factorial: %d", case3);
		break;
	}
	return 0;
}
#endif

#ifdef practice18
#include <stdio.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int x = 10;
	int y = 20;
	printf("Before swap: x = %d, y = %d\n", x, y);
	swap(&x, &y);
	printf("After swap: x = %d, y = %d\n", x, y);
	return 0;
}
#endif


#ifdef practice20
#include <stdio.h>
#define MAX_CHAR_SIZE 10

int get_max(int data[]) {
	int tmp = 0;
	for (int i = 0; i < MAX_CHAR_SIZE; i++) {
		if (data[i] > tmp) {
			tmp = data[i];
		}
	}
	return tmp;
}

void get_data(int data[]) {
	printf("Enter the %d number.\n", MAX_CHAR_SIZE);
	for (int i = 0; i < MAX_CHAR_SIZE; i++) {
		printf("data[%d]: ", i);
		scanf_s("%d", &data[i]);
	}
}

int main(void) {
	int data[MAX_CHAR_SIZE];
	get_data(data);
	int max = get_max(data);
	printf("Max: %d", max);
	return 0;
}
#endif
