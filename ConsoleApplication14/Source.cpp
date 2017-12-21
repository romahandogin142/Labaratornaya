#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <stdio.h>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Rus");
start:
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, 6);
	int nz = 0;
	cout << "Введите номер задания один или два: ";
	cin >> nz;
	cout << "____________________________________" << endl;
	system("cls");
	if (nz == 1)
	{
		HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(handle, 6);
		cout << "Хотите стать профессиональным музыкантом? (Да-1, Нет-0) ";
		int a;
		cin >> a;
		cout << "____________________________________________________________" << endl;
		if (a == 1)
		{
			HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(handle, 4);
			cout << "Вы богаты?(Да-1, Нет-0) ";
			cin >> a;
			cout << "_________________________" << endl;
			if (a == 1)
			{
			otryv:
				HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(handle, 3);
				cout << "Любите отрываться?(Да-1, Нет-0) ";
				cin >> a;
				cout << "________________________________" << endl;
				if (a == 1)
				{
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 2);
					cout << "Пьете пиво?(Да-1, Нет-0) ";
					cin >> a;
					cout << "_________________________" << endl;
					if (a == 1)
					{
						HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(handle, 4);
						cout << "Хотите играть классику ?(Да-1, Нет-0, Незнаю-2) ";
						cin >> a;
						cout << "_________________________________________________" << endl;
						if (a == 1)

						{
							HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
							SetConsoleTextAttribute(handle, 1);
							cout << "Готовы работать круглосуточно ?(Да-1, Нет-0) ";
							cin >> a;
							cout << "_____________________________________________" << endl;
							if (a == 1)
							{
								HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
								SetConsoleTextAttribute(handle, 4);
								cout << " Ваш инструсмент ГОБОЙ " << endl;
								system("pause");
								goto start;
								cout << "_______________________" << endl;
								
							}
							if (a == 0)
							{
								HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
								SetConsoleTextAttribute(handle, 7);
								cout << "Готовы к тому, что будут проблемы с работой даже если вы круто играете? ?(Да-1, Нет-0) ";
								cin >> a;
								cout << "_______________________________________________________________________________________" << endl;
								if (a == 0)
								{
									HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
									SetConsoleTextAttribute(handle, 6);
									cout << " Ваш инструсмент ВАЛТОРНА " << endl;
									cout << "__________________________" << endl;
									system("pause");
									goto start;
								}
								if (a == 1)
								{
									HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
									SetConsoleTextAttribute(handle, 1);
									cout << " Ваш инструсмент КЛАРНЕТ " << endl;
									system("pause");
									goto start;
									cout << "_________________________" << endl;
								}
							}

						}

						if (a == 0)

						{
							HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
							SetConsoleTextAttribute(handle, 4);
							cout << "...а джаз ?(Да-1, Нет-0) ";
							cin >> a;
							cout << "__________________________" << endl;
							if (a == 0)
							{
								HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
								SetConsoleTextAttribute(handle, 6);
								cout << "У вас есть немецкие корни ?(Да-1, Нет-0) ";
								cin >> a;
								cout << "_________________________________________" << endl;
								if (a == 0)
								{
									HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
									SetConsoleTextAttribute(handle, 2);
									cout << "Ваш инструмент ДУДУК " << endl;
									system("pause");
									goto start;
									cout << "_____________________" << endl;
								}
								if (a == 1)
								{
									HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
									SetConsoleTextAttribute(handle, 3);
									cout << "Ваш инструмент ТРУБА " << endl;
									system("pause");
									goto start;
									cout << "_____________________" << endl;
								}
							}
							if (a == 1)

							{
								HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
								SetConsoleTextAttribute(handle, 4);
								cout << "Ваш инструмент САКСАФОН " << endl;
								system("pause");
								goto start;
								cout << "_________________________" << endl;
							}
						}

						if (a == 2)
						{
							HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
							SetConsoleTextAttribute(handle, 5);
							cout << " Ваш инструсмент ТРОМБОН " << endl;
							system("pause");
							goto start;
							cout << "__________________________" << endl;
						}
					}
					if (a == 0)
					{
						HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(handle, 6);
						cout << "Вы страстная натура?(Да-1, Нет-0) ";
						cin >> a;
						cout << "__________________________________" << endl;
						if (a == 0)
						{
							HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
							SetConsoleTextAttribute(handle, 7);
							cout << "Ваш инструмент ДОМБРА " << endl;
							system("pause");
							goto start;
							cout << "_______________________" << endl;
						}
						if (a == 1)
						{
							HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
							SetConsoleTextAttribute(handle, 8);
							cout << "Ваш инструмент ВИЛОНЧЕЛЕ " << endl;
							system("pause");
							goto start;
							cout << "_________________________" << endl;
						}
					}
				}
				if (a == 0)
				{
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 9);
					cout << "Готовы заниматься по 8 часов в день?(Да-1, Нет-0) ";
					cin >> a;
					cout << "___________________________________________________" << endl;
					if (a == 0)
					{
						HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(handle, 1);
						cout << "Ноты знате?(Да-1, Нет-0) ";
						cin >> a;
						cout << "_________________________" << endl;
						if (a == 0)
						{
							HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
							SetConsoleTextAttribute(handle, 2);
							cout << "Aльт " << endl;
							system("pause");
							goto start;
							cout << "______" << endl;

						}
						if (a == 1)
						{
							HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
							SetConsoleTextAttribute(handle, 3);
							cout << "Ваш инструмент АРФА " << endl;
							system("pause");
							goto start;
							cout << "_____________________" << endl;

						}
					}
					if (a == 1)
					{
						HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(handle, 4);
						cout << "Хотите учить детей?(Да-1, Нет-0) ";
						cin >> a;
						cout << "__________________________________" << endl;
						if (a == 1)
						{
							HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
							SetConsoleTextAttribute(handle, 5);
							cout << "Ваш инструмент ФЛЕЙТА " << endl;
							system("pause");
							goto start;
							cout << "______________________" << endl;
						}
						if (a == 0)
						{
							HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
							SetConsoleTextAttribute(handle, 6);
							cout << "Ваш инструмент СКРИПКА " << endl;
							system("pause");
							goto start;
							cout << "_______________________" << endl;
						}
					}
				}
			}
			if (a == 0)
			{
				HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(handle, 7);
				cout << "Любите деньги ?(Да-1, Нет-0) ";
				cin >> a;
				cout << "_____________________________" << endl;
				if (a == 1)
				{
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 8);
					cout << "Забудьте о музыке " << endl;
					system("pause");
					goto start;
					cout << "__________________" << endl;

				}
				if (a == 0)
				{
					goto otryv;
				}

			}
		}
		if (a == 0)
		{
			HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(handle, 9);
			cout << "Хотите встречаться с девушками ?(Да-1, Нет-0) ";
			cin >> a;
			cout << "______________________________________________" << endl;
			if (a == 0)
			{
				HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(handle, 1);
				cout << "Хотите встречаться с парнями ?(Да-1, Нет-0) ";
				cin >> a;
				cout << "_____________________________________________" << endl;
				if (a == 0)
				{
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 2);
					cout << "Ваш инструмент ФАГОТ " << endl;
					system("pause");
					goto start;
					cout << "_____________________" << endl;
				}
				if (a == 1)
				{
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 3);
					cout << "Вы парень ?(Да-1, Нет-0) ";
					cin >> a;
					cout << "_________________________" << endl;
					if (a == 1)
					{
						HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(handle, 4);
						cout << "Вы оперный пивец" << endl;
						system("pause");
						goto start;
						cout << "_________________" << endl;
					}
					if (a == 0)
					{
						HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(handle, 5);
						cout << "Ударные" << endl;
						system("pause");
						goto start;
						cout << "_______" << endl;
					}
				}
			}
			if (a == 1)
			{
				HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(handle, 6);
				cout << "Любите глупышек ?(Да-1, Нет-0) ";
				cin >> a;
				cout << "_______________________________" << endl;
				if (a == 1)
				{
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 7);
					cout << "Любите выпить ?(Да-1, Нет-0) ";
					cin >> a;
					cout << "_____________________________" << endl;
					if (a == 1)
					{
						HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 8);
						cout << "Ваш инструмент ГИТАРА " << endl;
						system("pause");
						goto start;
						cout << "_______________________" << endl;
					}
					if (a == 0)
					{
						HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(handle, 9);
						cout << "Ваш инструмент ФОРТЕПИАНО " << endl;
						system("pause");
						goto start;
						cout << "___________________________" << endl;
					}

				}
				if (a == 0)
				{
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 1);
					cout << "Вы парень ?(Да-1, Нет-0) ";
					cin >> a;
					cout << "_________________________" << endl;
					if (a == 1)
					{
						HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(handle, 2);
						cout << "Вы оперный пивец" << endl;
						system("pause");
						goto start;
						cout << "_________________" << endl;
					}
					if (a == 0)
					{
						HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(handle, 3);
						cout << "Ударные" << endl;
						system("pause");
						goto start;
						cout << "_______" << endl;
					}

				}
			}
		}

	}

	else if (nz == 2)
	{
		system("cls");
		int a;
		HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(handle, 6);
		cout << "Зачем вы хотите изучить программирование? " << endl;
		cout << "(1 - для детей )  (2-Заработать?) (3-я не знаю, выберите для меня) (4- поразвлечься) (5-интересно) (6-саморазвитие)" << endl;
		cin >> a;
		cout << "_______________________________________________________________________________________________________________________" << endl;
		if (a == 1)
		{
			HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(handle, 2);
			cout << "Начните со Scratch,( затем нажмите 1 для того чтобы узнать какой вы будете изучать язык!  ) ";
			cin >> a;
			cout << "____________________________________________________________________________________________" << endl;
			if (a == 1)
			{
				HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(handle, 6);
				cout << "Ваш язык сгенирирован  для изучения програмирования  и его название PYTHON" << endl;
				system("pause");
				cout << "___________________________________________________________________________" << endl;
				system("pausee");
				system("cls");
				goto start;

			}
		}
		if (a == 2)
		{
			HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(handle, 4);
			cout << "(1-найти работу?), (2-у меня есть идея для стартапа!)";
			cin >> a;
			cout << "______________________________________________________" << endl;
			if (a == 1)
			{
				HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(handle, 4);
			too:
				cout << "Какую платформу/сферу  вы выбирите?" << endl;
				cout << "1 - Я хочу работать в крупной компании" << endl;
				cout << "2 - Я просто хочу деньги " << endl;
				cout << "3 - Веб " << endl;
				cout << "4 - Корпоротивный софт " << endl;
				cout << "5 - Мобильная " << endl;
				cout << "6 - 3D/игры " << endl;
				cout << "Так что вы выберите";
				cin >> a;
				if (a == 1)
				{
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 4);
					cout << "Ваш язык сгенирирован  для изучения програмирования. Вы будете изучать (PYTHON, C#, C++) " << endl;
					goto start;
					cout << "_________________________________________________________________________________________" << endl;
				}
				if (a == 2)
				{
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 4);
					cout << "Ваш язык сгенирирован  для изучения програмирования. Вы будете изучать язык (JAVA) " << endl;
					goto start;
					cout << "_____________________________________________________________________________________" << endl;
				}
				if (a == 3)
				{
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 4);
				veb:
					cout << "(1 - Фронтенд (веб - интерфейс)), (2 - Бэкенд(то что за вебсайтом))" << endl;
					cin >> a;
					cout << "___________________________________________________________________" << endl;
					if (a == 1)
					{
						HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(handle, 4);
						cout << "Вы будете изучать 'JAVASCRIPT' " << endl;
						goto start;
						cout << "___________________________________________________________________" << endl;
					}
					if (a == 2)
					{
						HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(handle, 4);
						cout << "Хочу работать на .... (1-'Корпорацию') (2- 'Стартап') " << endl;
						cin >> a;
						cout << "___________________________________________________________________" << endl;
						if (a == 1)
						{
							HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
							SetConsoleTextAttribute(handle, 4);
							cout << "Что скажете о Microsoft?";
							goto soft;
							cout << "_________________________" << endl;

						}
						if (a == 2)
						{
							HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
							SetConsoleTextAttribute(handle, 4);
						novi:
							cout << "Хотите попробовать что-то новое,но не очень трудоемкое ?(1-'Да') (2- 'Нет') (3- 'Незнаю') " << endl;
							cin >> a;
							cout << "__________________________________________________________________________________________" << endl;
							if (a == 1)
							{
								HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
								SetConsoleTextAttribute(handle, 3);
							nov:
								cout << "Вы будете изучать 'JAVASCRIPT' " << endl;
								goto start;
								cout << "___________________________________" << endl;
							}
							if (a == 2)
							{
								HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
								SetConsoleTextAttribute(handle, 1);
							igra:
								cout << "Какая у вас любимая игрушка?" << endl;
								cout << "1-Lego" << endl;
								cout << "2-Пластилин" << endl;
								cout << "3-Старенький но любимый мишка" << endl;
								cin >> a;
								cout << "_____________________________" << endl;
								if (a == 1)
								{
									HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
									SetConsoleTextAttribute(handle, 2);
									cout << "Вы будете изучать 'PYTHON' " << endl;
									cout << "___________________________" << endl;
								}
								if (a == 2)
								{
									HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
									SetConsoleTextAttribute(handle, 2);
									cout << "Вы будете изучать 'RUBY' " << endl;
									goto start;
									cout << "_____________________________" << endl;
								}
								if (a == 3)
								{
									HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
									SetConsoleTextAttribute(handle, 2);
									cout << "Вы будете изучать 'PHP' " << endl;
									goto start;
									cout << "_________________________" << endl;
								}
							}
							if (a == 3)
							{
								goto igra;
							}
						}
					}
				}
				if (a == 4)
				{
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 4);
				soft:
				cor:
					cout << "Корпоротивный софт" << endl;
					cout << "__________________" << endl;
					goto start;

				}
				if (a == 5)
				{
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 5);
				mobil:
					cout << "Какая OS? (1 - IOS) (2 - Android)" << endl;
					cin >> a;
					if (a == 1)
					{
						cout << "Ваш язык изучения 'OBJECTIVE-C'  " << endl;
						goto start;
					}
					if (a == 2)
					{
						cout << "Ваш язык изучения 'JAVA'  ";
						goto start;
					}
				}
				if (a == 6)
				{
					cout << "Ваш язык изучения 'C++'  ";
					goto start;
				}
			}
			if (a == 2)
			{
				HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(handle, 9);
			platforma:
				cout << "Какая плотформа/сфера?" << endl;
				cout << "1- 3D игры " << endl;
				cout << "2 -  Мобильная" << endl;
				cout << "3 - Корпоротивный софт" << endl;
				cout << "4 - Веб" << endl;
				cout << "Что вы выберите :  ";
				cin >> a;
				cout << "______________________" << endl;
				if (a == 1)
				{
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 1);
					cout << "Ваш язык изучения 'C++'  ";
					goto start;
					cout << "______________________" << endl;
				}
				if (a == 2)
				{
					goto mobil;
				}
				if (a == 3)
				{
					goto cor;
				}
				if (a == 4)
				{
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 4);
					cout << "Ваш сервис будет работать в реальном времени, как в twitter? (1-Да) (2 - Нет) ";
					cin >> a;
					cout << "_______________________________________________________________________________" << endl;
					if (a == 2)
					{
						goto novi;
					}
					if (a == 1);
					{
						goto nov;
					}
				}
			}
		}
		if (a == 3)
		{
			HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(handle, 4);
			cout << "Ваш язык сгенирирован  для изучения програмирования  и его название PYTHON" << endl;
			goto start;
			cout << "__________________________________________________________________________" << endl;

		}
		if (a = 4)
		{
		poro:
			HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(handle, 1);
			cout << "Уже есть идея на миллион?(1 - Да), (2 - Нет.Просто хочу начать)";
			cin >> a;
			cout << "_______________________________________________________________" << endl;
			if (a == 2)
			{
				HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(handle, 2);
				cout << "Мне нравится учиться" << endl;
				cout << "1- простым способом" << endl;
				cout << "2 - лучшим способом" << endl;
				cout << "3 - трудненьким способом " << endl;
				cout << "4 - очень сложный путь (но потом будет легче)" << endl;
				cout << "Ведите что вы хотите  " << endl;
				cin >> a;
				cout << "_____________________________________________" << endl;
				if (a == 1)
				{

					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 6);
					cout << "Ваш язык сгенирирован  для изучения програмирования  и его название PYTHON" << endl;
					goto start;
					cout << "___________________________________________________________________________" << endl;
				}
				if (a == 2)
				{
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 6);
					cout << "Ваш язык сгенирирован  для изучения програмирования  и его название PYTHON" << endl;
					goto start;
					cout << "_______________________________________________________________________________" << endl;
				}
				if (a == 3)
				{
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 6);
					cout << "Какая коробка передач (1 - Автомат) , ( 2- Ручная ) ";
					cin >> a;
					cout << "_____________________________________________________";
					if (a == 1)
					{
						cout << "Ваш язык сгенирирован  для изучения програмирования  и его название JAVA" << endl;
						goto start;
					}
					if (a == 2)
					{
						cout << "Ваш язык сгенирирован  для изучения програмирования  и его название 'C'" << endl;
						goto start;
					}
				}
				if (a == 4)
				{
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 6);
					cout << "Ваш язык сгенирирован  для изучения програмирования  и его название 'C++'" << endl;
					goto start;
					cout << "__________________________________________________________________________" << endl;
				}
				{

				}
			}
			if (a == 1)
			{
				goto platforma;
			}
		}
		if (a == 5)
		{
			goto poro;

		}
		if (a == 6)
		{
			goto poro;
		}

	}















	system("pause");
	//getch();
}