{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "c:\\tc\\bgi");
	int x = 150;
	int y = 150;
	int font = 8;
	int direction = 0;
	int font_size = 5;
	settextstyle(font, direction, font_size);
	outtextxy(x, y, "Geeks for Geeks");
	getch;
	closegraph();
	return 0;
}