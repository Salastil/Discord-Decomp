package pe;

import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;
import android.os.SystemClock;
import android.util.Log;
import bf.t;
import com.google.android.gms.ads.identifier.AdvertisingIdClient$Info;
import h5.m;
import java.io.IOException;
import java.util.HashMap;
import java.util.concurrent.TimeUnit;
import uf.c;
import uf.d;
import ye.f;
import ye.g;

/* loaded from: classes3.dex */
public class a {
    public ye.a a;

    /* renamed from: b, reason: collision with root package name */
    public d f16380b;

    /* renamed from: c, reason: collision with root package name */
    public boolean f16381c;

    /* renamed from: d, reason: collision with root package name */
    public final Object f16382d = new Object();

    /* renamed from: e, reason: collision with root package name */
    public b f16383e;

    /* renamed from: f, reason: collision with root package name */
    public final Context f16384f;

    /* renamed from: g, reason: collision with root package name */
    public final long f16385g;

    public a(Context context) {
        t.g(context);
        Context applicationContext = context.getApplicationContext();
        this.f16384f = applicationContext != null ? applicationContext : context;
        this.f16381c = false;
        this.f16385g = -1L;
    }

    public static AdvertisingIdClient$Info a(Context context) {
        a aVar = new a(context);
        try {
            long elapsedRealtime = SystemClock.elapsedRealtime();
            aVar.c();
            AdvertisingIdClient$Info e9 = aVar.e();
            d(e9, SystemClock.elapsedRealtime() - elapsedRealtime, null);
            return e9;
        } finally {
        }
    }

    public static void d(AdvertisingIdClient$Info advertisingIdClient$Info, long j, Throwable th2) {
        if (Math.random() <= 0.0d) {
            HashMap hashMap = new HashMap();
            hashMap.put("app_context", "1");
            if (advertisingIdClient$Info != null) {
                hashMap.put("limit_ad_tracking", true != advertisingIdClient$Info.f5614b ? "0" : "1");
                String str = advertisingIdClient$Info.a;
                if (str != null) {
                    hashMap.put("ad_id_size", Integer.toString(str.length()));
                }
            }
            if (th2 != null) {
                hashMap.put("error", th2.getClass().getName());
            }
            hashMap.put("tag", "AdvertisingIdClient");
            hashMap.put("time_spent", Long.toString(j));
            new m(3, hashMap).start();
        }
    }

    public final void b() {
        t.f("Calling this from your main thread can lead to deadlock");
        synchronized (this) {
            try {
                if (this.f16384f == null || this.a == null) {
                    return;
                }
                try {
                    if (this.f16381c) {
                        ff.a.a().b(this.f16384f, this.a);
                    }
                } catch (Throwable th2) {
                    Log.i("AdvertisingIdClient", "AdvertisingIdClient unbindService failed.", th2);
                }
                this.f16381c = false;
                this.f16380b = null;
                this.a = null;
            } catch (Throwable th3) {
                throw th3;
            }
        }
    }

    public final void c() {
        t.f("Calling this from your main thread can lead to deadlock");
        synchronized (this) {
            try {
                if (this.f16381c) {
                    b();
                }
                Context context = this.f16384f;
                try {
                    context.getPackageManager().getPackageInfo("com.android.vending", 0);
                    int b10 = f.f20919b.b(context, 12451000);
                    if (b10 != 0 && b10 != 2) {
                        throw new IOException("Google Play services not available");
                    }
                    ye.a aVar = new ye.a();
                    Intent intent = new Intent("com.google.android.gms.ads.identifier.service.START");
                    intent.setPackage("com.google.android.gms");
                    try {
                        if (!ff.a.a().c(context, context.getClass().getName(), intent, aVar, 1, null)) {
                            throw new IOException("Connection failure");
                        }
                        this.a = aVar;
                        try {
                            TimeUnit timeUnit = TimeUnit.MILLISECONDS;
                            IBinder a = aVar.a();
                            int i5 = c.f18879f;
                            IInterface queryLocalInterface = a.queryLocalInterface("com.google.android.gms.ads.identifier.internal.IAdvertisingIdService");
                            this.f16380b = queryLocalInterface instanceof d ? (d) queryLocalInterface : new uf.b(a);
                            this.f16381c = true;
                        } catch (InterruptedException unused) {
                            throw new IOException("Interrupted exception");
                        } catch (Throwable th2) {
                            throw new IOException(th2);
                        }
                    } finally {
                        IOException iOException = new IOException(th2);
                    }
                } catch (PackageManager.NameNotFoundException unused2) {
                    throw new g();
                }
            } catch (Throwable th3) {
                throw th3;
            }
        }
    }

    public final AdvertisingIdClient$Info e() {
        AdvertisingIdClient$Info advertisingIdClient$Info;
        t.f("Calling this from your main thread can lead to deadlock");
        synchronized (this) {
            try {
                if (!this.f16381c) {
                    synchronized (this.f16382d) {
                        b bVar = this.f16383e;
                        if (bVar == null || !bVar.f16389v) {
                            throw new IOException("AdvertisingIdClient is not connected.");
                        }
                    }
                    try {
                        c();
                        if (!this.f16381c) {
                            throw new IOException("AdvertisingIdClient cannot reconnect.");
                        }
                    } catch (Exception e9) {
                        throw new IOException("AdvertisingIdClient cannot reconnect.", e9);
                    }
                }
                t.g(this.a);
                t.g(this.f16380b);
                try {
                    uf.b bVar2 = (uf.b) this.f16380b;
                    bVar2.getClass();
                    Parcel obtain = Parcel.obtain();
                    obtain.writeInterfaceToken("com.google.android.gms.ads.identifier.internal.IAdvertisingIdService");
                    boolean z5 = true;
                    Parcel b10 = bVar2.b(1, obtain);
                    String readString = b10.readString();
                    b10.recycle();
                    uf.b bVar3 = (uf.b) this.f16380b;
                    bVar3.getClass();
                    Parcel obtain2 = Parcel.obtain();
                    obtain2.writeInterfaceToken("com.google.android.gms.ads.identifier.internal.IAdvertisingIdService");
                    int i5 = uf.a.a;
                    obtain2.writeInt(1);
                    Parcel b11 = bVar3.b(2, obtain2);
                    if (b11.readInt() == 0) {
                        z5 = false;
                    }
                    b11.recycle();
                    advertisingIdClient$Info = new AdvertisingIdClient$Info(readString, z5);
                } catch (RemoteException e10) {
                    Log.i("AdvertisingIdClient", "GMS remote exception ", e10);
                    throw new IOException("Remote exception");
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        synchronized (this.f16382d) {
            b bVar4 = this.f16383e;
            if (bVar4 != null) {
                bVar4.f16388i.countDown();
                try {
                    this.f16383e.join();
                } catch (InterruptedException unused) {
                }
            }
            long j = this.f16385g;
            if (j > 0) {
                this.f16383e = new b(this, j);
            }
        }
        return advertisingIdClient$Info;
    }

    public final void finalize() {
        b();
        super.finalize();
    }
}
