.data

.text
	addi $s0, $zero, 10000
	addi $s1, $zero, 200000
	mul $s0, $s0, $s1
	
	li $v0, 1
	move $a0, $s0
	syscall