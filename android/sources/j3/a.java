package j3;

import ai.k;
import android.content.Context;
import android.os.Bundle;
import android.os.Trace;
import com.discord.R;
import com.facebook.imagepipeline.nativecode.c;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;

/* loaded from: classes.dex */
public final class a {

    /* renamed from: d, reason: collision with root package name */
    public static volatile a f12404d;

    /* renamed from: e, reason: collision with root package name */
    public static final Object f12405e = new Object();

    /* renamed from: c, reason: collision with root package name */
    public final Context f12407c;

    /* renamed from: b, reason: collision with root package name */
    public final HashSet f12406b = new HashSet();
    public final HashMap a = new HashMap();

    public a(Context context) {
        this.f12407c = context.getApplicationContext();
    }

    public static a c(Context context) {
        if (f12404d == null) {
            synchronized (f12405e) {
                try {
                    if (f12404d == null) {
                        f12404d = new a(context);
                    }
                } finally {
                }
            }
        }
        return f12404d;
    }

    public final void a(Bundle bundle) {
        HashSet hashSet;
        String string = this.f12407c.getString(R.string.androidx_startup);
        if (bundle != null) {
            try {
                HashSet hashSet2 = new HashSet();
                Iterator<String> it = bundle.keySet().iterator();
                while (true) {
                    boolean hasNext = it.hasNext();
                    hashSet = this.f12406b;
                    if (!hasNext) {
                        break;
                    }
                    String next = it.next();
                    if (string.equals(bundle.getString(next, null))) {
                        Class<?> cls = Class.forName(next);
                        if (b.class.isAssignableFrom(cls)) {
                            hashSet.add(cls);
                        }
                    }
                }
                Iterator it2 = hashSet.iterator();
                while (it2.hasNext()) {
                    b((Class) it2.next(), hashSet2);
                }
            } catch (ClassNotFoundException e9) {
                throw new k((Throwable) e9);
            }
        }
    }

    public final Object b(Class cls, HashSet hashSet) {
        Object obj;
        HashMap hashMap = this.a;
        if (c.N()) {
            try {
                Trace.beginSection(c.Y(cls.getSimpleName()));
            } catch (Throwable th2) {
                Trace.endSection();
                throw th2;
            }
        }
        if (hashSet.contains(cls)) {
            throw new IllegalStateException("Cannot initialize " + cls.getName() + ". Cycle detected.");
        }
        if (hashMap.containsKey(cls)) {
            obj = hashMap.get(cls);
        } else {
            hashSet.add(cls);
            try {
                b bVar = (b) cls.getDeclaredConstructor(null).newInstance(null);
                List<Class> dependencies = bVar.dependencies();
                if (!dependencies.isEmpty()) {
                    for (Class cls2 : dependencies) {
                        if (!hashMap.containsKey(cls2)) {
                            b(cls2, hashSet);
                        }
                    }
                }
                obj = bVar.create(this.f12407c);
                hashSet.remove(cls);
                hashMap.put(cls, obj);
            } catch (Throwable th3) {
                throw new k(th3);
            }
        }
        Trace.endSection();
        return obj;
    }
}
