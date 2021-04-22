#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
//FILE * fopen ( const char * filename, const char * mode );返回类型为FILE* 后面的Mode "r"为read(读取文件)  "w"为write(编写文件)
//"a" :追加  "rb":阅读一个二进制文件  （其中b为binaty:二进制的）"wb":以二进制形式写
//int fclose ( FILE * stream ); 
//打开文件
//#include<errno.h>
//int main()
//{
	//1.相对路径
	//当前路径
	//fopen("111.txt", "r");
	//fclose("111.txt");
	//上一路径
	//fopen("../111.txt", "r");

	//上上路径
	//fopen("111.txt", "r");
	//绝对路径
	//fopen("C:\\Users\\WWAAAAAAAA\\Desktop\\代码\test_2\\test_2\\111.txt", "r");//注意双斜杠，避免出现转义
	/*FILE* p = fopen("111.test", "r");
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;*/
	//}
	//int fputc ( int character, FILE * stream );
	/*fputc('a', p);
	fputc('b', p);
	fputc('c', p);*///只有对应"w"才能修改
	//int fgetc ( FILE * stream );//返回
	//printf("%c\n", fgetc(p));
	//printf("%c\n", fgetc(p));
	//printf("%c\n", fgetc(p));//只有对应"r"才能打印
	//fclose(p);
	//p = NULL;
