package dg;

import a5.c0;
import android.content.Context;
import android.content.Intent;
import android.os.Handler;
import android.os.HandlerThread;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.concurrent.atomic.AtomicInteger;

/* loaded from: classes3.dex */
public final class g {

    /* renamed from: n, reason: collision with root package name */
    public static final HashMap f7549n = new HashMap();
    public final Context a;

    /* renamed from: b, reason: collision with root package name */
    public final b f7550b;

    /* renamed from: g, reason: collision with root package name */
    public boolean f7555g;

    /* renamed from: h, reason: collision with root package name */
    public final Intent f7556h;

    /* renamed from: l, reason: collision with root package name */
    public c0 f7558l;

    /* renamed from: m, reason: collision with root package name */
    public rh.d f7559m;

    /* renamed from: d, reason: collision with root package name */
    public final ArrayList f7552d = new ArrayList();

    /* renamed from: e, reason: collision with root package name */
    public final HashSet f7553e = new HashSet();

    /* renamed from: f, reason: collision with root package name */
    public final Object f7554f = new Object();
    public final ai.g j = new ai.g(1, this);
    public final AtomicInteger k = new AtomicInteger(0);

    /* renamed from: c, reason: collision with root package name */
    public final String f7551c = "AgeSignalsService";

    /* renamed from: i, reason: collision with root package name */
    public final WeakReference f7557i = new WeakReference(null);

    public g(Context context, b bVar, Intent intent) {
        this.a = context;
        this.f7550b = bVar;
        this.f7556h = intent;
    }

    public static void b(g gVar, c cVar) {
        rh.d dVar = gVar.f7559m;
        ArrayList arrayList = gVar.f7552d;
        b bVar = gVar.f7550b;
        if (dVar != null || gVar.f7555g) {
            if (!gVar.f7555g) {
                cVar.run();
                return;
            } else {
                bVar.c("Waiting to bind to the service.", new Object[0]);
                arrayList.add(cVar);
                return;
            }
        }
        bVar.c("Initiate binding to the service.", new Object[0]);
        arrayList.add(cVar);
        c0 c0Var = new c0(gVar);
        gVar.f7558l = c0Var;
        gVar.f7555g = true;
        if (gVar.a.bindService(gVar.f7556h, c0Var, 1)) {
            return;
        }
        bVar.c("Failed to bind to the service.", new Object[0]);
        gVar.f7555g = false;
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            ((c) it.next()).a(new h("Failed to bind to the service."));
        }
        arrayList.clear();
    }

    public final Handler a() {
        Handler handler;
        HashMap hashMap = f7549n;
        synchronized (hashMap) {
            try {
                String str = this.f7551c;
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
        synchronized (this.f7554f) {
            this.f7553e.remove(gVar);
        }
        a().post(new e(this));
    }
}
