.data
.text
	addi $s0, $zero, 2000
	addi $s1, $zero, 30
	mult $s0, $s1, 
	mflo $t0
	li $v0, 1
	move $a0, $t0
	syscall
#mult ist overflow gesch�tzt, um das zu sein werden die hilfs register hi und lo benutzt, diese m�ssen f�r das ergebnis ausgelesen werden