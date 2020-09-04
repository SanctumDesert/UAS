.data
	one: .word 32
	two: .word 17
.text
	lw $t0, one($zero)
	lw $t1, two($zero)
	add $t2, $t0, $t1
	
	li $v0, 1
	add $a0, $zero, $t2
	syscall
	