#include <stdio.h>

int main(void)
{
	printf("int : %d\n", 1);
	printf("char : %d\n", 'A');
	printf("print integer : %d\n", 127);
	printf("%d + %d = %d\n", 5, 7, 5+7);

	printf("int %d, float %f, char %c, string %s\n", 1, 1.f, '1', "1");

	//�̸�, ��������, ��������, ��������, ����, ���
	printf("�̸�    ����    ����    ����    ����    ���\n");
	printf("==========================================================\n");
	printf("%s    %d    %d    %d    %d    %.3f\n", "��浿", 80, 90, 80, 80 + 90 + 80, (80 + 90 + 80) / (3.0f));
	printf("%10s%s\n", "hello","world");//ù��° s ���������ڴ� �� 10ĭ�� �����ʺ��� Ȯ���ؼ� ����ϰڴ�
	printf("%-10s%s\n", "hello","world");// ù��° s ���������ڴ� �� 10ĭ�� ���ʺ��� Ȯ���ؼ� ����ϰڴ�.
	printf("%10.2s%s%\n", "hello", "wolrd"); // ��°� �տ� 8ĭ ��ĭ heworld�� ���

	printf("lead zero test: %d\n", 3); // ��°� 3
	printf("lead zero test: %3d\n", 3); // ��°� __3
	printf("lead zero test: %03d\n", 3); // ��°� 003

	printf("abcde12345\r123\n");

	printf("�ֵ���ǥ ǥ�� : \" ");
	printf("Ȭ����ǥ ǥ�� : \' ");
	printf("�������� ǥ�� : \\ \n");

	printf("���� �۾����� ���� �̸��� C:\\Users\\TJ\\source\\repos\\Project1\\Project1\n");

	printf("int�� ũ�� : %d\n", sizeof(int)); //byte �� ���� �����Ǿ� ����
	printf("float�� ũ�� : %d\n", sizeof(float));
	printf("char�� ũ�� : %d\n", sizeof(char));

	/*printf("Hello, World!");
	printf("Hi, TJ");
	
	printf("\n");
	printf("%f, %f, %d, %f, %f", 1.0, -0.100, 2, .51234512345, -.100f);

	printf("\n");
	printf("%+015+.5f", 4.1325f);*/
	//int a = 10;
	//printf(a);
	
	return 0; 
}


// �ּ� ����Ű ctrl + / : �� �� �ּ�, 2�� ������ �ٽ� ����
// shift + ����Ű : ���� ����
// ctrl + F5 : run without debug
// ctrl + S : save
//  

// �ּ� �޸�
// ()
// {}
// []

/*
	���� �ּ� 
	�� �幮�� ���� ����ϴ� �� 
*/  