/**        
 * @file  Ogrenci.cpp  
 * @description Veri Yapıları 1. Ödev
 * @course Veri Yapıları - 2B   
 * @date  22.10.2018 
 * @author  Onur Osman Güle - onur.gule@ogr.sakarya.edu.tr - G171210021   
 */
#include "Ogrenci.hpp"

#include <iostream>
Ogrenci::Ogrenci(char ad){
this->Ad = ad;
}
Ogrenci::~Ogrenci(){
   
}
char Ogrenci::getAd(){
return this->Ad; 
}
