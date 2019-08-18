resposta = 0
while (resposta != 1):
    pH = float(input("Digite o pH da solução: \n pH = ").replace(",", "."))

    if (pH >= 0 and pH < 7):
        print (" pH = ", pH, "-> Meio ácido")
    elif (pH == 7):
        print (" pH = ", pH, "-> Meio neutro")
    elif (pH > 7 and pH <= 14):
        print (" pH = ", pH, "-> Meio básico")
    else:
        print ("Valor inválido!")
    
    print()
    resposta = int(input("Deseja continuar? 0-SIM ou 1-NÃO "))
    print()
    
