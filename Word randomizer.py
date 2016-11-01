from random import shuffle
input_file = open("Input.txt", "r")
words = []
for i in range(0,50):
    words.append(input_file.readline())

output_file = open("Output.txt", "w")
for i in range(0,25):
    shuffle(words)
    output_file.write(str(i+1) + '\n')
    for item in words:
        output_file.write(str(item).rstrip('\n') + " ".rstrip('\n'))
    output_file.write('\n')
input_file.close()
output_file.close()
