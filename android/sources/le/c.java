package le;

import java.util.Arrays;

/* loaded from: classes3.dex */
public final class c {
    public long a;

    /* renamed from: b, reason: collision with root package name */
    public long f13860b;

    /* renamed from: c, reason: collision with root package name */
    public long f13861c;

    /* renamed from: d, reason: collision with root package name */
    public long f13862d;

    /* renamed from: e, reason: collision with root package name */
    public long f13863e;

    /* renamed from: f, reason: collision with root package name */
    public long f13864f;

    /* renamed from: g, reason: collision with root package name */
    public final boolean[] f13865g = new boolean[15];

    /* renamed from: h, reason: collision with root package name */
    public int f13866h;

    public final boolean a() {
        return this.f13862d > 15 && this.f13866h == 0;
    }

    public final void b(long j) {
        long j5 = this.f13862d;
        if (j5 == 0) {
            this.a = j;
        } else if (j5 == 1) {
            long j7 = j - this.a;
            this.f13860b = j7;
            this.f13864f = j7;
            this.f13863e = 1L;
        } else {
            long j10 = j - this.f13861c;
            int i5 = (int) (j5 % 15);
            long abs = Math.abs(j10 - this.f13860b);
            boolean[] zArr = this.f13865g;
            if (abs <= 1000000) {
                this.f13863e++;
                this.f13864f += j10;
                if (zArr[i5]) {
                    zArr[i5] = false;
                    this.f13866h--;
                }
            } else if (!zArr[i5]) {
                zArr[i5] = true;
                this.f13866h++;
            }
        }
        this.f13862d++;
        this.f13861c = j;
    }

    public final void c() {
        this.f13862d = 0L;
        this.f13863e = 0L;
        this.f13864f = 0L;
        this.f13866h = 0;
        Arrays.fill(this.f13865g, false);
    }
}
