Skip to content
Search or jump to…
Pull requests
Issues
Codespaces
Marketplace
Explore
 
@Kiiru 
lincolnlangat
/
alx-low_level_programming
Public
Fork your own copy of lincolnlangat/alx-low_level_programming
Code
Issues
Pull requests
Actions
Projects
Security
Insights
Beta Try the new code view
alx-low_level_programming/0x06-pointers_arrays_strings/102-magic.c
@lincolnlangat
lincolnlangat ptr_arr_str adv
Latest commit 6898135 20 hours ago
 History
 1 contributor
Executable File  23 lines (21 sloc)  427 Bytes

#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
	*(p+5) = 98;
  /* ...so that this prints 98\n */
  printf("a[2] = %d\n", a[2]);
  return (0);
}
Footer
© 2023 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
alx-low_level_programming/102-magic.c at master · lincolnlangat/alx-low_level_programming