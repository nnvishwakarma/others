use strict;
use warnings;
my @matrixA;
my $initMatA=0;

my @matrixB;
my $initMatB=0;

sub menu(){
my $choice;
	system("clear");
	print
	 "******** Main Menu **********
-----------------------------
	1. Matrix
	2. Add
	3. Sub
	4. Multiply
	0. Exit
-----------------------------\n";
print "Select Option: ";
$choice=<STDIN>;
chomp $choice;
return $choice;
}

sub matrixSelect(){
my $choice;
	print
	 "**** Select Matrix ****
-----------------------------
	1. Matrix A
	2. Matrix B
	0. Exit
-----------------------------\n";
print "Select Option: ";
$choice=<STDIN>;
chomp $choice;
return $choice;
}

sub matrixOption(){
my $choice;
	print
	 "******** Matrix Menu **********
-----------------------------
	1. Reset
	2. Display
	3. Transpose
	4. Inverse
	0. Exit
-----------------------------\n";
print "Select Option: ";
$choice=<STDIN>;
chomp $choice;
return $choice;
}

my $h=menu();
print $h;
doscalar();
