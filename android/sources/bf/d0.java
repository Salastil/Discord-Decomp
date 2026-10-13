package bf;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.Build;
import android.os.IBinder;
import android.os.StrictMode;
import java.util.HashMap;
import java.util.Iterator;
import java.util.concurrent.Executor;

/* loaded from: classes3.dex */
public final class d0 implements ServiceConnection {

    /* renamed from: d, reason: collision with root package name */
    public final HashMap f2857d = new HashMap();

    /* renamed from: e, reason: collision with root package name */
    public int f2858e = 2;

    /* renamed from: i, reason: collision with root package name */
    public boolean f2859i;

    /* renamed from: v, reason: collision with root package name */
    public IBinder f2860v;

    /* renamed from: w, reason: collision with root package name */
    public final c0 f2861w;

    /* renamed from: x, reason: collision with root package name */
    public ComponentName f2862x;

    /* renamed from: y, reason: collision with root package name */
    public final /* synthetic */ f0 f2863y;

    public d0(f0 f0Var, c0 c0Var) {
        this.f2863y = f0Var;
        this.f2861w = c0Var;
    }

    public final ye.b a(String str, Executor executor) {
        try {
            Intent a = v.a(this.f2863y.f2875b, this.f2861w);
            this.f2858e = 3;
            StrictMode.VmPolicy vmPolicy = StrictMode.getVmPolicy();
            if (Build.VERSION.SDK_INT >= 31) {
                StrictMode.setVmPolicy(gf.h.a(new StrictMode.VmPolicy.Builder(vmPolicy)).build());
            }
            try {
                f0 f0Var = this.f2863y;
                ff.a aVar = f0Var.f2877d;
                Context context = f0Var.f2875b;
                c0 c0Var = this.f2861w;
                try {
                    boolean c6 = aVar.c(context, str, a, this, 4225, executor);
                    this.f2859i = c6;
                    if (c6) {
                        f0Var.f2876c.sendMessageDelayed(f0Var.f2876c.obtainMessage(1, c0Var), f0Var.f2879f);
                        ye.b bVar = ye.b.f20904x;
                        StrictMode.setVmPolicy(vmPolicy);
                        return bVar;
                    }
                    this.f2858e = 2;
                    try {
                        f0Var.f2877d.b(f0Var.f2875b, this);
                    } catch (IllegalArgumentException unused) {
                    }
                    ye.b bVar2 = new ye.b(16, null, null);
                    StrictMode.setVmPolicy(vmPolicy);
                    return bVar2;
                } catch (Throwable th2) {
                    th = th2;
                    Throwable th3 = th;
                    StrictMode.setVmPolicy(vmPolicy);
                    throw th3;
                }
            } catch (Throwable th4) {
                th = th4;
            }
        } catch (u e9) {
            return e9.f2921d;
        }
    }

    @Override // android.content.ServiceConnection
    public final void onBindingDied(ComponentName componentName) {
        onServiceDisconnected(componentName);
    }

    @Override // android.content.ServiceConnection
    public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        f0 f0Var = this.f2863y;
        synchronized (f0Var.a) {
            try {
                f0Var.f2876c.removeMessages(1, this.f2861w);
                this.f2860v = iBinder;
                this.f2862x = componentName;
                Iterator it = this.f2857d.values().iterator();
                while (it.hasNext()) {
                    ((ServiceConnection) it.next()).onServiceConnected(componentName, iBinder);
                }
                this.f2858e = 1;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    @Override // android.content.ServiceConnection
    public final void onServiceDisconnected(ComponentName componentName) {
        f0 f0Var = this.f2863y;
        synchronized (f0Var.a) {
            try {
                f0Var.f2876c.removeMessages(1, this.f2861w);
                this.f2860v = null;
                this.f2862x = componentName;
                Iterator it = this.f2857d.values().iterator();
                while (it.hasNext()) {
                    ((ServiceConnection) it.next()).onServiceDisconnected(componentName);
                }
                this.f2858e = 2;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }
}
