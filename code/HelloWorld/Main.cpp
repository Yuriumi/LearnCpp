#include <iostream>	// Ԥ������ʵ�ʱ���֮ǰ�ͱ�������
#include <string>
#include "Log.cpp"


int main()	// main�����ǳ�������,main�����ķ���ֵ������ģ���Ĭ������·���0
{
	const char* hello = "Hello Cpp";
	char helloChar[5] = { 'H','e','l','l','o' };	// �����ַ�����ֹ��ֹͣ

	LOG(helloChar);

	char stopChar[6] = { 'H','e','l','l','o','\0' };

	LOG(stopChar);

	std::string str = "Hello Cherno!";
	bool contains = str.find("no") != std::string::npos;

	str += "Cpp";

	LOG(str);
	LOG(contains);

	std::string str1 = "Hello" + std::string("React");
	LOG(str1);

	std::cin.get();	// cin/cout ���Ǻ���,���������������
}
