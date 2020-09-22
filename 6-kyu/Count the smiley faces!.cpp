int countSmileys(std::vector<std::string> arr)
{
   if ( arr.size() == 0 ) return 0;
   std::string s = ":) :D ;) ;D :-) :-D ;-) ;-D :~) :~D ;~) ;~D";
   int res = 0;
   for ( int i = 0; i < arr.size(); i++)
   if ( s.find(arr[i]) != -1 ) res++;
   return res;
}
