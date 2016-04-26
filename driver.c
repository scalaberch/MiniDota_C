#include<stdio.h>
#include<string.h>

#define CHAR_LIMIT 255
#define TRUE 1
#define FALSE 0

#include "typedefs.h"
#include "methods.h"





int main(){

	String str1;
	assignValueString(&str1, "Testa");
	printStringLine(&str1);
	
	// Instance
	/* Skill skill1;
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

	printSkillStats(ss_ni_axe); */

	return 0;
}



