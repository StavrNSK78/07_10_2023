#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

//1
//int main()
//{
//	system("chcp 1251>null");
//	int k = 0 , n = 10, s = 0;
//	while (s < n)
//	{
//		s++;
//		cout << s <<" ";
//	}
//	cout << endl;
//	system("pause>null");
//	return 0;
//}

//2
//int main()
//{
//	system("chcp 1251>null");
//	int n = 9, s = -1;
//	while (s < n)
//	{
//		s = s + 2;
//		cout << s <<" ";
//	}
//	cout << endl;
//	system("pause>null");
//	return 0;
//}

//3
//int main()
//{
//	system("chcp 1251>null");
//	int k = 0, n;
//	cout << "Количество чисел: ";
//	cin >> n;
//	while (k < n)
//	{
//		k++;
//		if (k % 4 == 3)
//		{
//			cout << " " << k;
//		}
//	}
//	cout << endl;
//	system("pause>null");
//	return 0;
//}

//4
//int main() {
//	int n = 15;
//	int a = 0, b = 1, c;
//
//	for (int i = 0; i < n; i++) {
//		cout << a << endl;
//		c = a + b;
//		a = b;
//		b = c;
//	}
//
//	system("pause>null");
//	
//	return 0;
//}

//5
//int main() {
//    int n;
//    cout << "Vvedite n: ";
//    cin >> n;
//
//    while (n < 0) {
//        cout << "Error! n tol'ko plojite'oe chislo. Vvedite n: ";
//        cin >> n;
//    }
//
//    int coef = 1;
//
//    for (int i = 0; i <= n; ++i) {
//        cout << "C(" << n << ", " << i << ") = " << coef << endl;
//
//        coef = coef * (n - i) / (i + 1);
//    }
//
//    return 0;
//}

//6
//int main()
//{
//	const double mili = 0.62;
//	int km;
//	cout << "vvedite km: ";
//	cin >> km;
//	cout << "OTVET: " << (km * mili);
//}

//7
//int main()
//{
//	const double mili = 0.62;
//	const double futi = 3.28;
//	int km, m;
//	cout << "vvedite km: ";
//	cin >> km;
//	cout << "vvedite m: ";
//	cin >> m;
//	cout << "OTVET V MILYAH: " << (km * mili) << endl;
//	cout << "OTVET V FUTAH: " << (m * futi);
//}

//8
//int main()
//{
//	const double m = 2.16;
//	int c;
//	cout << "vvedite sajni: ";
//	cin >> c;
//	cout << "OTVET V MILYAH: " << (c * m) << endl;
//}

//9
//int main()
//{
//	const double saj = 2.16;
//	const double arsh = 0.72;
//	int c, a;
//	cout << "vvedite sajni: ";
//	cin >> c;
//	cout << "vvedite arshini: ";
//	cin >> a;
//	cout << "Sajni" << endl;
//	cout << "OTVET V Metrah: " << (c * saj) << endl;
//	cout << "OTVET V SM: " << (c * saj)* 100 << endl;
//	cout << endl;
//	cout << "Arshini" << endl;
//	cout << "OTVET V Metrah: " << (a * arsh) << endl;
//	cout << "OTVET V SM: " << (a * arsh) * 100 << endl;
//}

//10
//int main()
//{
//	const double sek = 3600.0;
//	const double metr = 1000.0;
//	double kmh;
//	float u;
//
//	cout << "KM/H: ";
//	cin >> kmh;
//	u = (kmh * metr) / sek;
//	cout << "M/S: " << u;
//}

//11
//int main()
//{
//	const double sek = 3.6;
//	double kmh;
//	float u;
//
//	cout << "M/S: ";
//	cin >> kmh;
//	u = kmh * sek;
//	cout << "KM/H:  " << u;
//}

