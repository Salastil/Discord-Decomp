package uh;

import a5.c0;
import android.content.Context;
import android.content.Intent;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.RemoteException;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.concurrent.atomic.AtomicInteger;

/* loaded from: classes3.dex */
public final class q {

    /* renamed from: n, reason: collision with root package name */
    public static final HashMap f18920n = new HashMap();
    public final Context a;

    /* renamed from: b, reason: collision with root package name */
    public final a5.m f18921b;

    /* renamed from: c, reason: collision with root package name */
    public final String f18922c;

    /* renamed from: g, reason: collision with root package name */
    public boolean f18926g;

    /* renamed from: h, reason: collision with root package name */
    public final Intent f18927h;

    /* renamed from: l, reason: collision with root package name */
    public c0 f18929l;

    /* renamed from: m, reason: collision with root package name */
    public k f18930m;

    /* renamed from: d, reason: collision with root package name */
    public final ArrayList f18923d = new ArrayList();

    /* renamed from: e, reason: collision with root package name */
    public final HashSet f18924e = new HashSet();

    /* renamed from: f, reason: collision with root package name */
    public final Object f18925f = new Object();
    public final ai.g j = new ai.g(3, this);
    public final AtomicInteger k = new AtomicInteger(0);

    /* renamed from: i, reason: collision with root package name */
    public final WeakReference f18928i = new WeakReference(null);

    public q(Context context, a5.m mVar, String str, Intent intent) {
        this.a = context;
        this.f18921b = mVar;
        this.f18922c = str;
        this.f18927h = intent;
    }

    public static void b(q qVar, o oVar) {
        k kVar = qVar.f18930m;
        a5.m mVar = qVar.f18921b;
        ArrayList arrayList = qVar.f18923d;
        if (kVar != null || qVar.f18926g) {
            if (!qVar.f18926g) {
                oVar.run();
                return;
            } else {
                mVar.e("Waiting to bind to the service.", new Object[0]);
                arrayList.add(oVar);
                return;
            }
        }
        mVar.e("Initiate binding to the service.", new Object[0]);
        arrayList.add(oVar);
        c0 c0Var = new c0(4, qVar);
        qVar.f18929l = c0Var;
        qVar.f18926g = true;
        if (qVar.a.bindService(qVar.f18927h, c0Var, 1)) {
            return;
        }
        mVar.e("Failed to bind to the service.", new Object[0]);
        qVar.f18926g = false;
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            o oVar2 = (o) it.next();
            ai.k kVar2 = new ai.k("Failed to bind to the service.");
            jg.g gVar = oVar2.f18917d;
            if (gVar != null) {
                gVar.c(kVar2);
            }
        }
        arrayList.clear();
    }

    public final Handler a() {
        Handler handler;
        HashMap hashMap = f18920n;
        synchronized (hashMap) {
            try {
                if (!hashMap.containsKey(this.f18922c)) {
                    HandlerThread handlerThread = new HandlerThread(this.f18922c, 10);
                    handlerThread.start();
                    hashMap.put(this.f18922c, new Handler(handlerThread.getLooper()));
                }
                handler = (Handler) hashMap.get(this.f18922c);
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return handler;
    }

    public final void c(o oVar, jg.g gVar) {
        a().post(new th.c(this, oVar.f18917d, gVar, oVar));
    }

    public final void d(jg.g gVar) {
        synchronized (this.f18925f) {
            this.f18924e.remove(gVar);
        }
        a().post(new p(0, this));
    }

    public final void e() {
        HashSet hashSet = this.f18924e;
        Iterator it = hashSet.iterator();
        while (it.hasNext()) {
            ((jg.g) it.next()).c(new RemoteException(String.valueOf(this.f18922c).concat(" : Binder has died.")));
        }
        hashSet.clear();
    }
}
