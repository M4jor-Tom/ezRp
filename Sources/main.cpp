#include "../Headers/main.h"

int main()
{
	//Creating menus
	menu mainMenu, gamesMenu, actionsMenu, playerEditor, gameEditor;

	//	---	MENU OPTIONS	---	//
	//Main menu options
	mainMenu.addChoice("Games List");
	mainMenu.addExit();
	//Actions options
	actionsMenu.addChoice("Play");
	actionsMenu.addChoice("Edit Players");
	actionsMenu.addChoice("Edit Game");
	actionsMenu.addExit();
	//Games Menu
	/*for(game:games)
		gamesMenu.addChoice(game.name)*/
	gamesMenu.addExit();
	//Player editor
	/*for(player:players)
		playerEditor.addChoice(player.name);*/
	playerEditor.addChoice("New Player");
	actionsMenu.addExit();

	do
	{
		switch(mainMenu.display())
		{
		case 0:
			//Games List
			do
			{
				gamesMenu.display();

			}while(!gamesMenu.leaving());
			break;
		}
	}while(!mainMenu.leaving());
	return 0;
}