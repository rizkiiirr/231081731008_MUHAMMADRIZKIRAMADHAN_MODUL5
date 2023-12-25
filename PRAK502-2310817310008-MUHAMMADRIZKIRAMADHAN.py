def mutlak (angka):
    if (angka < 0):
        return -angka
    else:
        return angka
    
def hitung (nilai1, nilai2):
    return (nilai1 - nilai2)


a, c, b, d = map(int, input().split())

Hasil = hitung (a, b) + hitung (c, d)
print(mutlak(Hasil))

