package hc;

/* loaded from: classes3.dex */
public final class j {
    public final ie.q a;

    /* renamed from: b, reason: collision with root package name */
    public final long f9748b;

    /* renamed from: c, reason: collision with root package name */
    public final long f9749c;

    /* renamed from: d, reason: collision with root package name */
    public final long f9750d;

    /* renamed from: e, reason: collision with root package name */
    public final long f9751e;

    /* renamed from: f, reason: collision with root package name */
    public final int f9752f;

    /* renamed from: g, reason: collision with root package name */
    public final boolean f9753g;

    /* renamed from: h, reason: collision with root package name */
    public final long f9754h;

    /* renamed from: i, reason: collision with root package name */
    public int f9755i;
    public boolean j;

    public j(ie.q qVar, int i5, int i6, int i10, int i11, boolean z5) {
        a(i10, 0, "bufferForPlaybackMs", "0");
        a(i11, 0, "bufferForPlaybackAfterRebufferMs", "0");
        a(i5, i10, "minBufferMs", "bufferForPlaybackMs");
        a(i5, i11, "minBufferMs", "bufferForPlaybackAfterRebufferMs");
        a(i6, i5, "maxBufferMs", "minBufferMs");
        a(0, 0, "backBufferDurationMs", "0");
        this.a = qVar;
        this.f9748b = ke.d0.I(i5);
        this.f9749c = ke.d0.I(i6);
        this.f9750d = ke.d0.I(i10);
        this.f9751e = ke.d0.I(i11);
        this.f9752f = -1;
        this.f9755i = 13107200;
        this.f9753g = z5;
        this.f9754h = ke.d0.I(0);
    }

    public static void a(int i5, int i6, String str, String str2) {
        ke.b.f(str + " cannot be less than " + str2, i5 >= i6);
    }

    public final void b(boolean z5) {
        int i5 = this.f9752f;
        if (i5 == -1) {
            i5 = 13107200;
        }
        this.f9755i = i5;
        this.j = false;
        if (z5) {
            ie.q qVar = this.a;
            synchronized (qVar) {
                if (qVar.a) {
                    qVar.a(0);
                }
            }
        }
    }

    public final boolean c(long j, float f2) {
        int i5;
        long j5 = this.f9749c;
        ie.q qVar = this.a;
        synchronized (qVar) {
            i5 = qVar.f10724d * qVar.f10722b;
        }
        boolean z5 = true;
        boolean z6 = i5 >= this.f9755i;
        long j7 = this.f9748b;
        if (f2 > 1.0f) {
            j7 = Math.min(ke.d0.u(j7, f2), j5);
        }
        if (j < Math.max(j7, 500000L)) {
            if (!this.f9753g && z6) {
                z5 = false;
            }
            this.j = z5;
            if (!z5 && j < 500000) {
                ke.b.N("DefaultLoadControl", "Target buffer size reached with less than 500ms of buffered media data.");
            }
        } else if (j >= j5 || z6) {
            this.j = false;
        }
        return this.j;
    }
}
