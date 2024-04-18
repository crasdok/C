#if 0
#include <stdio.h>

	int main(void)
	{
		int a;
		int b;
		int c;

		for (a = 0; a < 9; a++)
		{
			for (b = a; b <=  - 1; b++) {
				printf(" ");
			}
			for (c = 5; c <= (a * 2); c++) {
				printf("%d", c);
			}
			printf("\n");
		}


		return 0;
	}

# endif

	// 2024.04.17
#if 0
/*
	
*/

#include <stdio.h>
// char c; 전역 변수 : 전역별수(global): data seg에 저장됨

	int main(void)
	{
		/* 변수(variavle) : 저료(data)를 저장하는 메모리(ram, rom, flash)공간
		* char c : 지역 변수(local): stack에 저장된다.
		char는 문자가 아니라 1byte(8bit)를 저장하는 공간을 의미 한다.
		저장 범위는 -127 ~127
		*/
		char c;

		unsigned char uc = 0xff; // unsignded char : 0 ~ 255
		unsigned char ua[10];
		//0x00 ~ 0xff = 0000 0000~1111 1111
		//unsigned char uc= 0b11111111;  binary
		//unsigned char uc= 255;         decimal
		short s; // 2byte자리 저장 공간을 확보
		unsigned short us; // 2byte 0~0xffff ffff(65535)
		int i; // i라는 이름으로 4byte짜리  메모리 공간을 확보
		long l; // l이라는 이름으로 4byte짜리  메모리 공간을 확보

		// 아래 3개의 문장 결과가 동일하다
		uc = 0xff; //255
		uc = 0b11111111; 
		uc = 255;
		
		printf("uc : %d\n", uc); // deciaml 로 출력 255
		printf("uc : %0x\n", uc); // hexa값으로 출력 ff

		uc++; // uc = uc+1; uc라는 변수의 내용을 1 증가
			  // overflow 가 발생이 되어 0이 된다.
		printf("uc : %d\n", uc); // deciaml 로 출력 0
		printf("uc : %0x\n", uc); // hexa값으로 출력 0

		// size of(): 변수의 크기가 몇byte인지 크기를 확이하는 함수이다
		// MCU를 처음 접했을때 확인 용으로 유용하다.

		printf("char:\t%d\n", (int) sizeof(char)); //변수 type지정
		printf("c char:\t%d\n", (int) sizeof(c)); //변수 이름
		printf("unsigned char:\t%d\n", (int)sizeof(unsigned char));
		printf("uc unsigned char:\t%d\n", (int)sizeof(uc));
		printf("ua unsigned char:\t%d\n", (int)sizeof(ua));
		printf("us unsigned short:\t%d\n", (int)sizeof(us));
		printf("s short:\t%d\n", (int)sizeof(s));
		printf("i int:\t%d\n", (int)sizeof(i));
		printf("l long:\t%d\n", (int)sizeof(l));
		printf("float:\t%d\n", (int)sizeof(float));

		printf("%d\n", 12); // decimal값 10진수
		printf("%d\n", 014); // octal값 8진수
		printf("%d\n", 0x0c); // hex값 16진수

		printf("A: %c\n", 'A'); //1bye만 들어감
		printf("A: %s\n", "And"); //문장 전체가 들어감

		char a[10] = "ABCDEFGHI";
		printf("a: %s\n", a);
		char b[2] = "a";
		printf("b: %s\n", b);
		return 0;
	}
# endif

	// 2024.04.17
#if 0
#include <stdio.h>
	int main(void)
	{
		int i = 10;

		//10 을 demincal로 출력
		printf("10: %d\n", 10);
		printf("I: %d\n", i);

		// floating 처리
		printf("%lf\n", 3.4); // default값이 소수점 6자리까지 출력
		printf("%.1f\n", 3.44456);
		printf("%.10f\n", 3.44456);
		printf("%lf, %.1lf, %10lf\n", 3.4, 3.44, 3.12314);

		char c;
		int ch[2];

		c = 'A'; // 01000001, 0x41, 65
		ch[0] = 'A'; //문자로 집어 넣을때
		ch[0] = 0x41;
		ch[0] = 0b01000001;
		ch[1] = '\0'; //null값을 집어 넣는다.
		// ch[1]=0; 
		printf("c : %c\n", c);
		printf("ch : %s\n", ch);

		return 0;
}
#endif

	//2024.04.17 3교시 예제
