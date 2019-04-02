/* bmagic.h

2019 - Stefano Peris <xenonlab.develop@gmail.com>

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


#ifndef BMAGIC_H
#define BMAGIC_H

/* XXX DATA TYPES XXX */

enum monspell {
	MS_REJECT = -1,		/* Rejection tag. */
	/* "Melee" attacks */
	MS_STRIKE_STAFF,	/* Wizard */
	MS_NECRO_STAFF,		/* Lich */
	MS_CHILLING_TOUCH,	/* Master Lich */
	/* Ranged Attacks */
	MS_LIGHTNING,	/* Wizard */
	MS_NECRO_BOLT,	/* Lich */
	MS_NECRO_SMITE,	/* Master Lich - no cardinal alignment needed */
	MS_FIRE_COLUMN,	/* Defiler */
	/* Curses */
	MS_CURSE_ARMOURMELT,	/* All cursers */
	MS_CURSE_LEADFOOT,	/* All cursers */
	MS_CURSE_WITHERING,	/* Master Lich and Defiler only */
	/* Evasion */
	MS_TELEPORT_ESCAPE,	/* Wizard, Archmage, Master Lich */
	MS_TELEPORT_AND_SUMMON,	/* Archmage */
	MS_TELEPORT_ASSAULT,	/* Wizard, Archmage, Master Lich */
};

extern int use_black_magic(int mon);
extern void mon_curses(int mon);
extern void malignant_aura(void);

#endif

/* lox.h */
