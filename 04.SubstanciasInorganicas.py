print("Classificação de substâncias inorgânicas em: ÁCIDO, BASE, SAL e ÓXIDO")
print("")

substancias = ['HNO3', 'HCl', 'NaOH', 'CO2', 'NaCl', 'H2SO4', 'Ca(OH)2', 'Al(OH)3', 'N2O3', 'H2O', 'K2Cr2O7', 'CuSO4']
classificacao = []

for substancia in substancias:
    b = '()123456789'
    for i in range(0, len(b)):
        substancia = substancia.replace(b[i], "")

    if((substancia[0] == 'H') and (substancia != 'HO')):
        if 'O' in substancia:
            clas = "OXIÁCIDO"
        else:
            clas = "HIDRÁCIDO"       
    elif(('OH' in substancia) and (substancia[len(substancia) - 2:] == 'OH')):
        clas = "BASE"
           
    elif(substancia[-1] == 'O' and len(substancia) < 4):
        clas = "ÓXIDO"

    else:
        clas = "SAL"

    classificacao.append(clas)


i = 0
while(i < len(substancias)):
    print(substancias[i] + ' -> ' + classificacao[i])
    i+= 1

   
   
