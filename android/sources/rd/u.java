package rd;

import android.content.Context;
import android.graphics.Bitmap;
import android.os.Looper;
import com.facebook.common.references.CloseableReference;
import com.facebook.fresco.animation.factory.AnimatedFactoryV2Impl;
import com.facebook.imagepipeline.common.ImageDecodeOptions;
import com.facebook.imagepipeline.image.EncodedImage;
import java.util.Arrays;
import java.util.concurrent.SynchronousQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;
import kotlin.jvm.internal.Intrinsics;
import th.b1;

/* loaded from: classes3.dex */
public final class u implements qd.i, tg.a, uh.g, ma.b, yb.b, vn.b {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f17274d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f17275e;

    public /* synthetic */ u(int i5, Object obj) {
        this.f17274d = i5;
        this.f17275e = obj;
    }

    @Override // qd.i
    public long B(long j, long j5) {
        return 1L;
    }

    @Override // uh.g
    public Object a() {
        switch (this.f17274d) {
            case 4:
                return new b1((th.s) ((uh.f) this.f17275e).a());
            case 5:
                return ((di.p) this.f17275e).f7601d;
            default:
                return ((uh.g) this.f17275e).a();
        }
    }

    @Override // qd.i
    public long b(long j) {
        return 0L;
    }

    @Override // qd.i
    public long f(long j, long j5) {
        return 0L;
    }

    @Override // qd.i
    public long g(long j, long j5) {
        return -9223372036854775807L;
    }

    @Override // javax.inject.Provider
    public Object get() {
        return this.f17275e;
    }

    @Override // qd.i
    public j h(long j) {
        return (j) this.f17275e;
    }

    @Override // qd.i
    public long m(long j, long j5) {
        return 0L;
    }

    @Override // ma.b
    public oa.c p(EncodedImage encodedImage, int i5, oa.k kVar, ImageDecodeOptions imageDecodeOptions) {
        AnimatedFactoryV2Impl animatedFactoryV2Impl = (AnimatedFactoryV2Impl) this.f17275e;
        if (animatedFactoryV2Impl.f4511e == null) {
            animatedFactoryV2Impl.f4511e = new ca.b(new r3.g(5, animatedFactoryV2Impl), animatedFactoryV2Impl.a, animatedFactoryV2Impl.k);
        }
        ca.b bVar = animatedFactoryV2Impl.f4511e;
        Bitmap.Config config = imageDecodeOptions.f4578b;
        bVar.getClass();
        ca.a aVar = ca.b.a;
        if (aVar == null) {
            throw new UnsupportedOperationException("To encode animated gif please add the dependency to the animated-gif module");
        }
        CloseableReference byteBufferRef = encodedImage.getByteBufferRef();
        byteBufferRef.getClass();
        try {
            qa.q qVar = (qa.q) byteBufferRef.q();
            oa.b a = ca.b.a(encodedImage.getSource(), imageDecodeOptions, qVar.f() != null ? aVar.a(qVar.f(), imageDecodeOptions) : aVar.b(qVar.g(), qVar.o(), imageDecodeOptions));
            byteBufferRef.close();
            return a;
        } catch (Throwable th2) {
            byteBufferRef.close();
            throw th2;
        }
    }

    @Override // qd.i
    public boolean v() {
        return true;
    }

    @Override // qd.i
    public long w() {
        return 0L;
    }

    @Override // qd.i
    public long z(long j) {
        return 1L;
    }

    public u(Context context) {
        this.f17274d = 9;
        di.p pVar = new di.p(context);
        di.n b10 = di.n.b(new io.sentry.internal.debugmeta.c(pVar, di.n.b(xh.j.f20474b), new wi.d(pVar, xh.j.f20475c), 26));
        this.f17275e = di.n.b(new e4.r(26, b10, di.n.b(new r3.g(8, b10))));
    }

    public u(int i5) {
        this.f17274d = i5;
        switch (i5) {
            case 8:
                this.f17275e = com.facebook.imagepipeline.nativecode.c.o(Looper.getMainLooper());
                break;
            default:
                this.f17275e = new sd.e(5, 1.0f, false);
                break;
        }
    }

    public u(long[] jArr) {
        s.m mVar;
        int i5;
        this.f17274d = 10;
        if (jArr != null) {
            long[] elements = Arrays.copyOf(jArr, jArr.length);
            mVar = new s.m(elements.length);
            int i6 = mVar.f17681b;
            Intrinsics.checkNotNullParameter(elements, "elements");
            if (i6 >= 0 && i6 <= (i5 = mVar.f17681b)) {
                if (elements.length != 0) {
                    int length = i5 + elements.length;
                    long[] jArr2 = mVar.a;
                    if (jArr2.length < length) {
                        long[] copyOf = Arrays.copyOf(jArr2, Math.max(length, (jArr2.length * 3) / 2));
                        Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(...)");
                        mVar.a = copyOf;
                    }
                    long[] jArr3 = mVar.a;
                    int i10 = mVar.f17681b;
                    if (i6 != i10) {
                        kotlin.collections.u.f(jArr3, jArr3, elements.length + i6, i6, i10);
                    }
                    kotlin.collections.u.f(elements, jArr3, i6, 0, elements.length);
                    mVar.f17681b += elements.length;
                }
            } else {
                Intrinsics.checkNotNullParameter("", "message");
                throw new IndexOutOfBoundsException("");
            }
        } else {
            mVar = new s.m(16);
        }
        this.f17275e = mVar;
    }

    public u(qs.a threadFactory) {
        this.f17274d = 2;
        Intrinsics.checkNotNullParameter(threadFactory, "threadFactory");
        this.f17275e = new ThreadPoolExecutor(0, Integer.MAX_VALUE, 60L, TimeUnit.SECONDS, new SynchronousQueue(), threadFactory);
    }

    @Override // qd.i
    public long e(long j, long j5) {
        return j5;
    }
}
