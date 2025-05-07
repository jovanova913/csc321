// Angela Jovanovic
// CSC 321 Final Project

#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

void angelasRoom26(char *item);
bool checkChekhov(char *mystery);
char room26Encounter(int random);

int main(int argc, char *argv[])
{
	puts("room26");
	int choice = 0;
	char inventory[3][30] = {"NULL", "NULL", "Chekhov's Gun"};
	char ally = 'X';
	char mystery[30] = "unknown";
	int count = 0;
	int random = 0;
	bool cliffhanger = false;
	bool chekhov = false;
				
	// This is not present in the Room 26 code in the full game
	// This is already set in the main code prior to Room 26
	srand(time(NULL));
	
	// This is not present in the room26 code in the full game
	// The name variable is set in the main code prior to Room 26
	char name[30] = "bob";
	printf("Please enter your name: ");
	scanf("%s", name);

	printf("\nAs you walk through the door, you find yourself standing atop a small hill overlooking a vast kingdom.\n");
	puts("You see towns and villages stretching out as far as the eye can see, but they appear empty, lifeless as far as you can tell.");
	puts("Even the capital city, marked by the unmistakably massive castle sitting in the center, seems like a once shining jewel dulled and left to rot.");
	puts("Something is very wrong here, and that is where you come in, my heroic friend.");
	printf("You, %s, must save this kingdom from the great threat that has befallen it!\n\n", name);
	puts("And as your dutiful narrator, I will assist you in your journey.");
	puts("I know exactly where you should start!");
	printf("Or well, technically, I know two places where you could start.\n\n");
	puts("To your left, there is an armory maintained by the imperial guard.");
	printf("Since they don't seem to be doing their jobs very well, I doubt anyone would mind terribly if you helped yourself to some of their stock.\n\n");
	puts("And to your right, there is an arcane tower previously inhabited by the great mage Bakington III, known for his mastery of magical artifacts.");
	puts("Last I heard, the poor fellow turned himself into approximately fourteen cheese wheels.");
	printf("So I doubt he’ll be needing those artifacts anytime soon.\n\n");
	puts("Oh, and do try to be careful with that gun in your waistband.");
	puts("I'm not sure where you got it from, and even worse, I'm not even sure you know how to use it.");
	printf("Just remember that's there and we should be fine.\n\n");
	puts("Now then, where would you like to go?");
	printf("1. Armory\n2. Arcane Tower\n3. Turn around and leave.\n");
	scanf("%d", &choice);
	printf("\n-----------------------------------_-^-_-----------------------------------\n");
				
	if(choice == 1 || choice == 2)
	{
		if(choice == 1)
		{
			printf("\n---------------\n");
			printf("| ARMORY PATH |");
			printf("\n---------------\n");
			printf("\nForearmed is forewarned, as they say. Or is it the other way around?\n\n");
			puts("No matter, as you step into the armory, you notice that much of the shelves and cases are barren.");
			puts("From the other side of the room, a soldier rushes in, moving frantically through the center aisle before he suddenly slips and falls.");
			printf("Looking terribly embarrassed, he picks himself up and grabs an item at random before running back from whence he came.\n\n");
			printf("Now alone, you take a moment to glance around.\n\n");
			puts("On the right-hand wall, you notice a gleaming sword with intricate carvings hanging from the center rack.");
			printf("And just off to the side, there sits a mannequin bearing a chest piece that seems to glow a faint shade of blue.\n\n");
			puts("Suddenly, that same soldier comes back into the room, taking the exact same path he took just moments before.");
			puts("And, wouldn’t you know it, he slips and falls again in the exact same spot.");
			printf("That can't just be a coincidence, can it?\n\n");
			puts("Well, what would you like to do?");
			printf("1. Pick up the sword.\n2. Don the armor.\n3. Take a closer look at the spot the where the soldier fell.\n");
			scanf("%d", &choice);
			printf("\n-----------------------------------_-^-_-----------------------------------\n");
		
			if(choice == 1)
			{
				printf("\nExcellent choice!\n");
				printf("As you take hold of the blade, you feel a great power thrumming in your hands.\n\n");
					
				strcpy(inventory[0], "Sword of Plot Advancement");
				count++;

				printf("\n-------------------------------------------------------------------\n");
				printf("| The Sword of Plot Advancement has been added to your inventory. |");
				printf("\n-------------------------------------------------------------------\n");
			}
			else if(choice == 2)
			{
				printf("\nI always say that the best defense is a good defense!\n");
				printf("And this piece of armor in particular feels as if it could shrug off anything that comes your way.\n\n");

				strcpy(inventory[0], "Plot Armor");
				count++;

				printf("\n------------------------------------------------\n");
				printf("| Plot Armor has been added to your inventory. |");
				printf("\n------------------------------------------------\n");
			}
			else
			{
				printf("\nYou…slip and fall. Hard.\n");
				puts("After getting up with some difficulty, you look down to find a banana peel sitting on the floor.");
				printf("How did you not notice that?\n\n");
				printf("Ah, doesn't matter, just pick it up.\n\n");

				strcpy(inventory[0], "Running Gag");
				count++;

				printf("\n------------------------------------------------\n");
				printf("| The Running Gag was added to your inventory. |");
				printf("\n------------------------------------------------\n");
			}
		}
		else if(choice == 2)
		{
			printf("\n---------------------\n");
			printf("| ARCANE TOWER PATH |");
			printf("\n---------------------\n");
			printf("\nAh, the allure of magic is ever persistent. Let's see what weird and wonderful things you find!\n\n");
			puts("As you step into the arcane tower, you find yourself faced with a spiral staircase that seems to go up forever.");
			printf("I hope you haven't been skipping leg day too often or else this is going to be rough.\n\n");
			puts("...or maybe not?");
			puts("As you make your way up a set of stairs, an alcove appears to open up in the wall next to you.");
			puts("Nestled inside, there are several items locked away in display cases.");
			printf("But the most noticeable item is the pair of sunglasses sat smack dab in the middle, it's case unlocked and open.\n\n");
			puts("Indulging your curiosity, you decide to climb up a bit higher, and wouldn't you know it: another alcove opens up.");
			puts("This one holds little more than a work bench, though it is covered in scattered tools and mechanical parts.");
			puts("There is a pocket watch, shiny and seemingly brand new, amongst the mess.");
			printf("It's presence feels significant.\n\n");
			puts("But something is telling you to check for at least one more alcove, so you begin climbing once more.");
			puts("And true to your assumption, the wall shifts once more.");
			puts("The pungent smell emanating from this one hits you with force of a tsunami.");
			puts("Once the tears clear from your eyes, you are shocked to find nothing more than a bright red fish on the floor.");
			printf("It's oddly difficult to tear your gaze away from it.\n\n");
			puts("Well, which item tickles your fancy?");
    		printf("1. The sunglasses, of course.\n2. The pocket watch, naturally.\n3. The fish.\n");
            scanf("%d", &choice);
			printf("\n-----------------------------------_-^-_-----------------------------------\n");

			if(choice == 1)
			{
				printf("\nThe rule of cool, eh? I can't blame you.\n\n");
				puts("You make your way back down to grab the sunglasses.");
				printf("And as you tuck them away, you feel as though the future flashes before your eyes for a split second.\n\n");

				strcpy(inventory[0], "Foreshadowing");
				count++;

				printf("\n----------------------------------------------\n");
				printf("| Foreshadowing was added to your inventory. |");
				printf("\n----------------------------------------------\n");
			}
			else if(choice == 2)
			{
				printf("\nTime is something you can never have enough of, my friend.\n\n");
				puts("So you head down the stairs to pick up the pocket watch.");
				puts("As you fiddle around with it, a spring clatters onto the floor.");
				printf("But when you press down on the watch, you look up to find the spring right back where it was.\n\n");

				strcpy(inventory[0], "Time Loop");
				count++;

				printf("\n--------------------------------------------\n");
				printf("| A Time Loop was added to your inventory. |");
				printf("\n--------------------------------------------\n");
			}
			else
			{
				printf("\nReally?! You're really going to carry that around?\n\n");
				puts("You know what? Just take it");
				printf("Ugh, I shouldn't even be able to smell it, but I can!\n\n");

				strcpy(inventory[0], "Red Herring");
				count++;

				printf("\n------------------------------------------------\n");
				printf("| The Red Herring was added to your inventory. |");
				printf("\n------------------------------------------------\n");
			}
		}

		printf("Now that you've gotten your hands on an item of immeasurable power...\n\n");
		printf("I think it's time we head for the capital city!\n\n");
		puts("The walk is long and grueling...");
		puts("Bandits, trolls, and wyverns. Oh my!");
		printf("Blah, blah, blah---Let's get to the good part!\n\n");
		puts("As you make your way through the capital city, you notice signs of life all around you.");
		printf("But there is not a soul to be seen.\n\n");
		puts("It's not difficult to imagine what it would've looked like before all this big bad evil business began.");
		puts("The marketplace bustling, the royal courtyard teeming with flora and fauna, the people going about their daily lives...");
		printf("You can bring that all back for us, you know?\n\n");
		puts("Well, at any rate, you're approaching the castle gates.");
		printf("Now it'll just be you and---\n\n");

		// One of two random encounters is generated
		random = rand() % 30;
		ally = room26Encounter(random);

		switch(ally)
		{
			case 'A':
				strcpy(inventory[1], "Offscreen Moment");
				count++;
				printf("\n-----------------------------------------------------------------\n");
				printf("| You have gained an ally! Offscreen Moment added to inventory. |");
				printf("\n-----------------------------------------------------------------\n");
				break;
			case 'B':
				strcpy(inventory[1], "Deus Ex Machina");
				count++;
				printf("\n----------------------------------------------------------------\n");
				printf("| You have gained an ally! Deus Ex Machina added to inventory. |");
				printf("\n----------------------------------------------------------------\n");
				break;
			case 'X':
				cliffhanger = true;
				printf("\n-------------------------------\n");
				printf("| Guess you're on your own... |");
				printf("\n-------------------------------\n");
				break;
		}

		printf("\nWell, time for the final confrontation, isn't it?\n\n");
		printf("I suppose I should finally tell you what you're up against, shouldn't I?\n\n");
		printf("1. Yes\n2. Absolutely\n3. I guess so...\n\n");
		// Input not actually used, just breaking up the wall of text with a choice so it's easier to follow.
		scanf("%d", &choice);
		printf("\n-----------------------------------_-^-_-----------------------------------\n");

		printf("\nThe truth is: you're not the first person to stumble into this world of ours.\n");
		printf("No, you see, we've acutally had quite a few strange interlopers waltz through.\n\n");
		puts("Most of them stuck around for an adventure or two and then left.");
		printf("But one in particular decided to stick around.\n\n");
		puts("Meorge GG Rartin was his name.");
		printf("A writer.\n\n");
		puts("He liked this world of ours, said it inspired him.");
		puts("But it wasn't long before he grew unsatisifed.");
		printf("Said the worldbuilding wasn't robust enough, needed a conflict to spice things up.\n\n");
		puts("I don't know how, but he got his hands on some very powerful magic.");
		puts("The kind that could change reality itself.");
		printf("And he put it to work immediately, made himself the villain of this story in the process.\n\n");
		printf("Nothing's been the same since.\n\n");
		puts("But you're here now, aren't you?");
		printf("Let's change the ending of this story, my friend.\n\n");
		puts("You push open the doors to the castle's central chamber.");
		printf("In the center, sat on the former King's throne, Meorge watches you enter.\n\n");
		printf("\"So, it's you who's been meddling with my story...\"\n\n");
		puts("He pushes himself up, and you notice his hand begin to crackle with magic.");
		printf("This is your moment.\n\n");
	
		while(count > 0)
		{
			int num = count + 1;
			printf("What do you want to do?\n\n");
			printf("1. Use %s\n", inventory[0]);
			// If two items have been added to the inventory, both items will be printed
			// Otherwise, only the first inventory slot will be printed because it is guaranteed
			if(count == 2)
			{
				printf("2. Use %s\n", inventory[1]);
			}
			printf("%d. Try to remember...\n", num);
			scanf("%d", &choice);
			printf("\n-----------------------------------_-^-_-----------------------------------\n");

			if(choice == 1)
			{
				// If the second inventory slot is NOT empty, that item is moved to the first inventory slot
				angelasRoom26(inventory[0]);
				if((strcmp(inventory[1], "NULL")) == 0)
				{
					strcpy(inventory[0], "NULL");
				}
				else
				{
					strcpy(inventory[0], inventory[1]);
					strcpy(inventory[1], "NULL");
				}
				count--;
			}
			else if(choice == 2)
			{
				// If the second inventory slot is empty, then option two is "Try to remember..."
				// Otherwise, the item in the second inventory slot is used
				if((strcmp(inventory[1], "NULL")) == 0)
				{			
					puts("There's something you're forgetting.");
					puts("Something you have that could be very useful right now...");
					printf("But what is it? Enter a word:\n\n");
					scanf("%s", mystery);
					printf("\n-----------------------------------_-^-_-----------------------------------\n");

					chekhov = checkChekhov(mystery);
					if(chekhov == true)
					{
						// Count set to 0 to end the while loop if the player guesses correctly
						// Automatically takes them to Chekhov's Gun ending
						count = 0;
					}
					// Count is otherwise not affected so the player can guess as many times as they'd like
				}
				else
				{
					angelasRoom26(inventory[1]);
					strcpy(inventory[1], "NULL");
					count--;
				}
			}
			else if(choice == 3)
			{
				puts("There's something you're forgetting.");
				puts("Something you have that could be very useful right now...");
                printf("But what is it? Enter a word:\n\n");
                scanf("%s", mystery);
                printf("\n-----------------------------------_-^-_-----------------------------------\n");
						
                chekhov = checkChekhov(mystery);
                if(chekhov == true)
                {
					// Count set to 0 to end the while loop if the player guesses correctly
					// Automatically takes them to Chekhov's Gun ending
                    count = 0;
                }
				// Count is otherwise not affected so the player can guess as many times as they'd like
			}
		}

		// Chekhov's Gun ending has priority
		// If the requirement is not met, the Cliffhanger requirement is checked
		// If neither requirement is met, the Normal ending plays out
		if(chekhov == true)
		{
			// Chekhov's Gun ending
			printf("\n------------------------\n");
			printf("| CHEKHOV'S GUN ENDING |");
			printf("\n------------------------\n");
			printf("\nYou pull the gun out of your waistband.\n");
			puts("A quick inspection reveals an engraving on the side:");
			printf("Chekhov, it reads.\n\n");
			puts("Meorge looks horrified as you point the gun straight at him, clicking the safety off.");
			printf("And when you pull the trigger, he suddenly disintegrates into a sparkly cloud.\n\n");
			puts("A small rainbow appears where he once stood, and a bright light pulses outwards.");
			puts("You watch as the world around you turns instantaneously brighter.");
			printf("And when you step outside, a crowd gathered by the castle gates cheers for you!\n\n");
			puts("You did it! I knew you would!");
			printf("And now you may leave a hero, having restored this world to it former glory!\n\n");
			printf("Goodbye, %s, and safe travels.\n\n", name);
		}
		else if(cliffhanger == true)
		{
			// Cliffhanger ending
			printf("\n----------------------\n");
			printf("| CLIFFHANGER ENDING |");
			printf("\n----------------------\n");
			printf("\nThat's all you had.\n\n");
			printf("Now what?\n\n");
			puts("Meorge is still standing. He still has one good hand.");
			printf("You have to run.\n\n");
			puts("But you don't make it very far before you trip and fall, the gun in your waistband sliding out.");
			printf("As it hits the ground, it goes off, a bullet flying out to hit a nearby pillar.\n\n");
			printf("Oh no. That was a load-bearing pillar!\n\n");
			puts("The castle crumbles around you as you stumble towards the exit.");
			puts("You narrowly avoid getting crushed under a particularly large piece of rubble and slide through the doorway.");
			printf("Behind you, you hear Meorge's yelling begin to fade off into the distance.\n\n");
			printf("Oh dear, I'm afraid you might not have defeated him...\n\n");
			puts("But you must leave now.");
			puts("You have done all you could, and it was not enough.");
			printf("Goodbye, %s, and wish us luck...\n\n", name);
		}
		else
		{
			// Normal ending
			printf("\n-----------------\n");
			printf("| NORMAL ENDING |");
			printf("\n-----------------\n");
			printf("\nThe evil has been defeated!\n\n");
			puts("Your work is over, my friend. But ours is not.");
			printf("You have given us an opportunity to rebuild, and rebuild we will.\n\n");
			puts("But this is something we must do on our own.");
			printf("I'm sorry, but this is goodbye.\n\n");
			printf("%s, you are a hero...and you must leave.\n\n", name);
		}
	}
	else
	{
		printf("\n-----------------\n");
        printf("| COWARD ENDING |");
        printf("\n-----------------\n");
        printf("\nReally?! You're just going to leave?\n\n");
        printf("Some hero you turned out to be.\n\n");
        printf("You know what? Good riddance. Sayonara. See if I care.\n\n");
	}
	printf("You walk through a door that looks exactly like the one you came in from...\n\n");
	return EXIT_SUCCESS;
}

