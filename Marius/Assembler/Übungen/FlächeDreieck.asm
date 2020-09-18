.data
	a: .float 14
	h: .float 5
	einhalb: .float 0.5
	null: .float 0.0
	
.text
main:
	l.s $f0, a
	l.s $f1, h
	l.s $f2, einhalb
	l.s $f3, null
	
	mul.s $f0, $f0, $f1
	mul.s $f0, $f0, $f2
	
	add.s $f12, $f0, $f3
	li $v0, 2
	syscall
	
	li $v0, 10
	syscall