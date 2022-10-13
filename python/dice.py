import random

while True:
    choice = input("""For 'Player 1' please press 'A' to roll the dice
    For 'player 2' please press 'B' to roll the dice:  """)

    if choice == 'A':
        def player_1():
            number = random.randint(1,6)
            if number == 6:
                number_2 = random.randint(1,6)
                roll_again = number + number_2
                print("The number after rolling the dice is: ", roll_again)
            else:
                print(number)
            return number
    elif choice == 'B':
        def player_2():
            number = random.randint(1,6)
            if number == 6:
                number_2 = random.randint(1,6)
                roll_again = number + number_2
                print("The number after rolling the dice is: ", roll_again)
            else:
                print(number)
            return number
    else:
        print("Please enter valid choice!!!")
    player_1()
    