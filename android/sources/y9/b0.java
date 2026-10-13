package y9;

import android.icu.util.ULocale;
import android.text.TextUtils;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;

/* loaded from: classes3.dex */
public final class b0 {
    public ULocale a;

    /* renamed from: b, reason: collision with root package name */
    public ULocale.Builder f20688b = null;

    /* renamed from: c, reason: collision with root package name */
    public boolean f20689c = false;

    public b0(ULocale uLocale) {
        this.a = uLocale;
    }

    public final b0 a() {
        b();
        return new b0(this.a);
    }

    public final void b() {
        if (this.f20689c) {
            try {
                this.a = this.f20688b.build();
                this.f20689c = false;
            } catch (RuntimeException e9) {
                throw new ap.a(e9.getMessage(), 9);
            }
        }
    }

    public final Object c() {
        b();
        return this.a;
    }

    public final HashMap d() {
        b();
        HashMap hashMap = new HashMap();
        Iterator<String> keywords = this.a.getKeywords();
        if (keywords != null) {
            while (keywords.hasNext()) {
                String next = keywords.next();
                gk.i iVar = d0.f20703b;
                hashMap.put(iVar.containsKey(next) ? (String) iVar.get(next) : next, this.a.getKeywordValue(next));
            }
        }
        return hashMap;
    }

    public final void e(String str, ArrayList arrayList) {
        b();
        if (this.f20688b == null) {
            this.f20688b = new ULocale.Builder().setLocale(this.a);
        }
        try {
            this.f20688b.setUnicodeLocaleKeyword(str, TextUtils.join("-", arrayList));
            this.f20689c = true;
        } catch (RuntimeException e9) {
            throw new ap.a(e9.getMessage(), 9);
        }
    }

    public final String f() {
        b();
        return this.a.toLanguageTag();
    }
}
