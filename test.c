#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
//FILE * fopen ( const char * filename, const char * mode );��������ΪFILE* �����Mode "r"Ϊread(��ȡ�ļ�)  "w"Ϊwrite(��д�ļ�)
//"a" :׷��  "rb":�Ķ�һ���������ļ�  ������bΪbinaty:�����Ƶģ�"wb":�Զ�������ʽд
//int fclose ( FILE * stream ); 
//���ļ�
//#include<errno.h>
//int main()
//{
	//1.���·��
	//��ǰ·��
	//fopen("111.txt", "r");
	//fclose("111.txt");
	//��һ·��
	//fopen("../111.txt", "r");

	//����·��
	//fopen("111.txt", "r");
	//����·��
	//fopen("C:\\Users\\WWAAAAAAAA\\Desktop\\����\test_2\\test_2\\111.txt", "r");//ע��˫б�ܣ��������ת��
	/*FILE* p = fopen("111.test", "r");
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;*/
	//}
	//int fputc ( int character, FILE * stream );
	/*fputc('a', p);
	fputc('b', p);
	fputc('c', p);*///ֻ�ж�Ӧ"w"�����޸�
	//int fgetc ( FILE * stream );//����
	//printf("%c\n", fgetc(p));
	//printf("%c\n", fgetc(p));
	//printf("%c\n", fgetc(p));//ֻ�ж�Ӧ"r"���ܴ�ӡ
	//fclose(p);
	//p = NULL;
