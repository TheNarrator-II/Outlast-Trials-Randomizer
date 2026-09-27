#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void amp(int *x)
{
	*x = rand() % 9;
}

void rig(int *x)
{
	*x = rand() % 6;
}

void impostor(int *x, int *y, int *z)
{
 	do {
		*x = rand() % 6;
		*y = rand() % 6;
		*z = rand() % 6;
	}  while (*x == *y || *y == *z || *x == *z);

	
}

int main()
{
	srand(time(NULL));
	char *Tool[9] = {"Slippers", "Cacophony", "Noise Reduction", "Battery Charger", "Lock Breaker", "Recycle", "Key Master", "Backpack", "Short Circuit"};
	char *Skill[9] = {"Hide And Breathe", "Hide And Heal", "Hide And Restore", "Quick Escape", "Invisible", "Door Trap Breaker", "Smash", "Strong Arm", "Evasive Maneuver"};
	char *Medicine[9] = {"Double Doses", "Antitoxin", "Surplus", "Last Chance", "Good Job", "Incognito", "Boosted", "Self Revive", "Bandage Expert"};
	char *Rig[6] = {"Stun", "Blind", "Heal", "X-Ray", "Barricade", "Jammer"};
	char *Impostor[6] = {"Mimic", "Steel Trap", "Stim", "Neuroshock", "Motion Sensor", "Ex-Pop Bait"};
	
	int a, b, c, d, e, f, g, *h, *i, *j, *k, *l, *m, *n;
	h = &a;
	i =&b;
	j = &c;
	k = &d;
	l = &e;
	m = &f;
	n = &g;
	
	amp(h);
	amp(i);
	amp(j);
	rig(k);
	impostor(l, m, n);

	printf("It is time to change the rules of the game.\n Bet your life at the table of chance\n Outlast these trials using your wits and stop depending on well-constructed builds\n And we will let you out...\n");
	printf("Rig: %s\n", Rig[d]);
	printf("Tool: %s\n", Tool[a]);
	printf("Skill: %s\n", Skill[b]);
	printf("Medicine: %s\n\n", Medicine[c]);
	printf("Amp 1: %s\n", Impostor[e]);
	printf("Amp 2: %s\n", Impostor[f]);
	printf("Amp 3: %s\n", Impostor[g]);
}
