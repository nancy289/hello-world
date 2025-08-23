### Conditional Statements
#python
# if-elif-else
score = 85

if score >= 90:
    grade = "A"
elif score >= 80:
    grade = "B"
elif score >= 70:
    grade = "C"
else:
    grade = "F"

# Ternary operator
status = "pass" if score >= 60 else "fail"

# Multiple conditions
if score >= 80 and score <= 90:
    print("Good job!")

if score < 60 or score > 100:
    print("Invalid score")
