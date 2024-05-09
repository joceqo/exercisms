<?php

Class Size {
  public $height;
  public $width;

  function __construct(int $height, int $width)
  {
    $this->height = $height || 300;
    $this->width = $width || 700;
  }
}