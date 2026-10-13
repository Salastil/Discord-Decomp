package p9;

import com.facebook.common.references.CloseableReference;
import fo.n;
import java.util.Date;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicInteger;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import r9.g;

/* loaded from: classes3.dex */
public final class f implements a {
    public r9.d E;
    public final int F;
    public int G;
    public final e H;

    /* renamed from: d, reason: collision with root package name */
    public final qd.f f16331d;

    /* renamed from: e, reason: collision with root package name */
    public final s9.a f16332e;

    /* renamed from: i, reason: collision with root package name */
    public final r9.e f16333i;

    /* renamed from: v, reason: collision with root package name */
    public final boolean f16334v;

    /* renamed from: w, reason: collision with root package name */
    public final String f16335w;

    /* renamed from: x, reason: collision with root package name */
    public final int f16336x;

    /* renamed from: y, reason: collision with root package name */
    public final int f16337y;

    public f(String str, qd.f animationInformation, s9.a bitmapFrameRenderer, r9.e frameLoaderFactory, boolean z5) {
        Intrinsics.checkNotNullParameter(animationInformation, "animationInformation");
        Intrinsics.checkNotNullParameter(bitmapFrameRenderer, "bitmapFrameRenderer");
        Intrinsics.checkNotNullParameter(frameLoaderFactory, "frameLoaderFactory");
        this.f16331d = animationInformation;
        this.f16332e = bitmapFrameRenderer;
        this.f16333i = frameLoaderFactory;
        this.f16334v = z5;
        this.f16335w = str == null ? String.valueOf(hashCode()) : str;
        this.f16336x = ((da.a) animationInformation.f16831e).f7457c.getWidth();
        this.f16337y = ((da.a) animationInformation.f16831e).f7457c.getHeight();
        long millis = TimeUnit.SECONDS.toMillis(1L) / (((da.a) animationInformation.f16831e).f7460f / animationInformation.d());
        int i5 = (int) (millis >= 1 ? millis : 1L);
        this.F = i5;
        this.G = i5;
        this.H = new e(this);
    }

    @Override // p9.a
    public final void a(c bitmapFramePreparer, n9.b bitmapFrameCache, n9.a animationBackend, int i5) {
        Intrinsics.checkNotNullParameter(bitmapFramePreparer, "bitmapFramePreparer");
        Intrinsics.checkNotNullParameter(bitmapFrameCache, "bitmapFrameCache");
        Intrinsics.checkNotNullParameter(animationBackend, "animationBackend");
    }

    public final c5.e b(int i5, int i6) {
        boolean z5 = this.f16334v;
        int i10 = this.f16337y;
        int i11 = this.f16336x;
        if (!z5) {
            return new c5.e(i11, i10, 6);
        }
        if (i5 < i11 || i6 < i10) {
            double d6 = i11 / i10;
            if (i6 > i5) {
                if (i6 > i10) {
                    i6 = i10;
                }
                i11 = (int) (i6 * d6);
                i10 = i6;
            } else {
                if (i5 > i11) {
                    i5 = i11;
                }
                i10 = (int) (i5 / d6);
                i11 = i5;
            }
        }
        return new c5.e(i11, i10, 6);
    }

