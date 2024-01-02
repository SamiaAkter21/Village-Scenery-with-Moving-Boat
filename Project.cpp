#include<graphics.h>
main()
{

    initwindow(760, 700);

    //Sky
    setcolor(LIGHTRED);
    rectangle(0, 0, 750, 200);
    setfillstyle(SOLID_FILL, LIGHTRED);
    floodfill(1, 1, LIGHTRED);

    //Sun
    setcolor(YELLOW);
    circle(280, 170, 35);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(280, 170, YELLOW);

    //Grass
    setcolor(GREEN);
    rectangle(0, 200, 750, 650);
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(1, 201, GREEN);


    //Middle Hill
    setcolor(BLACK);
    int hill[] = {250, 200, 600, 200, 400, 90, 250, 200};
    setfillstyle(SOLID_FILL, BROWN);
    fillpoly(4, hill);

    //Left Hill
    int hill2[] = {500, 200, 751, 200, 751, 180, 650, 100, 500, 200};
    setfillstyle(SOLID_FILL, BROWN);
    fillpoly(5, hill2);

    //Right Hill
    int hill3[] = {-50, 250, 370, 250, 150, 70, -50, 250};
    setfillstyle(SOLID_FILL, BROWN);
    fillpoly(4, hill3);


    //House
    int point1 [] = {200, 200, 350, 200, 400, 270, 250, 270, 200, 200, 150, 270, 250, 270};
    setfillstyle (HATCH_FILL, RED) ;
    fillpoly (7, point1) ;

    rectangle (150, 270, 250, 370); //1st part
    rectangle (250, 270, 400, 370); //second part
    setfillstyle (SOLID_FILL, CYAN);
    floodfill (151, 271, BLACK);
    floodfill (251, 271, BLACK);


    //Door
    rectangle (180, 300, 220, 370);
    setfillstyle (SLASH_FILL, LIGHTBLUE);
    floodfill (181, 301, BLACK);

    //Tree
    setcolor(BROWN);
    int tree[]= {475, 300, 495, 300, 485, 180, 475, 300};
    setfillstyle(SOLID_FILL, BROWN);
    fillpoly(4, tree);

    setcolor(LIGHTGREEN);
    setfillstyle(SOLID_FILL, LIGHTGREEN);
    pieslice(485, 195, 0, 360, 30);
    pieslice(465, 210, 0, 360, 25);
    pieslice(510, 210, 0, 360, 25);


    //River
    setcolor(BLUE);
    rectangle(0, 425, 750, 690);
    setfillstyle (SOLID_FILL, BLUE);
    floodfill (1, 426, BLUE);


    for(int i=0; i<=1000; i++)
    {
        //man
        setcolor(BLACK);

        //head
        setfillstyle(SOLID_FILL, BROWN);
        fillellipse(250+i, 450, 20,20);

        // body
        setfillstyle(SOLID_FILL, LIGHTRED);
        fillellipse(250+i, 490, 20, 30);

        //boat
        int boat[] = {100+i, 500, 150+i, 550, 350+i, 550, 400+i, 500, 100+i, 500};
        setfillstyle(SOLID_FILL, LIGHTGRAY);
        fillpoly(5, boat);

        //paddle
        int paddle[] = {290+i, 450, 295+i, 450, 300+i, 560, 280+i, 560, 290+i, 450};
        setfillstyle(SOLID_FILL, LIGHTCYAN);
        fillpoly(5, paddle);

        //hand
        int hand[] = {250+i, 480, 245+i, 470, 300+i, 470, 250+i, 480};
        setfillstyle(SOLID_FILL, BROWN);
        fillpoly(4, hand);


        delay(50);


        setcolor(BLUE);
        setfillstyle(SOLID_FILL, BLUE);

        //head
        fillellipse(250+i, 450, 20, 20);

        //body
        fillellipse(250+i, 490, 20, 30);

        //boat
        int boat1[] = {100+i, 500, 150+i, 550, 350+i, 550, 400+i, 500, 100+i, 500};
        fillpoly(5, boat1);

        //paddle
        int paddle1[] = {290+i, 450, 300+i, 450, 300+i, 560, 280+i, 560, 290+i, 450};
        fillpoly(5, paddle1);

        //hand
        int hand1[] = {250+i, 480, 245+i, 470, 300+i, 470, 250+i, 480};
        fillpoly(4, hand1);

    }

    getch() ;
    closegraph () ;
}

