# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    map.pl                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wlaureen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/22 19:18:54 by wlaureen          #+#    #+#              #
#    Updated: 2021/02/22 19:19:31 by wlaureen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/usr/bin/perl
use warnings;
use strict;
die "program x y density" unless (scalar(@ARGV) == 3);
my ($x, $y, $density) = @ARGV;
print "$y.ox\n";
for (my $i = 0; $i < $y; $i++) {
for (my $j = 0; $j < $x; $j++) {
if (int(rand($y) * 2) < $density) {
print "o";
}
else {
print ".";
}
}
print "\n";
}
