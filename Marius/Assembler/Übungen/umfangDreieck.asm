.data
	x: .word 12
	y: .word 14
	z: .word 5
	u: .word 0
.text
main:
	lw $t0, x
	lw $t1, y
	lw $t2, z
	add $t0, $t0, $t1
	add $t0, $t0, $t2
	sw $t0, u		#sw StoreWord speichert ein register in ein in .data angelegtes label
	li $v0, 1
	add $a0, $t0, $zero
	syscall
	
	li $v0, 10		#systemcall befehl 10 führt zum sauberen benden des Programmes
	syscall