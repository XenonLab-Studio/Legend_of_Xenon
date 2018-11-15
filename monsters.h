/* monsters.h

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


#ifndef MONSTERS_H
#define MONSTERS_H

#ifndef LOX_H
#include "lox.h"
#endif

/* XXX monsters.c data and funcs */
extern void update_mon(int mon);
extern void mon_acts(int mon);
extern void death_drop(int mon);
extern void print_mon_name(int mon, int article);
extern void summon_demon_near(int y, int x);
extern int create_mon(int pm_idx, int y, int x);
extern int summoning(int y, int x, int how_many);
extern int ood(int power, int ratio);
extern int get_random_pmon(void);
extern void damage_mon(int mon, int amount, int by_you);
extern int mon_can_pass(int mon, int y, int x);
extern int mon_visible(int mon);
extern void move_mon(int mon, int y, int x);
extern int teleport_mon(int mon);	/* Randomly relocate monster. */
extern int teleport_mon_to_you(int mon);	/* Relocate monster to your vicinity. */
extern void heal_mon(int mon, int amount, int cansee);

/* XXX mon2.c data and funcs */
extern void select_space(int *py, int *px, int dy, int dx, int selection_mode);

/* XXX pmon2.c data and funcs */
extern int pmon_is_archer(int pm);
extern int pmon_is_magician(int pm);
extern int pmon_is_smart(int pm);
extern int pmon_is_stupid(int pm);
extern int pmon_is_undead(int pm);
extern int pmon_resists_cold(int pm);
extern int pmon_resists_fire(int pm);
#endif

/* monsters.h */
