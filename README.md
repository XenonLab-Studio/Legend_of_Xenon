<pre>
 
                            ,--.
                           {    }
                           K,   }
                          /  ~Y`
                     ,   /   /
                    {_'-K.__/
                      `/-.__L._
                      /  ' /`\_}
                     /  ' /
             ____   /  ' /
      ,-'~~~~    ~~/  ' /_
    ,'             ``~~~  ',
   (                        Y
  {                         I
 {      -                    `,
 |       ',                   )
 |        |   ,..__      __. Y
 |    .,_./  Y ' / ^Y   J   )|
 \           |' /   |   |   ||
  \          L_/    . _ (_,.'(
   \,   ,      ^^""' / |      )       _    ___ ___ ___ _  _ ___     ___  ___  __  _____ _  _  ___  _  _ 
     \_  \          /,L]     /       | |  | __/ __| __| \| |   \   / _ \| __| \ \/ / __| \| |/ _ \| \| |
       '-_~-,       ` `   ./`        | |__| _| (_ | _|| .` | |) | | (_) | _|   >  <| _|| .` | (_) | .` |
          `'{_            )          |____|___\___|___|_|\_|___/   \___/|_|   /_/\_\___|_|\_|\___/|_|\_|
              ^^\..___,.--`
                                                                    
</pre>
<br>

###### Legend of Xenon is a classic roguelike game in which you explore a big dungeon in search of loot and glory.

<br>

## ABOUT THE GAME
-----------------

The Xenon legend is conceptually trivial: you are trapped in a complex, infinitely deep dungeon from which you say you can not escape. You're not ready to give up your life yet, are you? kill as many enemies as possible before your life ends.

As you dive deeper into the dungeon, you will encounter other fearsome enemies, while the familiar ones will increase in power. It is said that eventually the beasts of the dungeon become so powerful that they can kill even the most daring heroes with a single blow.

Will you be so brave as to descend into the abyss without end and gain eternal glory?

<br>

## GAMEPLAY INFORMATION
-----------------------

Legend of Xenon v1.7 has a very simple concept: Kill as many monsters
as you can and amass as much gold as you can, diving ever deeper into Stephen
Infinite Dungeon, until you die.  There is no "victory" condition; the only
objective provided by the design is "see how far you get, how much gold you
gather, and how many monsters you kill".

There are no new gameplay features currently planned.

NEW FEATURES IN RELEASE 1.7
---------------------------
* The curses-based display module should do much less I/O now.
* There is now a "wizard" mode for debugging purposes. Enable it by changing
  the WIZARD_MODE macro in lox.h from 0 to 1.
* Certain monsters are now (much) easier to hit. (In particular, a first
  level character is now capable of hitting a bad elf, and it's virtually
  impossible to miss a zombie.)
* Necromantic bolts and lightning bolts now use pure-agility defence.
* Once your food counter hits the lower end cap, rings of regeneration
  cease to function.

BUG FIXES IN RELEASE 1.7
------------------------
* 'eating' now consumes a turn as well as an item of food.
* Wizards no longer drop runeswords.
* The HP and XP of wraiths have been corrected to be more appropriate for their
  power rating.
* The armour spoiler now correctly proclaims itself to be the armour spoiler.

<br>

## REPORTING BUGS
-----------------

Report bugs via e-mail to xenonlab.develop@gmail.com. Or open a discussion (issues) on the official github repository, clearly describing the problems you've encountered and possibly your willingness to collaborate on the project.

Thank you.

<br>

## THANKS TO
------------

* **Jeff Lait**, for the seven-day Roguelike Cuixlenge concept (e The POWDER speed system, which I have roughly implemented), and for the suggestion of armor and weapons that are slowly consumed through use and therefore the player must transport the spare parts to repair them (crafting mode).
* **Jon Amery**, for reporting a bug in v1.0 that led me to discover that I had not entered a voice to identify the scrolls while the magic clothes were not identified during use. The worldly clothes were not listed correctly in the inventory. Jon also identified a bug that I was able to solve (concerning the evoked monsters), which I have corrected now.
* **Adam White**, for warning me that I was misusing the long int size, which caused some bugs.
* **Gero Kunter**, for reporting a lot of bugs in v1.2 and v1.3 and some great tips to improve the balance of the game.
* **David Damerell**, for a series of bug reports.
* **Richard Kettlewell**, for suggestions on building the game on Darwin (MacOS).
* Programmers of open source roguelike games, which I have played and studied over the years: NetHack, Angband, Brogue, and Dungeon Crawl Stone Soup.

Finally a thank you to you, that you have downloaded this game <3

<br>

## INSTALLATION INSTRUCTIONS
----------------------------

### Linux, Unix, MacOS
----------------------

On Linux (and other Unix-like systems), I do not guarantee that it will work
under Windows and MacOS, in case of problems contact me:

**Linux Ubuntu/Mint:**
$ sudo apt-get install git build-essential cmake libncurses5-dev libncursesw5-dev

**Arch Linux/Manjaro:**
$ sudo pacman -S git base-devel cmake ncurses

**Build**
Open a terminal window, and navigate to your Downloads directory: <br>
1. **$ git clone https://github.com/XenonLab-Studio/Legend_of_Xenon** <br>
2. **$ cd Legend_of_Xenon** <br>
3. **$ make** <br>
4. **$ ./legend_of_xenon** to start the game!

**Optional:** *to clean the folder from the compilation files, write "make clean".*

### Windows
-----------------

*It is apparently possible to build this code for Windows 10 (compiler MingGW), at the moment I do not have specific details*.
