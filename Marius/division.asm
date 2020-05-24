.data
	number1: .word 15
	number2: .word 13
.text
	addi $t0, $zero, 26
	lw $t0, number1
	lw $t1, number2
	
	#pseudo befehl
	div $s0, $t0, $t1
	
	#interne befehl
	div $t0, $t1
	mflo $s1
	
	#pseudo divu
	divu $s2, $t0, $t1
	
	li $v0, 1
	add $a0, $s2, $zero
	syscall
