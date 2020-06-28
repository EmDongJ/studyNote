/*
## 2.3.1. 使用cin
## 2.3.2. 使用cout进行拼接
carrot();
## 2.4.1. 函数
sqrt();
## 2.4.2. 函数变体
pow();random1();
## 2.4.3. 用户定义的函数
cinNumFunc();
## 2.4.4. 用户定义有返回值的函数
userCustom();
## 3.1.3. 整型short、int、long和long long
showClimit();
see_exceed();
## 3.1.8. char 类型：字符和小整数
chartype();
wchar_t 宽字符类型 wcin wcout
wideViriable();
floatNum();
## 3.3.4. 浮点数的优缺点
fltadd();
## 3.4.2. 除法分支
divide();
## 3.4.3. 求模运算符
modulus();
## 3.4.4. 类型转换.
assgin();
assgin2()
## 4.0. 复合类型
## 4.1. 数组
arrayTest();
## 4.2.2. 在数组中使用字符串
insertStr2();
## 4.3.1. C++字符串初始化
## 4.3.2. 赋值、拼接和附加
strtype2();
## 4.3.5. 其他形式的字符串字面值
## 4.4.1. c++结构初始化
structinit();
## 4.4.5. 结构数组
structArray();
## 4.6. 枚举
enumExample();
## 4.6.1 设置枚举量的值
enumExample1();
## 4.6.2 枚举的取值范围
enumRange1();
## 4.7.指针和自由存储空间
variableAddress();
showPointer();
## 4.7.1.
## 
*/
#include <iostream>
#include <climits>
#include <windows.h>
#include <iomanip>
#include <string>
#include <cstring>

