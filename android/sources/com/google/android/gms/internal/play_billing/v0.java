package com.google.android.gms.internal.play_billing;

import android.app.Application;
import android.content.Context;
import android.content.Intent;
import android.graphics.Typeface;
import android.os.Bundle;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Looper;
import android.os.SystemClock;
import android.util.Log;
import android.util.Xml;
import android.view.View;
import androidx.core.util.Consumer;
import androidx.customview.widget.ViewDragHelper;
import com.android.billingclient.api.BillingResult;
import com.android.billingclient.api.QueryProductDetailsResult;
import com.discord.billing.BillingManager$getUserCountry$1;
import com.google.android.gms.tasks.Task;
import com.google.android.material.behavior.SwipeDismissBehavior;
import com.google.android.play.core.assetpacks.AssetPackStateUpdateListener;
import java.io.BufferedOutputStream;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;
import java.util.UUID;
import java.util.concurrent.Callable;
import java.util.concurrent.CancellationException;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.Future;
import kotlin.Unit;
import org.xmlpull.v1.XmlSerializer;

/* loaded from: classes3.dex */
public final class v0 implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f5854d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f5855e;

    /* renamed from: i, reason: collision with root package name */
    public final Object f5856i;

    public /* synthetic */ v0(int i5, Object obj, Object obj2) {
        this.f5854d = i5;
        this.f5855e = obj;
        this.f5856i = obj2;
    }

    private final void a() {
        th.p pVar = (th.p) this.f5855e;
        th.w wVar = (th.w) this.f5856i;
        synchronized (pVar) {
            Iterator it = new HashSet(pVar.f18914d).iterator();
            while (it.hasNext()) {
                ((AssetPackStateUpdateListener) it.next()).a(wVar);
            }
        }
    }

    private final void b() {
        th.r rVar = (th.r) this.f5855e;
        th.w wVar = (th.w) this.f5856i;
        synchronized (rVar) {
            Iterator it = new HashSet(rVar.a).iterator();
            while (it.hasNext()) {
                ((AssetPackStateUpdateListener) it.next()).a(wVar);
            }
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // java.lang.Runnable
    public final void run() {
        Throwable c6;
        bf.f g0Var;
        Exception exc;
        boolean z5 = false;
        FileOutputStream fileOutputStream = null;
        e4.o oVar = null;
        switch (this.f5854d) {
            case 0:
                xe.k kVar = (xe.k) this.f5856i;
                y0 y0Var = (y0) this.f5855e;
                if ((y0Var instanceof c1) && (c6 = ((c1) y0Var).c()) != null) {
                    kVar.a(c6);
                    return;
                }
                try {
                    boolean isDone = y0Var.isDone();
                    Future future = y0Var;
                    if (!isDone) {
                        throw new IllegalStateException(a2.p("Future was expected to be done: %s", y0Var));
                    }
                    while (true) {
                        try {
                            Object obj = future.get();
                            if (z5) {
                                Thread.currentThread().interrupt();
                            }
                            Integer num = (Integer) obj;
                            int intValue = num.intValue();
                            a5.d0 d0Var = (a5.d0) kVar.f20422d;
                            if (intValue <= 0) {
                                ((Runnable) kVar.f20421c).run();
                                return;
                            }
                            int i5 = kVar.a;
                            int intValue2 = num.intValue();
                            d0Var.getClass();
                            BillingResult a = a5.g0.a(intValue2, "Billing override value was set by a license tester.");
                            d0Var.O(93, i5, a);
                            ((Consumer) kVar.f20420b).accept(a);
                            return;
                        } catch (InterruptedException unused) {
                            z5 = true;
                            future = future;
                        } catch (Throwable th2) {
                            if (z5) {
                                Thread.currentThread().interrupt();
                            }
                            throw th2;
                        }
                    }
                } catch (ExecutionException e9) {
                    kVar.a(e9.getCause());
                    return;
                } catch (Throwable th3) {
                    kVar.a(th3);
                    return;
                }
                break;
            case 1:
                a5.b bVar = (a5.b) this.f5855e;
                com.discord.billing.b bVar2 = (com.discord.billing.b) this.f5856i;
                BillingResult billingResult = a5.g0.f165i;
                bVar.u(24, 9, billingResult);
                q qVar = t.f5834e;
                bVar2.b(billingResult, x.f5880w);
                return;
            case 2:
                a5.b bVar3 = (a5.b) this.f5855e;
                BillingManager$getUserCountry$1.AnonymousClass1.C00111 c00111 = (BillingManager$getUserCountry$1.AnonymousClass1.C00111) this.f5856i;
                BillingResult billingResult2 = a5.g0.f165i;
                bVar3.u(24, 13, billingResult2);
                c00111.onBillingConfigResponse(billingResult2, null);
                return;
            case 3:
                a5.b bVar4 = (a5.b) this.f5855e;
                a5.k kVar2 = (a5.k) this.f5856i;
                BillingResult billingResult3 = a5.g0.f165i;
                bVar4.u(24, 7, billingResult3);
                q qVar2 = t.f5834e;
                x xVar = x.f5880w;
                kVar2.a(billingResult3, new QueryProductDetailsResult(xVar, xVar));
                return;
            case 4:
                af.a0 a0Var = (af.a0) this.f5856i;
                hg.f fVar = (hg.f) this.f5855e;
                ye.b bVar5 = fVar.f10026e;
                if (bVar5.f20906e == 0) {
                    bf.q qVar3 = fVar.f10027i;
                    bf.t.g(qVar3);
                    ye.b bVar6 = qVar3.f2910i;
                    if (bVar6.f20906e != 0) {
                        Log.wtf("SignInCoordinator", "Sign-in succeeded with resolve account failure: ".concat(String.valueOf(bVar6)), new Exception());
                        a0Var.f540m.A(bVar6);
                        a0Var.f539l.disconnect();
                        return;
                    }
                    af.s sVar = a0Var.f540m;
                    IBinder iBinder = qVar3.f2909e;
                    if (iBinder == null) {
                        g0Var = null;
                    } else {
                        int i6 = bf.a.f2836g;
                        IInterface queryLocalInterface = iBinder.queryLocalInterface("com.google.android.gms.common.internal.IAccountAccessor");
                        g0Var = queryLocalInterface instanceof bf.f ? (bf.f) queryLocalInterface : new bf.g0(iBinder, "com.google.android.gms.common.internal.IAccountAccessor", 5);
                    }
                    Set set = a0Var.j;
                    sVar.getClass();
                    if (g0Var == null || set == null) {
                        Log.wtf("GoogleApiManager", "Received null response from onSignInSuccess", new Exception());
                        sVar.A(new ye.b(4, null, null));
                    } else {
                        sVar.f596d = g0Var;
                        sVar.f597e = set;
                        if (sVar.a) {
                            ((ze.c) sVar.f594b).e(g0Var, set);
                        }
                    }
                } else {
                    a0Var.f540m.A(bVar5);
                }
                a0Var.f539l.disconnect();
                return;
            case 5:
                af.m mVar = (af.m) this.f5855e;
                a1.d dVar = (a1.d) this.f5856i;
                if (dVar.f14e > 0) {
                    Bundle bundle = (Bundle) dVar.f16v;
                    mVar.b(bundle != null ? bundle.getBundle("ConnectionlessLifecycleHelper") : null);
                }
                if (dVar.f14e >= 2) {
                    mVar.f571e = true;
                    mVar.d();
                }
                if (dVar.f14e >= 3) {
                    mVar.d();
                }
                if (dVar.f14e >= 4) {
                    mVar.c();
                    return;
                }
                return;
            case 6:
                try {
                    ((c5.c) this.f5856i).f3323e.put((c5.m) this.f5855e);
                    return;
                } catch (InterruptedException unused2) {
                    Thread.currentThread().interrupt();
                    return;
                }
            case 7:
                w3.e eVar = ((d4.b) this.f5856i).f7403d.f19665f;
                String str = (String) this.f5855e;
                synchronized (eVar.k) {
                    try {
                        w3.r c8 = eVar.c(str);
                        if (c8 != null) {
                            oVar = c8.f19674i;
                        }
                    } finally {
                    }
                }
                if (oVar == null || !oVar.b()) {
                    return;
                }
                synchronized (((d4.b) this.f5856i).f7405i) {
                    ((d4.b) this.f5856i).f7408x.put(ks.n.m(oVar), oVar);
                    d4.b bVar7 = (d4.b) this.f5856i;
                    ((d4.b) this.f5856i).f7409y.put(ks.n.m(oVar), a4.l.a(bVar7.E, oVar, bVar7.f7404e.f9516b, bVar7));
                }
                return;
            case 8:
                f3.f fVar2 = (f3.f) this.f5856i;
                ArrayList arrayList = (ArrayList) this.f5855e;
                fVar2.e(arrayList);
                File file = fVar2.f8324f;
                e4.m mVar2 = new e4.m(file);
                File file2 = (File) mVar2.f7964i;
                try {
                    FileOutputStream h0 = mVar2.h0();
                    try {
                        BufferedOutputStream bufferedOutputStream = new BufferedOutputStream(h0);
                        XmlSerializer newSerializer = Xml.newSerializer();
                        newSerializer.setOutput(bufferedOutputStream, "UTF_8");
                        newSerializer.startDocument(null, Boolean.TRUE);
                        newSerializer.startTag(null, "share_targets");
                        Iterator it = arrayList.iterator();
                        while (it.hasNext()) {
                            f3.d.h(newSerializer, (f3.g) it.next());
                        }
                        newSerializer.endTag(null, "share_targets");
                        newSerializer.endDocument();
                        bufferedOutputStream.flush();
                        h0.flush();
                        try {
                            h0.getFD().sync();
                            z5 = true;
                        } catch (IOException unused3) {
                        }
                        if (!z5) {
                            Log.e("AtomicFile", "Failed to sync file output stream");
                        }
                        try {
                            h0.close();
                        } catch (IOException e10) {
                            Log.e("AtomicFile", "Failed to close file output stream", e10);
                        }
                        e4.m.f0(file2, file);
                        return;
                    } catch (Exception e11) {
                        exc = e11;
                        fileOutputStream = h0;
                        Log.e("ShortcutInfoCompatSaver", "Failed to write to file " + file, exc);
                        if (fileOutputStream != null) {
                            try {
                                fileOutputStream.getFD().sync();
                            } catch (IOException unused4) {
                                Log.e("AtomicFile", "Failed to sync file output stream");
                            }
                            try {
                                fileOutputStream.close();
                            } catch (IOException e12) {
                                Log.e("AtomicFile", "Failed to close file output stream", e12);
                            }
                            if (!file2.delete()) {
                                Log.e("AtomicFile", "Failed to delete new file " + file2);
                            }
                        }
                        throw new RuntimeException("Failed to write to file " + file, exc);
                    }
                } catch (Exception e13) {
                    exc = e13;
                }
            case 9:
                f3.f fVar3 = (f3.f) this.f5856i;
                s.e eVar2 = fVar3.f8320b;
                try {
                    f3.f.f((File) this.f5855e);
                    f3.f.f(fVar3.f8325g);
                    eVar2.putAll(f3.d.c(fVar3.a, fVar3.f8324f));
                    fVar3.e(new ArrayList(eVar2.values()));
                    return;
                } catch (Exception e14) {
                    Log.w("ShortcutInfoCompatSaver", "ShortcutInfoCompatSaver started with an exceptions ", e14);
                    return;
                }
            case 10:
                if (((o0.h) this.f5855e).f15723d instanceof o0.a) {
                    return;
                }
                try {
                    ((Runnable) this.f5856i).run();
                    ((o0.h) this.f5855e).j(null);
                    return;
                } catch (Exception e15) {
                    ((o0.h) this.f5855e).k(e15);
                    return;
                }
            case 11:
                if (((f4.q) this.f5856i).f8358d.f9110d instanceof g4.a) {
                    return;
                }
                try {
                    v3.g gVar = (v3.g) ((g4.j) this.f5855e).get();
                    if (gVar == null) {
                        throw new IllegalStateException("Worker was marked important (" + ((f4.q) this.f5856i).f8360i.f7968c + ") but did not provide ForegroundInfo");
                    }
                    v3.p.d().a(f4.q.f8357y, "Updating notification for " + ((f4.q) this.f5856i).f8360i.f7968c);
                    f4.q qVar4 = (f4.q) this.f5856i;
                    g4.j jVar = qVar4.f8358d;
                    f4.s sVar2 = qVar4.f8362w;
                    Context context = qVar4.f8359e;
                    UUID uuid = qVar4.f8361v.f19207e.a;
                    sVar2.getClass();
                    g4.j jVar2 = new g4.j();
                    sVar2.a.a(new f4.r(sVar2, jVar2, uuid, gVar, context));
                    jVar.l(jVar2);
                    return;
                } catch (Throwable th4) {
                    ((f4.q) this.f5856i).f8358d.k(th4);
                    return;
                }
            case 12:
                u4.b bVar8 = (u4.b) this.f5855e;
                Typeface typeface = (Typeface) this.f5856i;
                a1.b bVar9 = (a1.b) bVar8.f18810e;
                if (bVar9 != null) {
                    bVar9.h(typeface);
                    return;
                }
                return;
            case 13:
                ve.i iVar = (ve.i) this.f5855e;
                j4.e eVar3 = (j4.e) iVar.f19405d;
                try {
                    if (eVar3.g(((Callable) this.f5856i).call())) {
                        return;
                    } else {
                        throw new IllegalStateException("Cannot set the result of a completed task.");
                    }
                } catch (CancellationException unused5) {
                    if (!eVar3.f()) {
                        throw new IllegalStateException("Cannot cancel a completed task.");
                    }
                    return;
                } catch (Exception e16) {
                    iVar.q(e16);
                    return;
                }
            case 14:
                jg.i iVar2 = (jg.i) this.f5856i;
                jg.l lVar = iVar2.f12762v;
                try {
                    Task task = (Task) iVar2.f12761i.N((Task) this.f5855e);
                    if (task == null) {
                        iVar2.onFailure(new NullPointerException("Continuation returned null"));
                        return;
                    }
                    f4.n nVar = jg.h.f12758b;
                    task.d(nVar, iVar2);
                    task.c(nVar, iVar2);
                    task.a(nVar, iVar2);
                    return;
                } catch (jg.e e17) {
                    if (e17.getCause() instanceof Exception) {
                        lVar.p((Exception) e17.getCause());
                        return;
                    } else {
                        lVar.p(e17);
                        return;
                    }
                } catch (Exception e18) {
                    lVar.p(e18);
                    return;
                }
            case 15:
                synchronized (((jg.j) this.f5856i).f12765i) {
                    jg.c cVar = (jg.c) ((jg.j) this.f5856i).f12766v;
                    Exception h6 = ((Task) this.f5855e).h();
                    bf.t.g(h6);
                    cVar.onFailure(h6);
                }
                return;
            case 16:
                jg.j jVar3 = (jg.j) this.f5856i;
                try {
                    jg.l g6 = ((jg.f) jVar3.f12765i).g(((Task) this.f5855e).i());
                    f4.n nVar2 = jg.h.f12758b;
                    g6.d(nVar2, jVar3);
                    g6.c(nVar2, jVar3);
                    g6.a(nVar2, jVar3);
                    return;
                } catch (CancellationException unused6) {
                    jVar3.E();
                    return;
                } catch (jg.e e19) {
                    if (e19.getCause() instanceof Exception) {
                        jVar3.onFailure((Exception) e19.getCause());
                        return;
                    } else {
                        jVar3.onFailure(e19);
                        return;
                    }
                } catch (Exception e20) {
                    jVar3.onFailure(e20);
                    return;
                }
            case 17:
                ((nr.j) this.f5856i).C((nr.q0) this.f5855e, Unit.a);
                return;
            case 18:
                ViewDragHelper viewDragHelper = ((SwipeDismissBehavior) this.f5856i).a;
                if (viewDragHelper == null || !viewDragHelper.g()) {
                    return;
                }
                ((View) this.f5855e).postOnAnimation(this);
                return;
            case 19:
                a();
                return;
            case 20:
                b();
                return;
            case 21:
                ((th.x0) this.f5855e).f18618b.b((Intent) this.f5856i);
                return;
            case 22:
                th.m1 m1Var = (th.m1) this.f5855e;
                th.l1 l1Var = (th.l1) this.f5856i;
                m1Var.a.a(l1Var.f18500d, l1Var.f18501e, (String) l1Var.f10877b);
                return;
            case 23:
                w2.a aVar = (w2.a) this.f5856i;
                Object obj2 = this.f5855e;
                if (aVar.f19623i.get()) {
                    ve.d dVar2 = aVar.f19625w;
                    if (dVar2.f19399h == aVar) {
                        SystemClock.uptimeMillis();
                        dVar2.f19399h = null;
                        dVar2.b();
                    }
                } else {
                    ve.d dVar3 = aVar.f19625w;
                    if (dVar3.f19398g != aVar) {
                        if (dVar3.f19399h == aVar) {
                            SystemClock.uptimeMillis();
                            dVar3.f19399h = null;
                            dVar3.b();
                        }
                    } else if (!dVar3.f19394c) {
                        SystemClock.uptimeMillis();
                        dVar3.f19398g = null;
                        v2.a aVar2 = dVar3.a;
                        if (aVar2 != null) {
                            if (Looper.myLooper() == Looper.getMainLooper()) {
                                aVar2.h(obj2);
                            } else {
                                aVar2.i(obj2);
                            }
                        }
                    }
                }
                aVar.f19622e = 3;
                return;
            case 24:
                String str2 = (String) this.f5855e;
                w3.r rVar = (w3.r) this.f5856i;
                e4.o oVar2 = rVar.f19674i;
                try {
                    try {
                        v3.n nVar3 = (v3.n) rVar.M.get();
                        if (nVar3 == null) {
                            v3.p.d().b(w3.r.O, oVar2.f7968c + " returned a null result. Treating it as a failure.");
                        } else {
                            v3.p.d().a(w3.r.O, oVar2.f7968c + " returned a " + nVar3 + ".");
                            rVar.f19677x = nVar3;
                        }
                    } finally {
                        rVar.b();
                    }
                } catch (InterruptedException e21) {
                    e = e21;
                    v3.p.d().c(w3.r.O, str2 + " failed because it threw an exception/error", e);
                } catch (CancellationException e22) {
                    v3.p d6 = v3.p.d();
                    String str3 = w3.r.O;
                    String str4 = str2 + " was cancelled";
                    if (d6.a <= 4) {
                        Log.i(str3, str4, e22);
                    }
                } catch (ExecutionException e23) {
                    e = e23;
                    v3.p.d().c(w3.r.O, str2 + " failed because it threw an exception/error", e);
                }
                rVar.b();
                return;
            case 25:
                ((Application) this.f5855e).unregisterActivityLifecycleCallbacks((x0.d) this.f5856i);
                return;
            case 26:
                v3.p d7 = v3.p.d();
                String str5 = x3.a.f20262e;
                StringBuilder sb2 = new StringBuilder("Scheduling work ");
                e4.o oVar3 = (e4.o) this.f5855e;
                sb2.append(oVar3.a);
                d7.a(str5, sb2.toString());
                ((x3.a) this.f5856i).a.d(oVar3);
                return;
            default:
                xe.i iVar3 = (xe.i) this.f5855e;
                int i10 = ((xe.j) this.f5856i).a;
                synchronized (iVar3) {
                    xe.j jVar4 = (xe.j) iVar3.f20413w.get(i10);
                    if (jVar4 != null) {
                        Log.w("MessengerIpcClient", "Timing out request: " + i10);
                        iVar3.f20413w.remove(i10);
                        jVar4.b(new ap.a(8, "Timed out waiting for response", null));
                        iVar3.c();
                    }
                }
                return;
        }
    }

    public String toString() {
        switch (this.f5854d) {
            case 0:
                e4.m mVar = new e4.m(v0.class.getSimpleName(), 12);
                xe.k kVar = (xe.k) this.f5856i;
                io.sentry.internal.debugmeta.c cVar = new io.sentry.internal.debugmeta.c(6, false);
                ((io.sentry.internal.debugmeta.c) mVar.f7965v).f11623i = cVar;
                mVar.f7965v = cVar;
                cVar.f11622e = kVar;
                return mVar.toString();
            default:
                return super.toString();
        }
    }

    public /* synthetic */ v0(Object obj, Object obj2, int i5, boolean z5) {
        this.f5854d = i5;
        this.f5856i = obj;
        this.f5855e = obj2;
    }

    public v0(SwipeDismissBehavior swipeDismissBehavior, View view, boolean z5) {
        this.f5854d = 18;
        this.f5856i = swipeDismissBehavior;
        this.f5855e = view;
    }
}
