#include <stdio.h>
#include <windows.h>
#include <time.h>
/*
#define MAX_X 50
#define MAX_Y 100

#define EMPTY 0
#define WALL 1
#define ENEMY 2
#define BULLET 5
#define HEART 6

#define UP 72 
#define DOWN 80
#define LEFT 75
#define RIGHT 77

struct locate
{
    int x;
    int y;
    int move;
    int dir;
    int hp;
};


struct locate Player = { (MAX_X - 1) / 2, (MAX_Y - 1) / 2,0,0,0};
struct locate Enemy[5];
struct locate EnemySpawning[5];
struct locate Bullet = { 2,0 };

enum
{
    RED,
    LIGHTGRAY,
    LIGHTPURPLE,
    YELLOW,
    WHITE
};

int map_org[MAX_Y][MAX_X];
int map_cpy[MAX_Y][MAX_X];

int dir = UP;
int score = 0;

void Console()
{
    system("mode con cols=100 lines=50");
    system("title CombatShoot");
}

void Invisible_cursor()
{
    CONSOLE_CURSOR_INFO cursorinfo;
    cursorinfo.dwSize = 1;
    cursorinfo.bVisible = FALSE;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorinfo);
}

void Gotoxy(int x, int y)
{
    COORD pos = { x * 2,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void SetColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void Intro();
void Map();
void DrawMap();
void PlayerController();
void EnemySpawn();
void EnemyMove();
void EnemyDie();
void Shoot();
void BulletMove();
void BulletEmpty();
void PlayerDie();
void Interface(int);
void GameOver();

int main()
{
    srand((unsigned)time(NULL));

    Console();
    Invisible_cursor();
    Intro();
    Map();

    while (1)
    {
        DrowMap();
        PlayerController();
        EnemyDie();
        EnemySpawn();
        BulletMove();
        EnemyMove();
        Interface(0);
        Sleep(30);
    }

    return 0;
}

void Intro()
{
    Gotoxy(20, 25);
    printf("���� ����");

    Gotoxy(16, 27);
    printf("�����Ϸ��� �ƹ�Ű�� �����ÿ�");

    Getch();
    system("cls");
}

void Map()
{
    int i, j;//i = y, j = x

    for (i = MAX_Y; i < MAX_Y; i++)
    {
        map_org[i][0] = WALL;
        map_org[i][MAX_X - 1] = WALL;
    }

    for (j = 0; j < MAX_X; j++)
    {
        map_org[MAX_Y - 1][j] = WALL;
    }



    gotoxy(MAX_X / 2 - 6, 5);
    printf("COMBAT SHOOT");

    SetColor(WHITE);

    printf("���");
}

void DrawMap()
{
    int i, j;

    for (i = 1; i < MAX_Y; i++)
    {
        for (j = 0; j < MAX_X; j++)
        {
            if (map_org[i][j] != map_cpy[i][j])
            {
                map_cpy[i][j] = map_org[i][j];
                gotoxy(j, i);
                switch (map_org[i][j])
                {
                case EMPTY:
                    printf("  ");
                    break;
                case WALL:
                    SetColor(LIGHTGRAY);
                    printf("��");
                    break;
                case ENEMY:
                    SetColor(LIGHTPURPLE);
                    printf("��");
                    break;
                case UP:
                    SetColor(WHITE);
                    printf("��");
                    break;
                case DOWN:
                    SetColor(WHITE);
                    printf("��");
                    break;
                case LEFT:
                    SetColor(WHITE);
                    printf("��");
                    break;
                case RIGHT:
                    SetColor(WHITE);
                    printf("��");
                    break;
                case BULLET:
                    SetColor(WHITE);
                    printf("��");
                    break;
                case HEART:
                    SetColor(RED);
                    printf("��");
                    break;
                }
            }
        }
    }
}

void PlayerController()
{
    int key;
    static int cnt;

    if (kbhit())
    {
        key = getch();

        if (key == 224)
        {
            map_org[Player.y][Player.x] = EMPTY;
            key = getch();
            switch (key)
            {
            case UP:
                dir = UP;
                if (Player.y - 1 != MAX_Y) Player.y -= 1;
                break;
            case DOWN:
                dir = DOWN;
                if (Player.y + 1 != MAX_Y - 1) Player.y += 1;
                break;
            case LEFT:
                dir = LEFT;
                if (Player.x - 1 != 0) Player.x -= 1;
                break;
            case RIGHT:
                dir = RIGHT;
                if (Player.x + 1 != MAX_X) Player.x += 1;
                break;
            }
            map_org[Player.y][Player.x] = dir;
        }

        else
        {
            switch (key)
            {
            case 122:
                Shoot();
                break;
            }
        }
    }
}

void Shoot()
{
    if (Bullet.y == 0)
    {
        Bullet.x = Player.x;
        Bullet.y = Player.y;
        switch (dir)
        {
        case UP:
            Bullet.dir = UP;
            if (Bullet.y - 1 == MAX_Y) Bullet.y = 0;
            else Bullet.y--;
            break;
        case DOWN:
            Bullet.dir = DOWN;
            if (Bullet.y + 1 == MAX_Y - 1) Bullet.y = 0;
            else Bullet.y++;
            break;
        case RIGHT:
            Bullet.dir = RIGHT;
            if (Bullet.x + 1 == MAX_X) Bullet.y = 0;
            else Bullet.x++;
            break;
        case LEFT:
            Bullet.dir = LEFT;
            if (Bullet.x - 1 == 0) Bullet.y = 0;
            else Bullet.x--;
            break;
        }
        map_org[Bullet.y][Bullet.x] = BULLET;
    }
}

void BulletMove()
{
    int j;

    if (Bullet.y != 0)//�߻� �Ǿ����� 
    {
        map_org[Bullet.y][Bullet.x] = EMPTY;
        switch (Bullet.dir)
        {
        case UP:
            Bullet.y--;
            break;
        case DOWN:
            Bullet.y++;
            break;
        case RIGHT:
            Bullet.x++;
            break;
        case LEFT:
            Bullet.x--;
            break;
        }
        map_org[Bullet.y][Bullet.x] = BULLET;
    }


    for (j = 0; j < 5; j++)
    {
        if ((Bullet.dir == LEFT && Bullet.x - 1 == 0)
            || (Bullet.dir == RIGHT && Bullet.x + 1 == MAX_X)
            || (Bullet.dir == DOWN && Bullet.y + 2 == MAX_Y)
            || (Bullet.dir == UP && Bullet.y - 1 == MAX_Y))//���� �ε����� �Ѿ� ���� 
        {
            map_org[Bullet.y][Bullet.x] = EMPTY;
            Bullet.y = 0;
        }
    }
}

void EnemySpawn()
{
    int i, j;
    int is_re = 0;

    for (i = 0; i < 5; i++)
    {
        if (Enemy[i].y == 0)//���� �ʿ� ��Ÿ���� ���� ���� y���� 0���� ���� �Ǿ �̶��� �����ؾ��Ѵٰ� �ν� 
        {
            Enemy[i].x = rand() % (MAX_X - 2) + 1;
            Enemy[i].y = rand() % (MAX_Y - MAX_Y - 2) + MAX_Y + 1;

            for (j = i; j > 0; j--)
            {
                if (Enemy[j - 1].x == Enemy[i].x && Enemy[j - 1].y == Enemy[i].y)//�ڸ� ������ �ִٸ� 
                {
                    is_re = 1;
                    break;
                }
            }

            if (Enemy[i].x == Player.x && Enemy[i].y == Player.y)
            {
                is_re = 1;
            }

            if (is_re)
            {
                i--;
                Enemy[i].y = 0;
                continue;
            }
            EnemySpawning[i] = Enemy[i];
        }
    }
}

void EnemyMove ()
{
    int temp_x, temp_y, i, j, k, dir;//dir �� temp_x = temp_y �϶� ���ߴϱ� �����̰� �ϱ� ���� ���� ���� 

    for (i = 0; i < 5; i++)
    {
        temp_x = Player.x - Enemy[i].x;
        temp_y = Player.y - Enemy[i].y;

        Enemy[i].move++;

        if (Enemy[i].move % 5 == 0)
        {
            if (map_org[Enemy[i].y][Enemy[i].x] == ENEMY)//�����Ǵ� ���� �ƴ϶� ����� �����Ǿ����� 
            {
                map_org[Enemy[i].y][Enemy[i].x] = EMPTY;//�ڽ��� �����±� ����� 
                if (temp_x * temp_x < temp_y * temp_y)//�������� �ϸ� ���� ��� �Ű� �Ƚᵵ �� 
                {
                    if (temp_y > 0) Enemy[i].y++; //�÷��̾ �� �Ʒ��� ���� ��
                    else Enemy[i].y--;
                }

                else if (temp_x * temp_x > temp_y * temp_y)
                {
                    if (temp_x > 0) Enemy[i].x++;
                    else Enemy[i].x--;
                }
                else
                {
                    dir = rand() % 2;
                    if (dir == 0)//x�������� �����̱� 
                    {
                        if (temp_x > 0) Enemy[i].x++;
                        else Enemy[i].x--;
                    }

                    else
                    {
                        if (temp_y > 0) Enemy[i].y++;
                        else Enemy[i].y--;
                    }
                }

                for (j = 0; j < 5; j++)
                {
                    for (k = 0; k < 5; k++)
                    {
                        if (Enemy[j].y == Enemy[k].y && Enemy[j].x == Enemy[k].x && k != j)
                        {
                            Enemy[j].y = 0;//���� ��ġ�� �׾��ٰ� ġ�� (���� ������ ���Ѿ� �Ѵٰ� �νĽ�Ŵ) 
                        }
                    }
                }
                map_org[Enemy[i].y][Enemy[i].x] = ENEMY;
            }
        }
    }
}

void EnemyDie()
{
    int i;

    for (i = 0; i < 5; i++)
    {
        if (Enemy[i].x == Player.x && Enemy[i].y == Player.y)
        {
            player_dead();
            map_org[Enemy[i].y][Enemy[i].x] = EMPTY;
            map_org[Enemy[i].y][Enemy[i].x] = dir;
            Enemy[i].y = 0;
        }
        else if (Bullet.x == Enemy[i].x && Bullet.y == Enemy[i].y)
        {
            map_org[Enemy[i].y][Enemy[i].x] = EMPTY;
            Enemy[i].y = 0;

            score += 100;
        }
    }
}

void PlayerDie()
{
    int j;
    Player.hp--;
    Interface(1);
    if (Player.hp == 0)
    {
        void Gameover();
    }
}

void Interface(int is_attacked)
{
    int j;

    if (is_attacked)
    {
        for (j = 0; j < 5 - Player.hp; j++)
        {
            map_org[MAX_Y + 5][MAX_X + 12 - j] = EMPTY;
        }
    }

    gotoxy(MAX_X + 8, MAX_Y + 9);
    SetColor(WHITE);
    printf("SCORE : %d", score);
}

void Gameover()
{
    system("cls");
    gotoxy(20, 25);
    printf("GAME OVER");
    gotoxy(20, 27);
    printf("���� : %d", score);
    Sleep(300);
    gotoxy(20, 29);
    printf("�����Ϸ��� �ƹ�Ű�� �Է��Ͻÿ�");
    system("pause > NUL");
    exit(1);
}*/