void angelasRoom26(char *item)
{
	// This function prints unique narration depending on the item used.

	if((strcmp(item, "Sword of Plot Advancement")) == 0)
	{
		printf("\n-----------------------------\n");
		printf("| SWORD OF PLOT ADVANCEMENT |");
		printf("\n-----------------------------\n");
		printf("You hold the sword out in front of you, feeling its power flow through your veins.\n\n");
		puts("A hint of recognition flashes in Meorge's eyes, and he lets out a resigned sigh.");
		puts("He makes no attempt to evade your charge. It's for the plot, after all.");
		puts("And with a swift strike, you separate his dominant hand from the rest of his body.");
		printf("A crippling blow for a writer...\n\n");
	}
	else if((strcmp(item, "Plot Armor")) == 0)
	{
		printf("\n--------------\n");
		printf("| PLOT ARMOR |");
		printf("\n--------------\n");
		printf("You unzip your jacket to reveal the enchanted armor hidden beneath it.\n\n");
		puts("Meorge laughs at your theatrics and fires off a devastating fireball.");
		puts("But his laughter quickly halts when the fire appears to simply dissipate into your chest.");
		printf("And as the armor begins to glow a bright orange, he starts to stumble backwards.\n\n");
		printf("But it is too late.\n\n");
		puts("The fireball shoots back out and burns the hand Meorge reaches out to block it, his dominant hand.");
		printf("A crippling blow for a writer...\n\n");
	}
	else if((strcmp(item, "Running Gag")) == 0)
	{
		printf("\n---------------\n");
		printf("| RUNNING GAG |");
		printf("\n---------------\n");
		puts("You pull the banana peel out with a flourish, and Meorge looks on in confusion.");
		printf("You launch it up into the air. It disappears before your very eyes.\n\n");
		puts("Meorge laughs at the seemingly useless trick and moves towards you menacingly.");
		printf("But three steps in, he goes flying backwards, his body twisting gracelessly in the air.\n\n");
		puts("He lands with a sickening crunch, right on his dominant hand.");
		printf("A crippling blow for a writer...\n\n");
	}
	else if((strcmp(item, "Foreshadowing")) == 0)
	{
		printf("\n-----------------\n");
		printf("| FORESHADOWING |");
		printf("\n-----------------\n");
		puts("You pull the sunglasses out of your pocket and put them on.");
		puts("Meorge looks a little jealous at how cool you look.");
		printf("But that doesn't stop him from trying to attack you.\n\n");
		puts("Suddenly, you see flashes of fire, feel yourself cooking medium-rare.");
		puts("Then: a mirror, shimmering with some unknown power.");
		printf("Feeling assured in your movements, you slide swiftly to the side.\n\n");
		puts("Meorge looks on in horror as his perfectly aimed fireball misses its mark.");
		puts("Instead, it heads straight for the mirror behind the spot you'd been standing in.");
		printf("The fireball dissipates into the glass, the glow turning orange.\n\n");
		puts("The mirror shoots the fireball back out and burns the hand Meorge reaches out to block it, his dominant hand.");
		printf("A crippling blow for a writer...\n\n");
	}
	else if((strcmp(item, "Time Loop")) == 0)
	{
		printf("\n-------------\n");
		printf("| TIME LOOP |");
		printf("\n-------------\n");
		puts("You pull the pocket watch out of your pocket as Meorge readies a spell.");
		printf("A devastating fireball forms in his hands, and he launches it straight at you.\n\n");
		puts("You feel its heat searing your skin, seconds from cooking you to a crisp.");
		printf("But before it can, you press down on the watch, feeling time begin to reverse.\n\n");
		puts("You see Meorge preparing his spell once more.");
		printf("Taking advantage of the second chance, you slide swiftly to the side.\n\n");
		puts("Meorge looks on in horror as his perfectly aimed fireball misses its mark.");
		puts("Instead, it heads straight for a mirror just behind the spot you'd been standing in.");
		printf("The fireball dissipates into the glass, and it begins to glow orange.\n\n");
		puts("The mirror shoots the fireball back out and burns the hand Meorge reaches out to block it, his dominant hand.");
		printf("A crippling blow for a writer...\n\n");
	}
	else if((strcmp(item, "Red Herring")) == 0)
	{
		printf("\n---------------\n");
		printf("| RED HERRING |");
		printf("\n---------------\n");
		puts("You pull out the strange, red fish and ready your aim.");
		puts("The fish arcs beautifully through the air.");
		printf("Meorge looks on with all the curiosity of a cat.\n\n");
		puts("He steps forward unsteadily, completely distracted.");
		puts("And then his foot catches on the edge of a step.");
		printf("He goes flying backwards, twisting ungracefully through the air.\n\n");
		puts("He lands with a sickening crunch, right on his dominant hand.");
		printf("A crippling blow for a writer...\n\n");
	}
	else if((strcmp(item, "Deus Ex Machina")) == 0)
	{
		printf("\n-------------------\n");
		printf("| DEUS EX MACHINA |");
		printf("\n-------------------\n");
		puts("Meorge suddenly pulls out a sheet of paper and a quill.");
		puts("As he begins to frantically write with his remaining hand, you feel reality shifting around you.");
		printf("You feel frozen in place, your body no longer your own.\n\n");
		puts("The ground shakes beneath your feet, and cracks begin to form.");
		puts("A massive sinkhole splits open right before your very eyes, growing by the second.");
		printf("Its ominous, purple glow overwhelms your sense, and you feel certain you are about to die.\n\n");
		puts("That is until the stranger's device begins to beep and something crashes through the ceiling.");
		puts("A dragon! And on its back sits the stranger, looking as stoic as ever.");
		printf("Its massive maw unhinges and scoops Meorge up in one fell swoop.\n\n");
		printf("The stranger nods at you as you regain control of yourself and flies off as quickly as he had arrived.\n\n");
		printf("Well, that was certainly unexpected...\n\n");
	}
	else if((strcmp(item, "Offscreen Moment")) == 0)
	{
		printf("\n--------------------\n");
		printf("| OFFSCREEN MOMENT |");
		printf("\n--------------------\n");
		puts("Meorge suddenly lifts his remaining hand high into the air.");
		puts("His somewhat awkward pose is at odds with the obvious power beginning to gather around him.");
		printf("Feeling as though you might need some help soon, you cup your hands and call out for Awf.\n\n");
		printf("You hope that he is near enough to assist you...\n\n");
		puts("And your hopes are answered as you hear the sweet sounds of metal clanging grow ever louder.");
		printf("A cat yowls and a cymbal crashes, and out comes flying a sprightly gnome.\n\n");
		printf("\"Help is here, buddy!\"\n");
		printf("Landing in front of Meorge, his face contorts into a menacing expression.\n\n");
		printf("\"But you might wanna look away for this one...\"\n");
		printf("You move your head to the side as he rolls up his sleeves.\n\n");
		puts("The sounds that follow I can hardly describe...");
		puts("If the pits of hell suddenly opened up in the middle of a category five hurricane...");
		puts("And then a giant, radioactive lizard began fighting an oversized gorilla...");
		printf("...well, that's sort of what this sounds like.\n\n");
		puts("And when silence finally falls, you turn to see Awf standing on top of a thoroughly defeated Meorge.");
		puts("Out of breath, the gnome gives you a bright smile and a thumbs up.");
		printf("And then he brushes himself off and rolls offscreen once more, ever the enigma...\n\n");
	}
}

