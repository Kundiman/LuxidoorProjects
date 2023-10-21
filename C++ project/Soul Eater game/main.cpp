#include <iostream>
#include <windows.h>
#include <conio.h>
#include <time.h>



using namespace std;

//Set color fonts and display only
 HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
HANDLE colory=GetStdHandle(STD_OUTPUT_HANDLE);
HANDLE colore=GetStdHandle(STD_OUTPUT_HANDLE);
HANDLE colorm=GetStdHandle(STD_OUTPUT_HANDLE);

//Sets the coordinates of MENU OPTION print statement
COORD coord = { 0, 0 };

void gotoud(int u, int d) {
    coord.X = u; coord.Y = d;

     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
//MAP GAME COORDINATES DISPLAY
void gotoxy(int x, int y){
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
//Cursor options
void hideCursor(){
    CONSOLE_CURSOR_INFO cursor;
    cursor.dwSize =100;
    cursor.bVisible = false;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor);
}
int life = 5;
int const screenHeight = 22;
int const screenWidth = 22;
char map[screenHeight][screenWidth];
char stage[screenHeight][screenWidth] = { " ################### ",
                                          " #........#........# ",
                                          " #.##.###.#.###.##.# ",
                                          " #.................# ",
                                          " #.##.#.#####.#.##.# ",
                                          " #....#...#...#....# ",
                                          " ####.###.#.###.#### ",
                                          "    #.#.......#.#    ",
                                          "#####.#.##.##.#.#####",
                                          "#...................#",
                                          "#####.#.##.##.#.#####",
                                          "    #.#.......#.#    ",
                                          " ####.#.#####.#.#### ",
                                          " #........#........# ",
                                          " #.##.###.#.###.##.# ",
                                          " #..#...........#..# ",
                                          " ##.#.#.#####.#.#.## ",
                                          " #....#...#...#....# ",
                                          " #.######.#.######.# ",
                                          " #.................# ",
                                          " ################### ",
};



// SOUL EATER CHARACTER
class Soul{

    public:
            int x;
            int y;
            char dir;
            int delay;
            int count_delay;

    void draw(){
            if(dir == 'U')map[y][x] = 1;
            else if(dir == 'D')map[y][x] = 2;
            else if(dir == 'L')map[y][x] = 3;
            else if(dir == 'R' || dir == 'S')map[y][x] = 4;
        }

    void move(){
            dead();
            if(count_delay == delay){
                if(dir == 'U' && !collision(x,y-1)) y--;
                if(dir == 'D' && !collision(x,y+1)) y++;
                if(dir == 'L' && !collision(x-1,y)) x--;
                if(dir == 'R' && !collision(x+1,y)) x++;
                count_delay = 0;
            }
        count_delay++;
        eat();
    }

    bool collision(int fx, int fy){
        if(map[fy][fx] == 9) return true;
        return false;

    }

    void dead(){
        if(map[y][x]== 5){
            dir ='S';
            x = 10;
            y = 15;
            life--;
        }
   }

    void eat(){
        if(map[y][x] == 8){
           stage[y][x] = ' ';
        }
    }
};

//ENEMY CHARACTER
class Enemy{

    public:
        int x;
        int y;
        int dir;
        int delay;
        int count_delay;


    void draw(){
         map[y][x] = 5;

    }

    void move(){
        if(count_delay == delay){
            if(dir == 0 && !collision(x,y-1)) y--;
            if(dir == 1 && !collision(x,y+1)) y++;
            if(dir == 2 && !collision (x-1,y)) x--;
            if(dir == 3 && !collision (x+1,y)) x++;
            count_delay = 0;
            dir = rand()%4;
        }
        count_delay++;
    }
    bool collision(int fx,int fy){
        if(map[fy][fx] == 9)return true;
        return false;
    }
};

Soul soul;
Enemy enemy[7];



//SETUP OF ENEMY AND SOUL EATER
void setup(){


    srand(time(NULL));
    soul.x = 10;
    soul.y = 15;
    soul.dir = 'S';
    soul.delay = 2;


    enemy[0].x = 9;
    enemy[0].y = 9;
    enemy[0].delay = 3;


    enemy[1].x = 10;
    enemy[1].y = 9;
    enemy[1].delay = 5;


    enemy[2].x = 11;
    enemy[2].y = 9;
    enemy[2].delay = 5;


    enemy[3].x = 2;
    enemy[3].y = 1;
    enemy[3].delay = 5;


    enemy[4].x = 18;
    enemy[4].y = 1;
    enemy[4].delay = 5;


    enemy[5].x = 2;
    enemy[5].y = 19;
    enemy[5].delay = 5;


    enemy[6].x = 18;
    enemy[6].y = 19;
    enemy[6].delay = 5;

}
//LAYOUT OF MAP
void layout(){

    for(int i = 0; i < screenHeight; i++){
        for(int j = 0; j < screenWidth; j++){
            if(stage[i][j] == '#')map[i][j] = 9;
            else if(stage[i][j] == '.')map[i][j] = 8;
            else map[i][j] = 0;
        }
    }
}
//DISPLAY OF GAME MAP ENVIRONMENT
 void display(){
    gotoxy(2,1); cout << "LIFE: " << life<<endl;
    layout();
    soul.draw();
    for(int i = 0; i < 7; i++) enemy[i].draw();
    for(int i = 0; i < screenHeight; i++){
        for(int j = 0; j < screenWidth; j++){
                gotoxy(j+2,i+3);
                if(map[i][j] == 9) cout << char(219);
                if(map[i][j] == 8) cout << char(250);
                if(map[i][j] == 1) cout << char(86);
                if(map[i][j] == 2) cout << char(94);
                if(map[i][j] == 3) cout << char(62);
                if(map[i][j] == 4) cout << char(60);
                if(map[i][j] == 5) cout << char(234);
                if(map[i][j] == 0) cout << ' ' ;

        }
    }
 }
//INPUT MOVEMENTS
 void input(){
    if(kbhit()){
        switch(getch()){
            case 80:

                if(!soul.collision(soul.x,soul.y+1)) soul.dir = 'D';
                break;
            case 72:

                if(!soul.collision(soul.x,soul.y-1)) soul.dir = 'U';
                break;
            case 75:

                if(!soul.collision(soul.x-1,soul.y)) soul.dir = 'L';
                break;
            case 77:

                if(!soul.collision(soul.x+1,soul.y)) soul.dir = 'R';
                break;
        }
    }
 }
//MOVEMENTS
 void movements(){
    soul.move();
    for(int i = 0; i < 7; i++) enemy[i].move();
    SetConsoleTextAttribute(colory,15);
 }

//Add on options
 void htp();
 void about();
 void rtart();

int c;
int z;
int main()
{

   char choice;
    gotoud(20,10);
    SetConsoleTextAttribute(color,13);
    cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
    gotoud(20,11);
    SetConsoleTextAttribute(color,15);
    cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  SOUL EATER  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
    gotoud(20,12);
    SetConsoleTextAttribute(color,13);
    cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
    gotoud(20,13);
    SetConsoleTextAttribute(color,11);
    cout<<"---------------------------------------"<<endl;
    gotoud(20,14);
    cout<<"               HOME MENU                "<<endl;
    gotoud(20,15);
    cout<<"---------------------------------------"<<endl;
    gotoud(20,17);
    SetConsoleTextAttribute(color,15);
    cout<<"1. PLAY"<<endl;
    gotoud(20,19);
    cout<<"2. How To Play?"<<endl;
    gotoud(20,21);
    cout<<"3. ABOUT?"<<endl;
    gotoud(20,23);
    cout<<"4. Exit"<<endl;
    gotoud(20,25);
    SetConsoleTextAttribute(color,11);
    cout<<"Enter your Choice: ";
    cin>>choice;
    cout<<endl;
    system("cls");
    if(choice == '1'){

            do{
            z:
            rtart();
            SetConsoleTextAttribute(color,11);
            cout<<"---------------------------------------------"<<endl;
            SetConsoleTextAttribute(color,15);
            cout<<"                 GAME OVER           "<<endl;
            SetConsoleTextAttribute(color,12);
            cout<<"             REVIVE AND CONTINUE?    "<<endl;
            SetConsoleTextAttribute(color,11);
            cout<<"---------------------------------------------"<<endl;
            SetConsoleTextAttribute(color,15);
            cout<<"\n1 ==> Yes,you will have another 5 extra lives"<<endl;
            cout<<"\n2 ==> No"<<endl;
            cout<<endl;
            SetConsoleTextAttribute(color,11);
            cout<<"Enter Choice: ";
            cin>>c;
            system("cls");
             if(c==1){
                life = 5;
            goto z;
            }
            }while(c!=2);
            system("cls");
            life = 5;
            main();

}
    else if(choice == '2'){
            htp();
            main();
    }

    else if(choice == '3'){
            about();
            main();
    }

    else if(choice == '4'){
        return 0;
    }
    else{
        main();
    }
}

//how to play
void htp(){
        char chp;
        gotoud(20,9);
         SetConsoleTextAttribute(color,10);
        cout<<"----------------------------------------------"<<endl;
        gotoud(20,10);
        cout<<"                 HOW TO PLAY                  "<<endl;
        gotoud(20,11);
        cout<<"----------------------------------------------"<<endl;
        gotoxy(20,13);
        SetConsoleTextAttribute(color,15);
        cout<<"==> Use the ";
        SetConsoleTextAttribute(color,14);
        cout<<"ARROW KEYS ";
        SetConsoleTextAttribute(color,15);
        cout<<"to Move the ";
        SetConsoleTextAttribute(color,13);
        cout<<"SOUL EATER";
        gotoud(20,15);
        SetConsoleTextAttribute(color,15);
        cout<<"==> ";
        SetConsoleTextAttribute(color,14);
        cout<<"Warning! ";
        SetConsoleTextAttribute(color,15);
        cout<<"Don't get Caught by the ";
        SetConsoleTextAttribute(color,12);
        cout<<"ENEMY";
        gotoud(20,17);
        SetConsoleTextAttribute(color,11);
        cout<<"Press any key and Enter: ";
        cin>>chp;
        system("cls");

}
//ABOUT
void about(){
    char p;
    gotoud(20,9);
    SetConsoleTextAttribute(color,13);
    cout<<"-----------------------------------------"<<endl;
    gotoud(20,10);
    SetConsoleTextAttribute(color,14);
    cout<<"                  ABOUT                "<<endl;
    gotoud(20,11);
    SetConsoleTextAttribute(color,13);
    cout<<"-----------------------------------------"<<endl;
    gotoud(20,13);
    SetConsoleTextAttribute(color,13);
    cout<<"SOUL ";
    SetConsoleTextAttribute(color,13);
    cout<<"EATER ";
    SetConsoleTextAttribute(color,15);
    cout<<"is Inspired by the game ";
    SetConsoleTextAttribute(color,14);
    cout<<"PACMAN";
    gotoud(20,15);
    SetConsoleTextAttribute(color,10);
    cout<<"GAME DEVELOPERS:";
    gotoud(20,17);
    SetConsoleTextAttribute(color,15);
    cout<<"BSCA - Ebardo";
    gotoud(20,19);
    cout<<"BSCA - Eduave";
    gotoud(20,21);
    cout<<"BSCA - Fuentes";
    gotoud(20,23);
    cout<<"BSCA - Kundiman";
    gotoud(20,27);
    SetConsoleTextAttribute(color,11);
    cout<<"Press any key and Enter: ";
    cin>>p;
    system("cls");

}
void rtart(){

            HWND s = GetConsoleWindow();
            MoveWindow(s, 300, 200, 250, 450, true);
            hideCursor();
            setup();
            do{
            display();
            input();
            movements();
            }while (life !=0);
            system("cls");

}
