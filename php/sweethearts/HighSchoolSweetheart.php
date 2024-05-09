<?php

class HighSchoolSweetheart
{
  public function firstLetter(string $name): string
  {
    return trim($name)[0];
  }

  public function initial(string $name): string
  {
    $firstLetter = $this->firstLetter($name);
    return strtoupper($firstLetter) . '.';
  }

  public function initials(string $name): string
  {
    [$first, $last] = explode(' ', trim($name));
    return $this->initial($first) . ' ' . $this->initial($last);
  }

  public function pair(string $sweetheart_a, string $sweetheart_b): string
  {
    $firstInitials = $this->initials($sweetheart_a);
    $secondInitials = $this->initials($sweetheart_b);
    $lovers = $firstInitials . '  +  ' . $secondInitials;

    		$sweetheart = "     ******       ******
   **      **   **      **
 **         ** **         **
**            *            **
**                         **
**     $lovers     **
 **                       **
   **                   **
     **               **
       **           **
         **       **
           **   **
             ***
              *";

    return $sweetheart;
  }
}

$instance = new HighSchoolSweetheart();
echo $instance->pair('Jane Doe', 'John Doe');