//12
//int main() {
//	int n;
//	cout << "vvod chisla: ";
//	cin >> n;
//
//	int sum = 0;
//	for (int i = 1; i <= n; i++) {
//		sum += i;
//	}
//
//	cout << "summa nat chisel ot 1 do " << n << " ravna " << sum << endl;
//	return 0;
//}

//13
//int main() {
//    int n;
//    cout << "vvod chisla: ";
//    cin >> n;
//
//    int sum_odd = 0;
//    for (int i = 1; i <= n; i += 2) {
//        sum_odd += i;
//    }
//
//    cout << "summa nechetn nat chisel ot 1 do " << n << " ravna " << sum_odd << endl;
//    return 0;
//}

//№14
//int main() {
//    const int SIZE = 10; 
//    int arr[SIZE]; 
//
//    int num = 2; 
//    for (int i = 0; i < SIZE; i++) {
//        arr[i] = num; 
//        num += 2; 
//    }
//
//    cout << "resultat: ";
//    for (int i = 0; i < SIZE; i++) {
//        cout << arr[i] << " ";
//    }
//   
//    return 0;
//}

//№15
//int main() {
//    const int SIZE = 10; 
//    int arr[SIZE]; 
//    int num = 1; 
//    for (int i = 0; i < SIZE; i++) {
//        arr[i] = num; 
//        num += 2; 
//    }
//
//    cout << "resultat: ";
//    for (int i = 0; i < SIZE; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}

//№16
//int main() {
//    const int SIZE = 10; 
//    int arr[SIZE]; 
//
//    for (int i = 0; i < SIZE; i++) {
//        arr[i] = (i + 1) * (i + 1); 
//    }
//
//    cout << "resultat: ";
//    for (int i = 0; i < SIZE; i++) {
//       cout << arr[i] << " ";
//    }
//   cout << endl;
//
//    return 0;
//}

//№17
//int main() {
//    const int SIZE = 10;
//    int arr[SIZE];
//
//    for (int i = 0; i < SIZE; i++) {
//        arr[i] = 1 << i;
//    }
//
//    cout << "resultat: ";
//    for (int i = 0; i < SIZE; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}

// 18
//int main() {
//    const int n = 10;
//    int fib[n];
//
//    fib[0] = 1;
//    fib[1] = 1;
//
//    for (int i = 2; i < n; i++) {
//        fib[i] = fib[i - 1] + fib[i - 2];
//    }
//
//    cout << "chisla fib.: ";
//    for (int i = 0; i < n; i++) {
//        cout << fib[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}

//19
//int main() 
//{
//    const int SIZE = 10; 
//    int arr[SIZE]; 
//
//    for (int i = 0; i < SIZE; i++) 
//    {
//        if (i % 2 == 0) {
//            arr[i] = i;
//        }
//        else {
//            arr[i] = pow(i, 2);
//        }
//    }
//
//    for (int i = 0; i < SIZE; i++) 
//    {
//        cout << "arr[" << i << "] = " << arr[i] << endl;
//    }
//
//    return 0;
//}

//20
//int main() 
//{
//    const int SIZE = 10; 
//    int arr[SIZE];        
//
//    for (int i = 0; i < SIZE; i++) 
//{
//        cout << "Enter value " << i << ": ";
//        cin >> arr[i];
//}
//    cout << "Arr: ";
//
//    for (int i = 0; i < SIZE; i++) {
//        cout << arr[i] << " ";
//}
//
//    cout << endl;
//    return 0;
//}





//ЗА МАРТ
//#1
//int main() {
//    setlocale(LC_ALL, "Russian");
//    double M, P, K;
//    cout << "Введите M: ";
//    cin >> M;
//    cout << "Введите P: ";
//    cin >> P;
//    cout << "Введите K: ";
//    cin >> K;
//
//    double norm = M;
//    int day = 1;
//
//    while (norm < K)
//    {
//        norm *= (1 + P / 100);
//        day++;
//    }
//
//    cout << day << " дней потребуется " << endl;
//
//    return 0;
//}

