﻿// ConsoleApplication24.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    //3.Написать программу, которая предлагает пользователю ввести сумму денежного вклада в гривнах, а также процент годовых, которые выплачивает банк.
    //Определить сумму денег, выплачиваемых банком вкладчику каждый месяц.

    double summ, proc;

    cout << "Deposut:";
    cin >> summ;
    cout << "%:";
    cin >> proc;
    proc = (proc / 100.0) / 12;

    cout << summ * proc << endl;

    //4.Сколько товара ценой Y можно купить на Х гривен и сколько получить сдачи?

    int tow, grn;

    cout << "Stoumoctb tovara:";
    cin >> tow;
    cout << "Kolvo washux denyak:";
    cin >> grn;
    
    cout <<"Bbl KYTlUTE:" << tow % grn << ", u y wac octanetcya: " << grn - (tow % grn) << "grn" << endl;


    //6.Ввести длину, ширину и высоту комнаты.
    //Подсчитать, сколько краски уйдет на покраску стен этой комнаты, если на 1м2 стены приходится N литров краски и M% поверхности стен занимают окна и двери. 
    //Также, рассчитать общую стоимость краски, с учётом того, что один литр краски стоит R гривен. 

    double d, h, w, s, stoim, ras;
    int n, m, r;

    cout << "dlina:";
    cin >> d;
    cout << "shirina:";
    cin >> w;
    cout << "visota:";
    cin >> h;
    cout << "skolko l na 1 steny:";
    cin >> n;
    cout << "skolko okon i dverei:";
    cin >> m;
    cout << "skolko stoit 1l:";
    cin >> r;

    s = (d * h * 2) + (w * h * 2);
    ras = (s - (s * m / 10)) * n;
    stoim = ras * r;

    cout << s << " , " << ras << " , " << stoim << endl;


}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
