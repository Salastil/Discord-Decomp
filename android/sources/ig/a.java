package ig;

import a3.h;
import ai.k;
import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import android.os.PowerManager;
import android.os.SystemClock;
import android.os.WorkSource;
import android.text.TextUtils;
import android.util.Log;
import bf.t;
import gf.f;
import gf.g;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.concurrent.Executors;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.ScheduledFuture;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicInteger;
import jf.c;
import kotlin.jvm.internal.LongCompanionObject;

/* loaded from: classes3.dex */
public final class a {

    /* renamed from: n, reason: collision with root package name */
    public static final long f10780n = TimeUnit.DAYS.toMillis(366);

    /* renamed from: o, reason: collision with root package name */
    public static volatile ScheduledExecutorService f10781o = null;

    /* renamed from: p, reason: collision with root package name */
    public static final Object f10782p = new Object();
    public final Object a;

    /* renamed from: b, reason: collision with root package name */
    public final PowerManager.WakeLock f10783b;

    /* renamed from: c, reason: collision with root package name */
    public int f10784c;

    /* renamed from: d, reason: collision with root package name */
    public ScheduledFuture f10785d;

    /* renamed from: e, reason: collision with root package name */
    public long f10786e;

    /* renamed from: f, reason: collision with root package name */
    public final HashSet f10787f;

    /* renamed from: g, reason: collision with root package name */
    public boolean f10788g;

    /* renamed from: h, reason: collision with root package name */
    public eg.a f10789h;

    /* renamed from: i, reason: collision with root package name */
    public final gf.b f10790i;
    public final String j;
    public final HashMap k;

    /* renamed from: l, reason: collision with root package name */
    public final AtomicInteger f10791l;

    /* renamed from: m, reason: collision with root package name */
    public final ScheduledExecutorService f10792m;

    public a(Context context, String str) {
        boolean z5;
        String packageName = context.getPackageName();
        this.a = new Object();
        this.f10784c = 0;
        this.f10787f = new HashSet();
        this.f10788g = true;
        this.f10790i = gf.b.a;
        this.k = new HashMap();
        this.f10791l = new AtomicInteger(0);
        t.e(str, "WakeLock: wakeLockName must not be empty");
        context.getApplicationContext();
        WorkSource workSource = null;
        this.f10789h = null;
        if ("com.google.android.gms".equals(context.getPackageName())) {
            this.j = str;
        } else {
            this.j = str.length() != 0 ? "*gcore*:".concat(str) : new String("*gcore*:");
        }
        PowerManager powerManager = (PowerManager) context.getSystemService("power");
        if (powerManager == null) {
            StringBuilder sb2 = new StringBuilder(29);
            sb2.append((CharSequence) "expected a non-null reference", 0, 29);
            throw new k(sb2.toString());
        }
        this.f10783b = powerManager.newWakeLock(1, str);
        Method method = g.a;
        synchronized (g.class) {
            Boolean bool = g.f9241c;
            if (bool != null) {
                z5 = bool.booleanValue();
            } else {
                z5 = y0.b.a(context, "android.permission.UPDATE_DEVICE_STATS") == 0;
                g.f9241c = Boolean.valueOf(z5);
            }
        }
        if (z5) {
            int i5 = f.a;
            packageName = packageName == null || packageName.trim().isEmpty() ? context.getPackageName() : packageName;
            if (context.getPackageManager() != null && packageName != null) {
                try {
                    ApplicationInfo applicationInfo = c.a(context).a.getPackageManager().getApplicationInfo(packageName, 0);
                    if (applicationInfo == null) {
                        Log.e("WorkSourceUtil", "Could not get applicationInfo from package: ".concat(packageName));
                    } else {
                        int i6 = applicationInfo.uid;
                        workSource = new WorkSource();
                        Method method2 = g.f9240b;
                        if (method2 != null) {
                            try {
                                method2.invoke(workSource, Integer.valueOf(i6), packageName);
                            } catch (Exception e9) {
                                Log.wtf("WorkSourceUtil", "Unable to assign blame through WorkSource", e9);
                            }
                        } else {
                            Method method3 = g.a;
                            if (method3 != null) {
                                try {
                                    method3.invoke(workSource, Integer.valueOf(i6));
                                } catch (Exception e10) {
                                    Log.wtf("WorkSourceUtil", "Unable to assign blame through WorkSource", e10);
                                }
                            }
                        }
                    }
                } catch (PackageManager.NameNotFoundException unused) {
                    Log.e("WorkSourceUtil", "Could not find package: ".concat(packageName));
                }
            }
            if (workSource != null) {
                try {
                    this.f10783b.setWorkSource(workSource);
                } catch (ArrayIndexOutOfBoundsException | IllegalArgumentException e11) {
                    Log.wtf("WakeLock", e11.toString());
                }
            }
        }
        ScheduledExecutorService scheduledExecutorService = f10781o;
        if (scheduledExecutorService == null) {
            synchronized (f10782p) {
                try {
                    scheduledExecutorService = f10781o;
                    if (scheduledExecutorService == null) {
                        scheduledExecutorService = Executors.unconfigurableScheduledExecutorService(Executors.newScheduledThreadPool(1));
                        f10781o = scheduledExecutorService;
                    }
                } finally {
                }
            }
        }
        this.f10792m = scheduledExecutorService;
    }

