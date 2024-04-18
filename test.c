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
// char c; ���� ���� : ��������(global): data seg�� �����

	int main(void)
	{
		/* ����(variavle) : ����(data)�� �����ϴ� �޸�(ram, rom, flash)����
		* char c : ���� ����(local): stack�� ����ȴ�.
		char�� ���ڰ� �ƴ϶� 1byte(8bit)�� �����ϴ� ������ �ǹ� �Ѵ�.
		���� ������ -127 ~127
		*/
		char c;

		unsigned char uc = 0xff; // unsignded char : 0 ~ 255
		unsigned char ua[10];
		//0x00 ~ 0xff = 0000 0000~1111 1111
		//unsigned char uc= 0b11111111;  binary
		//unsigned char uc= 255;         decimal
		short s; // 2byte�ڸ� ���� ������ Ȯ��
		unsigned short us; // 2byte 0~0xffff ffff(65535)
		int i; // i��� �̸����� 4byte¥��  �޸� ������ Ȯ��
		long l; // l�̶�� �̸����� 4byte¥��  �޸� ������ Ȯ��

		// �Ʒ� 3���� ���� ����� �����ϴ�
		uc = 0xff; //255
		uc = 0b11111111; 
		uc = 255;
		
		printf("uc : %d\n", uc); // deciaml �� ��� 255
		printf("uc : %0x\n", uc); // hexa������ ��� ff

		uc++; // uc = uc+1; uc��� ������ ������ 1 ����
			  // overflow �� �߻��� �Ǿ� 0�� �ȴ�.
		printf("uc : %d\n", uc); // deciaml �� ��� 0
		printf("uc : %0x\n", uc); // hexa������ ��� 0

		// size of(): ������ ũ�Ⱑ ��byte���� ũ�⸦ Ȯ���ϴ� �Լ��̴�
		// MCU�� ó�� �������� Ȯ�� ������ �����ϴ�.

		printf("char:\t%d\n", (int) sizeof(char)); //���� type����
		printf("c char:\t%d\n", (int) sizeof(c)); //���� �̸�
		printf("unsigned char:\t%d\n", (int)sizeof(unsigned char));
		printf("uc unsigned char:\t%d\n", (int)sizeof(uc));
		printf("ua unsigned char:\t%d\n", (int)sizeof(ua));
		printf("us unsigned short:\t%d\n", (int)sizeof(us));
		printf("s short:\t%d\n", (int)sizeof(s));
		printf("i int:\t%d\n", (int)sizeof(i));
		printf("l long:\t%d\n", (int)sizeof(l));
		printf("float:\t%d\n", (int)sizeof(float));

		printf("%d\n", 12); // decimal�� 10����
		printf("%d\n", 014); // octal�� 8����
		printf("%d\n", 0x0c); // hex�� 16����

		printf("A: %c\n", 'A'); //1bye�� ��
		printf("A: %s\n", "And"); //���� ��ü�� ��

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

		//10 �� demincal�� ���
		printf("10: %d\n", 10);
		printf("I: %d\n", i);

		// floating ó��
		printf("%lf\n", 3.4); // default���� �Ҽ��� 6�ڸ����� ���
		printf("%.1f\n", 3.44456);
		printf("%.10f\n", 3.44456);
		printf("%lf, %.1lf, %10lf\n", 3.4, 3.44, 3.12314);

		char c;
		int ch[2];

		c = 'A'; // 01000001, 0x41, 65
		ch[0] = 'A'; //���ڷ� ���� ������
		ch[0] = 0x41;
		ch[0] = 0b01000001;
		ch[1] = '\0'; //null���� ���� �ִ´�.
		// ch[1]=0; 
		printf("c : %c\n", c);
		printf("ch : %s\n", ch);

		return 0;
}
#endif

	//2024.04.17 3���� ����
#if 0
#include <stdio.h>

	int main(void)
	{
		char ch = 'A';
		printf("���� �Է� : %c\n", ch+32);
		printf("a������ �ƽ�Ű �ڵ� ���� %d�Դϴ�.\n", ch+32);

		return 0;
	}
