package io.sentry;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;

/* loaded from: classes3.dex */
public final class Hint {

    /* renamed from: h, reason: collision with root package name */
    public static final HashMap f10979h;
    public final HashMap a = new HashMap();

    /* renamed from: b, reason: collision with root package name */
    public final ArrayList f10980b = new ArrayList();

    /* renamed from: c, reason: collision with root package name */
    public final io.sentry.util.a f10981c = new io.sentry.util.a();

    /* renamed from: d, reason: collision with root package name */
    public a f10982d = null;

    /* renamed from: e, reason: collision with root package name */
    public a f10983e = null;

    /* renamed from: f, reason: collision with root package name */
    public a f10984f = null;

    /* renamed from: g, reason: collision with root package name */
    public l3 f10985g = null;

    static {
        HashMap hashMap = new HashMap();
        f10979h = hashMap;
        hashMap.put("boolean", Boolean.class);
        hashMap.put("char", Character.class);
        hashMap.put("byte", Byte.class);
        hashMap.put("short", Short.class);
        hashMap.put("int", Integer.class);
        hashMap.put("long", Long.class);
        hashMap.put("float", Float.class);
        hashMap.put("double", Double.class);
    }

    public final void a() {
        r a = this.f10981c.a();
        try {
            Iterator it = this.a.entrySet().iterator();
            while (it.hasNext()) {
                Map.Entry entry = (Map.Entry) it.next();
                if (entry.getKey() != null && ((String) entry.getKey()).startsWith("sentry:")) {
                }
                it.remove();
            }
            a.close();
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    public final Object b(String str) {
        r a = this.f10981c.a();
        try {
            Object obj = this.a.get(str);
            a.close();
            return obj;
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    public final Object c(Class cls, String str) {
        r a = this.f10981c.a();
        try {
            Object obj = this.a.get(str);
            if (cls.isInstance(obj)) {
                a.close();
                return obj;
            }
            Class cls2 = (Class) f10979h.get(cls.getCanonicalName());
            if (obj != null && cls.isPrimitive() && cls2 != null) {
                if (cls2.isInstance(obj)) {
                    a.close();
                    return obj;
                }
            }
            a.close();
            return null;
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    public final void d(Object obj, String str) {
        r a = this.f10981c.a();
        try {
            this.a.put(str, obj);
            a.close();
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }
}
