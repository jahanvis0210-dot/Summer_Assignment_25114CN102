balance = 5000

print("Welcome to the ATM")
print("1. Check Balance")
print("2. Deposit")
print("3. Withdraw")
print("4. Exit")

while True:
    choice = input("\nEnter your choice: ")

    if choice == '1':
        print(f"Your balance is: {balance}")
    elif choice == '2':
        amount = int(input("Enter deposit amount: "))
        balance += amount
        print(f"Deposited {amount}. New balance: {balance}")
    elif choice == '3':
        amount = int(input("Enter withdrawal amount: "))
        if amount <= balance:
            balance -= amount
            print(f"Withdrew {amount}. New balance: {balance}")
        else:
            print("Insufficient balance")
    elif choice == '4':
        print("Thank you for using the ATM")
        break
    else:                 
        print("Invalid choice")
