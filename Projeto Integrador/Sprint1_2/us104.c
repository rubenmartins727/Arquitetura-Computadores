#include <stdio.h>
#include "pcg32_random_r.h"
#include "us110.h"

void checkTempValues(Sensor *s, char maxLeiturasErradasConsecutivas, char temperatura_atual){
	int counter = 0;
	int reset = 0;
	char new_value = 0;
	char diferenca = 0;
	char b[s->readings_size]; 
	for(int x = 0; x < s->readings_size; x++){
		if (s->readings[x] > s->min_limit && s->readings[x] < s->max_limit){ 
			counter = 0;
		} else {
			b[x] = 1;
			counter = counter + 1;
		}
		if (counter == maxLeiturasErradasConsecutivas){reset = 1;}
	}
	
	if(reset == 1) {
		for(int y = 0; y < s->readings_size; y++){
			if(b[y] == 1){
				do{
					new_value = ((char) pcg_random_r())%49;
					s->readings[y] = new_value;
					diferenca = new_value - temperatura_atual;
				}while(abs(diferenca) > 4 && s->readings[y] > s->min_limit && s->readings[y] < s->max_limit);
			}
		}
	}
}

void checkVelVentoValues(Sensor *s, char maxLeiturasErradasConsecutivas, char velc_vento_atual){
	int counter = 0;
	int reset = 0;
		char new_value = 0;
	char diferenca = 0;
	char b[s->readings_size]; 
	for(int x = 0; x < s->readings_size; x++){
	if (s->readings[x] > s->min_limit && s->readings[x] < s->max_limit){ 
			counter = 0;
		} else {
			b[x] = 1;
			counter = counter + 1;
		}
		if (counter == maxLeiturasErradasConsecutivas){reset = 1;}
	}
	
	if(reset == 1) {
		for(int y = 0; y < s->readings_size; y++){
			if(b[y] == 1){
				do{
					new_value = ((char) pcg_random_r())%259;
					s->readings[y] = new_value;
					diferenca = new_value - velc_vento_atual;
				}while(abs(diferenca) > 50 && s->readings[y] > s->min_limit && s->readings[y] < s->max_limit);
			}
		}
	}
}

void checkDirecVentoValues(Sensor *s, char maxLeiturasErradasConsecutivas, char dir_vento_atual){
	int counter = 0;
	int reset = 0;
		char new_value = 0;
	char diferenca = 0;
	char b[s->readings_size]; 
	for(int x = 0; x < s->readings_size; x++){
		if (s->readings[x] > s->min_limit && s->readings[x] < s->max_limit){ 
			counter = 0;
		} else {
			b[x] = 1;
			counter = counter + 1;
		}
		if (counter == maxLeiturasErradasConsecutivas){reset = 1;}
	}
	
	if(reset == 1) {
		for(int y = 0; y < s->readings_size; y++){
			if(b[y] == 1){
				do{
					new_value = ((char) pcg_random_r())%359;
					s->readings[y] = new_value;
					diferenca = new_value - dir_vento_atual;
				}while(abs(diferenca) > 100 && s->readings[y] > s->min_limit && s->readings[y] < s->max_limit);
			}
		}
	}
}

void checkHumAtmValues(Sensor *s, char maxLeiturasErradasConsecutivas, char humd_atm_atual){
	int counter = 0;
	int reset = 0;
		char new_value = 0;
	char diferenca = 0;
	char b[s->readings_size]; 
	for(int x = 0; x < s->readings_size; x++){
		if (s->readings[x] > s->min_limit && s->readings[x] < s->max_limit){ 
			counter = 0;
		} else {
			b[x] = 1;
			counter = counter + 1;
		}
		if (counter == maxLeiturasErradasConsecutivas){reset = 1;}
	}
	
	if(reset == 1) {
		for(int y = 0; y < s->readings_size; y++){
			if(b[y] == 1){
				do{
					new_value = ((char) pcg_random_r())%1000;
					s->readings[y] = new_value;
					diferenca = new_value - humd_atm_atual;
				}while(abs(diferenca) > 4);
			}
		}
	}
}

void checkHumSoloValues(Sensor *s, char maxLeiturasErradasConsecutivas, char humd_solo_atual){
	int counter = 0;
	int reset = 0;
		char new_value = 0;
	char diferenca = 0;
	char b[s->readings_size]; 
	for(int x = 0; x < s->readings_size; x++){
		if (s->readings[x] > s->min_limit && s->readings[x] < s->max_limit){ 
			counter = 0;
		} else {
			b[x] = 1;
			counter = counter + 1;
		}
		if (counter == maxLeiturasErradasConsecutivas){reset = 1;}
	}
	
	if(reset == 1) {
		for(int y = 0; y < s->readings_size; y++){
			if(b[y] == 1){
				do{
					new_value = ((char) pcg_random_r())%100;
					s->readings[y] = new_value;
					diferenca = new_value - humd_solo_atual;
				}while(abs(diferenca) > 4);
			}
		}
	}
}

void checkPluviosidadeValues(Sensor *s, char maxLeiturasErradasConsecutivas, char pluvio_atual){
	int counter = 0;
	int reset = 0;
		char new_value = 0;
	char diferenca = 0;
	char b[s->readings_size]; 
	for(int x = 0; x < s->readings_size; x++){
		if (s->readings[x] > s->min_limit && s->readings[x] < s->max_limit){ 
			counter = 0;
		} else {
			b[x] = 1;
			counter = counter + 1;
		}
		if (counter == maxLeiturasErradasConsecutivas){reset = 1;}
	}
	
	if(reset == 1) {
		for(int y = 0; y < s->readings_size; y++){
			if(b[y] == 1){
				do{
					new_value = ((char) pcg_random_r())%100;
					s->readings[y] = new_value;
					diferenca = new_value - pluvio_atual;
				}while(abs(diferenca) > 4);
			}
		}
	}
}
