#include <string.h>
#include <stdio.h>
#include "us110.h"
void exportarSensores(Sensor *sensor, const char *filename)
{
  FILE *file = fopen(filename, "w");

  if (file == NULL)
  {
    printf("Erro ao abrir o ficheiro\n", filename);
    return;
  }

  fprintf(file, "id,tipo,limite_maximo,limite_minimo,frequencia\n");
  fprintf(file, "%hu,%hhu,%hu,%hu,%lu\n", sensor->id, sensor->sensor_type, sensor->max_limit, sensor->min_limit, sensor->frequency);

  fprintf(file, "leituras\n");
  for (int i = 0; i < sensor->readings_size; i++)
  {
    fprintf(file, "%hu\n", sensor->readings[i]);
  }

  fclose(file);
}

void exportarMatriz(unsigned short **matriz, const char *filename)
{
  // Abre o arquivo para escrita
  FILE *file = fopen(filename, "w");

  // Verifica se o arquivo foi aberto com sucesso
  if (file == NULL)
  {
    printf("Erro ao abrir o ficheiro\n", filename);
    return;
  }

  // Escreve os dados da matriz diária de resumo no arquivo
  fprintf(file, "sensor,leitura\n");
  for (int i = 0; i < 6; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      fprintf(file, "%d,%hu\n", i, matriz[i][j]);
    }
  }

  // Fecha o arquivo
  fclose(file);
}
