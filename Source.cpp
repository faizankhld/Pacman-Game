#include<iostream>
#include<Windows.h>
#include<conio.h>
#include<time.h>
void gotoxy(int line, int column)
{
	COORD coord;
	coord.X = line;
	coord.Y = column;
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE),
		coord
	);
}


using namespace std;

char map[23][45] =

{
	"############################################",
	"|C...................##....................|",
	"|.######.###########.##.######.####.######.|",
	"|.######.###########.##.######.####.######.|",
	"|.######.###########.##.######.####.######.|",
	"|.######.###########.##.######.####.######.|",
	"|...................Q......................|",
	"|.######.#.....###############.####.#######|",
	"|.######.#####.###############.####.#######|",
	"|........#####.....###########.####.#######|",
	"|#######.#########.....###.....####.#######|",
	"|#######.########              ####.#######|",
	"|........########              ####.#######|",
	"|.######.########  ########### ####.#######|",
	"|....###...........########### ####........|",
	"|###.###.#########.###########......######.|",
	"|###.###.#########.............####........|",
	"|.............################.###########.|",
	"|.######.####.#############................|",
	"|.######.####.#############.##############.|",
	"|.######.####...#########...##############.|",
	"|..........................................|",
	"|##########################################|",

};





int main()
{
	int a = 1;
	int b = 1;
	int score = 0;
	int t = 1;
	char key;
	srand(time(NULL));

	int X = 6;
	int Y = 20;
	int ene2x = 16;
	int ene2y = 25;
	int L1 = 21;
	int L2 = 40;
	system("cls");
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "                   Play Pacman                  " << endl;
	Sleep(400);
	int i = 0;

	for (i = 0; i < 101; ++i)
	{
		system("cls");
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "                        Loading the Game(" << i << " % " << ")" << endl;
		Sleep(5);
	}
	

	for (int i = 0; i < 23; ++i)
	{
		cout << map[i] << endl;
	}



	while (t > 0)
	{

		system("cls");

		for (int i = 0; i < 23; ++i)
		{
			cout << map[i] << endl;
		}
		




		if (_kbhit())
		{
			key = _getch();

			if (key == 'd')
			{


				if (map[a][b + 1] == ' ' || map[a][b + 1] == '.')
				{
					if (map[a][b + 1] == '.')
					{
						score++;
					}
					map[a][b] = ' ';
					b++;
					map[a][b] = 'C';
					system("cls");
					for (int i = 0; i < 23; ++i)
					{
						cout << map[i] << endl;
					}

				}

			}
			else if (key == 'a')
			{
				if (map[a][b - 1] == ' ' || map[a][b - 1] == '.')
				{
					if (map[a][b - 1] == '.')
					{
						score++;
					}
					map[a][b] = ' ';
					b--;
					map[a][b] = 'C';


					system("cls");
					for (int i = 0; i < 23; ++i)
					{
						cout << map[i] << endl;
					}

				}

			}
			if (key == 'w')
			{

				if (map[a - 1][b] == ' ' || map[a - 1][b] == '.')
				{
					if (map[a - 1][b] == '.')
					{
						score++;
					}
					map[a][b] = ' ';
					a--;
					map[a][b] = 'C';
					system("cls");
					for (int i = 0; i < 23; ++i)
					{
						cout << map[i] << endl;
					}
				}
			}
			if (key == 's')
			{

				if (map[a + 1][b] == ' ' || map[a + 1][b] == '.')
				{
					if (map[a + 1][b] == '.')
					{
						score++;
					}
					map[a][b] = ' ';
					a++;
					map[a][b] = 'C';
					system("cls");
					for (int i = 0; i < 23; ++i)
					{
						cout << map[i] << endl;
					}
				}
			}

		}

		int randmove = rand() % 4 + 1;
		int rand2 = rand() % 2 + 1;

		if (randmove == 1);
		{
			for (int i = 0; i < rand2; i++)
			{
				if (map[X + 1][Y] == ' ' || map[X + 1][Y] == '.')
				{
					if (map[X + 1][Y] == '.')
					{
						map[X][Y] = '.';
					}
					else if (map[X + 1][Y] == ' ')
					{
						map[X][Y] = ' ';
					}
					X++;
					map[X][Y] = 'Q';
					if ((a == X - 1 && b == Y ) || (a == L1 - 1 && b == L2 ) || (a == ene2x - 1 && b == ene2y) || (a == X && b == Y - 1) || (a == ene2x  && b == ene2y - 1) || ( a == L1  && b == L2 - 1))
					{
						system("cls");
						cout << "You Lose The Game" << endl;
						cout << " You Score is :" << score << endl;
						t = -100;
					}
					if ((a == X + 1 && b == Y ) || (a == L1 + 1 && b == L2 ) || (a == ene2x + 1 && b == ene2y) || (a == X && b == Y + 1) || (a == ene2x  && b == ene2y +1) || ( a == L1  && b == L2 + 1))
					{
						system("cls");
						cout << "You Lose The Game" << endl;
						cout << " You Score is :" << score << endl;
						t = -100;
					}
					if ((a == X  && b == Y) || (a == ene2x && b == ene2y) || (a == L1 && b == L2))
					{
						system("cls");
						cout << "You Lose The Game" << endl;
						cout << " You Score is :" << score << endl;
						t = -100;
					}
				}

			}

		}
		if (randmove == 2)
		{

			for (int i = 0; i < rand2; ++i) {



				if (map[X - 1][Y] == ' ' || map[X - 1][Y] == '.')
				{
					if (map[X - 1][Y] == '.')
					{
						map[X][Y] = '.';
					}
					else if (map[X - 1][Y] == ' ')
					{
						map[X][Y] = ' ';
					}
					X--;
					map[X][Y] = 'Q';
					if ((a == X - 1 && b == Y ) || (a == L1 - 1 && b == L2 ) || (a == ene2x - 1 && b == ene2y) || (a == X && b == Y - 1) || (a == ene2x  && b == ene2y - 1) || ( a == L1  && b == L2 - 1))
					{
						system("cls");
						cout << "You Lose The Game" << endl;
						cout << " You Score is :" << score << endl;
						t = -100;
					}
					if ((a == X + 1 && b == Y ) || (a == L1 + 1 && b == L2 ) || (a == ene2x + 1 && b == ene2y) || (a == X && b == Y + 1) || (a == ene2x  && b == ene2y +1) || ( a == L1  && b == L2 + 1))
					{
						system("cls");
						cout << "You Lose The Game" << endl;
						cout << " You Score is :" << score << endl;
						t = -100;
					}
					if ((a == X  && b == Y) || (a == ene2x && b == ene2y) || (a == L1  && b == L2 ))
					{
						system("cls");
						cout << "You Lose The Game" << endl;
						cout << " You Score is :" << score << endl;
						t = -100;
					}
				}
			}
		}
		if (randmove == 3)
		{
			for (int i = 0; i < rand2; i++)
			{
				if (map[X][Y + 1] == ' ' || map[X][Y + 1] == '.')
				{
					if (map[X][Y + 1] == '.')
					{
						map[X][Y] = '.';
					}
					else if (map[X][Y + 1] == ' ')
					{
						map[X][Y] = ' ';
					}

					Y++;
					map[X][Y] = 'Q';
					if ((a == X - 1 && b == Y ) || (a == L1 - 1 && b == L2 ) || (a == ene2x - 1 && b == ene2y) || (a == X && b == Y - 1) || (a == ene2x  && b == ene2y - 1) || ( a == L1  && b == L2 - 1))
					{
						system("cls");
						cout << "You Lose The Game" << endl;
						cout << " You Score is :" << score << endl;
						t = -100;
					}
					if ((a == X + 1 && b == Y ) || (a == L1 + 1 && b == L2 ) || (a == ene2x + 1 && b == ene2y) || (a == X && b == Y + 1) || (a == ene2x  && b == ene2y +1) || ( a == L1  && b == L2 + 1))
					{
						system("cls");
						cout << "You Lose The Game" << endl;
						cout << " You Score is :" << score << endl;
						t = -100;
					}
					if ((a == X  && b == Y) || (a == ene2x && b == ene2y) || (a == L1 && b == L2))
					{
						system("cls");
						cout << "You Lose The Game" << endl;
						cout << " You Score is :" << score << endl;
						t = -100;
					}
				}
			}

		}
		if (randmove == 4)
		{
			for (int i = 0; i < rand2; i++)
			{
				if (map[X][Y - 1] == ' ' || map[X][Y - 1] == '.')
				{
					if (map[X][Y - 1] == '.')
					{
						map[X][Y] = '.';
					}
					else if (map[X][Y - 1] == ' ')
					{
						map[X][Y] = ' ';
					}
					Y--;
					map[X][Y] = 'Q';
					if ((a == X - 1 && b == Y) || (a == L1 - 1 && b == L2) || (a == ene2x - 1 && b == ene2y) || (a == X && b == Y - 1) || (a == ene2x  && b == ene2y - 1) || (a == L1  && b == L2 - 1))
					{
						system("cls");
						cout << "You Lose The Game" << endl;
						cout << " You Score is :" << score << endl;
						t = -100;
					}
					if ((a == X + 1 && b == Y ) || (a == L1 + 1 && b == L2 ) || (a == ene2x + 1 && b == ene2y) || (a == X && b == Y + 1) || (a == ene2x  && b == ene2y +1) || ( a == L1  && b == L2 + 1))
					{
						system("cls");
						cout << "You Lose The Game" << endl;
						cout << " You Score is :" << score << endl;
						t = -100;
					}
					if ((a == X  && b == Y) || (a == ene2x && b == ene2y) || (a == L1  && b == L2 ))
					{
						system("cls");
						cout << "You Lose The Game" << endl;
						cout << " You Score is :" << score << endl;
						t = -100;
					}
				}
			}
}
		int move2 = rand() % 4 + 1;
		int move1 = rand() & 2 + 1;
		if (move2 == 1)
		{
			for (int i = 0; i < move1; i++)
			{
				if (map[ene2x + 1][ene2y] == ' ' || map[ene2x + 1][ene2y] == '.')
				{
					if (map[ene2x + 1][ene2y] == '.')
					{
						map[ene2x][ene2y] = '.';
					}
					else if (map[ene2x + 1][ene2y] == ' ')
					{
						map[ene2x][ene2y] = ' ';
					}
					ene2x++;
					map[ene2x][ene2y] = 'Q';
					if ((a == X - 1 && b == Y) || (a == L1 - 1 && b == L2) || (a == ene2x - 1 && b == ene2y) || (a == X && b == Y - 1) || (a == ene2x  && b == ene2y - 1) || (a == L1  && b == L2 - 1))
					{
						system("cls");
						cout << "You Lose The Game" << endl;
						cout << " You Score is :" << score << endl;
						t = -100;
					}
					if ((a == X + 1 && b == Y) || (a == L1 + 1 && b == L2) || (a == ene2x + 1 && b == ene2y) || (a == X && b == Y + 1) || (a == ene2x  && b == ene2y + 1) || (a == L1  && b == L2 + 1))
					{
						system("cls");
						cout << "You Lose The Game" << endl;
						cout << " You Score is :" << score << endl;
						t = -100;
					}
					if ((a == X  && b == Y) || (a == ene2x && b == ene2y) || (a == L1 && b == L2))
					{
						system("cls");
						cout << "You Lose The Game" << endl;
						cout << " You Score is :" << score << endl;
						t = -100;
					}


				}
			}
		}
		if (move2 == 2)
		{
			for (int i = 0; i < move1; i++)
			{
				if (map[ene2x - 1][ene2y] == ' ' || map[ene2x - 1][ene2y] == '.')
				{
					if (map[ene2x - 1][ene2y] == '.')
					{
						map[ene2x][ene2y] = '.';
					}
					else if (map[ene2x - 1][ene2y] == ' ')
					{
						map[ene2x][ene2y] = ' ';
					}
					ene2x--;
					map[ene2x][ene2y] = 'Q';
					if ((a == X - 1 && b == Y) || (a == L1 - 1 && b == L2) || (a == ene2x - 1 && b == ene2y) || (a == X && b == Y - 1) || (a == ene2x  && b == ene2y - 1) || (a == L1  && b == L2 - 1))
					{
						system("cls");
						cout << "You Lose The Game" << endl;
						cout << " You Score is :" << score << endl;
						t = -100;
					}
					if ((a == X + 1 && b == Y) || (a == L1 + 1 && b == L2) || (a == ene2x + 1 && b == ene2y) || (a == X && b == Y + 1) || (a == ene2x  && b == ene2y + 1) || (a == L1  && b == L2 + 1))
					{
						system("cls");
						cout << "You Lose The Game" << endl;
						cout << " You Score is :" << score << endl;
						t = -100;
					}
					if ((a == X  && b == Y) || (a == ene2x && b == ene2y) || (a == L1 && b == L2))
					{
						system("cls");
						cout << "You Lose The Game" << endl;
						cout << " You Score is :" << score << endl;
						t = -100;
					}
				}
			}
		}
		if (move2 == 3)
		{
			for (int i = 0; i < move1; i++)
			{
				if (map[ene2x][ene2y + 1] == ' ' || map[ene2x][ene2y + 1] == '.')
				{
					if (map[ene2x][ene2y + 1] == '.')
					{
						map[ene2x][ene2y] = '.';
					}
					else if (map[ene2x][ene2y + 1] == ' ')
					{
						map[ene2x][ene2y] = ' ';
					}

					ene2y++;
					map[ene2x][ene2y] = 'Q';
					if ((a == X - 1 && b == Y) || (a == L1 - 1 && b == L2) || (a == ene2x - 1 && b == ene2y) || (a == X && b == Y - 1) || (a == ene2x  && b == ene2y - 1) || (a == L1  && b == L2 - 1))
					{
						system("cls");
						cout << "You Lose The Game" << endl;
						cout << " You Score is :" << score << endl;
						t = -100;
					}
					if ((a == X + 1 && b == Y) || (a == L1 + 1 && b == L2) || (a == ene2x + 1 && b == ene2y) || (a == X && b == Y + 1) || (a == ene2x  && b == ene2y + 1) || (a == L1  && b == L2 + 1))
					{
						system("cls");
						cout << "You Lose The Game" << endl;
						cout << " You Score is :" << score << endl;
						t = -100;
					}
					if ((a == X  && b == Y) || (a == ene2x && b == ene2y) || (a == L1 && b == L2))
					{
						system("cls");
						cout << "You Lose The Game" << endl;
						cout << " You Score is :" << score << endl;
						t = -100;
					}
				}
			}
		}
		if (move2 == 4)
		{
			for (int i = 0; i < move1; i++)
			{
				if (map[ene2x][ene2y - 1] == ' ' || map[ene2x][ene2y - 1] == '.')
				{
					if (map[ene2x][ene2y - 1] == '.')
					{
						map[ene2x][ene2y] = '.';
					}
					else if (map[ene2x][ene2y - 1] == ' ')
					{
						map[ene2x][ene2y] = ' ';
					}
					ene2y--;
					map[ene2x][ene2y] = 'Q';
					if ((a == X - 1 && b == Y) || (a == L1 - 1 && b == L2) || (a == ene2x - 1 && b == ene2y) || (a == X && b == Y - 1) || (a == ene2x  && b == ene2y - 1) || (a == L1  && b == L2 - 1))
					{
						system("cls");
						cout << "You Lose The Game" << endl;
						cout << " You Score is :" << score << endl;
						t = -100;
					}
					if ((a == X + 1 && b == Y) || (a == L1 + 1 && b == L2) || (a == ene2x + 1 && b == ene2y) || (a == X && b == Y + 1) || (a == ene2x  && b == ene2y + 1) || (a == L1  && b == L2 + 1))
					{
						system("cls");
						cout << "You Lose The Game" << endl;
						cout << " You Score is :" << score << endl;
						t = -100;
					}
					if ((a == X  && b == Y) || (a == ene2x && b == ene2y) || (a == L1 && b == L2))
					{
						system("cls");
						cout << "You Lose The Game" << endl;
						cout << " You Score is :" << score << endl;
						t = -100;
					}
				}
			}
		}
		
	

		int E4 = rand() % 4 + 1;
		int E5 = rand() & 2 + 1;
		if (E4 == 1)
		{
			for (int i = 0; i < E5; i++)
			{
				if (map[L1 + 1][L2] == ' ' || map[L1 + 1][L2] == '.')
				{
					if (map[L1 + 1][L2] == '.')
					{
						map[L1][L2] = '.';
					}
					else if (map[L1 + 1][L2] == ' ')
					{
						map[L1][L2] = ' ';
					}
					L1++;
					map[L1][L2] = 'Q';
					if ((a == X - 1 && b == Y) || (a == L1 - 1 && b == L2) || (a == ene2x - 1 && b == ene2y) || (a == X && b == Y - 1) || (a == ene2x  && b == ene2y - 1) || (a == L1  && b == L2 - 1))
					{
						system("cls");
						cout << "You Lose The Game" << endl;
						cout << " You Score is :" << score << endl;
						t = -100;
					}
					if ((a == X + 1 && b == Y) || (a == L1 + 1 && b == L2) || (a == ene2x + 1 && b == ene2y) || (a == X && b == Y + 1) || (a == ene2x  && b == ene2y + 1) || (a == L1  && b == L2 + 1))
					{
						system("cls");
						cout << "You Lose The Game" << endl;
						cout << " You Score is :" << score << endl;
						t = -100;
					}
					if ((a == X  && b == Y) || (a == L1 && b == L2) || (a == ene2x  && b == ene2y ))
					{
						system("cls");
						cout << "You Lose The Game" << endl;
						cout << " You Score is :" << score << endl;
						t = -100;
					}
				}
			}
		}
		if (E4 == 2)
		{
			for (int i = 0; i < E5; i++)
			{
				if (map[L1 - 1][L2] == ' ' || map[L1 - 1][L2] == '.')
				{
					if (map[L1 - 1][L2] == '.')
					{
						map[L1][L2] = '.';
					}
					else if (map[L1 - 1][L2] == ' ')
					{
						map[L1][L2] = ' ';
					}
					L1--;
					map[L1][L2] = 'Q';
					if ((a == X + 1 && b == Y) || (a == L1 + 1 && b == L2) || (a == ene2x + 1 && b == ene2y) || (a == X && b == Y + 1) || (a == ene2x  && b == ene2y + 1) || (a == L1  && b == L2 + 1))
					{
						system("cls");
						cout << "You Lose The Game" << endl;
						cout << " You Score is :" << score << endl;
						t = -100;
					}
					if ((a == X - 1 && b == Y) || (a == L1 - 1 && b == L2) || (a == ene2x - 1 && b == ene2y) || (a == X && b == Y - 1) || (a == ene2x  && b == ene2y - 1) || (a == L1  && b == L2 - 1))
					{
						system("cls");
						cout << "You Lose The Game" << endl;
						cout << " You Score is :" << score << endl;
						t = -100;
					}
					if ((a == X  && b == Y) || (a == L1 && b == L2) || (a == ene2x && b == ene2y ))
					{
						system("cls");
						cout << "You Lose The Game" << endl;
						cout << " You Score is :" << score << endl;
						t = -100;
					}
				}
			}
		}
		if (E4 == 3)
		{
			for (int i = 0; i < E5; i++)
			{
				if (map[L1][L2 + 1] == ' ' || map[L1][L2 + 1] == '.')
				{
					if (map[L1][L2 + 1] == '.')
					{
						map[L1][L2] = '.';
					}
					else if (map[L1][L2 + 1] == ' ')
					{
						map[L1][L2] = ' ';
					}

					L2++;
					map[L1][L2] = 'Q';
					if ((a == X - 1 && b == Y) || (a == L1 - 1 && b == L2) || (a == ene2x - 1 && b == ene2y) || (a == X && b == Y - 1) || (a == ene2x  && b == ene2y - 1) || (a == L1  && b == L2 - 1))
					{
						system("cls");

						cout << "              You Lose The Game              " << endl;
						cout << " You Score is :" << score << endl;
						t = -100;
					}
					if ((a == X + 1 && b == Y) || (a == L1 + 1 && b == L2) || (a == ene2x + 1 && b == ene2y) || (a == X && b == Y + 1) || (a == ene2x  && b == ene2y + 1) || (a == L1  && b == L2 + 1))
					{
						system("cls");

						cout << "              You Lose The Game              " << endl;
						cout << " You Score is :" << score << endl;
						t = -100;
					}
					if ((a == X  && b == Y) || (a == L1 && b == L2) || (a == ene2x  && b == ene2y ))
					{
						system("cls");
						cout << "               You Lose The Game" << endl;
						cout << " You Score is :" << score << endl;
						t = -100;
					}
				}
			}
		}
		if (E4 == 4)
		{
			for (int i = 0; i < E5; i++)
			{
				if (map[L1][L2 - 1] == ' ' || map[L1][L2 - 1] == '.')
				{
					if (map[L1][L2 - 1] == '.')
					{
						map[L1][L2] = '.';
					}
					else if (map[L1][L2 - 1] == ' ')
					{
						map[L1][L2] = ' ';
					}
					L2--;
					map[L1][L2] = 'Q';
					if ((a == X + 1 && b == Y) || (a == L1 + 1 && b == L2) || (a == ene2x + 1 && b == ene2y) || (a == X && b == Y + 1) || (a == ene2x  && b == ene2y + 1) || (a == L1  && b == L2 + 1))
					{
						system("cls");
						cout << "You Lose The Game" << endl;
						cout << " You Score is :" << score << endl;
						t = -100;
					}
					if ((a == X - 1 && b == Y) || (a == L1 - 1 && b == L2) || (a == ene2x - 1 && b == ene2y) || (a == X && b == Y - 1) || (a == ene2x  && b == ene2y - 1) || (a == L1  && b == L2 - 1))
					{
						system("cls");
						cout << "You Lose The Game" << endl;
						cout << " You Score is :" << score << endl;
						t = -100;
					}
					if ((a == X  && b == Y) || (a == L1 && b == L2) || (a == ene2x  && b == ene2y ))
					{
						system("cls");
						cout << "You Lose The Game" << endl;
						cout << " You Score is :" << score << endl;
						t = -100;
					}
				}
			}
		}

		++t;

		if (score == 308)
		{
			system("cls");
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;

			cout << "              Congratulations You Won the Game:" << endl;
			cout << "                Your Score :" << score << endl;
			t = -100;
		}


	}


	cin.get();
}
