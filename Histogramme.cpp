#include <iostream>
#include <map>
#include <vector>
#include <string>
#include "Histogramme.hpp"

using namespace std;
//Rajouter constructeur par défaut pour set les meds NULL
Histogramme::Histogramme(map <string, vector<string> > meds){
  map <string, vector<string> >::iterator im;
  for (im = meds.begin(); im != meds.end(); im++){
    vector effets = im;
    vector <string>::iterator iv;
    for (iv = effets.begin(); iv != effets.end(); iv++){
      if (freq.count(*iv.first())>0){
	freq[*iv.first()] = freq[*iv.first()] + 1;
      }
      else{
	freq[*iv.first()] = 1;
      }
    }
  }
}
Histogramme::affichageHist();{
}
  
  
