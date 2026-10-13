package bf;

import android.accounts.Account;
import android.content.Context;
import android.os.Build;
import android.os.Bundle;
import android.os.DeadObjectException;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Looper;
import android.os.RemoteException;
import android.util.Log;
import com.google.android.gms.common.api.Scope;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.Set;
import java.util.concurrent.atomic.AtomicInteger;

/* loaded from: classes3.dex */
public abstract class e implements ze.c {
    public static final ye.d[] U = new ye.d[0];
    public s E;
    public b F;
    public IInterface G;
    public final ArrayList H;
    public y I;
    public int J;
    public final h K;
    public final h L;
    public final int M;
    public final String N;
    public volatile String O;
    public ye.b P;
    public boolean Q;
    public volatile b0 R;
    public final AtomicInteger S;
    public final Set T;

    /* renamed from: d, reason: collision with root package name */
    public volatile String f2864d;

    /* renamed from: e, reason: collision with root package name */
    public a3.n f2865e;

    /* renamed from: i, reason: collision with root package name */
    public final Context f2866i;

    /* renamed from: v, reason: collision with root package name */
    public final f0 f2867v;

    /* renamed from: w, reason: collision with root package name */
    public final w f2868w;

    /* renamed from: x, reason: collision with root package name */
    public final Object f2869x;

    /* renamed from: y, reason: collision with root package name */
    public final Object f2870y;

