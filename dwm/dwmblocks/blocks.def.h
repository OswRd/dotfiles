//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" Mem: ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g ",	5,		0},

	/*{"Vol:", "amixer get Master | awk -F'[][]' 'END{ print $2 }' ",	1,		0},*/
	{" CPU Temp: ", "sed 's/000$/°C/' /sys/class/thermal/thermal_zone0/temp ",	5,	0},

	{" ", "date '+%a %d, %b %I:%M%p' ",					60,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
