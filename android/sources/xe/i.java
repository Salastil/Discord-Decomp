package xe;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import android.os.Looper;
import android.os.Messenger;
import android.util.Log;
import android.util.SparseArray;
import ii.o;
import java.util.ArrayDeque;
import java.util.Iterator;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public final class i implements ServiceConnection {

    /* renamed from: d, reason: collision with root package name */
    public int f20409d = 0;

    /* renamed from: e, reason: collision with root package name */
    public final Messenger f20410e;

    /* renamed from: i, reason: collision with root package name */
    public io.sentry.internal.debugmeta.c f20411i;

    /* renamed from: v, reason: collision with root package name */
    public final ArrayDeque f20412v;

    /* renamed from: w, reason: collision with root package name */
    public final SparseArray f20413w;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ k f20414x;

    public i(k kVar) {
        this.f20414x = kVar;
        fg.a aVar = new fg.a(Looper.getMainLooper(), new nh.e(1, this));
        Looper.getMainLooper();
        this.f20410e = new Messenger(aVar);
        this.f20412v = new ArrayDeque();
        this.f20413w = new SparseArray();
    }

    public final synchronized void a(String str) {
        b(str, null);
    }

    public final synchronized void b(String str, SecurityException securityException) {
        try {
            if (Log.isLoggable("MessengerIpcClient", 3)) {
                Log.d("MessengerIpcClient", "Disconnected: ".concat(String.valueOf(str)));
            }
            int i5 = this.f20409d;
            if (i5 == 0) {
                throw new IllegalStateException();
            }
            if (i5 != 1 && i5 != 2) {
                if (i5 != 3) {
                    return;
                }
                this.f20409d = 4;
                return;
            }
            if (Log.isLoggable("MessengerIpcClient", 2)) {
                Log.v("MessengerIpcClient", "Unbinding service");
            }
            this.f20409d = 4;
            ff.a.a().b((Context) this.f20414x.f20420b, this);
            ap.a aVar = new ap.a(8, str, securityException);
            Iterator it = this.f20412v.iterator();
            while (it.hasNext()) {
                ((j) it.next()).b(aVar);
            }
            this.f20412v.clear();
            for (int i6 = 0; i6 < this.f20413w.size(); i6++) {
                ((j) this.f20413w.valueAt(i6)).b(aVar);
            }
            this.f20413w.clear();
        } catch (Throwable th2) {
            throw th2;
        }
    }

    public final synchronized void c() {
        try {
            if (this.f20409d == 2 && this.f20412v.isEmpty() && this.f20413w.size() == 0) {
                if (Log.isLoggable("MessengerIpcClient", 2)) {
                    Log.v("MessengerIpcClient", "Finished handling requests, unbinding");
                }
                this.f20409d = 3;
                ff.a.a().b((Context) this.f20414x.f20420b, this);
            }
        } catch (Throwable th2) {
            throw th2;
        }
    }

    public final synchronized boolean d(j jVar) {
        Throwable th2;
        int i5;
        ff.a a;
        Context context;
        try {
            try {
                i5 = this.f20409d;
            } catch (Throwable th3) {
                th = th3;
                th2 = th;
                throw th2;
            }
            try {
                if (i5 != 0) {
                    if (i5 == 1) {
                        this.f20412v.add(jVar);
                        return true;
                    }
                    if (i5 != 2) {
                        return false;
                    }
                    this.f20412v.add(jVar);
                    ((ScheduledExecutorService) this.f20414x.f20421c).execute(new h(this, 0));
                    return true;
                }
                this.f20412v.add(jVar);
                if (this.f20409d != 0) {
                    throw new IllegalStateException();
                }
                if (Log.isLoggable("MessengerIpcClient", 2)) {
                    Log.v("MessengerIpcClient", "Starting bind to GmsCore");
                }
                this.f20409d = 1;
                Intent intent = new Intent("com.google.android.c2dm.intent.REGISTER");
                intent.setPackage("com.google.android.gms");
                try {
                    a = ff.a.a();
                    context = (Context) this.f20414x.f20420b;
                } catch (SecurityException e9) {
                    e = e9;
                }
                try {
                    if (a.c(context, context.getClass().getName(), intent, this, 1, null)) {
                        ((ScheduledExecutorService) this.f20414x.f20421c).schedule(new h(this, 1), 30L, TimeUnit.SECONDS);
                    } else {
                        a("Unable to bind to service");
                    }
                } catch (SecurityException e10) {
                    e = e10;
                    b("Unable to bind to service", e);
                    return true;
                }
                return true;
            } catch (Throwable th4) {
                th2 = th4;
                throw th2;
            }
        } catch (Throwable th5) {
            th = th5;
        }
    }

    @Override // android.content.ServiceConnection
    public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        if (Log.isLoggable("MessengerIpcClient", 2)) {
            Log.v("MessengerIpcClient", "Service connected");
        }
        ((ScheduledExecutorService) this.f20414x.f20421c).execute(new o(26, this, iBinder));
    }

    @Override // android.content.ServiceConnection
    public final void onServiceDisconnected(ComponentName componentName) {
        if (Log.isLoggable("MessengerIpcClient", 2)) {
            Log.v("MessengerIpcClient", "Service disconnected");
        }
        ((ScheduledExecutorService) this.f20414x.f20421c).execute(new h(this, 2));
    }
}
