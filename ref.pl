use strict;
use warnings;
sub sortArray
{
	
}
sub resetArray {
	
}
sub printArraya {
	my $arr=$_[0];	
	#print @arr;
	print "Size of array :: ".@$arr;
	my $i;
	my $j;
	for($i=0;$i < 3 ;$i=$i+1){
		print "\n";
		for($j=0;$j < 2 ;$j=$j+1){
			print "\t$$arr[$i][$j]";
		}
	}
	
}
sub reseyArray {
	my $arr=$_[0];	
	print "\n No of Rows : ";
	my $noRows=<STDIN>;
	chomp $noRows;
	
	print "\n No of Columns : ";
	my $noCols=<STDIN>;
	chomp $noCols;
	my $i;
	my $j;
	my $val;
	for($i=0;$i < $noRows;$i=$i+1){
		for($j=0;$j < $noCols ;$j=$j+1){
			print "\nEnter [$i]X[$j] : ";
			$val=<STDIN>;
			chomp $val;
			$$arr[$i][$j]=$val;
		}
	}
}
my @numArr;
$numArr[0][0]=1;
$numArr[0][1]=2;
$numArr[1][0]=3;
$numArr[1][1]=4;
$numArr[2][0]=5;
$numArr[2][1]=6;

print $numArr[0][0];
printArraya(\@numArr);
reseyArray(\@numArr);
printArraya(\@numArr);
#my $var = 10;
#my $r = \$var;
#print "Reference type in r : ", $$r, "\n";
#
#my @var = (1, 2, 3);
#$r = \@var;
#print "Reference type in r : ", @$r, "\n";
#
#my %var = ('key1' => 10, 'key2' => 20);
#$r = \%var;
#print "Reference type in r : ", %$r, "\n";
