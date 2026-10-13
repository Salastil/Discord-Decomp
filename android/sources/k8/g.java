package k8;

import android.os.StatFs;
import android.os.SystemClock;
import bg.s;
import com.facebook.cache.common.CacheKey;
import java.io.File;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.HashSet;
import java.util.Iterator;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.locks.ReentrantLock;
import k2.r;
import zo.c0;

/* loaded from: classes3.dex */
public final class g implements i {

    /* renamed from: m, reason: collision with root package name */
    public static final long f13212m = TimeUnit.HOURS.toMillis(2);

    /* renamed from: n, reason: collision with root package name */
    public static final long f13213n = TimeUnit.MINUTES.toMillis(30);
    public final long a;

    /* renamed from: b, reason: collision with root package name */
    public final long f13214b;

    /* renamed from: c, reason: collision with root package name */
    public long f13215c;

    /* renamed from: d, reason: collision with root package name */
    public final HashSet f13216d;

    /* renamed from: e, reason: collision with root package name */
    public long f13217e;

    /* renamed from: f, reason: collision with root package name */
    public final t8.a f13218f;

    /* renamed from: g, reason: collision with root package name */
    public final h f13219g;

    /* renamed from: h, reason: collision with root package name */
    public final r8.c f13220h;

    /* renamed from: i, reason: collision with root package name */
    public final j8.b f13221i;
    public final cd.i j;
    public final v8.c k;

    /* renamed from: l, reason: collision with root package name */
    public final Object f13222l = new Object();

