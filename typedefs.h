

typedef struct {
	char data[CHAR_LIMIT];
} String;

typedef struct {
	int mana_cost;
	int damage;
	int cooldown;
	char name[CHAR_LIMIT];
	int level;
	int isActive; // If 1 Active, if 0 passive
} Skill;

typedef struct {
	char name[CHAR_LIMIT];
	int level;
	int xp;

	int hp;
	int max_hp;
	int mp;

	int normal_attack;
	int armor;

	Skill skillList[4];
} DotaHero;