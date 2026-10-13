package bj;

import java.util.concurrent.TimeUnit;
import java.util.regex.Pattern;
import zi.j;

/* loaded from: classes3.dex */
public final class d {

    /* renamed from: d, reason: collision with root package name */
    public static final long f3029d = TimeUnit.HOURS.toMillis(24);

    /* renamed from: e, reason: collision with root package name */
    public static final long f3030e = TimeUnit.MINUTES.toMillis(30);
    public final j a;

    /* renamed from: b, reason: collision with root package name */
    public long f3031b;

    /* renamed from: c, reason: collision with root package name */
    public int f3032c;

    public d() {
        if (wi.d.f19837e == null) {
            Pattern pattern = j.f21266c;
            wi.d.f19837e = new wi.d(3);
        }
        wi.d dVar = wi.d.f19837e;
        if (j.f21267d == null) {
            j.f21267d = new j(dVar);
        }
        this.a = j.f21267d;
    }

    public final synchronized boolean a() {
        boolean z5;
        if (this.f3032c != 0) {
            this.a.a.getClass();
            z5 = System.currentTimeMillis() > this.f3031b;
        }
        return z5;
    }

    public final synchronized void b(int i5) {
        long min;
        if ((i5 >= 200 && i5 < 300) || i5 == 401 || i5 == 404) {
            synchronized (this) {
                this.f3032c = 0;
            }
            return;
        }
        this.f3032c++;
        synchronized (this) {
            if (i5 == 429 || (i5 >= 500 && i5 < 600)) {
                double pow = Math.pow(2.0d, this.f3032c);
                this.a.getClass();
                min = (long) Math.min(pow + ((long) (Math.random() * 1000.0d)), f3030e);
            } else {
                min = f3029d;
            }
            this.a.a.getClass();
            this.f3031b = System.currentTimeMillis() + min;
        }
        return;
    }
}