int carrot() {
	using namespace std;

	int carrots;
	cout << "hi,how many carrot do you have?" << endl;
	cin >> carrots;
	cout << "Here are two more.\n";
	cout 
		<< "i have "
		<< carrots+2
		<< " carrots"
		<< endl;
	cin.get();
	cin.get();

	return 0;
}
int sqrt() {
	using namespace std;
	double a = 64.64;
	double x = sqrt(a);
	cout 
		<< a
		<< "的平方根为："
		<< x
		<< endl;
	double area;
	cout << "Enter your area: ";
	cin >> area;
	double side;
	side = sqrt(area);
	cout
		<< "That's the equivalent of a square "
		<< side
		<< " feet to the side" << endl;
	
	return 0;
}
int pow() {
	using namespace std;
	double a = 2.0;
	double b = 3.0;
	double answer = pow(a, b);
	cout
		<< a << "的" << b << "次方 = "
		<< answer << endl;
	return 0;
}
int random1() {
	using namespace std;
	int i = 0;
	do
	{
		int a = rand();
		cout
			<< " 随机数函数:" << a
			<< endl;
		i++;
	} while (i<=50);
	return 0;
}
void numNock(int n) {
	using namespace std;
	cout << n << "被传入" << endl;
}
int cinNumFunc() {
	using namespace std;
	cout << "请输入：" << endl;
	int y;
	cin >> y;
	y += 10;
	numNock(y);
	return 0;
}
int hasReturn(int a) {
	using namespace std;
	return a * 17;
}
void userCustom() {
	using namespace std;
	int a;
	cin >> a;
	cout << hasReturn(a) << endl;
}
int showClimit() {
	using namespace std;
	int n_int = INT_MAX	;
	int n_int_min = INT_MIN;
	int n_short_max = SHRT_MAX;
	int n_short_min = SHRT_MIN;
	cout << "int Max = " << sizeof n_int << " bytes" << endl;
	cout << "int Min = " << sizeof n_int_min << " bytes" << endl;
	cout << "short Min = " << sizeof n_short_min << " bytes" << endl;
	cout << "short Max = " << sizeof n_short_max << " bytes" << endl;

	cout << "int min value = " << n_int_min << endl;
	cout << "int max value = " << n_int << endl;
	cout << "n_int 开平方为：" << sqrt(sqrt(n_int)) << endl;
	cout << "int max value = " << n_int << endl;
	return 0;
}
void test_cala() {
	using namespace std;
	cout << 350 / 24 << endl;
	cout << 189 / 12 << endl;
	cout << 174 / 12 << endl;
}
void see_exceed() {
	using namespace std;
	short a = SHRT_MAX;
	unsigned short b = a;
	signed short c = SHRT_MIN;
	cout << c-1 << endl;
	cout <<  a << endl;
	cout << b << endl;
	cout << SHRT_MAX + 1 << endl;
	cout << unsigned short(SHRT_MAX) + 1 << endl;
}
void seeRegedit() {


	using namespace std;
	HKEY hKEY; //定义有关的 hKEY, 在查询结束时要关闭。 
	LPCTSTR data_Set;
	//data_Set = "Software\\Microsoft\\Windows\\CurrentVersion\\Winlogon\\";
	//打开与路径 data_Set 相关的 hKEY，第一个参数为根键名称，第二个参数表。 
	//表示要访问的键的位置，第三个参数必须为0，KEY_READ表示以查询的方式。 
	//访问注册表，hKEY则保存此函数所打开的键的句柄。 
	long ret0 = (::RegOpenKeyEx(HKEY_LOCAL_MACHINE, data_Set, 0, KEY_READ, &hKEY));
	if (ret0 != ERROR_SUCCESS) //如果无法打开hKEY，则终止程序的执行 
	{
		//MessageBox("错误: 无法打开有关的hKEY!");
		return;
	}

}
int chartype() {
	using namespace std;
	char ch = 'asd';
	int a = ch;
	int i =1;
	cout << a << endl;
	do
	{
		cout.put(i); i++;
	} while (i<=10);
	cout.put(77);
	char s = '!';
	cout.put(s);
	cout << "__________\a\b\c\d\b\b\b\b\b\n" << endl;
	cout << "\u00E214" << endl;
	return 0;
}
void wideViriable() {
	using namespace std;
	wchar_t cc;
	wcout << "请输入点什么\nLla" << "\n";
	wcin >> cc;
	wcout << "输入内容为：" << cc << "\n";
	
}
void floatNum() {
	using namespace std;
	using std::setprecision;

	cin.setf(ios_base::fixed, ios_base::floatfield);
	float tub = 10.0 / 3.0;
	double mini = 10.0 / 3.0;
	const float minilin = 1.01e-6;
	cout << "float： " << setprecision(10) << tub << endl;
	cout << "double： " << mini << endl;
	cout << "minilin * tub " << minilin*tub << endl;
	cout << tub*1.0e6f << endl;
}
int fltadd() {
	using namespace std;
	float a = 2.24E+22f;
	float b = a + 1.0f;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "1.0f = " << 1.0f << endl;
	cout << "b -a = " << b - a  << endl;
	return 0;
}
int divide() {
	using namespace std;
	cout.setf(ios::fixed, ios::floatfield);
	cout << 10.0 / 3.0 << endl;
	cout << 1e8 / 3.0 << endl;
	fltadd();
	return 1;
}
int modulus() {
	using namespace std;
	int a = 10; int b = 3;
	cout << a % b << "\n";
	return 0;
}
int assgin() {
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float a = 4;
	//int b = {3.1f+1};
	int devt = 7.2E12;
	cout
		<< a << "\n"
		//<< b << "\n"
		<< devt << "\n";
	return 0;
}
int assgin2() {
	using namespace std;
	/*
//	cout.setf(ios_base::fixed, ios_base::adjustfield);
	const int a = 123;
	int a1 = 44;
	char b{123};
	//char c = {code};
	//char c1 = static_cast<char>(a1);
	char c2{a};
	
	cout	 << a
	     << c1
		 << b ;
		 */
	return 0;
}
int arrayTest() {
	using namespace std;
	int studentNum[10];
	double nameDict[2];
	nameDict[0] = 1.123123;
	cout << studentNum << endl;
	cout << nameDict << endl;
	int i = 10;
	while (i<=10)
	{   
		i++;
		nameDict[0] += 1;
		cout
			<< (double)nameDict[0] << "\n" 
			<< sizeof(studentNum) << "\n"
			<< sizeof("asddddd") << "\n"
			<< strlen("12344") << "\n";
	}
	return 0;
}
void stringArray() {
	using namespace std;
	char size[] = "lvoepeople";
	size[5] = '\0';
	cout << size << "\n";
}
void insertStr() {
	using namespace std;
	const int number = 10;
	char size[number];
	char size1[number];
	cout << "请输入size: " << size << "\n";
	cin >> size;
	cout << "请输入size1: " << size1 << endl;
	cin >> size1;
	cout
		<< size << "\n"
		<< size1 << "\n";
}
void insertStr2() {
	using namespace std;
	const int number = 10;
	char size[number];
	char size1[number];
	cout << "请输入size: " << size << "\n";
	cin.getline(size,number);
	cout << "请输入size1: " << size1 << endl;
	cin.getline(size1, number);
	cout
		<< size << "\n"
		<< size1 << "\n";
}
void strtype() {
	using namespace std;
	char name[] = { "name1" };
	char name1[40];
	char school[40] = {"huangshi middle school"};
	std::string str1 = "xiaoming";
	std::string str2 = "shidao";
	string str3, str4;
	str3 = str1 + str2;
	cout << "str1 = " << str1 << "\n";
	cout << "str3 = " << str3 << "\n";
	str1 += str2;
	cout << "str1 = " << str1 << "\n";
	strcat_s(school,name);
	cout << "name's newer" << school << endl;
	cout << "linsense" << "\n";
	cin.getline(school, 30);
	cout << "name's newer" << school << endl;
}
void strtype1() {
	using namespace std;
	string str = "why ";
	string str1, str2;
	cout << "str = " << str << "\n";
	str1 = "the people shamed";
	cout << "str1 = " << str1 << "\n";
	str2 = str + str1;
	cout << "str2 = " << str2 << "\n";
	str += str1;
	cout << "str += str1" << "\n" << "str = " << str << "\n";
}
void strtype2() {
	using namespace std;
	char name[200];
	char name1[20] = "juice";
	string str,str1;
	str1 = "string1";
	strcpy_s(name ,name1);
	cout << "name = " << name << "\n";
	strcat_s(name, " flower tea");
	cout << "name = " << name << "\n";
	str1 += " dammed";
	cout << str1 << "\n";
	int len1 = str1.size();
	cout << "len1 = " << len1 << "\n";
	int len2 = strlen(name);
	cout << "len2 = " << len2 << "\n";
}
void otherStringType() {
	using namespace std;
	cout << R"( asda \n asasdads)" << "\n";
}
void structinit() {
	using namespace std;
	struct people
	{
		string name;
		int age;
	};
	people father ={
		"jack",
	    11
	};
	cout << father.name << "\n";
}
void structArray() {
	using namespace std;
	struct inflatable
	{
		char name[20];
		int age;
		float weight;
		string school;
	};
	inflatable name[100] = 
	{ 
		{"xiaoMing",18,180.2,"QingDaoUniversity"}
	};
	cout << name[0].name << "\n";
	cout << name[0].school << "\n";
	cout << name[1].school << "\n";
}
void enumExample() {
	using namespace std;
	enum spectrum { banana, orange, apple };
	// spectrum 枚举类型名称 
	spectrum band;
	band = banana;
	// band = 5; // invalie,5 is not an enumerator
	int color = orange;
	///band = 2; //invalid
	color = 2 + banana;
	cout << color << "\n";
	
}
void enumExample1() {
	using namespace std;
	//使用赋值运算来显示设置枚举量的数值
	enum inorder { zero = 0, one = 1, two = 2, three = 3 };
	//指定的数值必须是整数，也可以只显示定义部分枚举量
	enum partialEval { first，second = 1, third };
	//同时创建相同值的枚举量
	enum additionBith { zhangsan, zhangsi = 1, lisi };
	//递增枚举量
	enum increaSque { a = 2, b = 4, c = 8 };
	//无律枚举量
	enum disorder { A = 1, B = 100, C = 200 };
	/**
	枚举量不限制于int值，可以使用long、long long类型的数值
	*/
	cout << "访问枚举类型 inorder:""\n""two = " << inorder(two) << "\n";
	cout << "访问枚举类型 partialEval:""\n""third = " << partialEval(third) + 1 << "\n";
	cout
		<< "访问枚举类型 ""additionBith:"
		<< "\n""zhangsan = " << additionBith(zhangsan)
		<< "\n""zhangsan1 = " << additionBith(zhangsi)
		<< "\n""lisi = " << additionBith(lisi)
		<< "\n";
		
}
void enumRange1() {
	using namespace std;
	enum people { a = 1, b = 8, c = 10 };
	people yellow;
	yellow = people(4);
	std::cout << yellow << "\n";
}
void variableAddress() {
	using namespace std;
	int number = 10;
	cout
		<< "number's value:" << number << "\n"
		<< "number's address: " << &number << "\n"
	    << "use address visit variable: " << *&number << "\n";
}
void showPointer() {
	using namespace std;
	double point = 3.14;
	double * ad_point;
	ad_point = &point;
	cout
		<< "point = " << point << "\n"
		<< "point address = " << &point << "\n"
		<< "ad_point = " << ad_point << "\n"
		<< "ad_point visit variable = " << *ad_point << "\n";
}
int main() {
	using namespace std;
	variableAddress();
	showPointer();
	cin.get();
	}