//#2
//int main() {
//    setlocale(LC_ALL, "Russian");
//    int N, L, K;
//    cout << "Введите N: ";
//    cin >> N;
//    cout << "Введите L: ";
//    cin >> L;
//    cout << "Введите K: ";
//    cin >> K;
//
//    for (int i = L; i <= K; i++)
//    {
//        cout << N << " x " << i << " = " << N * i << endl;
//    }
//
//    return 0;
//}

//#3
//int main() {
//    setlocale(LC_ALL, "Russian");
//    double m, k, s;
//    cout << "Введите m: ";
//    cin >> m;
//    cout << "Введите k: ";
//    cin >> k;
//    cout << "Введите s: ";
//    cin >> s;
//
//    int years = 0;
//    double deposit = m;
//
//    while (deposit < s)
//    {
//        deposit += deposit * (k / 100);
//        years++;
//    }
//
//    cout << " потребуется " << years << " лет, чтобы сумма превысила " << s << " тысяч рублей " << endl;
//
//    return 0;
//}

//#4
//int main() {
//    setlocale(LC_ALL, "Russian");
//    double m, k;
//    int N;
//    cout << "Введите m: ";
//    cin >> m;
//    cout << "Введите k: ";
//    cin >> k;
//    cout << "Введите N: ";
//    cin >> N;
//
//    double debt = m * pow((1 + k / 100), N);
//
//    cout << " долг бизнесмена после " << N << " лет составляет " << debt << " тысяч рублей  " << endl;
//
//    return 0;
//}




//ЗА АПРЕЛЬ
//№1(for)
//int main() {
//    int n, sum = 0;
//
//    cout << "vvedide pol. celoe chislo: ";
//    cin >> n;
//    if (n < 0) {
//        cout << "Error! n tol'ko plojite'oe chislo. Vvedite n:" << endl;
//        cin >> n;
//    }
//
//    for (int i = 1; i <= n; i += 2) {
//        sum += i;
//    }
//
//    cout << "summa nechet. chisel do " << n << " = " << sum << endl;
//
//    return 0;
// }
//№1(while)
//int main() {
//    int n, sum = 0, i = 1;
//
//    cout << "vvedite pol. celoe chislo: ";
//    cin >> n;
//    if (n < 0) {
//        cout << "Error! n tol'ko plojite'oe chislo. Vvedite n:" << endl;
//        cin >> n;
//    }
//
//        while (i <= n) {
//            if (i % 2 != 0) {
//                sum += i;
//            }
//            i++;
//        }
//        cout << "summa nechet. chisel do " << n << " = " << sum << endl;
//
//    return 0;
//}
//№1(do-while)
//int main() {
//    int n;
//    int sum = 0;
//
//    cout << "Vvedite n: ";
//    cin >> n;
//
//    if (n < 0) {
//        cout << "Error! n tol'ko plojite'oe chislo. Vvedite n:" << endl;
//        cin >> n;
//    }
//
//    int i = 1; 
//
//    do {
//        if (i % 2 != 0) {
//            sum += i; 
//        }
//        i++;
//    } while (i <= n);
//
//    cout << "summa nechet. chisel do " << n << " = " << sum << endl;
//
//    return 0;
//}

//№2 
int main() {
    int n, sum = 0;

    cout << "vvedide pol. celoe chislo: ";
    cin >> n;

    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }

    cout << "summa chet. chisel do " << n << " = " << sum << endl;

    return 0;
 }

//int main() {
//    int n;
//    cout << "vvedide pol. celoe chislo: ";
//    cin >> n;
//
//    if (n < 0) {
//        cout << "Error! n tol'ko plojite'oe chislo. Vvedite n:" << endl;
//        cin >> n;
//    }
//
//    int sum = 0;
//    int i = 2;
//
//    while (i <= n) {
//        sum += i; 
//        i += 2;
//    }
//
//    cout << "summa chet. chisel do " << n << " = " << sum << endl;
//
//    return 0;
//}

