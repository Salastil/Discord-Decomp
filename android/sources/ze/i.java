package ze;

import af.c0;
import af.i0;
import af.j0;
import af.t;
import af.x;
import af.z;
import android.app.Activity;
import android.content.Context;
import android.os.Build;
import android.os.Looper;
import android.os.SystemClock;
import androidx.fragment.app.FragmentActivity;
import androidx.fragment.app.FragmentManager;
import com.google.android.gms.common.api.GoogleApiActivity;
import java.lang.ref.WeakReference;
import java.util.Collections;
import java.util.Set;
import java.util.WeakHashMap;

/* loaded from: classes3.dex */
public abstract class i {
    public final Context a;

    /* renamed from: b, reason: collision with root package name */
    public final String f21208b;

    /* renamed from: c, reason: collision with root package name */
    public final e4.e f21209c;

    /* renamed from: d, reason: collision with root package name */
    public final b f21210d;

    /* renamed from: e, reason: collision with root package name */
    public final af.a f21211e;

    /* renamed from: f, reason: collision with root package name */
    public final Looper f21212f;

    /* renamed from: g, reason: collision with root package name */
    public final int f21213g;

    /* renamed from: h, reason: collision with root package name */
    public final t f21214h;

    /* renamed from: i, reason: collision with root package name */
    public final l8.a f21215i;
    public final af.e j;

