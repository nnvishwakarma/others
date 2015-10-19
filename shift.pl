use strict;
use warnings;
my $num=3245;
my $i;
my $l_shift;
my $r_shift;
my $temp;
printf "\n The number is : %032b\n\n",$num;
for($i=0;$i<=31;$i=$i+4){
	$l_shift=$num<<$i;
	$r_shift=$num>>$i;
	$temp=$l_shift|$r_shift;
	printf "\n << %02d :: %032b",$i,$l_shift;
	printf "\t >> %02d :: %032b",$i,$r_shift;
	printf "\t %032b ",$temp;
}
