package je;

import com.google.android.exoplayer2.upstream.cache.SimpleCache;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.OutputStream;
import ke.d0;

/* loaded from: classes3.dex */
public final class d {
    public final b a;

    /* renamed from: b, reason: collision with root package name */
    public final long f12716b;

    /* renamed from: c, reason: collision with root package name */
    public final int f12717c;

    /* renamed from: d, reason: collision with root package name */
    public ie.p f12718d;

    /* renamed from: e, reason: collision with root package name */
    public long f12719e;

    /* renamed from: f, reason: collision with root package name */
    public File f12720f;

    /* renamed from: g, reason: collision with root package name */
    public OutputStream f12721g;

    /* renamed from: h, reason: collision with root package name */
    public long f12722h;

    /* renamed from: i, reason: collision with root package name */
    public long f12723i;
    public r j;

    public d(SimpleCache simpleCache) {
        simpleCache.getClass();
        this.a = simpleCache;
        this.f12716b = 104857600L;
        this.f12717c = 20480;
    }

    public final void a() {
        OutputStream outputStream = this.f12721g;
        if (outputStream == null) {
            return;
        }
        try {
            outputStream.flush();
            d0.g(this.f12721g);
            this.f12721g = null;
            File file = this.f12720f;
            this.f12720f = null;
            b bVar = this.a;
            long j = this.f12722h;
            SimpleCache simpleCache = (SimpleCache) bVar;
            synchronized (simpleCache) {
                if (file.exists()) {
                    if (j == 0) {
                        file.delete();
                        return;
                    }
                    t b10 = t.b(file, j, -9223372036854775807L, simpleCache.f5568c);
                    b10.getClass();
                    k w5 = simpleCache.f5568c.w(b10.f12734d);
                    w5.getClass();
                    ke.b.k(w5.a(b10.f12735e, b10.f12736i));
                    long a = n.a(w5.f12744e);
                    if (a != -1) {
                        ke.b.k(b10.f12735e + b10.f12736i <= a);
                    }
                    if (simpleCache.f5569d != null) {
                        try {
                            simpleCache.f5569d.e(b10.f12736i, b10.f12739x, file.getName());
                        } catch (IOException e9) {
                            throw new a(e9);
                        }
                    }
                    simpleCache.b(b10);
                    try {
                        simpleCache.f5568c.O();
                        simpleCache.notifyAll();
                    } catch (IOException e10) {
                        throw new a(e10);
                    }
                }
            }
        } catch (Throwable th2) {
            d0.g(this.f12721g);
            this.f12721g = null;
            File file2 = this.f12720f;
            this.f12720f = null;
            file2.delete();
            throw th2;
        }
    }

    public final void b(ie.p pVar) {
        File c6;
        long j = pVar.f10716g;
        long min = j == -1 ? -1L : Math.min(j - this.f12723i, this.f12719e);
        b bVar = this.a;
        String str = pVar.f10717h;
        int i5 = d0.a;
        long j5 = pVar.f10715f + this.f12723i;
        SimpleCache simpleCache = (SimpleCache) bVar;
        synchronized (simpleCache) {
            try {
                simpleCache.d();
                k w5 = simpleCache.f5568c.w(str);
                w5.getClass();
                ke.b.k(w5.a(j5, min));
                if (!simpleCache.a.exists()) {
                    SimpleCache.e(simpleCache.a);
                    simpleCache.l();
                }
                q qVar = simpleCache.f5567b;
                if (min != -1) {
                    qVar.a(simpleCache, min);
                } else {
                    qVar.getClass();
                }
                File file = new File(simpleCache.a, Integer.toString(simpleCache.f5571f.nextInt(10)));
                if (!file.exists()) {
                    SimpleCache.e(file);
                }
                c6 = t.c(file, w5.a, j5, System.currentTimeMillis());
            } catch (Throwable th2) {
                throw th2;
            }
        }
        this.f12720f = c6;
        FileOutputStream fileOutputStream = new FileOutputStream(this.f12720f);
        if (this.f12717c > 0) {
            r rVar = this.j;
            if (rVar == null) {
                this.j = new r(fileOutputStream, this.f12717c);
            } else {
                rVar.c(fileOutputStream);
            }
            this.f12721g = this.j;
        } else {
            this.f12721g = fileOutputStream;
        }
        this.f12722h = 0L;
    }
}
