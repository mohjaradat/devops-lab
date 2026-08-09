import os
import time
import psycopg2

DB_HOST = os.environ.get("DB_HOST", "db")
DB_NAME = os.environ.get("POSTGRES_DB", "devops_db")
DB_USER = os.environ.get("POSTGRES_USER", "postgres")
DB_PASS = os.environ.get("POSTGRES_PASSWORD", "postgres123")

# محاولة الاتصال بقاعدة البيانات حتى 10 مرات
max_retries = 10
for i in range(max_retries):
    try:
        print(f"Connecting to PostgreSQL (Attempt {i+1}/{max_retries})...")
        conn = psycopg2.connect(
            host=DB_HOST,
            database=DB_NAME,
            user=DB_USER,
            password=DB_PASS
        )
        cursor = conn.cursor()
        cursor.execute("CREATE TABLE IF NOT EXISTS visits (id SERIAL PRIMARY KEY, visited_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP);")
        cursor.execute("INSERT INTO visits DEFAULT VALUES;")
        conn.commit()

        cursor.execute("SELECT COUNT(*) FROM visits;")
        count = cursor.fetchone()[0]

        print("========================================")
        print(" Successfully connected to PostgreSQL!")
        print(f" Total visits recorded in DB: {count}")
        print("========================================")

        cursor.close()
        conn.close()
        break
    except Exception as e:
        print(f"❌ Error: {e}")
        print(f"⌛ Retrying in 3 seconds...")
        time.sleep(3)