    /* JADX WARN: Type inference failed for: r2v1, types: [java.lang.Object, java.util.Map] */
    @Override // p9.a
    public final CloseableReference c(int i5, int i6, int i10) {
        io.sentry.internal.debugmeta.c frameResult;
        c5.e b10 = b(i6, i10);
        r9.d e9 = e();
        if (e9 != null) {
            int i11 = b10.f3328b;
            int i12 = b10.f3329c;
            Integer num = (Integer) e9.k.get(Integer.valueOf(i5));
            if (num != null) {
                int intValue = num.intValue();
                e9.j = intValue;
                r9.c cVar = (r9.c) e9.f17162f.get(num);
                if (cVar == null || cVar.f17157b || !cVar.a.r()) {
                    cVar = null;
                }
                if (cVar != null) {
                    d dVar = e9.f17165i;
                    int i13 = e9.f17163g;
                    int l6 = dVar.l(e9.f17161e + i13);
                    if (i13 >= l6 ? !((i13 > intValue || intValue > dVar.f16329e) && (intValue < 0 || intValue > l6)) : !(i13 > intValue || intValue > l6)) {
                        e9.e(i11, i12);
                    }
                    frameResult = new io.sentry.internal.debugmeta.c(cVar.a.clone(), r9.f.f17170d);
                } else {
                    e9.e(i11, i12);
                    frameResult = e9.c(intValue);
                }
            } else {
                frameResult = e9.c(i5);
            }
        } else {
            frameResult = null;
        }
        if (frameResult != null) {
            AtomicInteger atomicInteger = r9.b.a;
            e animation = this.H;
            Intrinsics.checkNotNullParameter(animation, "animation");
            Intrinsics.checkNotNullParameter(frameResult, "frameResult");
            ConcurrentHashMap concurrentHashMap = r9.b.f17153d;
            if (!concurrentHashMap.contains(animation)) {
                concurrentHashMap.put(animation, Integer.valueOf((int) (animation.a * 0.2f)));
            }
            int ordinal = ((r9.f) frameResult.f11623i).ordinal();
            if (ordinal == 0) {
                r9.b.a.incrementAndGet();
            } else if (ordinal == 1) {
                r9.b.f17151b.incrementAndGet();
            } else {
                if (ordinal != 2) {
                    throw new n();
                }
                r9.b.f17152c.incrementAndGet();
            }
        }
        if (frameResult != null) {
            return (CloseableReference) frameResult.f11622e;
        }
        return null;
    }

    @Override // p9.a
    public final void d() {
        r9.d frameLoader = e();
        if (frameLoader != null) {
            ConcurrentHashMap concurrentHashMap = r9.e.f17167d;
            String cacheKey = this.f16335w;
            Intrinsics.checkNotNullParameter(cacheKey, "cacheKey");
            Intrinsics.checkNotNullParameter(frameLoader, "frameLoader");
            r9.e.f17167d.put(cacheKey, new g(frameLoader, new Date()));
        }
        this.E = null;
    }

    public final r9.d e() {
        r9.d dVar;
        if (this.E == null) {
            r9.e eVar = this.f16333i;
            String cacheKey = this.f16335w;
            s9.a bitmapFrameRenderer = this.f16332e;
            qd.f animationInformation = this.f16331d;
            Intrinsics.checkNotNullParameter(cacheKey, "cacheKey");
            Intrinsics.checkNotNullParameter(bitmapFrameRenderer, "bitmapFrameRenderer");
            Intrinsics.checkNotNullParameter(animationInformation, "animationInformation");
            ConcurrentHashMap concurrentHashMap = r9.e.f17167d;
            synchronized (concurrentHashMap) {
                g gVar = (g) concurrentHashMap.get(cacheKey);
                if (gVar != null) {
                    concurrentHashMap.remove(cacheKey);
                    dVar = gVar.a;
                } else {
                    Unit unit = Unit.a;
                    dVar = new r9.d(eVar.a, bitmapFrameRenderer, new q9.b(eVar.f17168b), animationInformation, eVar.f17169c);
                }
            }
            this.E = dVar;
        }
        return this.E;
    }

    @Override // p9.a
    public final void f() {
        e();
        d();
    }

    @Override // p9.a
    public final void h(int i5, int i6) {
        if (i5 <= 0 || i6 <= 0 || this.f16336x <= 0 || this.f16337y <= 0) {
            return;
        }
        c5.e b10 = b(i5, i6);
        r9.d e9 = e();
        if (e9 != null) {
            int i10 = b10.f3328b;
            o5.a onAnimationLoaded = new o5.a(11);
            Intrinsics.checkNotNullParameter(onAnimationLoaded, "onAnimationLoaded");
            e9.e(i10, i10);
            Unit unit = Unit.a;
        }
    }
}
