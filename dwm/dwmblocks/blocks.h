//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"  ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g ",	2,		0},

	{"  1 ", "read -r freq1 x </sys/devices/system/cpu/cpu0/cpufreq/scaling_cur_freq && echo $freq1 Mhz",      2,      0},

	{"  2 ", "read -r freq2 x </sys/devices/system/cpu/cpu1/cpufreq/scaling_cur_freq && echo $freq2 Mhz",      2,      0},

	{"  ", "sed 's/000$/°C/' /sys/class/thermal/thermal_zone0/temp ",	2,	0},

	{"  ", "let r=$(($(brightnessctl get)*100))/$(brightnessctl max) && echo $r%",		1,		0},

	{"  ", "date '+%a %d, %b %I:%M' ",					60,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