//	int ch = fgetc(stdin);//stdin ��׼���루���Ӽ��̽���һ��ֵ��//���� 1
//	fputc(ch, stdout);//stdout ��׼��� ��������Ļ�ϴ�ӡһ��ֵ��//��ӡ 1
//	return 0;
//}
//double pow (double base, double exponent); pow����ֵΪdouble
//��ҵ������������������������������������������������������������������������
//#include<math.h>
//#define pai 3.14
//int main()
//{
//	double r,h;
//	printf("������Բ�İ뾶��");
//	scanf("%lf", &r);
//	printf("������Բ���ĸߣ�");
//	scanf("%lf", &h);
//	double c = 2 * pai*r;
//	double s = pai*pow(r, 2);
//	double s1 = 4 * pai*pow(r, 2);
//	double v = (4.0 / 3)*pai*pow(r, 2);
//	double v1 = s*h;
//	printf("Բ���ܳ���%0.2lf Բ�������%0.2lf Բ��ı������%0.2lf Բ�������%0.2lf Բ���������%0.2lf\n", c, s, s1, v,v1);
//	return 0;
//}
//������������������������������������������������������������������������
//�ļ���������
#include<errno.h>
//0.fwrite:size_t fwrite ( const void * ptr, size_t size, size_t count, FILE * stream );����������������
//1.fopen:FILE * fopen ( const char * filename, const char * mode );����������������
//2.fclose:int fclose ( FILE * stream );��������������������
//3.fprintf:int fprintf ( FILE * stream, const char * format, ... );��������������������
//ʾ��������ʽ�����룩
//�÷�һ��
//struct stu
//{
//	char name[10];
//	int age;
//	char phonenumber[12];
//};
//int main()
//{
//	struct stu s = { "����",18,"123456" };
//	FILE* pfwrite = fopen("test2.txt", "w");
//	if (pfwrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fprintf(pfwrite, "%s %d %s", s.name, s.age, s.phonenumber);//����pfwriteҲ������stdin����
//	fclose(pfwrite);//���������·�����ҵ����ļ������� ���� 18 123456
//	pfwrite = NULL;
//	return 0;
//}
//spritf:int sprintf ( char * str, const char * format, ... );
//�÷���(������fprintf)
//struct stu
//{
//	char name[10];
//	int age;
//	char phonenumber[12];
//};
//int main()
//{
//	struct stu s = { "����",18,"123456" };
//	char buf[1024] = {0};
//	sprintf(buf, "%s %d %s", s.name, s.age, s.phonenumber);
//	printf("%s\n",buf);
//	return 0;
//}
//4.fscanf:int fscanf ( FILE * stream, const char * format, ... );������������������������
//ʾ��������ʽ�������
//struct stu
//{
//	char name[10];
//	int age;
//	char phonenumber[12];
//};
//int main()
//{
//	struct stu s = { 0 };
//	FILE* pfread = fopen("test2.txt", "r");
//	if (pfread == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fscanf(pfread, "%s %d %s", &s.name, &s.age, &s.phonenumber);//ע��"&"//����pfreadҲ����stdout����
//	printf("%s %d %s", s.name, s.age, s.phonenumber);//��ӡ������ 18 123456
//	fclose(pfread);
//	pfread = NULL;
//	return 0;
//}
//������sscanf
//�÷�
//struct stu
//{
//	char name[10];
//	int age;
//	char phonenumber[12];
//};
//int main()
//{
//	struct stu s = { "����",18,"123456" };
//	struct stu s1 = { 0 };
//	char buf[1024] = {0};
//	sprintf(buf, "%s %d %s", s.name, s.age, s.phonenumber);
//	sscanf(buf, "%s %d %s", &s1.name, &s1.age, &s1.phonenumber);//������"&"
//	printf("%s\n",buf);
//	printf("%s %d %s\n", s1.name, s1.age, s1.phonenumber);//��ӡֵ��ͬ
//	return 0;
//}
/*
С�᣺ sscanf�ǽ��ַ���ת��Ϊ��ʽ������
       spritf�ǽ���ʽ������ת��Ϊ�ַ���
*/
//5.fgetc:int fgetc ( FILE * stream );������������������������
//ʾ����
//ע��Ҫ��д����ȥ��
//int main()
//{
//	FILE* pfread = fopen("test.txt", "r");
//	if (pfread == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	printf("%c", fgetc(pfread));//����һ�������Լ�������һ��λ��
//	printf("%c", fgetc(pfread));
//	printf("%c", fgetc(pfread));//��Ļ�ϴ�ӡ"bit"
//	fclose(pfread);
//	pfread = NULL;
//	return 0;
//}
//6.fputc:int fputc ( int character, FILE * stream );����������������������������
//ʾ����
//int main()
//{
//	FILE* pfwrite = fopen("test.txt", "w");//���û�и��ļ�����������Լ��������ļ�
//	if (pfwrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fputc('b', pfwrite);
//	fputc('i', pfwrite);
//	fputc('t', pfwrite);//���������·�����ҵ����ļ������� bit
//	fclose(pfwrite);
//	pfwrite = NULL;
//	return 0;
//}
//7.fgets:char * fgets ( char * str, int num, FILE * stream );��������������������������������
//int main()
//{
//	FILE* pfread = fopen("test1.txt", "r");
//	char arr[100] = {0};
//	if (pfread == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	printf("%s ",fgets(arr,100,pfread));//��ӡ��hello world �൱�ڴ�pfread�и���12���ַ���arr�в���ӡ
//	//printf("%s ", fgets(arr, 5, pfread));
//	fclose(pfread);
//	pfread = NULL;
//	return 0;
//}
//8.fputs:int fputs ( const char * str, FILE * stream );��������������������������������
//ʾ����
//int main()
//{
//	FILE* pfwrite = fopen("test1.txt", "w");
//	if (pfwrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fputs("hello ", pfwrite);
//	fputs("world", pfwrite);////���������·�����ҵ����ļ������� hello world
//	fclose(pfwrite);
//	pfwrite = NULL;
//	return 0;
//}
//9.fseek:int fseek ( FILE * stream, long int offset, int origin );��������������������������������
//��λ�ļ�ָ��
//SEEK_SET�����ļ���ʼλ�ö�ȡ����
//SEEK_CUR�����ļ���ǰλ�ö�ȡ����
//SEEK_END�����ļ�ĩβλ�ö�ȡ����
//ʾ����
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");//test.txt�з���abcdef
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fseek(pf, 4, SEEK_SET);//4����ƫ����Ϊ4 ����e
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//e
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//}
//10.ftell:long int ftell ( FILE * stream );��������������������������������
//�����ļ�ָ��ƫ����
//ʾ��
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");//test.txt�з���abcdef
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fseek(pf, 4, SEEK_SET);//4����ƫ����Ϊ4 ����e
//	int ch = ftell(pf);
//	printf("%d\n", ch);//4
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//}
//11.ferror:int ferror ( FILE * stream );����������������������������
//ʾ��������ļ���ȡ  ����ȡʧ�� ���ط�0 ����ȡ�ɹ� ����0
//12.perror:void perror ( const char * str );������������������������
//ʾ��
//int main()
//{
//	FILE* pf = fopen("test1.txt", "r");
//	if (pf == NULL)
//	{
//		perror("����ԭ��");//����ԭ��: No such file or directory  ���"����ԭ��"�����Լ���
//		return 0;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//13.stdin(�Ӽ����Ͻ���)��stdout(����Ļ�ϴ�ӡ)��������������������
//14.fwrite:size_t fwrite ( const void * ptr, size_t size, size_t count, FILE * stream );��������������������������������
//ʾ����
//struct stu
//{
//	char name[10];
//	int age;
//	char phonenumber[12];
//};
//int main()
//{
//	struct stu s = { "����",18,"123456" };
//	FILE* pf = fopen("test3.txt", "wb");//"wb"�Զ�������ʽд��
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	fwrite(&s, sizeof(struct stu), 1, pf);
//	fclose(pf);//��������Ӧ���ļ��п�����������ʽ���ļ������� "����",18,"123456" ��
//	pf = NULL;
//	return 0;
//}
//15.fread:size_t fread ( void * ptr, size_t size, size_t count, FILE * stream );����������������������������
//ע����ĳ�ļ���ֻ��55��Ԫ�أ�������ָ��Ҫ��ʮ��Ԫ�أ�fread(&s, sizeof(struct stu), 10, pf);��
//��ÿ�ζ���10���󷵻�10�����һ�η���5
//struct stu
//{
//	char name[10];
//	int age;
//	char phonenumber[12];
//};
//int main()
//{
//	
//	FILE* pf = fopen("test3.txt", "rb");
//	struct stu s = { 0 };
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fread(&s, sizeof(struct stu), 1, pf);
//	printf("%s %d %s\n", s.name, s.age, s.phonenumber);//���� 18 123456
//	return 0;
//}
//ʾ����
//int main()
//{
//	int ch = fgetc(stdin);//����a���ӡa
//	fputc(ch, stdout);
//	return 0;
//}
//16:rewind:void rewind ( FILE * stream );����������������������������������������
//Set position of stream to the beginning  ���ļ�ָ����Ϊ�ļ���ʼλ��
//ʾ��
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fseek(pf, 2, SEEK_SET);
//	int ch = fgetc(pf);
//	putchar(ch);//c
//	rewind(pf);
//	int ch1 = fgetc(pf);
//	putchar(ch1);//a  ˵��ָ��ص��˿�ͷ
//	return 0;
//}
//17.feof:int feof ( FILE * stream );����������������������������������������������������
//Check end-of-file indicator
//����ļ��Ƿ���������
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		putchar(ch);
//	}
//	if (ferror(pf))
//	{
//		printf("error\n");
//	}
//	else if (feof(pf))//�����⵽EOF �򷵻ط���ֵ���ļ����������� ���򷵻�0 �ļ��쳣����
//	{
//		printf("end of file\n");//abcdefg end of file 
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//������������������������������������������������������������
//7.fgets:char * fgets ( char * str, int num, FILE * stream );
//void sort(int* ch,int sz)
//{
//	int i = 0;
//	int j = 0;
//	int tmp;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (*(ch + j) > *(ch + j + 1))
//			{
//				tmp = *(ch + j);
//				*(ch + j) = *(ch + j + 1);
//				*(ch + j + 1) = tmp;
//			}
//		}
//	}
//}
//int main()
//{
	//int a = 0;
	//int i = 0;
	//int arr[] = { 0 };
	//FILE* pf = fopen("test.txt", "r");
	//if (pf == NULL);
	//{
	//	printf("%s\n", strerror(errno));
	//	//return 0;
	//}
	//while (fread(&a, 4, 1, pf))
	//{
	//	arr[i] = a;
	//	i++;
	//}
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//sort(&arr, sz);
	//for (i = 0; i < sz; i++)
	//{
	//	printf("%d ", arr[i]);
	//}
	//fclose(pf);
	//pf = NULL;
	/*int arr[] = { 1,5,4,7,8,5,8,8,2 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	sort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}*/
	/*return 0;
}*/
int main()
{
	FILE* pfread = fopen("test1.txt", "r");
	char arr[100] = { 0 };
	if (pfread == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	printf("%s ", fgets(arr, 100, pfread));//��ӡ��hello world �൱�ڴ�pfread�и���12���ַ���arr�в���ӡ
	int i = 0;
	//printf("%s ", fgets(arr, 5, pfread));
	for (i = 0; i < 12; i++)
	{
		printf("%c", arr[i]);
	}
	fclose(pfread);
	pfread = NULL;
	return 0;
}