    public e(Context context, Looper looper, int i5, androidx.appcompat.widget.w wVar, ze.j jVar, ze.k kVar, int i6) {
        synchronized (f0.f2872g) {
            try {
                if (f0.f2873h == null) {
                    f0.f2873h = new f0(context.getApplicationContext(), context.getMainLooper());
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        f0 f0Var = f0.f2873h;
        Object obj = ye.e.f20917c;
        t.g(jVar);
        t.g(kVar);
        h hVar = new h(jVar);
        h hVar2 = new h(kVar);
        String str = (String) wVar.f1144v;
        Object obj2 = ye.e.f20917c;
        this.f2864d = null;
        this.f2869x = new Object();
        this.f2870y = new Object();
        this.H = new ArrayList();
        this.J = 1;
        this.P = null;
        this.Q = false;
        this.R = null;
        this.S = new AtomicInteger(0);
        t.h(context, "Context must not be null");
        this.f2866i = context;
        t.h(looper, "Looper must not be null");
        t.h(f0Var, "Supervisor must not be null");
        this.f2867v = f0Var;
        this.f2868w = new w(this, looper);
        this.M = i5;
        this.K = hVar;
        this.L = hVar2;
        this.N = str;
        Set set = (Set) wVar.f1142e;
        Iterator it = set.iterator();
        while (it.hasNext()) {
            if (!set.contains((Scope) it.next())) {
                throw new IllegalStateException("Expanding scopes is not permitted, use implied scopes instead");
            }
        }
        this.T = set;
    }

    @Override // ze.c
    public final Set a() {
        return k() ? this.T : Collections.EMPTY_SET;
    }

    @Override // ze.c
    public final void b(String str) {
        this.f2864d = str;
        disconnect();
    }

    @Override // ze.c
    public final boolean c() {
        boolean z5;
        synchronized (this.f2869x) {
            int i5 = this.J;
            z5 = true;
            if (i5 != 2 && i5 != 3) {
                z5 = false;
            }
        }
        return z5;
    }

    @Override // ze.c
    public final void d() {
        if (!isConnected() || this.f2865e == null) {
            throw new RuntimeException("Failed to connect when checking package");
        }
    }

    @Override // ze.c
    public final void disconnect() {
        this.S.incrementAndGet();
        ArrayList arrayList = this.H;
        synchronized (arrayList) {
            try {
                int size = arrayList.size();
                for (int i5 = 0; i5 < size; i5++) {
                    r rVar = (r) arrayList.get(i5);
                    synchronized (rVar) {
                        rVar.a = null;
                    }
                }
                arrayList.clear();
            } catch (Throwable th2) {
                throw th2;
            }
        }
        synchronized (this.f2870y) {
            this.E = null;
        }
        u(1, null);
    }

    @Override // ze.c
    public final void e(f fVar, Set set) {
        Bundle n6 = n();
        String str = Build.VERSION.SDK_INT < 31 ? this.O : this.O;
        int i5 = this.M;
        int i6 = ye.f.a;
        Scope[] scopeArr = d.L;
        Bundle bundle = new Bundle();
        ye.d[] dVarArr = d.M;
        d dVar = new d(6, i5, i6, null, null, scopeArr, bundle, null, dVarArr, dVarArr, true, 0, false, str);
        dVar.f2853v = this.f2866i.getPackageName();
        dVar.f2856y = n6;
        if (set != null) {
            dVar.f2855x = (Scope[]) set.toArray(new Scope[0]);
        }
        if (k()) {
            dVar.E = new Account("<<default account>>", "com.google");
            if (fVar != null) {
                dVar.f2854w = fVar.asBinder();
            }
        }
        dVar.F = U;
        dVar.G = m();
        if (s()) {
            dVar.J = true;
        }
        try {
            synchronized (this.f2870y) {
                try {
                    s sVar = this.E;
                    if (sVar != null) {
                        sVar.b(new x(this, this.S.get()), dVar);
                    } else {
                        Log.w("GmsClient", "mServiceBroker is null, client disconnected");
                    }
                } finally {
                }
            }
        } catch (DeadObjectException e9) {
            Log.w("GmsClient", "IGmsServiceBroker.getService failed", e9);
            int i10 = this.S.get();
            w wVar = this.f2868w;
            wVar.sendMessage(wVar.obtainMessage(6, i10, 3));
        } catch (RemoteException e10) {
            e = e10;
            Log.w("GmsClient", "IGmsServiceBroker.getService failed", e);
            int i11 = this.S.get();
            z zVar = new z(this, 8, null, null);
            w wVar2 = this.f2868w;
            wVar2.sendMessage(wVar2.obtainMessage(1, i11, -1, zVar));
        } catch (SecurityException e11) {
            throw e11;
        } catch (RuntimeException e12) {
            e = e12;
            Log.w("GmsClient", "IGmsServiceBroker.getService failed", e);
            int i112 = this.S.get();
            z zVar2 = new z(this, 8, null, null);
            w wVar22 = this.f2868w;
            wVar22.sendMessage(wVar22.obtainMessage(1, i112, -1, zVar2));
        }
    }

    @Override // ze.c
    public final void f(u4.b bVar) {
        ((af.q) bVar.f18810e).f592r.K.post(new a3.h(3, bVar));
    }

    @Override // ze.c
    public final void g(b bVar) {
        this.F = bVar;
        u(2, null);
    }

    @Override // ze.c
    public abstract int h();

    @Override // ze.c
    public final ye.d[] i() {
        b0 b0Var = this.R;
        if (b0Var == null) {
            return null;
        }
        return b0Var.f2839e;
    }

    @Override // ze.c
    public final boolean isConnected() {
        boolean z5;
        synchronized (this.f2869x) {
            z5 = this.J == 4;
        }
        return z5;
    }

    @Override // ze.c
    public final String j() {
        return this.f2864d;
    }

    @Override // ze.c
    public boolean k() {
        return false;
    }

    public abstract IInterface l(IBinder iBinder);

    public ye.d[] m() {
        return U;
    }

    public Bundle n() {
        return new Bundle();
    }

    public final IInterface o() {
        IInterface iInterface;
        synchronized (this.f2869x) {
            try {
                if (this.J == 5) {
                    throw new DeadObjectException();
                }
                if (!isConnected()) {
                    throw new IllegalStateException("Not connected. Call connect() and wait for onConnected() to be called.");
                }
                IInterface iInterface2 = this.G;
                t.h(iInterface2, "Client is connected but service is null");
                iInterface = iInterface2;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return iInterface;
    }

    public abstract String p();

    public abstract String q();

    public boolean r() {
        return h() >= 211700000;
    }

    public boolean s() {
        return this instanceof we.a;
    }

    public final /* synthetic */ boolean t(int i5, int i6, IInterface iInterface) {
        synchronized (this.f2869x) {
            try {
                if (this.J != i5) {
                    return false;
                }
                u(i6, iInterface);
                return true;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final void u(int i5, IInterface iInterface) {
        a3.n nVar;
        t.b((i5 == 4) == (iInterface != null));
        synchronized (this.f2869x) {
            try {
                this.J = i5;
                this.G = iInterface;
                Bundle bundle = null;
                if (i5 == 1) {
                    y yVar = this.I;
                    if (yVar != null) {
                        f0 f0Var = this.f2867v;
                        String str = this.f2865e.a;
                        t.g(str);
                        this.f2865e.getClass();
                        if (this.N == null) {
                            this.f2866i.getClass();
                        }
                        f0Var.b(str, yVar, this.f2865e.f90b);
                        this.I = null;
                    }
                } else if (i5 == 2 || i5 == 3) {
                    y yVar2 = this.I;
                    if (yVar2 != null && (nVar = this.f2865e) != null) {
                        String str2 = nVar.a;
                        StringBuilder sb2 = new StringBuilder(String.valueOf(str2).length() + 70 + "com.google.android.gms".length());
                        sb2.append("Calling connect() while still connected, missing disconnect() for ");
                        sb2.append(str2);
                        sb2.append(" on com.google.android.gms");
                        Log.e("GmsClient", sb2.toString());
                        f0 f0Var2 = this.f2867v;
                        String str3 = this.f2865e.a;
                        t.g(str3);
                        this.f2865e.getClass();
                        if (this.N == null) {
                            this.f2866i.getClass();
                        }
                        f0Var2.b(str3, yVar2, this.f2865e.f90b);
                        this.S.incrementAndGet();
                    }
                    y yVar3 = new y(this, this.S.get());
                    this.I = yVar3;
                    String q5 = q();
                    boolean r5 = r();
                    this.f2865e = new a3.n(q5, r5);
                    if (r5 && h() < 17895000) {
                        throw new IllegalStateException("Internal Error, the minimum apk version of this BaseGmsClient is too low to support dynamic lookup. Start service action: ".concat(String.valueOf(this.f2865e.a)));
                    }
                    f0 f0Var3 = this.f2867v;
                    String str4 = this.f2865e.a;
                    t.g(str4);
                    this.f2865e.getClass();
                    String str5 = this.N;
                    if (str5 == null) {
                        str5 = this.f2866i.getClass().getName();
                    }
                    ye.b a = f0Var3.a(new c0(str4, this.f2865e.f90b), yVar3, str5);
                    if (!(a.f20906e == 0)) {
                        String str6 = this.f2865e.a;
                        StringBuilder sb3 = new StringBuilder(String.valueOf(str6).length() + 34 + "com.google.android.gms".length());
                        sb3.append("unable to connect to service: ");
                        sb3.append(str6);
                        sb3.append(" on com.google.android.gms");
                        Log.w("GmsClient", sb3.toString());
                        int i6 = a.f20906e;
                        if (i6 == -1) {
                            i6 = 16;
                        }
                        if (a.f20907i != null) {
                            bundle = new Bundle();
                            bundle.putParcelable("pendingIntent", a.f20907i);
                        }
                        int i10 = this.S.get();
                        a0 a0Var = new a0(this, i6, bundle);
                        w wVar = this.f2868w;
                        wVar.sendMessage(wVar.obtainMessage(7, i10, -1, a0Var));
                    }
                } else if (i5 == 4) {
                    t.g(iInterface);
                    IInterface iInterface2 = iInterface;
                    System.currentTimeMillis();
                }
            } finally {
            }
        }
    }
}