    public g(h hVar, r8.c cVar, f fVar, j8.c cVar2, j8.b bVar, ExecutorService executorService) {
        t8.a aVar;
        this.a = fVar.a;
        long j = fVar.f13211b;
        this.f13214b = j;
        this.f13215c = j;
        t8.a aVar2 = t8.a.f18229h;
        synchronized (t8.a.class) {
            try {
                if (t8.a.f18229h == null) {
                    t8.a.f18229h = new t8.a();
                }
                aVar = t8.a.f18229h;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        this.f13218f = aVar;
        this.f13219g = hVar;
        this.f13220h = cVar;
        this.f13217e = -1L;
        this.f13221i = bVar;
        cd.i iVar = new cd.i();
        iVar.a = false;
        iVar.f3434b = -1L;
        iVar.f3435c = -1L;
        this.j = iVar;
        this.k = v8.c.a;
        this.f13216d = new HashSet();
        new CountDownLatch(0);
    }

    public final void a() {
        synchronized (this.f13222l) {
            try {
                this.f13219g.e();
                this.f13216d.clear();
            } catch (IOException | NullPointerException e9) {
                j8.b bVar = this.f13221i;
                e9.getMessage();
                bVar.getClass();
            }
            cd.i iVar = this.j;
            synchronized (iVar) {
                iVar.a = false;
                iVar.f3435c = -1L;
                iVar.f3434b = -1L;
            }
        }
    }

    public final void b(long j) {
        h hVar = this.f13219g;
        try {
            ArrayList d6 = d(hVar.c());
            cd.i iVar = this.j;
            long a = iVar.a() - j;
            Iterator it = d6.iterator();
            int i5 = 0;
            long j5 = 0;
            while (it.hasNext()) {
                a aVar = (a) it.next();
                if (j5 > a) {
                    break;
                }
                long d7 = hVar.d(aVar);
                this.f13216d.remove(aVar.a);
                if (d7 > 0) {
                    i5++;
                    j5 += d7;
                    j.b().e();
                }
            }
            iVar.b(-j5, -i5);
            hVar.b();
        } catch (IOException e9) {
            e9.getMessage();
            this.f13221i.getClass();
            throw e9;
        }
    }

    public final i8.a c(CacheKey cacheKey) {
        i8.a aVar;
        j b10 = j.b();
        b10.f13231e = cacheKey;
        try {
            synchronized (this.f13222l) {
                try {
                    ArrayList z5 = c0.z(cacheKey);
                    String str = null;
                    aVar = null;
                    for (int i5 = 0; i5 < z5.size() && (aVar = this.f13219g.a(cacheKey, (str = (String) z5.get(i5)))) == null; i5++) {
                    }
                    if (aVar == null) {
                        this.f13216d.remove(str);
                    } else {
                        str.getClass();
                        this.f13216d.add(str);
                    }
                } finally {
                }
            }
            return aVar;
        } catch (IOException unused) {
            this.f13221i.getClass();
            return null;
        } finally {
            b10.e();
        }
    }

    public final ArrayList d(Collection collection) {
        this.k.getClass();
        long currentTimeMillis = System.currentTimeMillis() + f13212m;
        ArrayList arrayList = new ArrayList(collection.size());
        ArrayList arrayList2 = new ArrayList(collection.size());
        Iterator it = collection.iterator();
        while (it.hasNext()) {
            a aVar = (a) it.next();
            if (aVar.a() > currentTimeMillis) {
                arrayList.add(aVar);
            } else {
                arrayList2.add(aVar);
            }
        }
        this.f13220h.getClass();
        Collections.sort(arrayList2, new s(7));
        arrayList.addAll(arrayList2);
        return arrayList;
    }

    public final boolean e(CacheKey cacheKey) {
        synchronized (this.f13222l) {
            if (f(cacheKey)) {
                return true;
            }
            try {
                ArrayList z5 = c0.z(cacheKey);
                for (int i5 = 0; i5 < z5.size(); i5++) {
                    String str = (String) z5.get(i5);
                    if (this.f13219g.g(cacheKey, str)) {
                        this.f13216d.add(str);
                        return true;
                    }
                }
                return false;
            } catch (IOException unused) {
                return false;
            }
        }
    }

    public final boolean f(CacheKey cacheKey) {
        synchronized (this.f13222l) {
            try {
                ArrayList z5 = c0.z(cacheKey);
                for (int i5 = 0; i5 < z5.size(); i5++) {
                    if (this.f13216d.contains((String) z5.get(i5))) {
                        return true;
                    }
                }
                return false;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:40:0x0078, code lost:
    
        p8.a.d(k8.g.class, "Failed to delete temp file");
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final i8.a g(CacheKey cacheKey, cc.i iVar) {
        String x5;
        i8.a m5;
        j b10 = j.b();
        b10.f13231e = cacheKey;
        synchronized (this.f13222l) {
            x5 = c0.x(cacheKey);
            try {
            } finally {
                b10.e();
            }
        }
        try {
            r j = j(x5, cacheKey);
            boolean z5 = true;
            try {
                j.Q(iVar);
                synchronized (this.f13222l) {
                    m5 = j.m();
                    this.f13216d.add(x5);
                    this.j.b(m5.a.length(), 1L);
                }
                m5.a.length();
                this.j.a();
                return m5;
            } finally {
                File file = (File) j.f13143i;
                if (file.exists() && !file.delete()) {
                    z5 = false;
                }
            }
        } catch (IOException e9) {
            p8.a.e(g.class, "Failed inserting a file into the cache", e9);
            throw e9;
        }
    }

    public final boolean h() {
        boolean z5;
        boolean z6;
        Iterator it;
        boolean z7;
        int i5;
        long j;
        long j5;
        this.k.getClass();
        long currentTimeMillis = System.currentTimeMillis();
        cd.i iVar = this.j;
        synchronized (iVar) {
            z5 = iVar.a;
        }
        boolean z8 = false;
        long j7 = -1;
        if (z5) {
            long j10 = this.f13217e;
            if (j10 != -1 && currentTimeMillis - j10 <= f13213n) {
                return false;
            }
        }
        this.k.getClass();
        long currentTimeMillis2 = System.currentTimeMillis();
        long j11 = f13212m + currentTimeMillis2;
        try {
            it = this.f13219g.c().iterator();
            z7 = false;
            i5 = 0;
            j = 0;
        } catch (IOException e9) {
            e = e9;
            z6 = z8;
        }
        while (true) {
            z6 = z8;
            if (!it.hasNext()) {
                break;
            }
            try {
                a aVar = (a) it.next();
                i5++;
                if (aVar.f13198c < 0) {
                    aVar.f13198c = aVar.f13197b.a.length();
                }
                j += aVar.f13198c;
                if (aVar.a() > j11) {
                    if (aVar.f13198c < 0) {
                        aVar.f13198c = aVar.f13197b.a.length();
                    }
                    j7 = Math.max(aVar.a() - currentTimeMillis2, j7);
                    z7 = true;
                }
                z8 = z6;
            } catch (IOException e10) {
                e = e10;
            }
            e = e10;
            j8.b bVar = this.f13221i;
            e.getMessage();
            bVar.getClass();
            return z6;
        }
        if (z7) {
            this.f13221i.getClass();
        }
        cd.i iVar2 = this.j;
        synchronized (iVar2) {
            j5 = iVar2.f3435c;
        }
        long j12 = i5;
        if (j5 != j12 || this.j.a() != j) {
            cd.i iVar3 = this.j;
            synchronized (iVar3) {
                iVar3.f3435c = j12;
                iVar3.f3434b = j;
                iVar3.a = true;
            }
        }
        this.f13217e = currentTimeMillis2;
        return true;
    }

    public final void i(CacheKey cacheKey) {
        synchronized (this.f13222l) {
            try {
                ArrayList z5 = c0.z(cacheKey);
                for (int i5 = 0; i5 < z5.size(); i5++) {
                    String str = (String) z5.get(i5);
                    this.f13219g.remove(str);
                    this.f13216d.remove(str);
                }
            } catch (IOException e9) {
                j8.b bVar = this.f13221i;
                e9.getMessage();
                bVar.getClass();
            }
        }
    }

    public final r j(String str, CacheKey cacheKey) {
        synchronized (this.f13222l) {
            boolean h6 = h();
            k();
            long a = this.j.a();
            if (a > this.f13215c && !h6) {
                cd.i iVar = this.j;
                synchronized (iVar) {
                    iVar.a = false;
                    iVar.f3435c = -1L;
                    iVar.f3434b = -1L;
                }
                h();
            }
            long j = this.f13215c;
            if (a > j) {
                b((j * 9) / 10);
            }
        }
        return this.f13219g.f(cacheKey, str);
    }

    public final void k() {
        char c6 = this.f13219g.isExternal() ? (char) 2 : (char) 1;
        t8.a aVar = this.f13218f;
        long a = this.f13214b - this.j.a();
        aVar.a();
        aVar.a();
        ReentrantLock reentrantLock = aVar.f18235f;
        if (reentrantLock.tryLock()) {
            try {
                if (SystemClock.uptimeMillis() - aVar.f18234e > t8.a.f18230i) {
                    aVar.a = t8.a.b(aVar.a, aVar.f18231b);
                    aVar.f18232c = t8.a.b(aVar.f18232c, aVar.f18233d);
                    aVar.f18234e = SystemClock.uptimeMillis();
                }
            } finally {
                reentrantLock.unlock();
            }
        }
        StatFs statFs = c6 == 1 ? aVar.a : aVar.f18232c;
        long availableBlocksLong = statFs != null ? statFs.getAvailableBlocksLong() * statFs.getBlockSizeLong() : 0L;
        if (availableBlocksLong <= 0 || availableBlocksLong < a) {
            this.f13215c = this.a;
        } else {
            this.f13215c = this.f13214b;
        }
    }
}
