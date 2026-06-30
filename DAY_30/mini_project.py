import random
'''
1 for snake 
-1 for water
0 for gun
'''

computer = random.choice([1,0,-1])
a = input("Enter your choice :")
yourdict={"s" :1 ,"w":-1 , "g" :0}
reversedict = {1:"snake", -1:"Water" , 0:"Gun"}

you=yourdict[a]

print(f"You choose {reversedict[you]}\nComputer choose{reversedict[computer]}")

if(computer == you):
    print("DRAW")

else:
    if(computer == -1 and you==1):
        print("YOU WIN")

    elif(computer == -1 and you==0):
        print("YOU LOSE")    

    elif(computer == 1 and you==0):
        print("YOU  WIN") 

    elif(computer == 1 and you==-1):
        print("YOU LOSE")  

    elif(computer == 0 and you==1):
        print("YOU LOSE")  

    elif(computer == 0 and you==-1):
        print("YOU WIN") 

    else:
        print("SOMETHING IS WRONG!")    

     
