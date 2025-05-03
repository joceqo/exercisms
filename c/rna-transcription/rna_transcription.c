#include "rna_transcription.h"

char convert_nucleotide(char);

char convert_nucleotide(char nuc) {
  switch (nuc) {
  case 'A':
    return 'U';
  case 'C':
    return 'G';
  case 'G':
    return 'C';
  case 'T':
    return 'A';
  default:
    return '\0';
  }
}

char *to_rna(const char *dna){
    size_t len = strlen(dna);
    char *rna = calloc(len, sizeof(char));

    for (size_t i = 0; i < len; i++) {
        rna[i] = convert_nucleotide(dna[i]);

        if (!rna[i]) {
             free(rna);
             return NULL;
        }
    }

    return rna;
}
