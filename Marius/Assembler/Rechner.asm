#0. informationen der Arbeitsweise
#1. Einlesen der Argumente
#2. Auswahl der Operation
#3. Ausführen der Operation
#4. Ausgabe der Operation
#5. exit

.data
	info1: .asciiz "Zur Berehcnung bitte 1 für die Addition und 2 für die Subtraktion eingeben"
	info2: .asciiz "Zahl x eingeben"
	info3: .asciiz "Zahl y eingeben"
	info4: .asciiz "Ergebnis = "
	info5: .asciiz "Üngültig Eingabe. \n"
	
.text
main:
	li $v0, 4
	la $a0, info1
	syscall
	
	li $v0, 5		#Aurfurfe read_init(5)
	syscall			#Lese Operation ein
	move $t0, $v0 		
	
	beq $t0, l, add
	beq $t0, 2, sub
	beq $t0, 3, mult
	
	li $v0, 4
	la $a0, info5
	syscall
	j exit
	
input:
	li $v0, 4
	la $a0, info2
	syscall
	
	li $v0, 5		#Aurfurfe read_init(5)
	syscall			#Lese Operation ein
	move $t1, $v0
	
	li $v0, 4
	la $a0, info3
	
	li $v0, 5		#Aurfurfe read_init(5)
	syscall			#Lese Operation ein
	move $t2, $v0
	jr $ra
add:
	jal input 
	add $t0, $t1, $t2
	j output

sub:
	jal input
	sub $t0, $t1, $t2
	j output
mult:
	jal input
	mult $t1, $t2
	mflo $t0, 
	j output

output:
	li $v0, 4
	la $a0, info4
	syscall
	
	li $v0, 1
	move $a0, $t0
	syscall

read:
write:
compute:
exit:
	li $v0, 10		#Ende des Enprozess exit(10)
	syscall