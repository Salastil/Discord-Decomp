package io.sentry.cache.tape;

import androidx.recyclerview.widget.RecyclerView;
import io.sentry.Breadcrumb;
import java.io.BufferedWriter;
import java.io.OutputStreamWriter;
import java.nio.channels.FileChannel;
import java.util.Iterator;

/* loaded from: classes3.dex */
public final class e extends f {

    /* renamed from: d, reason: collision with root package name */
    public final i f11446d;

    /* renamed from: e, reason: collision with root package name */
    public final c f11447e = new c();

    /* renamed from: i, reason: collision with root package name */
    public final gj.c f11448i;

    public e(i iVar, gj.c cVar) {
        this.f11446d = iVar;
        this.f11448i = cVar;
    }

    @Override // io.sentry.cache.tape.f
    public final void clear() {
        this.f11446d.clear();
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        this.f11446d.close();
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r28v1 */
    /* JADX WARN: Type inference failed for: r28v2 */
    /* JADX WARN: Type inference failed for: r28v3, types: [long] */
    /* JADX WARN: Type inference failed for: r28v4 */
    @Override // io.sentry.cache.tape.f
    public final void i(Object obj) {
        long j;
        boolean z5;
        long j5;
        long j7;
        long j10;
        long j11;
        c cVar = this.f11447e;
        cVar.reset();
        gj.c cVar2 = this.f11448i;
        cVar2.getClass();
        Breadcrumb breadcrumb = (Breadcrumb) obj;
        BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(cVar, io.sentry.cache.g.f11441c));
        try {
            ((io.sentry.cache.g) cVar2.f9329e).a.getSerializer().a(breadcrumb, bufferedWriter);
            bufferedWriter.close();
            byte[] c6 = cVar.c();
            int size = cVar.size();
            i iVar = this.f11446d;
            iVar.getClass();
            byte[] bArr = iVar.f11461y;
            if (c6 == null) {
                throw new NullPointerException("data == null");
            }
            if (size < 0 || size > c6.length) {
                throw new IndexOutOfBoundsException();
            }
            if (iVar.G) {
                throw new IllegalStateException("closed");
            }
            int i5 = iVar.F;
            if (i5 != -1 && iVar.f11458v == i5) {
                iVar.d0(1);
            }
            long j12 = size + 4;
            long j13 = iVar.f11457i;
            long j14 = 32;
            if (iVar.f11458v == 0) {
                z5 = 1;
                j = 4;
                j5 = 32;
            } else {
                g gVar = iVar.f11460x;
                long j15 = gVar.a;
                int i6 = gVar.f11450b;
                j = 4;
                long j16 = iVar.f11459w.a;
                if (j15 >= j16) {
                    j5 = (j15 - j16) + 4 + i6 + 32;
                    z5 = 1;
                } else {
                    z5 = 1;
                    j5 = (((j15 + 4) + i6) + j13) - j16;
                }
            }
            long j17 = j13 - j5;
            if (j17 < j12) {
                do {
                    j17 += j13;
                    j13 <<= z5;
                } while (j17 < j12);
                iVar.f11455d.setLength(j13);
                iVar.f11455d.getChannel().force(z5);
                long n02 = iVar.n0(iVar.f11460x.a + j + r4.f11450b);
                if (n02 <= iVar.f11459w.a) {
                    FileChannel channel = iVar.f11455d.getChannel();
                    channel.position(iVar.f11457i);
                    j7 = n02 - 32;
                    if (channel.transferTo(32L, j7, channel) != j7) {
                        throw new AssertionError("Copied insufficient number of bytes!");
                    }
                } else {
                    j7 = 0;
                }
                long j18 = iVar.f11460x.a;
                long j19 = iVar.f11459w.a;
                if (j18 < j19) {
                    j11 = 0;
                    long j20 = (iVar.f11457i + j18) - 32;
                    j10 = j13;
                    iVar.o0(j10, iVar.f11458v, j19, j20);
                    iVar.f11460x = new g(j20, iVar.f11460x.f11450b);
                } else {
                    j10 = j13;
                    j11 = 0;
                    iVar.o0(j10, iVar.f11458v, j19, j18);
                }
                iVar.f11457i = j10;
                long j21 = 32;
                long j22 = j7;
                while (j22 > j11) {
                    int min = (int) Math.min(j22, RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT);
                    iVar.m0(j21, i.H, min);
                    long j23 = min;
                    j22 -= j23;
                    j21 += j23;
                }
            }
            boolean z6 = iVar.f11458v == 0;
            if (!z6) {
                j14 = iVar.n0(iVar.f11460x.a + j + r4.f11450b);
            }
            long j24 = j14;
            g gVar2 = new g(j24, size);
            i.p0(bArr, 0, size);
            iVar.m0(j24, bArr, 4);
            iVar.m0(j24 + j, c6, size);
            iVar.o0(iVar.f11457i, iVar.f11458v + 1, z6 ? j24 : iVar.f11459w.a, j24);
            iVar.f11460x = gVar2;
            iVar.f11458v++;
            iVar.E++;
            if (z6) {
                iVar.f11459w = gVar2;
            }
        } finally {
        }
    }

    @Override // java.lang.Iterable
    public final Iterator iterator() {
        i iVar = this.f11446d;
        iVar.getClass();
        return new d(this, new h(iVar));
    }

    @Override // io.sentry.cache.tape.f
    public final int size() {
        return this.f11446d.f11458v;
    }

    public final String toString() {
        return "FileObjectQueue{queueFile=" + this.f11446d + '}';
    }

    @Override // io.sentry.cache.tape.f
    public final void x(int i5) {
        this.f11446d.d0(i5);
    }
}
