def clasificar_material(k):
  if k <= 0.1:
    return "Aislante termico"
  elif k <= 1:
    return "baja conductividad"
  elif k <= 100:
    return "buen conductor"
  else : 
    return "conductor exelente"
  

k = float(input("introdusca el coeficiente de conductividad termica k en (W/m*K)"))


print (clasificar_material(k))