#endif

	//2024.04.17 ����(�ƽ�Ű�ڵ� ǥ)
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
		//���� ���� �̸�(a 3.2 SIKWON) (a 4.0 SIKWON)
		// ����:4.0
		// ���� : A
		// �̸� : SIKWON
		double score;  //����
		char grade[4]; // ����
		char name[20]; // �̸�

		while (1)
		{
			printf("���� ���� �̸�(A 3.2 SIKWON): ");
			scanf("%s%lf%s", &grade, &score, name); // �迭�� ���&�� �Ⱥٿ��� ��
			if (grade[0] == 'F')
			{
				return 0;
			}
			else
			{
				printf("����: %c\n", grade[0]);
				printf("����: %.1f\n", score);
				printf("�̸�: %s\n", name);
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

		printf("���̿� Ű�� �Է��ϼ��� :");
		scanf("%d%lf", &age, &height);
		if (age == 0 && height == 0)
		{
			return 0;
		}
		else
		{
			printf("���̴� %d��, Ű�� %.1lfcm �Դϴ�\n", age, height);
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
		printf("a /b�� ��� : %.1lf\n", res);

		a = (int)res;
		printf("(int) %.1lf�� ��� : %d\n", res, a);
}
#endif

	//2024.04.17 ��Ʈ ����Ʈ ������(2���� ��Ÿ����)
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

	//2024.04.17 ���� p.22
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

		printf("%d��%d�� ���� %d�Դϴ�.\n", 10, 20, 10 + 20);
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

		printf("%d��%d�� ���� %d�Դϴ�.\n", 10, 20, 10 + 20);
		printf("%.1lf-%.1f = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

		return 0;
	}
#endif

	//2024.04.17. �������� ���� 
#if 0 
#include <stdio.h>
	int main(void)
	{
		printf("%d\n", 10);
		printf("%lf\n", 3.4);
		printf("%.1lf\n", 3.45);
		printf("%.10lf\n", 3.4);

		printf("%d��%d�� ���� %d�Դϴ�.\n", 10, 20, 10 + 20);
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

		printf("���� a�� �� :%d\n", a);
		printf("���� b�� �� : %d\n", b);
		printf("���� c�� �� : %d\n", c);
		printf("���� da�� �� : %.1lf\n", da);
		printf("���� ch�� �� :%c\n", ch);

		return 0;
	}
#endif

#if 0 
#include <stdio.h>
	int main(void)
	{
		char ch1 = 'A';
		char ch2 = 65;

		printf("���� %c�� �ƽ�Ű �ڵ� �� : %d\n", ch1, ch1);
		printf(" �ƽ�Ű �ڵ尪�� %d�� ���� : %c\n", ch2, ch2);

		return 0;
	}
#endif

#if 0 
#include <stdio.h>
	int main(void)
	{
		char ch1 = 'A';
		char ch2 = 65;

		printf("���� %c�� �ƽ�Ű �ڵ� �� : %d\n", ch1, ch1);
		printf(" �ƽ�Ű �ڵ尪�� %d�� ���� : %c\n", ch2, ch2);

		return 0;
	}
#endif

#if 0 
#include <stdio.h>
	int main(void)
	{
		float ft = 1.234567890123456789;
		double db = 1.234567890123456789;

		printf("float�� ������ �� : %.20f\n", ft);
		printf("double�� ������ ��: %.20lf\n", db);

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
		printf("����: %d,����:%d,��: %d\n", kor, eng, mat);
		printf("���� : %d\n", tot);

		return 0;

	}
#endif

#if 0
#include <stdio.h>

	int main(void)
	{
		char grade;
		char name[20];

		printf("���� �Է� : ");
		scanf("%c", &grade);
		printf("�̸� �Է� : ");
		scanf("%s", name);
		printf("%s�� ������ %c�Դϴ�. \n", name, grade);


		return 0;

	}
#endif

#if 0
#include <stdio.h>

	int main(void)
	{
		char ch;
		printf("�����Է� :");
		scanf("%c", &ch);
		printf("�����Է� : %c\n", ch);
		printf("%c������ �ƽ�Ű �ڵ� ���� %d�Դϴ�\n", ch);

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

		printf("�ʱ갪 a=%d, b =%dln", a, b);
		printf("������: (++a)* 3 = %d, ������: (b++) * 3 = %d\n", pre, post);

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
		printf("ū �� : %d\n", res);

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

		printf("����� : %.1f%%", rate * 100);

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

		printf("3.76�ð��� %d�ð� %d�� %d���Դϴ�.\n", hour, min, sec);

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

		printf("3.76�ð��� %d�ð� %d�� %d���Դϴ�.\n", hour, min, sec);

		return 0;


	}
#endif

#if 0
#include <stdio.h>

	int main(void)
	{
		double weight, height, bmi;

		printf("������(kg)�� Ű(cm) �Է� :");
		scanf_s("%lf%lf", &weight, &height);
		((bmi >= 20.0) && (bmi < 25.0)) ? printf("ǥ���Դϴ�.\n")
			: printf("ü�߰����� �ʿ��մϴ�.\n");

		return 0;


	}
#endif

	// 2024.04.17 ���� ��

	//2024.04.17. �ƽ�Ű�ڵ� 2�����߰�
#if 1
#include <stdio.h>

// ���ڸ� 2������ ��ȯ�Ͽ� ����ϴ� �Լ�
	void printBinary(int n) {
		// 2������ ������ ���ڿ�
		char binary[9]; // ASCII �ڵ�� 8��Ʈ�̹Ƿ� 8�ڸ��� ���ڿ��̸� �����
		binary[8] = '\0'; // ���ڿ��� ���� ǥ���ϴ� NULL ����
		// 2���� ��ȯ
		for (int i = 7; i >= 0; --i) {
			binary[i] = (n & 1) ? '1' : '0'; // �� ��Ʈ�� ���ڷ� ��ȯ�Ͽ� ����
			n >>= 1; // ���� ��Ʈ�� �̵�
		}
		// ��ȯ�� 2���� ���
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
			printf("%7c", i + 32); // ASCII ���� ���
			printf("%10d", i + 64);
			printf("%10.2x%10o%5c", i + 64, i + 64, ' ');
			printBinary(i + 64);
			printf("%7c", i + 64); // ASCII ���� ���
			printf("%10d", i + 96);
			printf("%10.2x%10o%5c", i + 96, i + 96, ' ');
			printBinary(i + 96);
			printf("%7c\n", i + 96); // ASCII ���� ���

		}

		return 0;
	}
#endif