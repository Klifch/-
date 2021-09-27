import math

"""В.9 - Знайти в радіанах і градусах всі кути трикутника із сторонами a, b, c"""

a = int(input())    #Задамо значення катетів трикутника
b = int(input())
c = int(input())

radians_alpha = math.acos((b ** 2 + c ** 2 - a ** 2) / (2 * b * c))   #За формулою знаходимо значення кута в радіанах
radians_beta = math.acos((c ** 2 + a ** 2 - b ** 2) / (2 * c * a))
radians_delta = math.acos((a ** 2 + b ** 2 - c ** 2) / (2 * a * b))

degrees_alpha = math.degrees(radians_alpha)      #Перетворимо значення радіанної міри в градусну
degrees_beta = math.degrees(radians_beta)
degrees_delta = math.degrees(radians_delta)

print(f'Кут протилежний катету A({a}) в радіанах - {radians_alpha}, в градусах - {degrees_alpha}°')
print(f'Кут протилежний катету B({b}) в радіанах - {radians_beta}, в градусах - {degrees_beta}°')
print(f'Кут протилежний катету C({c}) в радіанах - {radians_delta}, в градусах - {degrees_delta}°')

