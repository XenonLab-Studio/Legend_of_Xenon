/* pmon2.c
 
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


#define PMON2_C
#include "lox.h"
#include "monsters.h"

int pmon_resists_fire(int pm)
{
	return !!(permons[pm].flags & PMF_RESIST_FIRE);
}

int pmon_resists_cold(int pm)
{
	return !!(permons[pm].flags & PMF_RESIST_COLD);
}

int pmon_is_undead(int pm)
{
	return !!(permons[pm].flags & PMF_UNDEAD);
}

int pmon_is_stupid(int pm)
{
	return !!(permons[pm].flags & PMF_STUPID);
}

int pmon_is_smart(int pm)
{
	return !!(permons[pm].flags & PMF_SMART);
}

int pmon_is_magician(int pm)
{
	return !!(permons[pm].flags & PMF_MAGICIAN);
}

int pmon_is_archer(int pm)
{
	return !!(permons[pm].flags & PMF_ARCHER);
}

/* pmon2.c */
