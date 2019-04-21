#ifndef STRUCTURES_H_INCLUDED
#define STRUCTURES_H_INCLUDED

struct tiles
{
	int height;
	int length;
	int image;

	tiles()
	{

	}

	tiles(int h, int l, int m)
	{
		height = h;
		length = l;
		image = m;
	}
};
struct ghost
{
	int height;
	int length;
	int image;

	ghost()
	{

	}

	ghost(int h, int l, int m)
	{
		height = h;
		length = l;
		image = m;
	}
};
struct player
      
{
	int height;
	int length;
	int image;

	player()
	{

	}

	player(int h, int l, int m)
	{
		height = h;
		length = l;
		image = m;
	}
};
#endif // !MENUANDPLAYER_H_INCLUDED