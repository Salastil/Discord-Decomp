package jf;

import android.content.Context;

/* loaded from: classes3.dex */
public final class c {

    /* renamed from: b, reason: collision with root package name */
    public static final c f12757b;
    public b a;

    static {
        c cVar = new c();
        cVar.a = null;
        f12757b = cVar;
    }

    public static b a(Context context) {
        b bVar;
        c cVar = f12757b;
        synchronized (cVar) {
            try {
                if (cVar.a == null) {
                    if (context.getApplicationContext() != null) {
                        context = context.getApplicationContext();
                    }
                    b bVar2 = new b();
                    bVar2.a = context;
                    cVar.a = bVar2;
                }
                bVar = cVar.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return bVar;
    }
}
