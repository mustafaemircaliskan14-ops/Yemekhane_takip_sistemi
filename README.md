# Yemekhane Kayıt ve Takip Sistemi (C Dili)

Bu proje, **C programlama dili** kullanılarak geliştirilmiş basit bir **yemekhane kayıt ve kazanç takip sistemidir**.  
Sistem, öğrencilerin haftalık yemekhane kullanımını, harcamalarını ve toplam kazancı takip eder.

---

##  Projenin Amacı

- Öğrencilerin haftanın hangi günlerinde yemekhaneye geldiğini kaydetmek
- Geldikleri günlerde yaptıkları harcamaları tutmak
- Haftalık ve toplam yemekhane kazancını hesaplamak
- Önceki kazançları dosyadan okuyup güncel kazançla birleştirmek
- Öğrencilerin kaç gün gelmediğini hesaplamak

---

## ⚙️ Özellikler

- Maksimum **10 öğrenci** kaydı
- **5 günlük (haftalık)** takip sistemi
- Öğrenci bazlı:
  - Günlük gelme / gelmeme bilgisi
  - Günlük harcama miktarı
- Dosya işlemleri:
  - Önceki kazanç `kazanc.txt` dosyasından okunur
  - Güncel toplam kazanç dosyaya yazılır
- Fonksiyon kullanımı ile modüler yapı

---

## 🧠 Kullanılan Fonksiyonlar

| Fonksiyon Adı | Açıklama |
|--------------|----------|
| `toplamHarcama` | Tüm öğrencilerin toplam harcamasını hesaplar |
| `gelmedigigun` | Öğrencilerin kaç gün gelmediğini hesaplar |
| `eskiKazanc` | Dosyadan önceki kazancı okur |
| `suankiKazanc` | Güncel kazancı dosyaya yazar |

---

## 📂 Dosya Yapısı