//int main() {
//    int n;
//    cout << "vvedide pol. celoe chislo: ";
//    cin >> n;
//
//    if (n < 0) {
//        cout << "Error! n tol'ko plojite'oe chislo. Vvedite n:" << endl;
//        return 1;
//    }
//
//    int sum = 0;
//    int i = 2; 
//
//    do {
//        sum += i; 
//        i += 2; 
//    } while (i <= n);
//
//    cout << "summa chet. chisel do " << n << " = " << sum << endl;
//
//    return 0;
//}

//№3
//int main() {
//    int num;
//    cout << "vvedide pol. celoe chislo: ";
//    cin >> num;
//
//    cout << "chisla na kotorie " << num << " delitsia bez ostatka: ";
//    for (int i = 1; i <= num; i++) {
//        if (num % i == 0) {
//            cout << i << " ";
//        }
//    }
//    return 0;
//}

//№4
//int main() {
//    int num1, num2, gcd;
//    cout << "Vvedite 2 celih chisla: ";
//    cin >> num1 >> num2;
//
//    for (int i = 1; i <= num1 && i <= num2; ++i) {
//        if (num1 % i == 0 && num2 % i == 0) {
//            gcd = i;
//        }
//    }
//
//    cout << "naibol'shii obshii delitel' dlia " << num1 << " and " << num2 << " = " << gcd;
//
//    return 0;
//} 

//№5
//int main() {
//	setlocale(LC_ALL, "Russian");
//	double x, ot = 0;
//	int n;
//	cout << "Введите x:";
//	cin >> x;
//	cout << "Введите n:";
//	cin >> n;
//
//	for (int i = 1; i <= n; i++) {
//		ot += pow(-1, i + 1) * pow(x, i) / i;
//	}
//	cout << "ln(1 + " << x << ")= " << ot;
//	return 0;
//}

//№6
//int main() {
//	  setlocale(LC_ALL, "Russian");
//    double x; 
//    int n; 
//    double sum = 0.0;
//
//    cout << "Введите значение x : ";
//    cin >> x;
//
//    cout << "Введите количество членов в ряду Тейлора: ";
//    cin >> n;
//
//    for (int i = 0; i <= n; i++) {
//        sum += (pow(-1, i) * pow(x, 2 * i + 1)) / tgamma(2 * i + 2);
//    }
//
//    cout << "Значение sin(" << x << ") с использованием " << n << " членов ряда Тейлора равно: " << sum << endl;
//    return 0;
//}

//№7
//int main() {
//    setlocale(LC_ALL, "Russian");
//    double x, result = 0;
//    int n;
//
//    cout << "Введите значение x: ";
//    cin >> x;
//
//    cout << "Введите n: ";
//    cin >> n;
//
//    for (int i = 0; i <= n; i++) {
//        result += (pow(-1, i) * pow(x, 2 * i)) / tgamma(2 * i + 1);
//    }
//
//    cout << "cos(" << x << ") = " << result << endl;
//
//    return 0;
//}

//№8
//int main() {
//    setlocale(LC_ALL, "Russian");
//    double x, result = 0;
//    int n;
//
//    cout << "Введите значение x: ";
//    cin >> x;
//
//    cout << "Введите n: ";
//    cin >> n;
//
//    for (int i = 0; i <= n; i++) {
//        result += pow(x, 2 * i + 1 ) / (tgamma(2 * i + 2));
//    }
//
//    cout << "sinh(" << x << ") = " << result << endl;
//
//    return 0;
//}