#if 0
#include <stdio.h>

	int main(void)
	{
		char ch = 'A';
		printf("문자 입력 : %c\n", ch+32);
		printf("a문자의 아스키 코드 값은 %d입니다.\n", ch+32);

		return 0;
	}
#endif

	//2024.04.17 숙제(아스키코드 표)
#if 0
/*
			ASCII CODE TALE
		    ===============
       DEC       HEX       OCT       CHAR
	   ===       ===       ===       ====

*/
#include <stdio.h>

	int main(void)
	{
		const char *a[] = {"NUL", "SOH", "ETX", "EOT", "ENQ", "ACK", "BEL", "BS", "TAB", "LF", "VT", "FF", "CR", "SO", "SI", "DLE", "DC1", "DC2", "DC3", "DC4", "NAK", "SYN", "ETB", "CAN", "EM", "SUB", "ESC", "FS", "GS", "RS", "US"};
		printf("%30s", "ASCII CODE TABLE\n");
		printf("%30s", "===============\n");
		printf("%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s\n", "DEC", "HEX", "OCT", "BIN" ,"CHAR", "DEC", "HEX", "OCT", "BIN", "CHAR", "DEC", "HEX", "OCT", "BIN", "CHAR", "DEC", "HEX", "OCT", "BIN", "CHAR");
		printf("%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s\n", "===", "===", "===", "===","====", "===", "===", "===", "===", "====", "===", "===", "===", "===", "====", "===", "===", "===", "===", "====", );
		for (int i = 0; i < 32; i++)
		{
			printf("%10d%10.2x%10o%10s%10d%10.2x%10o%10c%10d%10.2x%10o%10c%10d%10.2x%10o%10c\n", i, i, i, a[i], i + 32, i + 32, i + 32, i + 32, i + 64, i + 64, i + 64, i + 64, i + 96, i + 96, i + 96, i + 96);
		}
		return 0;
	}
#endif

	//2024.04.17 scanf
#if 0
#include <stdio.h>
	int main(void)
	{
		//학점 평점 이름(a 3.2 SIKWON) (a 4.0 SIKWON)
		// 학점:4.0
		// 평점 : A
		// 이름 : SIKWON
		double score;  //학점
		char grade[4]; // 평점
		char name[20]; // 이름

		while (1)
		{
			printf("학점 평점 이름(A 3.2 SIKWON): ");
			scanf("%s%lf%s", &grade, &score, name); // 배열인 경우&를 안붙여도 됨
			if (grade[0] == 'F')
			{
				return 0;
			}
			else
			{
				printf("학점: %c\n", grade[0]);
				printf("평점: %.1f\n", score);
				printf("이름: %s\n", name);
			}
		}

		return 0;

}
#endif

	//2024.04.17 p.76
#if 0
#include <stdio.h>
	int main(void)
	{
		int age;
		double height;

		printf("나이와 키를 입력하세요 :");
		scanf("%d%lf", &age, &height);
		if (age == 0 && height == 0)
		{
			return 0;
		}
		else
		{
			printf("나이는 %d살, 키는 %.1lfcm 입니다\n", age, height);
		}
		return 0;
}
#endif

	//2024.04.17 
#if 0
#include<stdio.h>
	int main(void)
{
		int a, b;
		scanf("%d %d", &a, &b);
		double res;

		res = ((double)a) / ((double)b);
		
		printf("a = %d, b = %d\n", a, b);
		printf("a /b의 결과 : %.1lf\n", res);

		a = (int)res;
		printf("(int) %.1lf의 결과 : %d\n", res, a);
}
#endif

	//2024.04.17 비트 쉬프트 연산자(2진수 나타내기)
