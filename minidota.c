#include<stdio.h>
#include<string.h>

#define CHAR_LIMIT 255
#define TRUE 1
#define FALSE 0

typedef struct {
	int mana_cost;
	int damage;
	int cooldown;
	char name[CHAR_LIMIT];
	int level;
	int isActive; // If 1 Active, if 0 passive
} Skill;


void printSkillStats(Skill s){
	printf("Skill: %s\n", s.name);
	printf("Mana Cost: %d\n", s.mana_cost);
	printf("Damage: %d\n", s.damage);
	printf("Cooldown in seconds: %d\n", s.cooldown);
	printf("Current Level: %d\n", s.level);
	printf("Is skill active?: ");
	if (s.isActive){
		printf("TRUE");
	} else { printf("FALSE"); }

	printf("\n\n");
}

void initialize(Skill s, int m, int d, int c, char n[], int l, int i){
	s.mana_cost = m;
	s.damage = d;
	s.cooldown = c;
	strcpy(s.name, n);
	s.level = l;
	s.isActive = i;
}


int main(){
	
	// Instance
	Skill skill1;
	initialize(skill1, 110, 999, 3, "Rave Party", 1, TRUE);
	printSkillStats(skill1);


	// Asuume: Nag level up ang skill!
	skill1.damage = skill1.damage + 1;
	skill1.mana_cost = skill1.mana_cost - 10;
	skill1.cooldown = skill1.cooldown + 2;
	skill1.level++;
	skill1.isActive = FALSE;

	printSkillStats(skill1);

	Skill ss_ni_axe;
	ss_ni_axe.damage = 10000;
	ss_ni_axe.mana_cost = 10;
	ss_ni_axe.cooldown = 0;
	strcpy(ss_ni_axe.name, "Buak ulo.");
	ss_ni_axe.level = 1;
	ss_ni_axe.isActive = FALSE;

	printSkillStats(ss_ni_axe);

	return 0;
}