//№9
//int main() {
//    setlocale(LC_ALL, "Russian");
//    double x, result = 0;
//    int n;
//
//    cout << "Введите значение x: ";
//    cin >> x;
//
//    cout << "Введите n: ";
//    cin >> n;
//
//    for (int i = 0; i <= n; i++) {
//        result += pow(x, 2 * i) / (tgamma(2 * i + 1));
//    }
//
//    cout << "cosh(" << x << ") = " << result << endl;
//
//    return 0;
//}

//№10
//int main() {
//    setlocale(LC_ALL, "Russian");
//    double x, result = 0;
//    int n;
//
//    cout << "Введите значение x: ";
//    cin >> x;
//
//    cout << "Введите n: ";
//    cin >> n;
//
//    for (int i = 0; i <= n; i++) {
//        result += pow(x, i) / tgamma((i + 2));
//    }
//
//    cout << "значение выражения  = " << result << endl;
//
//    return 0;
//}

//№11
//int main() {
//    setlocale(LC_ALL, "Russian");
//    double A, B, x;
//    cout << "Введите значение A: ";
//    cin >> A;
//    cout << "Введите значение B: ";
//    cin >> B;
//
//    if (A == 0) {
//        if (B == 0) {
//            cout << "Уравнение имеет бесконечное количество решений." << endl;
//        }
//        else {
//            cout << "Уравнение не имеет решений." << endl;
//        }
//    }
//    else {
//        x = B / A;
//        cout << "Решение уравнения: x = " << x << endl;
//    }
//
//    return 0;
//}

//№12
//int main() {
//    setlocale(LC_ALL, "Russian");
//    int A, B, x;
//    cout << "Введите значение A: ";
//    cin >> A;
//    cout << "Введите значение B: ";
//    cin >> B;
//
//    if (A == 0) {
//        if (B == 0) {
//            cout << "Уравнение имеет бесконечное количество решений." << endl;
//        }
//        else {
//            cout << "Уравнение не имеет решений." << endl;
//        }
//    }
//    else {
//        if (B % A == 0) {
//            x = B / A;
//            cout << "Решение уравнения: x = " << x << endl;
//        }
//        else {
//            cout << "Уравнение не имеет решений в множестве целых чисел." << endl;
//        }
//    }
//
//    return 0;
//}


//№13
//int main() {
//    cout << "Целочисленные параметры a, b и c, такие что a^2 + b^2 = c^2:" << endl;
//    for (int a = 1; a <= 100; ++a) {
//        for (int b = a; b <= 100; ++b) {
//            int c = sqrt(a * a + b * b);
//            if (c * c == a * a + b * b && c <= 100) {
//                cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
//            }
//        }
//    }
//
//    return 0;
//}


//№14
//int main() {
//    setlocale(LC_ALL, "Russian");
//    cout << "Введите коэффициенты A, B и C для уравнения Ax^2 + Bx + C = 0: ";
//    double A, B, C;
//    cin >> A >> B >> C;
//
//    double discriminant = B * B - 4 * A * C;
//
//    if (discriminant > 0) {
//        double x1 = (-B + sqrt(discriminant)) / (2 * A);
//        double x2 = (-B - sqrt(discriminant)) / (2 * A);
//        cout << "Два действительных корня: x1 = " << x1 << ", x2 = " << x2 << endl;
//    }
//    else if (discriminant == 0) {
//        double x = -B / (2 * A);
//        cout << "Один действительный корень: x = " << x << endl;
//    }
//    else {
//        cout << "Нет действительных корней" << endl;
//    }
//
//    return 0;
//}

//№15
//int main() {
//    setlocale(LC_ALL, "Russian");
//    cout << "Введите число в диапазоне от 1 до 10: ";
//    int number;
//    cin >> number;
//
//    switch (number) {
//    case 1:
//    case 2:
//    case 3:
//    case 5:
//    case 8:
//        cout << "Число " << number << " является числом Фибоначчи." << endl;
//        break;
//    default:
//        cout << "Число " << number << " не является числом Фибоначчи." << endl;
//        break;
//    }
//
//    return 0;
//}
