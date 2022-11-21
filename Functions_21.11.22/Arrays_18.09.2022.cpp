#include<iostream>
//Описание функции - будет видно в подсказке при наведении курсора
//на функцию в main
int Unite(int groupA, int groupB) {
	int result{};
	result = groupA + groupB;
	return result;
}
void Increase(int number) {
	int result{};
	result = number + 5;
	std::cout << result;
}
int Decrease(int number) {
	int result{};
	result = number - 1;
	return result;
}
void Diapazon(int start, int finish) {
	int sum = 0;
	for (int i = start; i <= finish; i++) {
		
		std::cout << i << ",";
	}
}
int Summa(int sum1, int sum2) {
	int sum = 0;
	for (int i = sum1; i < sum2; i++) {
		sum += i;
	}
	return sum;
}
int stepen(int num1, int num2) {
	int result=num1;
	for (int i = 1; i < num2; i++) {
		result *= num1;
	}
	
	if (num2 == 0)
	return 1;
	else 
	return result;
}
int main() {
	setlocale(LC_ALL, "Russian");
	int a{},b{};
	std::cout << "enter the number:";
	std::cin>> a;
	std::cout << "result + 5 =";
	Increase(a);
	std::cout << "\n";
	std::cout << "enter the number:";
	std::cin >> a;
	std::cout << "number - 1= " << Decrease(a) << "\n";
	std::cout << "enter the number:";
	std::cout << "input the diapazon:";
	std::cin >> a;
	std::cin >> b;
	Diapazon(a,b);
	std::cout << "\n";
	std::cout << "input the diapazon: ";
	std::cin >> a;
	std::cin >> b;
	std::cout << "summa = " << Summa(a, b);
	std::cout << "\n";
	std::cout << "enter the numbers:";
	std::cin >> a;
	std::cin >> b;
	std::cout << "stepen = " << stepen(a, b)<<"\n";
	
	return 0;


}


