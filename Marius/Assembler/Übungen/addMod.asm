.data
	one: .word 32
	two: .word 17
.text
	lw $t0, one($zero)
	lw $t1, two($zero)
	add $s0, $t1, $t0
			
	li $v0, 1
	move $a0, $s0
	syscall
	