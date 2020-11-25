#include "../Headers/main.h"

int main()
{
	//Creating menus
	menu mainMenu, gamesMenu, actionsMenu, playerEditor, gameEditor;

	//	---	MENU OPTIONS	---	//
	//Main menu options
	mainMenu.addChoice("Games List");
	mainMenu.addChoice("Exit");
	//Actions options
	actionsMenu.addChoice("Play");
	actionsMenu.addChoice("Edit Players");
	actionsMenu.addChoice("Edit Game");
	actionsMenu.addChoice("Exit");
	//Player editor
	/*for(player:players)
		playerEditor.addChoice(player.name);*/
	playerEditor.addChoice("New Player");
	playerEditor.addChoice("Exit");

	//Chosen game index
	unsigned short int gIndex;
	//#TODO: DO{}WHILE; POUR LES RETOURS DE MENUS
	switch(mainMenu.display())
	{
	case 0:
		//Selecting a game
		/*for(game:games)
			gamesMenu.addChoice(game.name)*/
		gIndex = gamesMenu.display();


		break;

	case 1:
		break;
	}
	return 0;
}