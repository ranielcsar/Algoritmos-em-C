void ordemAlfabetica(struct )
{
	int i, j;
	Pessoas aux;
	
	for (i=0; i<CONSTANTE; i++) {
		for (j=i; j<CONSTANTE; j++)
		{
			if (strcmp (p[i].nome, p[j].nome) > 0)
			{
				aux= p[i];
				p[i]= p[j];
				p[j]= aux;
			}
		}				
	}
}
