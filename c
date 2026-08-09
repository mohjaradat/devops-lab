أ) أوامر Docker & Docker Compose
sudo docker compose up --build

الاستخدام: إعادة بناء الـ Images وتشغيل الحاويات المحددة بملف Compose مع إظهار الـ Logs مباشرة.

sudo docker-compose up --build

الاستخدام: أمر Compose القديم (باستخدام -). جربناه وطلع غير مثبت.

sudo docker compose up

الاستخدام: تشغيل الحاويات المعرفة في Compose دون إعادة البناء (استخدمناه لنختبر هل زيادة الـ Visits حُفظت بالـ Volume).

sudo docker compose down

الاستخدام: إيقاف وحذف الحاويات والشبكات الخاصة بـ Compose مع الإبقاء على الـ Volumes.

sudo docker compose logs app

الاستخدام: عرض السجلات والـ Logs الخاصة بحاوية تطبيق البايثون (app) فقط لمتابعة الأخطاء بوضوح.

ب) أوامر نظام Ubuntu / Linux لتعديل الملفات والتثبيت
sudo apt-get update && sudo apt-get install -y docker-compose-plugin

الاستخدام: تحديث حزم النظام ومحاولة تثبيت إضافة Docker Compose V2.

sudo apt-get install -y docker-compose

الاستخدام: تثبيت أداة Docker Compose على نظام Ubuntu مباشرة من متجر الحزم.

nano app.py

الاستخدام: فتح محرر النصوص nano لتعديل كود البايثون (إضافة الـ Retry Logic وطباعة {e}).

nano docker-compose.yml

الاستخدام: فتح محرر النصوص nano لتعديل إعدادات الـ Compose (تغيير كلمة السر لاختبار الخطأ).

ج) أوامر الـ Git والرفع لـ GitHub
git add .

الاستخدام: تجهيز كل الملفات والتعديلات الحالية للتتبع (Staging Area).

git commit -m "add PostgreSQL database and Docker Compose setup"

الاستخدام: حفظ التعديلات بـ Git المحلي مع كتابة وصف للتعديل.

git push origin main

الاستخدام: رفع التعديلات لموقع GitHub لتشغيل الـ CI/CD Pipeline تلقائياً.

د) الأوامر والمفاتيح الضمنية واللوجستية في Linux (التي استُخدمت أثناء الجلسة)
Ctrl + C

الاستخدام: اختصار في الـ Terminal لإيقاف تشغيل العمليات والحاويات الشغالة في الواجهة (docker compose up).

Ctrl + O ⬅️ Enter ⬅️ Ctrl + X

الاستخدام: اختصارات محرر nano لتأكيد حفظ الملف والخروج منه إلى الـ Terminal.

[sudo: authenticate] Password:

الاستخدام: إدخال كلمة سر المستخدم لمنح صلاحيات المسؤول (Root) للأمر المسبوق بـ sudo.

2️⃣ أوامر إضافية أساسية ستحتاجها مستقبلاً في مشاريع مشابهة
أ) أوامر مهمة جداً في Docker
sudo docker ps

الاستخدام: عرض الحاويات الشغالة حالياً على جهازك مع أرقام الـ Ports و الـ Container ID.

sudo docker ps -a

الاستخدام: عرض جميع الحاويات (الشغالة والمتوقفة/الميتة).

sudo docker volume ls

الاستخدام: عرض قائمة بكل الـ Volumes المخزنة على الـ Docker.

sudo docker network ls

الاستخدام: عرض الشبكات الافتراضية اللي بيعملها Docker لتواصل الحاويات.

sudo docker system prune -a

الاستخدام: تنظيف شامل للـ Docker (حذف الحاويات المتوقفة، الـ Images غير المستخدمة، لتوفير المساحة).

ب) أوامر Linux اليومية المفيدة للمشاريع
ls أو ls -la

الاستخدام: عرض كل الملفات والمجلدات (بما فيها الملفات المخفية مثل .github و .env).

pwd

الاستخدام: إظهار المسار الحالي كاملاً لك على السيرفر.

clear (أو Ctrl + L)

الاستخدام: تنظيف شاشة الـ Terminal.

cat docker-compose.yml

الاستخدام: قراءة وطباعة محتوى الملف مباشرة على الشاشة دون فتح محرر.
