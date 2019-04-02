/* combat.h

2019 - Stefano Peris <xenonlab.develop@gmail.com>

Github repository: <https://github.com/XenonLab-Studio/The_Legend_of_Xenon.git>

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


#ifndef COMBAT_H
#define COMBAT_H

#ifndef LOX_H
#include "lox.h"
#endif

#include "monsters.h"

#define agility_modifier() (u.withering ? (u.agility / 10) : (u.agility / 5))
/* XXX combat.c data and funcs */
extern int player_attack(int dy, int dx);
extern int mhitu(int mon, enum damtyp dtyp);
extern int uhitm(int mon);
extern int mshootu(int mon);
extern int ushootm(int sy, int sx);

#endif

/* combat.h */