//	int ch = fgetc(stdin);//stdin 标准输入（即从键盘接收一个值）//输入 1
//	fputc(ch, stdout);//stdout 标准输出 （即在屏幕上打印一个值）//打印 1
//	return 0;
//}
//double pow (double base, double exponent); pow返回值为double
//作业————————————————————————————————————
//#include<math.h>
//#define pai 3.14
//int main()
//{
//	double r,h;
//	printf("请输入圆的半径：");
//	scanf("%lf", &r);
//	printf("请输入圆柱的高：");
//	scanf("%lf", &h);
//	double c = 2 * pai*r;
//	double s = pai*pow(r, 2);
//	double s1 = 4 * pai*pow(r, 2);
//	double v = (4.0 / 3)*pai*pow(r, 2);
//	double v1 = s*h;
//	printf("圆的周长：%0.2lf 圆的面积：%0.2lf 圆球的表面积：%0.2lf 圆的体积：%0.2lf 圆柱的体积：%0.2lf\n", c, s, s1, v,v1);
//	return 0;
//}
//————————————————————————————————————
//文件操作汇总
#include<errno.h>
//0.fwrite:size_t fwrite ( const void * ptr, size_t size, size_t count, FILE * stream );————————
//1.fopen:FILE * fopen ( const char * filename, const char * mode );————————
//2.fclose:int fclose ( FILE * stream );——————————
//3.fprintf:int fprintf ( FILE * stream, const char * format, ... );——————————
//示例：（格式化输入）
//用法一：
//struct stu
//{
//	char name[10];
//	int age;
//	char phonenumber[12];
//};
//int main()
//{
//	struct stu s = { "张三",18,"123456" };
//	FILE* pfwrite = fopen("test2.txt", "w");
//	if (pfwrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fprintf(pfwrite, "%s %d %s", s.name, s.age, s.phonenumber);//其中pfwrite也可以用stdin代替
//	fclose(pfwrite);//可以在相关路径下找到该文件并看到 张三 18 123456
//	pfwrite = NULL;
//	return 0;
//}
//spritf:int sprintf ( char * str, const char * format, ... );
//用法：(区别于fprintf)
//struct stu
//{
//	char name[10];
//	int age;
//	char phonenumber[12];
//};
//int main()
//{
//	struct stu s = { "张三",18,"123456" };
//	char buf[1024] = {0};
//	sprintf(buf, "%s %d %s", s.name, s.age, s.phonenumber);
//	printf("%s\n",buf);
//	return 0;
//}
//4.fscanf:int fscanf ( FILE * stream, const char * format, ... );————————————
//示例：（格式化输出）
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
//	fscanf(pfread, "%s %d %s", &s.name, &s.age, &s.phonenumber);//注意"&"//其中pfread也可用stdout代替
//	printf("%s %d %s", s.name, s.age, s.phonenumber);//打印出张三 18 123456
//	fclose(pfread);
//	pfread = NULL;
//	return 0;
//}
//区别于sscanf
//用法
//struct stu
//{
//	char name[10];
//	int age;
//	char phonenumber[12];
//};
//int main()
//{
//	struct stu s = { "张三",18,"123456" };
//	struct stu s1 = { 0 };
//	char buf[1024] = {0};
//	sprintf(buf, "%s %d %s", s.name, s.age, s.phonenumber);
//	sscanf(buf, "%s %d %s", &s1.name, &s1.age, &s1.phonenumber);//别忘了"&"
//	printf("%s\n",buf);
//	printf("%s %d %s\n", s1.name, s1.age, s1.phonenumber);//打印值相同
//	return 0;
//}
/*
小结： sscanf是将字符串转化为格式化数据
       spritf是将格式化数据转化为字符串
*/
//5.fgetc:int fgetc ( FILE * stream );————————————
//示例：
//注：要先写入在去读
//int main()
//{
//	FILE* pfread = fopen("test.txt", "r");
//	if (pfread == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	printf("%c", fgetc(pfread));//读完一个它会自己跳到下一个位置
//	printf("%c", fgetc(pfread));
//	printf("%c", fgetc(pfread));//屏幕上打印"bit"
//	fclose(pfread);
//	pfread = NULL;
//	return 0;
//}
//6.fputc:int fputc ( int character, FILE * stream );——————————————
//示例：
//int main()
//{
//	FILE* pfwrite = fopen("test.txt", "w");//如果没有该文件，计算机将自己创建该文件
//	if (pfwrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fputc('b', pfwrite);
//	fputc('i', pfwrite);
//	fputc('t', pfwrite);//可以在相关路径下找到该文件并看到 bit
//	fclose(pfwrite);
//	pfwrite = NULL;
//	return 0;
//}
//7.fgets:char * fgets ( char * str, int num, FILE * stream );————————————————
//int main()
//{
//	FILE* pfread = fopen("test1.txt", "r");
//	char arr[100] = {0};
//	if (pfread == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	printf("%s ",fgets(arr,100,pfread));//打印出hello world 相当于从pfread中复制12个字符到arr中并打印
//	//printf("%s ", fgets(arr, 5, pfread));
//	fclose(pfread);
//	pfread = NULL;
//	return 0;
//}
//8.fputs:int fputs ( const char * str, FILE * stream );————————————————
//示例：
//int main()
//{
//	FILE* pfwrite = fopen("test1.txt", "w");
//	if (pfwrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fputs("hello ", pfwrite);
//	fputs("world", pfwrite);////可以在相关路径下找到该文件并看到 hello world
//	fclose(pfwrite);
//	pfwrite = NULL;
//	return 0;
//}
//9.fseek:int fseek ( FILE * stream, long int offset, int origin );————————————————
//定位文件指针
//SEEK_SET：从文件开始位置读取数据
//SEEK_CUR：从文件当前位置读取数据
//SEEK_END：从文件末尾位置读取数据
//示例：
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");//test.txt中放了abcdef
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fseek(pf, 4, SEEK_SET);//4代表偏移量为4 即到e
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//e
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//}
//10.ftell:long int ftell ( FILE * stream );————————————————
//查找文件指针偏移量
//示例
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");//test.txt中放了abcdef
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fseek(pf, 4, SEEK_SET);//4代表偏移量为4 即到e
//	int ch = ftell(pf);
//	printf("%d\n", ch);//4
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//}
//11.ferror:int ferror ( FILE * stream );——————————————
//示例：检测文件读取  若读取失败 返回非0 若读取成功 返回0
//12.perror:void perror ( const char * str );————————————
//示例
//int main()
//{
//	FILE* pf = fopen("test1.txt", "r");
//	if (pf == NULL)
//	{
//		perror("错误原因：");//错误原因：: No such file or directory  这个"错误原因"可以自己填
//		return 0;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//13.stdin(从键盘上接收)与stdout(在屏幕上打印)——————————
//14.fwrite:size_t fwrite ( const void * ptr, size_t size, size_t count, FILE * stream );————————————————
//示例：
//struct stu
//{
//	char name[10];
//	int age;
//	char phonenumber[12];
//};
//int main()
//{
//	struct stu s = { "张三",18,"123456" };
//	FILE* pf = fopen("test3.txt", "wb");//"wb"以二进制形式写入
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	fwrite(&s, sizeof(struct stu), 1, pf);
//	fclose(pf);//可以在相应的文件中看到二进制形式的文件（不是 "张三",18,"123456" ）
//	pf = NULL;
//	return 0;
//}
//15.fread:size_t fread ( void * ptr, size_t size, size_t count, FILE * stream );——————————————
//注：若某文件中只有55个元素，而我们指定要读十个元素（fread(&s, sizeof(struct stu), 10, pf);）
//则每次读完10个后返回10，最后一次返回5
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
//	printf("%s %d %s\n", s.name, s.age, s.phonenumber);//张三 18 123456
//	return 0;
//}
//示例：
//int main()
//{
//	int ch = fgetc(stdin);//输入a则打印a
//	fputc(ch, stdout);
//	return 0;
//}
//16:rewind:void rewind ( FILE * stream );————————————————————
//Set position of stream to the beginning  将文件指针置为文件起始位置
//示例
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
//	putchar(ch1);//a  说明指针回到了开头
//	return 0;
//}
//17.feof:int feof ( FILE * stream );——————————————————————————
//Check end-of-file indicator
//检查文件是否正常结束
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
//	else if (feof(pf))//如果检测到EOF 则返回非零值（文件正常结束） 否则返回0 文件异常结束
//	{
//		printf("end of file\n");//abcdefg end of file 
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//——————————————————————————————
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
	printf("%s ", fgets(arr, 100, pfread));//打印出hello world 相当于从pfread中复制12个字符到arr中并打印
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