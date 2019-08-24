substancias = ['CH4','C4H10', 'C4H8', 'C2H2', 'C3H4']
classificacao = []

for substancia in substancias:
    if(substancia == 'CH4'):
        clas = 'alcano'
    else:
        x = int(substancia.find('C'))
        y = int(substancia.find('H'))
        a = int(substancia[x + 1:y])
        b = int(substancia[y + 1:])

        num_carbono = a
        num_hidrogenio = b

        if(num_hidrogenio == 2 * num_carbono + 2):
           clas = 'alcano'
        if(num_hidrogenio == 2 * num_carbono):
            clas = 'alceno'
        if(num_hidrogenio == 2 * num_carbono - 2):
            clas = 'alcino'

    classificacao.append(clas)


i = 0
while(i < len(substancias)):
    print(substancias[i] + ' -> ' + classificacao[i])
    i+= 1
  
    
     
