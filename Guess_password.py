secret = "Challenger"
hashi = "*********"
guess=""

till= -1
i=0
points = 100
flag=0;
print("You will get 10 guesses, and you will get a hint after every wrong guess")
while i<10:
    guess=raw_input("Guess the Super secret Password")
    if guess == secret:
        print("Awesome you Got it right my friend! and you scored "+ str(points) + " points")
        flag=1
        break
    else:
        print secret[0:i+1]+hashi[0:len(secret)-(i+1)]
    points=points - 10
    i=i+1
if flag==0:
    print("Pardon me, But you are an Idiot")