bool checkChekhov(char *mystery)
{
	// Checks if the player entered the word "gun", whether capitalized or not
	if((strcmp(mystery, "gun")) == 0 || ((strcmp(mystery, "Gun")) == 0))
	{
		printf("\n-------------------\n");
		printf("| Yes, that's it! |");
		printf("\n-------------------\n");
		return true;
	}
	else
	{
		printf("\n------------------------\n");
		printf("| No, that's not it... |");
		printf("\n------------------------\n");
		return false;
	}
}

char room26Encounter(int random)
{
	// This function implements a basic relationship system.
	// Players gain or lose relationship points with a character through dialogue options.
	// This will affect the item they receive, which affects the endings they can get.

	int relationship = 0;
	int response = 0;

	printf("You suddenly collide with a person coming around the corner.\n\n");

	printf("\n--------------------\n");
	printf("| RANDOM ENCOUNTER |");
	printf("\n--------------------\n");

	// The first encounter is more common, the second has a lower chance of occurring
	if(random <= 25)
	{
		puts("The stranger slides falls and slides back behind some boxes.");
		puts("You hear an alarming cacophany of noises before the stranger reappears, no worse for wear.");
		printf("Finally getting a good look at him, you see a strange, gnomish fellow smiling at you.\n\n");
		printf("\"Well, hello there! You wouldn't happen to be on a quest of some sort, would you?\"\n\n");
		printf("1. \"Yes, I am!\"\n2. \"None of your business, buddy.\"\n3. \"Depends who's asking...\"\n\n");
		scanf("%d", &response);
		printf("\n-----------------------------------_-^-_-----------------------------------\n\n");

		if(response == 1)
		{
			relationship++;
			printf("\n\"Wonderful! I thought you looked like the heroic type!\"\n");
		}
		else if(response == 2)
		{
			printf("\n\"Wow. Someone stepped through the wrong door today.\"\n\n");
		}
		else if(response == 3)
		{
			printf("\n\"Me. I'm who's asking. I don't know what you're confused about, buddy.\"\n\n");
		}

		puts("He rubs at his beard, eyes squinted as if deep in thought.");
		printf("Suddenly, he holds a finger up and gestures at you to wait.\n\n");
		puts("He steps away, and another cacophany arises in the direction he left.");
		printf("When he returns, he is wearing an old, dented set of armor.\n\n");
		printf("\"You know, I used to be an adventurer like you. How bout I help you out?\"\n\n");
		printf("1. \"Did you take an arrow to the knee?\"\n2. \"Sure, why not?\"\n3. \"That would be great!\"\n\n");
		scanf("%d", &response);
		printf("\n-----------------------------------_-^-_-----------------------------------\n\n");

		if(response == 1)
		{
			if(relationship > 0)
			{
				relationship--;
			}
			printf("\nHis face falls, a dark shadow glazing over his bright eyes.\n\n");
			printf("\"Yeah. Yeah, I did...And the monster stole my sweetroll too...\"\n\n");
		}
		else if(response == 2)
		{
			relationship++;
			printf("\n\"Not as enthusiastic as I'd like, but what the heck!\"\n\n");
		}
		else if(response == 3)
		{
			relationship++;
			printf("\n\"That's the spirit! Me and you, buddy!\"\n\n");
		}

		printf("The stranger suddenly tenses up.\n\n");
		printf("\"But, uh, there's something I gotta do before I help you out.\"\n\n");
		printf("He looks off to the side, fists clenched and gaze determined.\n\n");
		printf("\"You don't mind if I meet you there, right buddy?\"\n\n");
		printf("1. \"I do, actually.\"\n2. \"No, not at all!\"\n3. \"Eh, it's whatever.\"\n\n");
		scanf("%d", &response);
		printf("\n-----------------------------------_-^-_-----------------------------------\n\n");

		if(response == 1)
		{
			if(relationship > 0)
			{
				if(relationship >= 2)
				{
					relationship -= 2;
				}
				else
				{
					relationship--;
				}
			}
			printf("\n\"Hmm...I guess you're on your own then, buddy.\"\n\n");
		}
		else if(response == 2)
		{
			relationship += 2;
			printf("\n\"Fantastic! See you at the castle, buddy!\"\n\n");
		}
		else if(response == 3)
		{
			printf("\n\"Uh, okay. I guess it is whatever, buddy.\"\n\n");
		}

		if(relationship <= 1)
		{
			printf("He shifts on his feet awkwardly.\n\n");
			printf("\"Think it's best we part ways now, buddy.\"\n");
			printf("The stranger walks away without another word. The sounds of chaos follow him.\n\n");
			return 'X';
		}
		else if(relationship > 1)
		{
			printf("He bounces on his feet, smiling brightly.\n\n");
			printf("\"Well, I best be going now, but call when you need me, and I'll be there!\"\n\n");
			printf("\"Oh, and the name's Awf S. Creen, by the way.\"\n");
			printf("The stranger walks away without another word. The sounds of chaos follow him.\n\n");
			return 'A';
		}
	}
	else
	{
		puts("You fall back, but the stranger manages to catch you by the wrist.");
		printf("And you look up to see an intimidating man in a black trench coat and sunglasses scowling at you.\n\n");
		printf("\"Watch where you're going next time.\"\n");
		printf("His voice comes out rough, as if he hasn't spoken in quite a while.\n\n");
		printf("1. \"My bad, man.\"\n2. \"Why don't YOU watch it, pal?\"\n3. \"...\"\n\n");
		scanf("%d", &response);
		printf("\n-----------------------------------_-^-_-----------------------------------\n\n");

		if(response == 1)
		{
			relationship++;
			printf("\nHe stares down at you, face inscrutable.\n");
			printf("Then he nods approvingly at your response.\n\n");
		}
		else if(response == 2)
		{
			printf("\nHis scowl deepens, and he shakes his head in disapproval.\n\n");
		}
		else if(response == 3)
		{
			relationship++;
			printf("\nHe nods approvingly at your stoic silence.\n\n");
		}

		puts("He looks at you, and you look at him.");
		puts("With his dark sci-fi getup, he seems completely out of place here.");
		printf("Maybe even more than you are.\n\n");
		puts("Maybe you should ask him something?");
		printf("It's getting pretty awkward just standing here...in silence.\n\n");
		printf("1. \"So, you from around here?\"\n2. \"You gonna talk or what?\"\n3. \"...\"\n\n");
		scanf("%d", &response);
		printf("\n-----------------------------------_-^-_-----------------------------------\n\n");

		if(response == 1)
		{
			relationship++;
			printf("\n\"No.\"\n\n");
			printf("Apparently, that's all he's going to give you.\n\n");
		}
		else if(response == 2)
		{
			if(relationship > 0)
			{
				relationship--;
			}
			printf("\nHe scowls at you in silence.\n\n");
			printf("I don't know why you thought that would help.\n\n");
		}
		else if(response == 3)
		{
			relationship += 2;
			printf("\nYou both stand there...menacingly.\n\n");
		}

		printf("After a few solid moments of silence, he speaks again.\n\n");
		printf("\"You got a smoke?\"\n\n");
		printf("1. \"No, sorry.\"\n2. \"Smoking's a bad habit, man.\"\n3. \"...\"\n\n");
		scanf("%d", &response);
		printf("\n-----------------------------------_-^-_-----------------------------------\n\n");

		if(response == 1)
		{
			printf("\n\"Hm...alright.\"\n\n");
		}
		else if(response == 2)
		{
			relationship++;
			printf("\nHe shrugs in response.\n\n");
			printf("\"Yeah, guess you're right.\"\n\n");
		}
		else if(response == 3)
		{
			if(relationship > 0)
			{
				if(relationship >= 2)
				{
					relationship -= 2;
				}
				else
				{
					relationship--;
				}
			}
			printf("\nHe scowls at you.\n\n");
			printf("\"I feel like you're judging me.\"\n\n");
		}

		printf("He shifts on his feet, his leather boots creaking.\n\n");

		if(relationship <= 1)
		{
			printf("\"I'm done with this conversation.\"\n\n");
			printf("Quite rudely, he walks away without another word.\n\n");
			return 'X';
		}
		else if(relationship > 1)
		{
			puts("He reaches out a gloved hand, a strange device nestled in his palm.");
			printf("You take it hesitantly, and he gestures for you to put it in your pocket.\n\n");
			printf("\"I'll be seeing you.\"\n");
			printf("And with that, he walks away.\n\n");
			return 'B';
		}
	}
}
