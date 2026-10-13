package wi;

import android.content.Context;
import android.content.SharedPreferences;
import android.os.Build;
import j$.time.ZoneOffset;
import j$.time.format.DateTimeFormatter;
import j$.util.DateRetargetClass;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Locale;
import java.util.Map;
import java.util.Set;

/* loaded from: classes3.dex */
public final class g {
    public final SharedPreferences a;

    public g(Context context, String str) {
        this.a = context.getSharedPreferences("FirebaseHeartBeat" + str, 0);
    }

    public final synchronized void a() {
        try {
            long j = this.a.getLong("fire-count", 0L);
            String str = "";
            String str2 = null;
            for (Map.Entry<String, ?> entry : this.a.getAll().entrySet()) {
                if (entry.getValue() instanceof Set) {
                    for (String str3 : (Set) entry.getValue()) {
                        if (str2 != null && str2.compareTo(str3) <= 0) {
                        }
                        str = entry.getKey();
                        str2 = str3;
                    }
                }
            }
            HashSet hashSet = new HashSet(this.a.getStringSet(str, new HashSet()));
            hashSet.remove(str2);
            this.a.edit().putStringSet(str, hashSet).putLong("fire-count", j - 1).commit();
        } catch (Throwable th2) {
            throw th2;
        }
    }

    public final synchronized void b() {
        try {
            SharedPreferences.Editor edit = this.a.edit();
            int i5 = 0;
            for (Map.Entry<String, ?> entry : this.a.getAll().entrySet()) {
                if (entry.getValue() instanceof Set) {
                    Set set = (Set) entry.getValue();
                    String d6 = d(System.currentTimeMillis());
                    String key = entry.getKey();
                    if (set.contains(d6)) {
                        HashSet hashSet = new HashSet();
                        hashSet.add(d6);
                        i5++;
                        edit.putStringSet(key, hashSet);
                    } else {
                        edit.remove(key);
                    }
                }
            }
            if (i5 == 0) {
                edit.remove("fire-count");
            } else {
                edit.putLong("fire-count", i5);
            }
            edit.commit();
        } catch (Throwable th2) {
            throw th2;
        }
    }

    public final synchronized ArrayList c() {
        try {
            ArrayList arrayList = new ArrayList();
            for (Map.Entry<String, ?> entry : this.a.getAll().entrySet()) {
                if (entry.getValue() instanceof Set) {
                    HashSet hashSet = new HashSet((Set) entry.getValue());
                    hashSet.remove(d(System.currentTimeMillis()));
                    if (!hashSet.isEmpty()) {
                        arrayList.add(new a(entry.getKey(), new ArrayList(hashSet)));
                    }
                }
            }
            long currentTimeMillis = System.currentTimeMillis();
            synchronized (this) {
                this.a.edit().putLong("fire-global", currentTimeMillis).commit();
            }
            return arrayList;
        } catch (Throwable th2) {
            throw th2;
        }
        return arrayList;
    }

    public final synchronized String d(long j) {
        if (Build.VERSION.SDK_INT >= 26) {
            return DateRetargetClass.toInstant(new Date(j)).atOffset(ZoneOffset.UTC).toLocalDateTime().format(DateTimeFormatter.ISO_LOCAL_DATE);
        }
        return new SimpleDateFormat("yyyy-MM-dd", Locale.UK).format(new Date(j));
    }

    public final synchronized String e(String str) {
        for (Map.Entry<String, ?> entry : this.a.getAll().entrySet()) {
            if (entry.getValue() instanceof Set) {
                Iterator it = ((Set) entry.getValue()).iterator();
                while (it.hasNext()) {
                    if (str.equals((String) it.next())) {
                        return entry.getKey();
                    }
                }
            }
        }
        return null;
    }

    public final synchronized void f(String str) {
        try {
            String e9 = e(str);
            if (e9 == null) {
                return;
            }
            HashSet hashSet = new HashSet(this.a.getStringSet(e9, new HashSet()));
            hashSet.remove(str);
            if (hashSet.isEmpty()) {
                this.a.edit().remove(e9).commit();
            } else {
                this.a.edit().putStringSet(e9, hashSet).commit();
            }
        } catch (Throwable th2) {
            throw th2;
        }
    }

    public final synchronized boolean g(long j) {
        if (!this.a.contains("fire-global")) {
            this.a.edit().putLong("fire-global", j).commit();
            return true;
        }
        long j5 = this.a.getLong("fire-global", -1L);
        synchronized (this) {
            if (d(j5).equals(d(j))) {
                return false;
            }
            this.a.edit().putLong("fire-global", j).commit();
            return true;
        }
    }

    public final synchronized void h(long j, String str) {
        String d6 = d(j);
        if (this.a.getString("last-used-date", "").equals(d6)) {
            String e9 = e(d6);
            if (e9 == null) {
                return;
            }
            if (e9.equals(str)) {
                return;
            }
            i(str, d6);
            return;
        }
        long j5 = this.a.getLong("fire-count", 0L);
        if (j5 + 1 == 30) {
            a();
            j5 = this.a.getLong("fire-count", 0L);
        }
        HashSet hashSet = new HashSet(this.a.getStringSet(str, new HashSet()));
        hashSet.add(d6);
        this.a.edit().putStringSet(str, hashSet).putLong("fire-count", j5 + 1).putString("last-used-date", d6).commit();
    }

    public final synchronized void i(String str, String str2) {
        f(str2);
        HashSet hashSet = new HashSet(this.a.getStringSet(str, new HashSet()));
        hashSet.add(str2);
        this.a.edit().putStringSet(str, hashSet).commit();
    }
}
