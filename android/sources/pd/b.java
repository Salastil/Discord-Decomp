package pd;

import java.util.NoSuchElementException;

/* loaded from: classes3.dex */
public abstract class b implements m {

    /* renamed from: d, reason: collision with root package name */
    public final long f16345d;

    /* renamed from: e, reason: collision with root package name */
    public final long f16346e;

    /* renamed from: i, reason: collision with root package name */
    public long f16347i;

    public b(long j, long j5) {
        this.f16345d = j;
        this.f16346e = j5;
        this.f16347i = j - 1;
    }

    public final void a() {
        long j = this.f16347i;
        if (j < this.f16345d || j > this.f16346e) {
            throw new NoSuchElementException();
        }
    }

    @Override // pd.m
    public final boolean next() {
        long j = this.f16347i + 1;
        this.f16347i = j;
        return !(j > this.f16346e);
    }
}
