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
	cout << "������� ����� ������� ���� ��� ���: ";
	cin >> nz;
	cout << "____________________________________" << endl;
	system("cls");
	if (nz == 1)
	{
		HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(handle, 6);
		cout << "������ ����� ���������������� ����������? (��-1, ���-0) ";
		int a;
		cin >> a;
		cout << "____________________________________________________________" << endl;
		if (a == 1)
		{
			HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(handle, 4);
			cout << "�� ������?(��-1, ���-0) ";
			cin >> a;
			cout << "_________________________" << endl;
			if (a == 1)
			{
			otryv:
				HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(handle, 3);
				cout << "������ ����������?(��-1, ���-0) ";
				cin >> a;
				cout << "________________________________" << endl;
				if (a == 1)
				{
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 2);
					cout << "����� ����?(��-1, ���-0) ";
					cin >> a;
					cout << "_________________________" << endl;
					if (a == 1)
					{
						HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(handle, 4);
						cout << "������ ������ �������� ?(��-1, ���-0, ������-2) ";
						cin >> a;
						cout << "_________________________________________________" << endl;
						if (a == 1)

						{
							HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
							SetConsoleTextAttribute(handle, 1);
							cout << "������ �������� ������������� ?(��-1, ���-0) ";
							cin >> a;
							cout << "_____________________________________________" << endl;
							if (a == 1)
							{
								HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
								SetConsoleTextAttribute(handle, 4);
								cout << " ��� ����������� ����� " << endl;
								system("pause");
								goto start;
								cout << "_______________________" << endl;
								
							}
							if (a == 0)
							{
								HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
								SetConsoleTextAttribute(handle, 7);
								cout << "������ � ����, ��� ����� �������� � ������� ���� ���� �� ����� �������? ?(��-1, ���-0) ";
								cin >> a;
								cout << "_______________________________________________________________________________________" << endl;
								if (a == 0)
								{
									HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
									SetConsoleTextAttribute(handle, 6);
									cout << " ��� ����������� �������� " << endl;
									cout << "__________________________" << endl;
									system("pause");
									goto start;
								}
								if (a == 1)
								{
									HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
									SetConsoleTextAttribute(handle, 1);
									cout << " ��� ����������� ������� " << endl;
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
							cout << "...� ���� ?(��-1, ���-0) ";
							cin >> a;
							cout << "__________________________" << endl;
							if (a == 0)
							{
								HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
								SetConsoleTextAttribute(handle, 6);
								cout << "� ��� ���� �������� ����� ?(��-1, ���-0) ";
								cin >> a;
								cout << "_________________________________________" << endl;
								if (a == 0)
								{
									HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
									SetConsoleTextAttribute(handle, 2);
									cout << "��� ���������� ����� " << endl;
									system("pause");
									goto start;
									cout << "_____________________" << endl;
								}
								if (a == 1)
								{
									HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
									SetConsoleTextAttribute(handle, 3);
									cout << "��� ���������� ����� " << endl;
									system("pause");
									goto start;
									cout << "_____________________" << endl;
								}
							}
							if (a == 1)

							{
								HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
								SetConsoleTextAttribute(handle, 4);
								cout << "��� ���������� �������� " << endl;
								system("pause");
								goto start;
								cout << "_________________________" << endl;
							}
						}

						if (a == 2)
						{
							HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
							SetConsoleTextAttribute(handle, 5);
							cout << " ��� ����������� ������� " << endl;
							system("pause");
							goto start;
							cout << "__________________________" << endl;
						}
					}
					if (a == 0)
					{
						HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(handle, 6);
						cout << "�� ��������� ������?(��-1, ���-0) ";
						cin >> a;
						cout << "__________________________________" << endl;
						if (a == 0)
						{
							HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
							SetConsoleTextAttribute(handle, 7);
							cout << "��� ���������� ������ " << endl;
							system("pause");
							goto start;
							cout << "_______________________" << endl;
						}
						if (a == 1)
						{
							HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
							SetConsoleTextAttribute(handle, 8);
							cout << "��� ���������� ��������� " << endl;
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
					cout << "������ ���������� �� 8 ����� � ����?(��-1, ���-0) ";
					cin >> a;
					cout << "___________________________________________________" << endl;
					if (a == 0)
					{
						HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(handle, 1);
						cout << "���� �����?(��-1, ���-0) ";
						cin >> a;
						cout << "_________________________" << endl;
						if (a == 0)
						{
							HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
							SetConsoleTextAttribute(handle, 2);
							cout << "A��� " << endl;
							system("pause");
							goto start;
							cout << "______" << endl;

						}
						if (a == 1)
						{
							HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
							SetConsoleTextAttribute(handle, 3);
							cout << "��� ���������� ���� " << endl;
							system("pause");
							goto start;
							cout << "_____________________" << endl;

						}
					}
					if (a == 1)
					{
						HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(handle, 4);
						cout << "������ ����� �����?(��-1, ���-0) ";
						cin >> a;
						cout << "__________________________________" << endl;
						if (a == 1)
						{
							HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
							SetConsoleTextAttribute(handle, 5);
							cout << "��� ���������� ������ " << endl;
							system("pause");
							goto start;
							cout << "______________________" << endl;
						}
						if (a == 0)
						{
							HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
							SetConsoleTextAttribute(handle, 6);
							cout << "��� ���������� ������� " << endl;
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
				cout << "������ ������ ?(��-1, ���-0) ";
				cin >> a;
				cout << "_____________________________" << endl;
				if (a == 1)
				{
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 8);
					cout << "�������� � ������ " << endl;
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
			cout << "������ ����������� � ��������� ?(��-1, ���-0) ";
			cin >> a;
			cout << "______________________________________________" << endl;
			if (a == 0)
			{
				HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(handle, 1);
				cout << "������ ����������� � ������� ?(��-1, ���-0) ";
				cin >> a;
				cout << "_____________________________________________" << endl;
				if (a == 0)
				{
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 2);
					cout << "��� ���������� ����� " << endl;
					system("pause");
					goto start;
					cout << "_____________________" << endl;
				}
				if (a == 1)
				{
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 3);
					cout << "�� ������ ?(��-1, ���-0) ";
					cin >> a;
					cout << "_________________________" << endl;
					if (a == 1)
					{
						HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(handle, 4);
						cout << "�� ������� �����" << endl;
						system("pause");
						goto start;
						cout << "_________________" << endl;
					}
					if (a == 0)
					{
						HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(handle, 5);
						cout << "�������" << endl;
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
				cout << "������ �������� ?(��-1, ���-0) ";
				cin >> a;
				cout << "_______________________________" << endl;
				if (a == 1)
				{
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 7);
					cout << "������ ������ ?(��-1, ���-0) ";
					cin >> a;
					cout << "_____________________________" << endl;
					if (a == 1)
					{
						HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 8);
						cout << "��� ���������� ������ " << endl;
						system("pause");
						goto start;
						cout << "_______________________" << endl;
					}
					if (a == 0)
					{
						HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(handle, 9);
						cout << "��� ���������� ���������� " << endl;
						system("pause");
						goto start;
						cout << "___________________________" << endl;
					}

				}
				if (a == 0)
				{
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 1);
					cout << "�� ������ ?(��-1, ���-0) ";
					cin >> a;
					cout << "_________________________" << endl;
					if (a == 1)
					{
						HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(handle, 2);
						cout << "�� ������� �����" << endl;
						system("pause");
						goto start;
						cout << "_________________" << endl;
					}
					if (a == 0)
					{
						HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(handle, 3);
						cout << "�������" << endl;
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
		cout << "����� �� ������ ������� ����������������? " << endl;
		cout << "(1 - ��� ����� )  (2-����������?) (3-� �� ����, �������� ��� ����) (4- ������������) (5-���������) (6-������������)" << endl;
		cin >> a;
		cout << "_______________________________________________________________________________________________________________________" << endl;
		if (a == 1)
		{
			HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(handle, 2);
			cout << "������� �� Scratch,( ����� ������� 1 ��� ���� ����� ������ ����� �� ������ ������� ����!  ) ";
			cin >> a;
			cout << "____________________________________________________________________________________________" << endl;
			if (a == 1)
			{
				HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(handle, 6);
				cout << "��� ���� ������������  ��� �������� ���������������  � ��� �������� PYTHON" << endl;
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
			cout << "(1-����� ������?), (2-� ���� ���� ���� ��� ��������!)";
			cin >> a;
			cout << "______________________________________________________" << endl;
			if (a == 1)
			{
				HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(handle, 4);
			too:
				cout << "����� ���������/�����  �� ��������?" << endl;
				cout << "1 - � ���� �������� � ������� ��������" << endl;
				cout << "2 - � ������ ���� ������ " << endl;
				cout << "3 - ��� " << endl;
				cout << "4 - ������������� ���� " << endl;
				cout << "5 - ��������� " << endl;
				cout << "6 - 3D/���� " << endl;
				cout << "��� ��� �� ��������";
				cin >> a;
				if (a == 1)
				{
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 4);
					cout << "��� ���� ������������  ��� �������� ���������������. �� ������ ������� (PYTHON, C#, C++) " << endl;
					goto start;
					cout << "_________________________________________________________________________________________" << endl;
				}
				if (a == 2)
				{
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 4);
					cout << "��� ���� ������������  ��� �������� ���������������. �� ������ ������� ���� (JAVA) " << endl;
					goto start;
					cout << "_____________________________________________________________________________________" << endl;
				}
				if (a == 3)
				{
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 4);
				veb:
					cout << "(1 - �������� (��� - ���������)), (2 - ������(�� ��� �� ���������))" << endl;
					cin >> a;
					cout << "___________________________________________________________________" << endl;
					if (a == 1)
					{
						HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(handle, 4);
						cout << "�� ������ ������� 'JAVASCRIPT' " << endl;
						goto start;
						cout << "___________________________________________________________________" << endl;
					}
					if (a == 2)
					{
						HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(handle, 4);
						cout << "���� �������� �� .... (1-'����������') (2- '�������') " << endl;
						cin >> a;
						cout << "___________________________________________________________________" << endl;
						if (a == 1)
						{
							HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
							SetConsoleTextAttribute(handle, 4);
							cout << "��� ������� � Microsoft?";
							goto soft;
							cout << "_________________________" << endl;

						}
						if (a == 2)
						{
							HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
							SetConsoleTextAttribute(handle, 4);
						novi:
							cout << "������ ����������� ���-�� �����,�� �� ����� ���������� ?(1-'��') (2- '���') (3- '������') " << endl;
							cin >> a;
							cout << "__________________________________________________________________________________________" << endl;
							if (a == 1)
							{
								HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
								SetConsoleTextAttribute(handle, 3);
							nov:
								cout << "�� ������ ������� 'JAVASCRIPT' " << endl;
								goto start;
								cout << "___________________________________" << endl;
							}
							if (a == 2)
							{
								HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
								SetConsoleTextAttribute(handle, 1);
							igra:
								cout << "����� � ��� ������� �������?" << endl;
								cout << "1-Lego" << endl;
								cout << "2-���������" << endl;
								cout << "3-���������� �� ������� �����" << endl;
								cin >> a;
								cout << "_____________________________" << endl;
								if (a == 1)
								{
									HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
									SetConsoleTextAttribute(handle, 2);
									cout << "�� ������ ������� 'PYTHON' " << endl;
									cout << "___________________________" << endl;
								}
								if (a == 2)
								{
									HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
									SetConsoleTextAttribute(handle, 2);
									cout << "�� ������ ������� 'RUBY' " << endl;
									goto start;
									cout << "_____________________________" << endl;
								}
								if (a == 3)
								{
									HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
									SetConsoleTextAttribute(handle, 2);
									cout << "�� ������ ������� 'PHP' " << endl;
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
					cout << "������������� ����" << endl;
					cout << "__________________" << endl;
					goto start;

				}
				if (a == 5)
				{
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 5);
				mobil:
					cout << "����� OS? (1 - IOS) (2 - Android)" << endl;
					cin >> a;
					if (a == 1)
					{
						cout << "��� ���� �������� 'OBJECTIVE-C'  " << endl;
						goto start;
					}
					if (a == 2)
					{
						cout << "��� ���� �������� 'JAVA'  ";
						goto start;
					}
				}
				if (a == 6)
				{
					cout << "��� ���� �������� 'C++'  ";
					goto start;
				}
			}
			if (a == 2)
			{
				HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(handle, 9);
			platforma:
				cout << "����� ���������/�����?" << endl;
				cout << "1- 3D ���� " << endl;
				cout << "2 -  ���������" << endl;
				cout << "3 - ������������� ����" << endl;
				cout << "4 - ���" << endl;
				cout << "��� �� �������� :  ";
				cin >> a;
				cout << "______________________" << endl;
				if (a == 1)
				{
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 1);
					cout << "��� ���� �������� 'C++'  ";
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
					cout << "��� ������ ����� �������� � �������� �������, ��� � twitter? (1-��) (2 - ���) ";
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
			cout << "��� ���� ������������  ��� �������� ���������������  � ��� �������� PYTHON" << endl;
			goto start;
			cout << "__________________________________________________________________________" << endl;

		}
		if (a = 4)
		{
		poro:
			HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(handle, 1);
			cout << "��� ���� ���� �� �������?(1 - ��), (2 - ���.������ ���� ������)";
			cin >> a;
			cout << "_______________________________________________________________" << endl;
			if (a == 2)
			{
				HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(handle, 2);
				cout << "��� �������� �������" << endl;
				cout << "1- ������� ��������" << endl;
				cout << "2 - ������ ��������" << endl;
				cout << "3 - ����������� �������� " << endl;
				cout << "4 - ����� ������� ���� (�� ����� ����� �����)" << endl;
				cout << "������ ��� �� ������  " << endl;
				cin >> a;
				cout << "_____________________________________________" << endl;
				if (a == 1)
				{

					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 6);
					cout << "��� ���� ������������  ��� �������� ���������������  � ��� �������� PYTHON" << endl;
					goto start;
					cout << "___________________________________________________________________________" << endl;
				}
				if (a == 2)
				{
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 6);
					cout << "��� ���� ������������  ��� �������� ���������������  � ��� �������� PYTHON" << endl;
					goto start;
					cout << "_______________________________________________________________________________" << endl;
				}
				if (a == 3)
				{
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 6);
					cout << "����� ������� ������� (1 - �������) , ( 2- ������ ) ";
					cin >> a;
					cout << "_____________________________________________________";
					if (a == 1)
					{
						cout << "��� ���� ������������  ��� �������� ���������������  � ��� �������� JAVA" << endl;
						goto start;
					}
					if (a == 2)
					{
						cout << "��� ���� ������������  ��� �������� ���������������  � ��� �������� 'C'" << endl;
						goto start;
					}
				}
				if (a == 4)
				{
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 6);
					cout << "��� ���� ������������  ��� �������� ���������������  � ��� �������� 'C++'" << endl;
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