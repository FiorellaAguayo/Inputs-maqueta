#ifndef INPUTS_H_INCLUDED
#define INPUTS_H_INCLUDED

int askForInteger(int* validatedInteger, char message[], char messageError[], int minimum, int maximum);
int askForText(char* validatedText, char message[], char messageError[], int maximum);
int askForCSVFile(char* text, char* message, char* messageError);
int askForChar(char* caracter, char* mensaje, char* mensajeError, char letra1, char letra2, int reintentos);
int convertFirstCharToUppercase(char name[]);

#endif // INPUTS_H_INCLUDED
