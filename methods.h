


//////////////////////////////////////////
//////////  My String Methods	//////////
//////////////////////////////////////////
void assignValueString(String *str, char value[]){
	int i, j;

	for(i=0; i<CHAR_LIMIT; i++){
		str->data[i] = value[i];
		if (value[i] == '\0'){
			break;
		}
	}
}

void printStringLine(String *str){
	printf("%s\n", str->data);
};


//////////////////////////////////////////
//////////  My Hero Methods	    //////////
//////////////////////////////////////////
void initialize_hero(DotaHero h){

}

void attack_hero(DotaHero attacker, DotaHero defender){
	
}








void printSkillStats(Skill s){


	printf("Skill: ");
	for(int i=0; i<CHAR_LIMIT; i++){
		printf("%c", s.name[i]);
	}

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
	s.level = l;
	s.isActive = i;

	for(int i=0; i<CHAR_LIMIT; i++){
		if (n[i] == '\0'){
			break;
		}; s.name[i] = n[i];
	};
}