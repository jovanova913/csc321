# Angela Jovanovic
# Lab 8b

import random

num = random.randint(0,9)
guess = 0
count = 0

guess = int(input("Guess a number between 0 and 9: "))

if guess == num:
    print("You win! You guessed the right number!")
elif guess > num:
    print("You lose...Your guess was too high.")
else:
    print("You lose...Your guess was too low.")

for i in range(3):
    print("The new Monster Hunter is wild(s).")

while count < 3:
    print("Pljeskavica")
    count += 1