    /* JADX WARN: Code restructure failed: missing block: B:15:0x0081, code lost:
    
        if (r0 != null) goto L40;
     */
    /* JADX WARN: Code restructure failed: missing block: B:24:0x0091, code lost:
    
        if (r2 != false) goto L23;
     */
    /* JADX WARN: Code restructure failed: missing block: B:35:0x00ca, code lost:
    
        if (r0 == null) goto L49;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public i(Context context, Activity activity, e4.e eVar, b bVar, h hVar) {
        af.f fVar;
        j0 j0Var;
        bf.t.h(context, "Null context is not permitted.");
        bf.t.h(eVar, "Api must not be null.");
        bf.t.h(hVar, "Settings must not be null; use Settings.DEFAULT_SETTINGS instead.");
        Context applicationContext = context.getApplicationContext();
        bf.t.h(applicationContext, "The provided context did not have an application context.");
        this.a = applicationContext;
        String attributionTag = Build.VERSION.SDK_INT >= 30 ? context.getAttributionTag() : null;
        this.f21208b = attributionTag;
        this.f21209c = eVar;
        this.f21210d = bVar;
        this.f21212f = hVar.f21207b;
        af.a aVar = new af.a(eVar, bVar, attributionTag);
        this.f21211e = aVar;
        this.f21214h = new t(this);
        af.e g6 = af.e.g(applicationContext);
        this.j = g6;
        this.f21213g = g6.E.getAndIncrement();
        this.f21215i = hVar.a;
        if (activity != null && !(activity instanceof GoogleApiActivity) && Looper.myLooper() == Looper.getMainLooper()) {
            if (activity instanceof FragmentActivity) {
                FragmentActivity fragmentActivity = (FragmentActivity) activity;
                WeakHashMap weakHashMap = j0.f562e;
                FragmentManager supportFragmentManager = fragmentActivity.getSupportFragmentManager();
                WeakHashMap weakHashMap2 = j0.f562e;
                WeakReference weakReference = (WeakReference) weakHashMap2.get(fragmentActivity);
                if (weakReference != null) {
                    af.f fVar2 = (j0) weakReference.get();
                    fVar = fVar2;
                }
                try {
                    j0 j0Var2 = (j0) supportFragmentManager.E("SLifecycleFragmentImpl");
                    if (j0Var2 != null) {
                        boolean isRemoving = j0Var2.isRemoving();
                        j0Var = j0Var2;
                    }
                    j0 j0Var3 = new j0();
                    androidx.fragment.app.a aVar2 = new androidx.fragment.app.a(supportFragmentManager);
                    aVar2.f(0, j0Var3, "SLifecycleFragmentImpl", 1);
                    aVar2.m(true, true);
                    j0Var = j0Var3;
                    weakHashMap2.put(fragmentActivity, new WeakReference(j0Var));
                    fVar = j0Var;
                } catch (ClassCastException e9) {
                    throw new IllegalStateException("Fragment with tag SLifecycleFragmentImpl is not a SupportLifecycleFragmentImpl", e9);
                }
            } else {
                WeakHashMap weakHashMap3 = i0.f560e;
                WeakReference weakReference2 = (WeakReference) weakHashMap3.get(activity);
                if (weakReference2 != null) {
                    af.f fVar3 = (i0) weakReference2.get();
                    fVar = fVar3;
                }
                try {
                    i0 i0Var = (i0) activity.getFragmentManager().findFragmentByTag("LifecycleFragmentImpl");
                    if (i0Var == null || i0Var.isRemoving()) {
                        i0Var = new i0();
                        activity.getFragmentManager().beginTransaction().add(i0Var, "LifecycleFragmentImpl").commitAllowingStateLoss();
                    }
                    af.f fVar4 = i0Var;
                    weakHashMap3.put(activity, new WeakReference(fVar4));
                    fVar = fVar4;
                } catch (ClassCastException e10) {
                    throw new IllegalStateException("Fragment with tag LifecycleFragmentImpl is not a LifecycleFragmentImpl", e10);
                }
            }
            af.m f2 = fVar.f();
            if (f2 == null) {
                Object obj = ye.e.f20917c;
                f2 = new af.m(fVar, g6);
            }
            f2.f575x.add(aVar);
            g6.b(f2);
        }
        fg.a aVar3 = g6.K;
        aVar3.sendMessage(aVar3.obtainMessage(7, this));
    }

    public final e4.m a() {
        e4.m mVar = new e4.m(7, false);
        Set set = Collections.EMPTY_SET;
        if (((s.f) mVar.f7963e) == null) {
            mVar.f7963e = new s.f(0);
        }
        ((s.f) mVar.f7963e).addAll(set);
        Context context = this.a;
        mVar.f7965v = context.getClass().getName();
        mVar.f7964i = context.getPackageName();
        return mVar;
    }

    /* JADX WARN: Removed duplicated region for block: B:28:0x0076  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final jg.l b(int i5, af.k kVar) {
        x xVar;
        jg.g gVar = new jg.g();
        jg.l lVar = gVar.a;
        l8.a aVar = this.f21215i;
        af.e eVar = this.j;
        fg.a aVar2 = eVar.K;
        int i6 = kVar.f566d;
        if (i6 != 0) {
            af.a aVar3 = this.f21211e;
            if (eVar.c()) {
                bf.i iVar = (bf.i) bf.h.a().a;
                boolean z5 = true;
                if (iVar != null) {
                    if (iVar.f2890e) {
                        boolean z6 = iVar.f2891i;
                        af.q qVar = (af.q) eVar.G.get(aVar3);
                        if (qVar != null) {
                            c cVar = qVar.f583g;
                            if (cVar instanceof bf.e) {
                                bf.e eVar2 = (bf.e) cVar;
                                if (eVar2.R != null && !eVar2.c()) {
                                    bf.c a = x.a(qVar, eVar2, i6);
                                    if (a != null) {
                                        qVar.f591q++;
                                        z5 = a.f2844i;
                                    }
                                }
                            }
                        }
                        z5 = z6;
                    }
                }
                xVar = new x(eVar, i6, aVar3, z5 ? System.currentTimeMillis() : 0L, z5 ? SystemClock.elapsedRealtime() : 0L);
                if (xVar != null) {
                    aVar2.getClass();
                    lVar.b(new af.n(aVar2, 0), xVar);
                }
            }
            xVar = null;
            if (xVar != null) {
            }
        }
        aVar2.sendMessage(aVar2.obtainMessage(4, new z(new c0(i5, kVar, gVar, aVar), eVar.F.get(), this)));
        return lVar;
    }
}
