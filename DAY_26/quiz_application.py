print("Welcome to the Quiz Application!\n")

questions = [
    ("What is the capital of France?", "paris"),
    ("How many days are there in a week?", "7"),
    ("What is 2 + 2?", "4"),
]

score = 0

for i, (question, answer) in enumerate(questions, 1):
    user_answer = input(f"{i}. {question} ").strip().lower()
    if user_answer == answer:
        print("Correct!\n")
        score += 1
    else:
        print(f"Wrong! Correct answer: {answer}\n")
              
print(f"Your final score is: {score}/{len(questions)}")

if score == len(questions):
    print("Excellent! Perfect score!")
elif score >= len(questions):
    print("Good job!")
else:
    print("Keep practicing!")