#if 0
#include <stdio.h>
	int main(void)
	{
		unsigned char x = 0x33; // 0011 0011
		unsigned short us = 0x3333; // 0011 0011  0011 0011
		int r;
		for (int i = 7; i >= 0; i--)
		{
			r = x >> i & 1;
			printf("%d", r);
		}
		printf("\n");
		for (int i = 15; i >= 0; i--)
		{
			r = us >> i & 1;
			printf("%d", r);
		}
		printf("\n");
//		printf("a << 1 : %d\n", a << 1);
//		printf("a >> 2 : %d\n", a >> 2);
		return 0;
}
#endif

	//2024.04.17 과제 p.22
#if 0
#include <stdio.h>
	int main(void)
	{
		printf("Be happy\n");
		printf("12345678901234567890\n");
		printf("My\tfriend\n");
		printf("Cow\rW\a\n");

		return 0;
}
#endif

#if 0
#include <stdio.h>
	int main(void)
	{
		printf("%d\n", 10);
		printf("%lf\n", 3.4);
		printf("%.1lf\n", 3.45);
		printf("%.10lf\n", 3.4);

		printf("%d과%d의 합은 %d입니다.\n", 10, 20, 10 + 20);
		printf("%.1lf-%.1f = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

		return 0;
	}
#endif

#if 0
#include <stdio.h>
	int main(void)
	{
		printf("%d\n", 10);
		printf("%lf\n", 3.4);
		printf("%.1lf\n", 3.45);
		printf("%.10lf\n", 3.4);

		printf("%d과%d의 합은 %d입니다.\n", 10, 20, 10 + 20);
		printf("%.1lf-%.1f = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

		return 0;
	}
#endif

	//2024.04.17. 집에서한 과제 
#if 0 
#include <stdio.h>
	int main(void)
	{
		printf("%d\n", 10);
		printf("%lf\n", 3.4);
		printf("%.1lf\n", 3.45);
		printf("%.10lf\n", 3.4);

		printf("%d과%d의 합은 %d입니다.\n", 10, 20, 10 + 20);
		printf("%.1lf-%.1f = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

		return 0;
	}
#endif

#if 0 
#include <stdio.h>
	int main(void)
	{
		printf("%. 11f\n", 1e6);
		printf("%.7lf\n", 3.14e-5);
		printf("%le\n", 0.0000314);
		printf("%.2le\n", 0.0000314);

		return 0;
	}
#endif

#if 0 
#include <stdio.h>
	int main(void)
	{
		int a;
		int b;
		int c;
		double da;
		char ch;

		a = 10;
		b = a;
		c = a + 20;
		da = 3.5;
		ch = 'A';

		printf("변수 a의 값 :%d\n", a);
		printf("변수 b의 값 : %d\n", b);
		printf("변수 c의 값 : %d\n", c);
		printf("변수 da의 값 : %.1lf\n", da);
		printf("변수 ch의 값 :%c\n", ch);

		return 0;
	}
#endif

#if 0 
#include <stdio.h>
	int main(void)
	{
		char ch1 = 'A';
		char ch2 = 65;

		printf("문자 %c의 아스키 코드 값 : %d\n", ch1, ch1);
		printf(" 아스키 코드값이 %d인 문자 : %c\n", ch2, ch2);

		return 0;
	}
#endif

#if 0 
#include <stdio.h>
	int main(void)
	{
		char ch1 = 'A';
		char ch2 = 65;

		printf("문자 %c의 아스키 코드 값 : %d\n", ch1, ch1);
		printf(" 아스키 코드값이 %d인 문자 : %c\n", ch2, ch2);

		return 0;
	}
#endif

#if 0 
#include <stdio.h>
	int main(void)
	{
		float ft = 1.234567890123456789;
		double db = 1.234567890123456789;

		printf("float형 변수의 값 : %.20f\n", ft);
		printf("double형 변수의 값: %.20lf\n", db);

		return 0;

	}
#endif

#if 0
#include <stdio.h>

	int main(void)
	{

		int kor = 70;
		int eng = 80;
		int mat = 90;
		int tot;

		tot = kor + eng + mat;
		printf("국어: %d,영어:%d,수: %d\n", kor, eng, mat);
		printf("총점 : %d\n", tot);

		return 0;

	}
#endif

#if 0
#include <stdio.h>

	int main(void)
	{
		char grade;
		char name[20];

		printf("학점 입력 : ");
		scanf("%c", &grade);
		printf("이름 입력 : ");
		scanf("%s", name);
		printf("%s의 학점은 %c입니다. \n", name, grade);


		return 0;

	}
#endif

#if 0
#include <stdio.h>

	int main(void)
	{
		char ch;
		printf("문자입력 :");
		scanf("%c", &ch);
		printf("문자입력 : %c\n", ch);
		printf("%c문자의 아스키 코드 값은 %d입니다\n", ch);

		return 0;

	}
#endif

#if 0
#include <stdio.h>

	int main(void)
	{
		int a = 10, b = 10;

		++a;
		--b;

		printf("a : %d\n", a);
		printf("b : %d\n", b);

		return 0;

	}
#endif

#if 0
#include <stdio.h>

	int main(void)
	{
		int a = 5, b = 5;
		int pre, post;
		pre = (++a) * 3;
		post = (b++) * 3;

		printf("초깃값 a=%d, b =%dln", a, b);
		printf("전위형: (++a)* 3 = %d, 후위형: (b++) * 3 = %d\n", pre, post);

		return 0;

	}
#endif

#if 0
#include <stdio.h>

	int main(void)
	{
		int a = 10, b = 20, c = 10;
		int res;

		res = (a > b);
		printf("a > b: %d\n", res);
		res = (a >= b);
		printf("a >= b : %d\n", res);
		res = (a < b);
		printf("a < b :%d\n", res);
		res = (a <= b);
		printf("a <= b :%d\n", res);
		res = (a <= c);
		printf("a <= c :%d\n", res);
		res = (a == b);
		printf("a == b : %d\n", res);
		res = (a != c);
		printf("a != c : %d\n", res);

		return 0;

	}
#endif

#if 0
#include <stdio.h>

	int main(void)
	{
		int a = 30;
		int res;

		res = (a > 10) && (a < 20);
		printf("(a > 10) && (a < 20) : %d\n", res);
		res = (a < 10) || (a > 20);
		printf("(a < 10) || (a > 20) : %d\n", res);
		res = !(a >= 30);
		printf("! (a >= 30) : %d\n", res);

		return 0;

	}
#endif

#if 0
#include <stdio.h>

	int main(void)
	{
		double a = 4.0, b = 1.2;
		printf("%.1f + %.1f = %.1f\n", a, b, a + b);
		printf("%.1f - %.1f = %.1f\n", a, b, a - b);
		printf("%.1f * %.1f = %.1f\n", a, b, a * b);
		printf("%.1f / %.1f = %.1f\n", a, b, a / b);

		return 0;


	}
#endif

#if 0
#include <stdio.h>

	int main(void)
	{
		int kor = 3, eng = 5, mat = 4;
		int res;
		int credits = kor + eng + mat;
		float kscore = 3.8, escore = 4.4, mscore = 3.9;
		float grade = (kscore + escore + mscore) / 3;

		if (credits >= 10 && grade > 4.0)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}

		return 0;


	}
#endif

#if 0
#include <stdio.h>

	int main(void)
	{
		int a = 10, b = 20, res;

		res = (a > b) ? a : b;
		printf("큰 값 : %d\n", res);

		return 0;


	}
#endif

#if 0
#include <stdio.h>

	int main(void)
	{
		int a = 10;
		int b = 12;

		printf("a & b : %d\n", a & b);
		printf("a ^ b : %d\n", a ^ b);
		printf("a | b : %d\n", a | b);
		printf("~a : %d\n", ~a);
		printf("a << 1 : %d\n", a << 1);
		printf("a >> 2 : %d\n", a >> 2);

		return 0;


	}
#endif

#if 0
#include <stdio.h>

	int main(void)
	{
		int res;

		res = sizeof(short) > sizeof(long);
		printf("%s", res ? "short" : "long");
		return 0;


	}
#endif

#if 0
#include <stdio.h>

	int main(void)
	{
		int seats = 70;
		int audience = 65;
		double rate = ((double)audience) / ((double)seats);

		printf("입장률 : %.1f%%", rate * 100);

		return 0;


	}
#endif

#if 0
#include <stdio.h>

	int main(void)
	{
		int hour, min, sec;
		double time = 3.76;

		hour = (int)time;
		time = time - hour;
		time = time * 60.0;

		min = (int)time;
		time = time - min;
		time = time * 60.0;

		sec = (int)time;

		printf("3.76시간은 %d시간 %d분 %d초입니다.\n", hour, min, sec);

		return 0;


	}
#endif

#if 0
#include <stdio.h>

	int main(void)
	{
		int hour, min, sec;
		double time = 3.76;

		hour = (int)time;
		time = time - hour;
		time = time * 60.0;

		min = (int)time;
		time = time - min;
		time = time * 60.0;

		sec = (int)time;

		printf("3.76시간은 %d시간 %d분 %d초입니다.\n", hour, min, sec);

		return 0;


	}
#endif

#if 0
#include <stdio.h>

	int main(void)
	{
		double weight, height, bmi;

		printf("몸무게(kg)와 키(cm) 입력 :");
		scanf_s("%lf%lf", &weight, &height);
		((bmi >= 20.0) && (bmi < 25.0)) ? printf("표준입니다.\n")
			: printf("체중관리가 필요합니다.\n");

		return 0;


	}
#endif

	// 2024.04.17 과제 끝

	//2024.04.17. 아스키코드 2진수추가
#if 1
#include <stdio.h>

// 문자를 2진수로 변환하여 출력하는 함수
	void printBinary(int n) {
		// 2진수를 저장할 문자열
		char binary[9]; // ASCII 코드는 8비트이므로 8자리의 문자열이면 충분함
		binary[8] = '\0'; // 문자열의 끝을 표시하는 NULL 문자
		// 2진수 변환
		for (int i = 7; i >= 0; --i) {
			binary[i] = (n & 1) ? '1' : '0'; // 각 비트를 문자로 변환하여 저장
			n >>= 1; // 다음 비트로 이동
		}
		// 변환된 2진수 출력
		printf("%s", binary);
	}

	int main(void) {
		const char* a[] = { "NUL", "SOH", "STX", "ETX", "EOT", "ENQ", "ACK", "BEL", "BS", "TAB", "LF", "VT", "FF", "CR", "SO", "SI", "DLE", "DC1", "DC2", "DC3", "DC4", "NAK", "SYN", "ETB", "CAN", "EM", "SUB", "ESC", "FS", "GS", "RS", "US" };
		printf("%30s", "ASCII CODE TABLE\n");
		printf("%30s", "===============\n");
		printf("%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s\n", "DEC", "HEX", "OCT", "BIN", "CHAR", "DEC", "HEX", "OCT", "BIN", "CHAR", "DEC", "HEX", "OCT", "BIN", "CHAR", "DEC", "HEX", "OCT", "BIN", "CHAR");
		printf("%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s\n", "===", "===", "===", "===", "====", "===", "===", "===", "===", "====", "===", "===", "===", "===", "====", "===", "===", "===", "===", "====");

		for (int i = 0; i < 32; i++) {
			printf("%10d%10.2x%10o%5c", i, i, i, ' ');
			printBinary(i);
			printf("%7s", a[i]);
			printf("%10d%10.2x%10o%5c", i + 32, i + 32, i + 32, ' ');
			printBinary(i + 32);
			printf("%7c", i + 32); // ASCII 문자 출력
			printf("%10d", i + 64);
			printf("%10.2x%10o%5c", i + 64, i + 64, ' ');
			printBinary(i + 64);
			printf("%7c", i + 64); // ASCII 문자 출력
			printf("%10d", i + 96);
			printf("%10.2x%10o%5c", i + 96, i + 96, ' ');
			printBinary(i + 96);
			printf("%7c\n", i + 96); // ASCII 문자 출력

		}

		return 0;
	}
#endif