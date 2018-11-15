/* vector.c

2018 - Stefano Peris <xenonlab.develop@gmail.com>

Github repository: <https://github.com/XenonLab-Studio/The_Dungeon_of_Sin.git>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#include "lox.h"

void compute_directions(int y1, int x1, int y2, int x2, int *pdy, int *pdx, int *psy, int *psx, int *pmelee, int *pcardinal)
{
	int dy, dx, sy, sx;
	dy = y1 - y2;
	dx = x1 - x2;
	sy = dy > 0 ? 1 : (dy < 0 ? -1 : 0);
	sx = dx > 0 ? 1 : (dx < 0 ? -1 : 0);
	if (pdy)
	{
		*pdy = dy;
	}
	if (pdx)
	{
		*pdx = dx;
	}
	if (psy)
	{
		*psy = sy;
	}
	if (psx)
	{
		*psx = sx;
	}
	if (pmelee)
	{
		*pmelee = (dy < 2) && (dy > -2) && (dx < 2) && (dx > -2);
	}
	if (pcardinal)
	{
		*pcardinal = (dy == dx) || (dy == -dx) || (dx == 0) || (dy == 0);
	}
}

/* vector.c */
