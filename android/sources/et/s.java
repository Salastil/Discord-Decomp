package et;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class s {
    public final byte[] a;

    /* renamed from: b, reason: collision with root package name */
    public int f8275b;

    /* renamed from: c, reason: collision with root package name */
    public int f8276c;

    /* renamed from: d, reason: collision with root package name */
    public boolean f8277d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f8278e;

    /* renamed from: f, reason: collision with root package name */
    public s f8279f;

    /* renamed from: g, reason: collision with root package name */
    public s f8280g;

    public s() {
        this.a = new byte[8192];
        this.f8278e = true;
        this.f8277d = false;
    }

    public final s a() {
        s sVar = this.f8279f;
        if (sVar == this) {
            sVar = null;
        }
        s sVar2 = this.f8280g;
        Intrinsics.checkNotNull(sVar2);
        sVar2.f8279f = this.f8279f;
        s sVar3 = this.f8279f;
        Intrinsics.checkNotNull(sVar3);
        sVar3.f8280g = this.f8280g;
        this.f8279f = null;
        this.f8280g = null;
        return sVar;
    }

    public final void b(s segment) {
        Intrinsics.checkNotNullParameter(segment, "segment");
        segment.f8280g = this;
        segment.f8279f = this.f8279f;
        s sVar = this.f8279f;
        Intrinsics.checkNotNull(sVar);
        sVar.f8280g = segment;
        this.f8279f = segment;
    }

    public final s c() {
        this.f8277d = true;
        return new s(this.a, this.f8275b, this.f8276c, true, false);
    }

    public final void d(s sink, int i5) {
        Intrinsics.checkNotNullParameter(sink, "sink");
        boolean z5 = sink.f8278e;
        byte[] bArr = sink.a;
        if (!z5) {
            throw new IllegalStateException("only owner can write");
        }
        int i6 = sink.f8276c;
        int i10 = i6 + i5;
        if (i10 > 8192) {
            if (sink.f8277d) {
                throw new IllegalArgumentException();
            }
            int i11 = sink.f8275b;
            if (i10 - i11 > 8192) {
                throw new IllegalArgumentException();
            }
            kotlin.collections.u.c(0, i11, i6, bArr, bArr);
            sink.f8276c -= sink.f8275b;
            sink.f8275b = 0;
        }
        int i12 = sink.f8276c;
        int i13 = this.f8275b;
        kotlin.collections.u.c(i12, i13, i13 + i5, this.a, bArr);
        sink.f8276c += i5;
        this.f8275b += i5;
    }

    public s(byte[] data, int i5, int i6, boolean z5, boolean z6) {
        Intrinsics.checkNotNullParameter(data, "data");
        this.a = data;
        this.f8275b = i5;
        this.f8276c = i6;
        this.f8277d = z5;
        this.f8278e = z6;
    }
}
