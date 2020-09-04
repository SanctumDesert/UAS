.data
.text
	addi $s0, $zero, 32
	addi $s1, $zero, 17
	sub $t0, $s0, $s1
	
	#ausgabe
	li $v0, 1
	move $a0, $t0
	syscall