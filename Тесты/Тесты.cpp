#include "pch.h"
#include "../Тестовое задание/Функции.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Тесты
{
	TEST_CLASS(Тесты)
	{
	public:
		TEST_METHOD(Тест1)//Правильный ввод значений
		{
			char* test_str = "Hello world, Hello world, hello world.";
			char* true_str = "Hello Hello";
			char uc = 'H';
			int len = strlen(test_str);
			Assert::IsTrue((strcmp(search_output_str(test_str, uc, len), true_str) == 0));
		}
		TEST_METHOD(Тест2)//Ввод пустой строки и символа
		{
			char* test_str = "";
			char* true_str = "";
			char uc = 'h';
			int len = strlen(test_str);
			Assert::IsTrue((strcmp(search_output_str(test_str, uc, len), true_str) == 0));
		}
		TEST_METHOD(Тест3)//Ввод строки и символа переноса строки
		{
			char* test_str = "hello world, hello world.";
			char* true_str = "";
			char uc = '\n';
			int len = strlen(test_str);
			Assert::IsTrue((strcmp(search_output_str(test_str, uc, len), true_str) == 0));
		}
		TEST_METHOD(Тест4)//Ввод строки и символа '.'
		{
			char* test_str = "hello world, hello world.";
			char* true_str = "";
			char uc = '.';
			int len = strlen(test_str);
			Assert::IsTrue((strcmp(search_output_str(test_str, uc, len), true_str) == 0));
		}
		TEST_METHOD(Тест5)//Ввод строки и символа ','
		{
			char* test_str = "hello world, hello world.";
			char* true_str = "";
			char uc = ',';
			int len = strlen(test_str);
			Assert::IsTrue((strcmp(search_output_str(test_str, uc, len), true_str) == 0));
		}
	};
}
