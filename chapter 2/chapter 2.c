// ȥ�� �����ϴ� C��� é�� 2-1

// 1. main �Լ��� Ȱ��

/*�ۼ��� : �����
  ���� : 10�� 20�� ���ϴ� ���α׷�*/

/*int main(void)
{
	10 + 20;
	//�����ڵ�
	return 0; // �Լ��� ���Ḧ �˸���.
}*/


#include <stdio.h>
/*int main(void)
{
	printf("Be happy!");
	printf("My friend.");

	return 0;
}*/
// ����� ���� �� �� ������ ���� ���ӵǾ ���´�. �� ������ ���� ���ڰ� ���� �����̴�. ���̽���� �ٸ��� ���� ���ڸ� ���� �־��־���Ѵ�.

// 2. ���� ���ڸ� ����� ���

#include <stdio.h>

int main(void)
{
	printf("Be happy!\n");
	printf("12345678901234567890\n");
	printf("My\tfriend\n");	// ���̽�� ���������� ���ڿ� ���� \t�� �����Ͽ��� ���⸦ �� �� �ִ�.
	printf("Goot\bd\tchance\n"); // \b�� backspace�� �� �Ŀ� ���ο� �ܾ�� ������ �� �ְ� �����ش�.
	printf("Cow!\rW\n"); // \r�� carriage return ��, �� ������ �̵��Ͽ� ������ �� �� �ְ� �Ѵ�. \b�� \r�� ����� ���� ��ǻ�ʹ� �⺻������ ������ �ƴ� ������ ����� ����ϴ� ������ ���δ�.
}