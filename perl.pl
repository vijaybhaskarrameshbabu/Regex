#!/usr/bin/perl

my  ($uname, $pass)= @ARGV;

my $u=1;
my $p=1;

if ($uname =~ m/^[a-zA-Z0-9]+$/)
{
   $u=0;
}

if ($pass =~ m/^[a-zA-Z0-9@#\$%^&*]+$/)
{
   $p=0;
}

if($u==0  && $p==0)
{
   print "\n Valid Credentials \n";
}
elsif($u==0 && $p==1)
{
   print "\n Check Your password\n";
}
elsif($u==1 && $p==0)
{
   print "\n Check your username\n";
}
elsif($u==1 && $p==1)
{
   print "\n Check your username and password\n";
}
