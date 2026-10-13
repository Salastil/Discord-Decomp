package di;

import android.content.Context;
import android.content.Intent;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.IInterface;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.concurrent.atomic.AtomicInteger;

/* loaded from: classes3.dex */
public final class c {

    /* renamed from: o, reason: collision with root package name */
    public static final HashMap f7566o = new HashMap();
    public final Context a;

    /* renamed from: b, reason: collision with root package name */
    public final a0 f7567b;

    /* renamed from: c, reason: collision with root package name */
    public final String f7568c;

    /* renamed from: g, reason: collision with root package name */
    public boolean f7572g;

    /* renamed from: h, reason: collision with root package name */
    public final Intent f7573h;

    /* renamed from: i, reason: collision with root package name */
    public final d0 f7574i;

    /* renamed from: m, reason: collision with root package name */
    public a5.c0 f7576m;

    /* renamed from: n, reason: collision with root package name */
    public IInterface f7577n;

    /* renamed from: d, reason: collision with root package name */
    public final ArrayList f7569d = new ArrayList();

    /* renamed from: e, reason: collision with root package name */
    public final HashSet f7570e = new HashSet();

    /* renamed from: f, reason: collision with root package name */
    public final Object f7571f = new Object();
    public final ai.g k = new ai.g(2, this);

    /* renamed from: l, reason: collision with root package name */
    public final AtomicInteger f7575l = new AtomicInteger(0);
    public final WeakReference j = new WeakReference(null);

    public c(Context context, a0 a0Var, String str, Intent intent, d0 d0Var) {
        this.a = context;
        this.f7567b = a0Var;
        this.f7568c = str;
        this.f7573h = intent;
        this.f7574i = d0Var;
    }

    public static void b(c cVar, b0 b0Var) {
        IInterface iInterface = cVar.f7577n;
        ArrayList arrayList = cVar.f7569d;
        a0 a0Var = cVar.f7567b;
        if (iInterface != null || cVar.f7572g) {
            if (!cVar.f7572g) {
                b0Var.run();
                return;
            } else {
                a0Var.b("Waiting to bind to the service.", new Object[0]);
                arrayList.add(b0Var);
                return;
            }
        }
        a0Var.b("Initiate binding to the service.", new Object[0]);
        arrayList.add(b0Var);
        a5.c0 c0Var = new a5.c0(cVar);
        cVar.f7576m = c0Var;
        cVar.f7572g = true;
        if (cVar.a.bindService(cVar.f7573h, c0Var, 1)) {
            return;
        }
        a0Var.b("Failed to bind to the service.", new Object[0]);
        cVar.f7572g = false;
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            ((b0) it.next()).a(new d("Failed to bind to the service."));
        }
        arrayList.clear();
    }

    public final Handler a() {
        Handler handler;
        HashMap hashMap = f7566o;
        synchronized (hashMap) {
            try {
                String str = this.f7568c;
                if (!hashMap.containsKey(str)) {
                    HandlerThread handlerThread = new HandlerThread(str, 10);
                    handlerThread.start();
                    hashMap.put(str, new Handler(handlerThread.getLooper()));
                }
                handler = (Handler) hashMap.get(str);
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return handler;
    }

    public final void c(jg.g gVar) {
        synchronized (this.f7571f) {
            this.f7570e.remove(gVar);
        }
        a().post(new b(this));
    }
}
