package qa;

import com.facebook.common.references.CloseableReference;
import java.io.IOException;
import java.io.OutputStream;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class r extends OutputStream {

    /* renamed from: d, reason: collision with root package name */
    public final p f16713d;

    /* renamed from: e, reason: collision with root package name */
    public s8.b f16714e;

    /* renamed from: i, reason: collision with root package name */
    public int f16715i;

    public r(p pool, int i5) {
        Intrinsics.checkNotNullParameter(pool, "pool");
        if (i5 <= 0) {
            throw new IllegalStateException("Check failed.");
        }
        this.f16713d = pool;
        this.f16715i = 0;
        this.f16714e = CloseableReference.C(pool.get(i5), pool, CloseableReference.f4407x);
    }

    public final void c() {
        try {
            super.close();
        } catch (IOException e9) {
            o8.h.h(e9);
            throw null;
        }
    }

    @Override // java.io.OutputStream, java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        CloseableReference.l(this.f16714e);
        this.f16714e = null;
        this.f16715i = -1;
        c();
    }

    public final q f() {
        if (!CloseableReference.t(this.f16714e)) {
            throw new ai.k("OutputStream no longer valid");
        }
        s8.b bVar = this.f16714e;
        if (bVar != null) {
            return new q(bVar, this.f16715i);
        }
        throw new IllegalStateException("Required value was null.");
    }

    @Override // java.io.OutputStream
    public final void write(int i5) {
        write(new byte[]{(byte) i5});
    }

    @Override // java.io.OutputStream
    public final void write(byte[] buffer, int i5, int i6) {
        Intrinsics.checkNotNullParameter(buffer, "buffer");
        if (i5 >= 0 && i6 >= 0 && i5 + i6 <= buffer.length) {
            if (CloseableReference.t(this.f16714e)) {
                int i10 = this.f16715i + i6;
                if (CloseableReference.t(this.f16714e)) {
                    s8.b bVar = this.f16714e;
                    if (bVar != null) {
                        Intrinsics.checkNotNull(bVar);
                        if (i10 > ((o) bVar.q()).r()) {
                            p pVar = this.f16713d;
                            Object obj = pVar.get(i10);
                            Intrinsics.checkNotNullExpressionValue(obj, "get(...)");
                            o oVar = (o) obj;
                            s8.b bVar2 = this.f16714e;
                            if (bVar2 != null) {
                                Intrinsics.checkNotNull(bVar2);
                                ((o) bVar2.q()).g(oVar, this.f16715i);
                                s8.b bVar3 = this.f16714e;
                                Intrinsics.checkNotNull(bVar3);
                                bVar3.close();
                                this.f16714e = CloseableReference.C(oVar, pVar, CloseableReference.f4407x);
                            } else {
                                throw new IllegalStateException("Required value was null.");
                            }
                        }
                        s8.b bVar4 = this.f16714e;
                        if (bVar4 != null) {
                            ((o) bVar4.q()).o(this.f16715i, i5, i6, buffer);
                            this.f16715i += i6;
                            return;
                        }
                        throw new IllegalStateException("Required value was null.");
                    }
                    throw new IllegalStateException("Required value was null.");
                }
                throw new ai.k("OutputStream no longer valid");
            }
            throw new ai.k("OutputStream no longer valid");
        }
        StringBuilder q5 = a3.e.q(buffer.length, "length=", i5, "; regionStart=", "; regionLength=");
        q5.append(i6);
        throw new ArrayIndexOutOfBoundsException(q5.toString());
    }
}
