/*
## 2.3.1. ʹ��cin
## 2.3.2. ʹ��cout����ƴ��
carrot();
## 2.4.1. ����
sqrt();
## 2.4.2. ��������
pow();random1();
## 2.4.3. �û�����ĺ���
cinNumFunc();
## 2.4.4. �û������з���ֵ�ĺ���
userCustom();
## 3.1.3. ����short��int��long��long long
showClimit();
see_exceed();
## 3.1.8. char ���ͣ��ַ���С����
chartype();
wchar_t ���ַ����� wcin wcout
wideViriable();
floatNum();
## 3.3.4. ����������ȱ��
fltadd();
## 3.4.2. ������֧
divide();
## 3.4.3. ��ģ�����
modulus();
## 3.4.4. ����ת��.
assgin();
assgin2()
## 4.0. ��������
## 4.1. ����
arrayTest();
## 4.2.2. ��������ʹ���ַ���
insertStr2();
## 4.3.1. C++�ַ�����ʼ��
## 4.3.2. ��ֵ��ƴ�Ӻ͸���
strtype2();
## 4.3.5. ������ʽ���ַ�������ֵ
## 4.4.1. c++�ṹ��ʼ��
structinit();
## 4.4.5. �ṹ����
structArray();
## 4.6. ö��
enumExample();
## 4.6.1 ����ö������ֵ
enumExample1();
## 4.6.2 ö�ٵ�ȡֵ��Χ
enumRange1();
## 4.7.ָ������ɴ洢�ռ�
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
		<< "��ƽ����Ϊ��"
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
		<< a << "��" << b << "�η� = "
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
			<< " ���������:" << a
			<< endl;
		i++;
	} while (i<=50);
	return 0;
}
void numNock(int n) {
	using namespace std;
	cout << n << "������" << endl;
}
int cinNumFunc() {
	using namespace std;
	cout << "�����룺" << endl;
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
	cout << "n_int ��ƽ��Ϊ��" << sqrt(sqrt(n_int)) << endl;
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
	HKEY hKEY; //�����йص� hKEY, �ڲ�ѯ����ʱҪ�رա� 
	LPCTSTR data_Set;
	//data_Set = "Software\\Microsoft\\Windows\\CurrentVersion\\Winlogon\\";
	//����·�� data_Set ��ص� hKEY����һ������Ϊ�������ƣ��ڶ��������� 
	//��ʾҪ���ʵļ���λ�ã���������������Ϊ0��KEY_READ��ʾ�Բ�ѯ�ķ�ʽ�� 
	//����ע���hKEY�򱣴�˺������򿪵ļ��ľ���� 
	long ret0 = (::RegOpenKeyEx(HKEY_LOCAL_MACHINE, data_Set, 0, KEY_READ, &hKEY));
	if (ret0 != ERROR_SUCCESS) //����޷���hKEY������ֹ�����ִ�� 
	{
		//MessageBox("����: �޷����йص�hKEY!");
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
	wcout << "�������ʲô\nLla" << "\n";
	wcin >> cc;
	wcout << "��������Ϊ��" << cc << "\n";
	
}
void floatNum() {
	using namespace std;
	using std::setprecision;

	cin.setf(ios_base::fixed, ios_base::floatfield);
	float tub = 10.0 / 3.0;
	double mini = 10.0 / 3.0;
	const float minilin = 1.01e-6;
	cout << "float�� " << setprecision(10) << tub << endl;
	cout << "double�� " << mini << endl;
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
	cout << "������size: " << size << "\n";
	cin >> size;
	cout << "������size1: " << size1 << endl;
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
	cout << "������size: " << size << "\n";
	cin.getline(size,number);
	cout << "������size1: " << size1 << endl;
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
	// spectrum ö���������� 
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
	//ʹ�ø�ֵ��������ʾ����ö��������ֵ
	enum inorder { zero = 0, one = 1, two = 2, three = 3 };
	//ָ������ֵ������������Ҳ����ֻ��ʾ���岿��ö����
	enum partialEval { first��second = 1, third };
	//ͬʱ������ֵͬ��ö����
	enum additionBith { zhangsan, zhangsi = 1, lisi };
	//����ö����
	enum increaSque { a = 2, b = 4, c = 8 };
	//����ö����
	enum disorder { A = 1, B = 100, C = 200 };
	/**
	ö������������intֵ������ʹ��long��long long���͵���ֵ
	*/
	cout << "����ö������ inorder:""\n""two = " << inorder(two) << "\n";
	cout << "����ö������ partialEval:""\n""third = " << partialEval(third) + 1 << "\n";
	cout
		<< "����ö������ ""additionBith:"
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