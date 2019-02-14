#include <iostream>
#include <string>
#include <time.h>

//1
enum EnemyType { ZOMBIE, VAMPIRE, GHOST, WITCH };

//2
struct Enemy {

	EnemyType Type;
	std::string name;
	int health;

};

//3
bool equalEnemies(Enemy enemy1, Enemy enemy2) {

	if (enemy1.name == enemy2.name)
		if (enemy1.Type == enemy2.Type)
			return true;

	return false;
}

//4
Enemy createRandomEnemy () {
	Enemy EnemyRand;

	//Name definition

	std::string EnemyNames[4];
	EnemyNames[0] = "Sucka Blyat";
	EnemyNames[1] = "Paco el Difisil";
	EnemyNames[2] = "Alfred Mcnamanar";
	EnemyNames[3] = "Carlos";
	
	EnemyRand.name = EnemyNames[rand() % 3];
  



	//Enemy Type definition
	
	int RandNum = rand() % 3;
	switch (RandNum) {
	case 0:
		EnemyRand.Type = ZOMBIE;
		break;
	case 1:
		EnemyRand.Type = VAMPIRE;
		break;
	case 2:
		EnemyRand.Type = GHOST;
		break;
	case 3:
		EnemyRand.Type = WITCH;
		break;
	default:
		break;
}

	//Health definition

	EnemyRand.health = rand() % 200 + 100;



	return EnemyRand;
}

//5
std::string getEnemyTypeString(EnemyType EnemyType) {
	
	std::string Type;

	switch (EnemyType)
	{
	case ZOMBIE:
		Type = "It's a Zombie";
		break;
	case VAMPIRE:
		Type = "It's a Vampire";
		break;
	case GHOST:
		Type = "It's a Ghost";
		break;
	case WITCH:
		Type = "It's a Witch";
		break;
	default:
		break;
	}

	return Type;
}


int main() {
	srand(time(NULL));

	const int MAX_ENEMIES = 5;



	Enemy enemies[MAX_ENEMIES];

	for (int i = 0; i < MAX_ENEMIES; i++) {
		
		if (i == 0) {
			enemies[0] = createRandomEnemy();
		}
		else {
			enemies[i] = createRandomEnemy();
			for (int z = 0; z < i; z++)
				if (equalEnemies(enemies[i], enemies[z])) {
					z--;
					enemies[i] = createRandomEnemy();
				}
		}
	}







	return 0;
}