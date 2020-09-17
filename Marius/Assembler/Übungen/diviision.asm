.data
	i: .word 26
	j: .word 13
	j2: .word 15
	
.text
	lw $t0, i($zero)
	lw $t1, j($zero)
	lw $t2, j2($zero)
	
	div $t3,$t0, $t2		#division mit rest
	li $v0, 1
	add $a0, $t3, $zero
	syscall
	
	divu $t4, $t0, $t1	#division mit ausnahme behandlung
	li $v0, 1
	add $a0, $t4, $zero
	syscall
	
	div $t0, $t1
	mfhi $t5
	mflo $6
	li $v0,	1 
	add $a0, $t5, $zero
	syscall
	li $v0, 1
	add $a0, $t6, $zero
	syscall
	