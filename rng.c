/* rng.c

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
#include <time.h>
#include <unistd.h>

/* FIX mpr v1.1 2005.02.06: Changed type of RNG stuff to "unsigned int" to
 * prevent malformed behaviour on x86-64 (where long int is 64 bits). */
unsigned int rng_state[5];
unsigned int saved_state[5];

unsigned int rng(void)
{
	unsigned int tmp;
	tmp = rng_state[0] ^ (rng_state[0] >> 7);
	rng_state[0] = rng_state[1];
	rng_state[1] = rng_state[2];
	rng_state[2] = rng_state[3];
	rng_state[3] = rng_state[4];
	rng_state[4] = (rng_state[4] ^ (rng_state[4] << 6)) ^ (tmp ^ (tmp << 13));
	return (rng_state[2] + rng_state[2] + 1) * rng_state[4];
}

void rng_init(void)
{
	int i;
	/* To make manipulating the RNG by monitoring the system time
	 * harder, we use PID and UID to perturb the return value of time()
	 * used to initialise the libc RNG.
	 *
	 * Yes, I am aware that the libc RNG on many platforms is a steaming
	 * pile of shite. However, I need *something* with which to populate
	 * my RNG's state array.
	 */
	srand(time(NULL) ^ getpid() ^ (getuid() << 16));
	rng_state[0] = rand();
	rng_state[1] = rand();
	rng_state[2] = rand();
	rng_state[3] = rand();
	rng_state[4] = rand();
	/* Flush through the first 100 numbers just in case some bastard
	 * tries to run us with a 16-bit rand(). */
	for (i = 0; i < 100; i++)
	{
		rng();
	}
}

/* rng.c */