    public final void a(long j) {
        this.f10791l.incrementAndGet();
        long j5 = f10780n;
        long j7 = LongCompanionObject.MAX_VALUE;
        long max = Math.max(Math.min(LongCompanionObject.MAX_VALUE, j5), 1L);
        if (j > 0) {
            max = Math.min(j, max);
        }
        synchronized (this.a) {
            try {
                if (!b()) {
                    this.f10789h = eg.a.f8083d;
                    this.f10783b.acquire();
                    this.f10790i.getClass();
                    SystemClock.elapsedRealtime();
                }
                this.f10784c++;
                if (this.f10788g) {
                    TextUtils.isEmpty(null);
                }
                b bVar = (b) this.k.get(null);
                if (bVar == null) {
                    bVar = new b();
                    this.k.put(null, bVar);
                }
                bVar.a++;
                this.f10790i.getClass();
                long elapsedRealtime = SystemClock.elapsedRealtime();
                if (LongCompanionObject.MAX_VALUE - elapsedRealtime > max) {
                    j7 = elapsedRealtime + max;
                }
                if (j7 > this.f10786e) {
                    this.f10786e = j7;
                    ScheduledFuture scheduledFuture = this.f10785d;
                    if (scheduledFuture != null) {
                        scheduledFuture.cancel(false);
                    }
                    this.f10785d = this.f10792m.schedule(new h(21, this), max, TimeUnit.MILLISECONDS);
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final boolean b() {
        boolean z5;
        synchronized (this.a) {
            z5 = this.f10784c > 0;
        }
        return z5;
    }

    public final void c() {
        if (this.f10791l.decrementAndGet() < 0) {
            Log.e("WakeLock", String.valueOf(this.j).concat(" release without a matched acquire!"));
        }
        synchronized (this.a) {
            try {
                if (this.f10788g) {
                    TextUtils.isEmpty(null);
                }
                if (this.k.containsKey(null)) {
                    b bVar = (b) this.k.get(null);
                    if (bVar != null) {
                        int i5 = bVar.a - 1;
                        bVar.a = i5;
                        if (i5 == 0) {
                            this.k.remove(null);
                        }
                    }
                } else {
                    Log.w("WakeLock", String.valueOf(this.j).concat(" counter does not exist"));
                }
                e();
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final void d() {
        HashSet hashSet = this.f10787f;
        if (hashSet.isEmpty()) {
            return;
        }
        ArrayList arrayList = new ArrayList(hashSet);
        hashSet.clear();
        if (arrayList.size() <= 0) {
            return;
        }
        arrayList.get(0).getClass();
        throw new ClassCastException();
    }

    public final void e() {
        synchronized (this.a) {
            try {
                if (b()) {
                    if (this.f10788g) {
                        int i5 = this.f10784c - 1;
                        this.f10784c = i5;
                        if (i5 > 0) {
                            return;
                        }
                    } else {
                        this.f10784c = 0;
                    }
                    d();
                    Iterator it = this.k.values().iterator();
                    while (it.hasNext()) {
                        ((b) it.next()).a = 0;
                    }
                    this.k.clear();
                    ScheduledFuture scheduledFuture = this.f10785d;
                    if (scheduledFuture != null) {
                        scheduledFuture.cancel(false);
                        this.f10785d = null;
                        this.f10786e = 0L;
                    }
                    if (this.f10783b.isHeld()) {
                        try {
                            try {
                                this.f10783b.release();
                                if (this.f10789h != null) {
                                    this.f10789h = null;
                                }
                            } catch (RuntimeException e9) {
                                if (!e9.getClass().equals(RuntimeException.class)) {
                                    throw e9;
                                }
                                Log.e("WakeLock", String.valueOf(this.j).concat(" failed to release!"), e9);
                                if (this.f10789h != null) {
                                    this.f10789h = null;
                                }
                            }
                        } catch (Throwable th2) {
                            if (this.f10789h != null) {
                                this.f10789h = null;
                            }
                            throw th2;
                        }
                    } else {
                        Log.e("WakeLock", String.valueOf(this.j).concat(" should be held!"));
                    }
                }
            } catch (Throwable th3) {
                throw th3;
            }
        }
    }
}
