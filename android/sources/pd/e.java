package pd;

import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.source.LoadEventInfo;
import com.google.android.exoplayer2.upstream.DataSource;
import ie.h0;
import ie.p;
import ie.s0;

/* loaded from: classes3.dex */
public abstract class e implements h0 {
    public final long E;
    public final s0 F;

    /* renamed from: d, reason: collision with root package name */
    public final long f16360d = LoadEventInfo.f5429c.getAndIncrement();

    /* renamed from: e, reason: collision with root package name */
    public final p f16361e;

    /* renamed from: i, reason: collision with root package name */
    public final int f16362i;

    /* renamed from: v, reason: collision with root package name */
    public final Format f16363v;

    /* renamed from: w, reason: collision with root package name */
    public final int f16364w;

    /* renamed from: x, reason: collision with root package name */
    public final Object f16365x;

    /* renamed from: y, reason: collision with root package name */
    public final long f16366y;

    public e(DataSource dataSource, p pVar, int i5, Format format, int i6, Object obj, long j, long j5) {
        this.F = new s0(dataSource);
        this.f16361e = pVar;
        this.f16362i = i5;
        this.f16363v = format;
        this.f16364w = i6;
        this.f16365x = obj;
        this.f16366y = j;
        this.E = j5;
    }
}
