# **Requirements**
## Introduction
- Snakes and ladders, is an ancient indian board game for two or more players. It is played on a board which is gridded into a number of squares and numbered.
- A number of "snakes" and "ladders" are pictured on the board, each connecting two specefic squares. 
- The objective of the game is to navigate the player's game piece based the output of a die roll, from start to finish. In the process, the players encounter snakes and ladders at different squares. The ladders help the players to climb to a higher numbered square directly, but the snakes make the position of game piece come down from it's present value. 
- The player who makes it to the last square first wins the game.
- The program written for this project, although doesn't actually provide a board to play, but uses the same logic for digital implementation of the game, with a maximum of 2 players.

# **Research**
## Equipment
- The size of the grid most commonly used in snakes and ladders is 8x8 with maximum square value of 64, 10x10 with a maximum square value of 100 or 12x12 with a maximum square value of 144.
- Each player is represented by a game piece token and a die is rolled to determine the random movements of a player's token.
## History
- Snakes and ladders originated in India as part of a family of dice board games that included gyan chauper and pachisi.
- The game made its way to England and was sold as "Snakes and Ladders". Then the basic concept was introduced in the United States as _Chutes_ and _Ladders_  by game publisher Milton Bradley Company in 1943.
- In India, the game is often played by devotees of Hindu god Vishnu during the Vaikuntha Ekadashi festival in order to stay awake during the night.
## Variations
- Different variations of the game exists and depending on the type of variation, the rules for winning are decided.
- If the die roll is too large when a player is close to winning, the token either remains in place or goes off the final square and back again.

   ![File Snakes_and_Ladders](https://user-images.githubusercontent.com/81506807/114445739-0e567180-9bee-11eb-9364-b1cfa7db18bc.jpg)
        
     Game of Snakes and ladders (India, 19th century)
  # SWOT Analysis
  ## Strengths
  1. A very quick and simple game.
  2. Can be played by people of any age group.
  3. Helps children practice counting and adding.
  4. Being able to count and simultaneously move a playing piece from square to square demonstrates one-to-one correspondence.
  5. Very less equipments required to construct the game. It can even be designed in home.
  6. No limit for number of players.
  ## Weakness
  1. Can lead to addiction in children.
  2. With increase in number of players, the time delay between alternate turns of a player increases.
  3. The design of the board with too many snakes leads to increase in the chances of a player encountering a snake multiple times making the game long.
  4. Waiting for the occurence of 1 on the dice to win a game can be very irritating.
  ## Opportunities
  1. The game can be further developed to make it more fun and interesting.
  ## Threats 
  1. Due to development of many digital games, ancient board games like "snakes and ladder" face the threat of extinction.
  # 4W's and 1H
  ## Who
  ---
  People of all age group can play.
  ## What
  ---
  Digital implementation of an ancient game of snakes and ladders.
  ## When
  ---
  In situations of stress and pressure for adults or other family time and in learning stages for children.
  ## Where
  ---
  Any place with availability to keep the board and space to roll the dice.
  ## How
  ---
  A player rolls the dice and increases his pawn's position on the board till any of the player wins.
  # Detailed Requirements
  ## High level requirements
  |  ID|Description|Status|
  |---|---|---|
  | HR01 | User should be able to read data from file | Implemented |
  | HR02 | User should be able to modify the data in the file | Implemented |
  | HR03 | If the game is not working properly, should raise an issue | Future | 
  | HR04 | If the game is working properly, selecting number of players  | Future |
  | HR05 | When a player wins, The game should print a message and exit the program | Implemented |
  | HR06 | The game should correctly calculate and update the position values based on the roll | Implemented |
  ## Low level requirements
  |  ID|Description|Status|
  |---|---|---|
  | LR01 | Good readability of the code | Implemented |
  | LR02 | The messages printed by the game should be catchy and encourage the players to play another round | Impemented|
  | LR03 | The game code should be open for development | Implemented |
  | LR04 | Capability of accepting more than 5 players in one game | Future|   