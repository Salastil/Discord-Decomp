package r9;

import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.PorterDuff;
import com.facebook.common.references.CloseableReference;
import com.facebook.imagepipeline.bitmaps.PlatformBitmapFactory;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.TimeUnit;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.d0;
import kotlin.collections.o0;
import kotlin.collections.r0;
import kotlin.collections.u0;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.ranges.IntRange;
import yo.j;

/* loaded from: classes3.dex */
public final class d {
    public final PlatformBitmapFactory a;

    /* renamed from: b, reason: collision with root package name */
    public final s9.a f17158b;

    /* renamed from: c, reason: collision with root package name */
    public final q9.b f17159c;

    /* renamed from: d, reason: collision with root package name */
    public final qd.f f17160d;

    /* renamed from: e, reason: collision with root package name */
    public final int f17161e;

    /* renamed from: f, reason: collision with root package name */
    public final ConcurrentHashMap f17162f;

    /* renamed from: g, reason: collision with root package name */
    public volatile int f17163g;

    /* renamed from: h, reason: collision with root package name */
    public volatile boolean f17164h;

    /* renamed from: i, reason: collision with root package name */
    public final p9.d f17165i;
    public int j;
    public Object k;

    /* renamed from: l, reason: collision with root package name */
    public Set f17166l;

    public d(PlatformBitmapFactory platformBitmapFactory, s9.a bitmapFrameRenderer, q9.b fpsCompressor, qd.f animationInformation, int i5) {
        Intrinsics.checkNotNullParameter(platformBitmapFactory, "platformBitmapFactory");
        Intrinsics.checkNotNullParameter(bitmapFrameRenderer, "bitmapFrameRenderer");
        Intrinsics.checkNotNullParameter(fpsCompressor, "fpsCompressor");
        Intrinsics.checkNotNullParameter(animationInformation, "animationInformation");
        this.a = platformBitmapFactory;
        this.f17158b = bitmapFrameRenderer;
        this.f17159c = fpsCompressor;
        this.f17160d = animationInformation;
        int d6 = (d(animationInformation) * i5) / 1000;
        d6 = d6 < 1 ? 1 : d6;
        this.f17161e = d6;
        this.f17162f = new ConcurrentHashMap();
        this.f17165i = new p9.d(animationInformation.d(), 7);
        this.j = -1;
        this.k = v0.d();
        this.f17166l = o0.f13515d;
        a(d(animationInformation));
        this.f17163g = (int) (d6 * 0.5f);
    }

    public static int d(qd.f fVar) {
        long millis = TimeUnit.SECONDS.toMillis(1L) / (((da.a) fVar.f16831e).f7460f / fVar.d());
        return (int) (millis >= 1 ? millis : 1L);
    }

    public final void a(int i5) {
        qd.f fVar = this.f17160d;
        int i6 = ((da.a) fVar.f16831e).f7460f;
        int e9 = fVar.e();
        if (e9 < 1) {
            e9 = 1;
        }
        int i10 = i6 * e9;
        int d6 = fVar.d();
        int d7 = d(fVar);
        if (i5 > d7) {
            i5 = d7;
        }
        int i11 = i5 >= 1 ? i5 : 1;
        int i12 = this.f17159c.a;
        if (i11 > i12) {
            i11 = i12;
        }
        float f2 = (i10 / 1000.0f) * i11;
        if (f2 < 0.0f) {
            f2 = 0.0f;
        }
        float f10 = d6;
        if (f2 > f10) {
            f2 = f10;
        }
        float f11 = f10 / f2;
        int i13 = 0;
        IntRange i14 = j.i(0, d6);
        int a = u0.a(d0.l(i14, 10));
        if (a < 16) {
            a = 16;
        }
        LinkedHashMap linkedHashMap = new LinkedHashMap(a);
        Iterator it = i14.iterator();
        while (((yo.b) it).f20994i) {
            Object next = it.next();
            int intValue = ((Number) next).intValue();
            if (((int) (intValue % f11)) == 0) {
                i13 = intValue;
            }
            linkedHashMap.put(next, Integer.valueOf(i13));
        }
        this.k = linkedHashMap;
        this.f17166l = CollectionsKt.l0(linkedHashMap.values());
    }

    public final a b(int i5) {
        a aVar;
        p9.d dVar = this.f17165i;
        Iterator it = new IntRange(0, dVar.f16329e, 1).iterator();
        do {
            aVar = null;
            if (!((yo.b) it).f20994i) {
                break;
            }
            int l6 = dVar.l(i5 - ((r0) it).nextInt());
            c cVar = (c) this.f17162f.get(Integer.valueOf(l6));
            if (cVar != null) {
                if (cVar.f17157b || !cVar.a.r()) {
                    cVar = null;
                }
                if (cVar != null) {
                    aVar = new a(l6, cVar.a);
                }
            }
        } while (aVar == null);
        return aVar;
    }

    public final io.sentry.internal.debugmeta.c c(int i5) {
        a b10 = b(i5);
        if (b10 == null) {
            return new io.sentry.internal.debugmeta.c((CloseableReference) null, f.f17172i);
        }
        CloseableReference clone = b10.f17150e.clone();
        Intrinsics.checkNotNullExpressionValue(clone, "clone(...)");
        this.j = b10.f17149d;
        return new io.sentry.internal.debugmeta.c(clone, f.f17171e);
    }

    public final void e(int i5, int i6) {
        if (this.f17164h) {
            return;
        }
        this.f17164h = true;
        ExecutorService executorService = q9.a.a;
        com.swmansion.reanimated.keyboard.c task = new com.swmansion.reanimated.keyboard.c(this, i5, i6, 4);
        Intrinsics.checkNotNullParameter(task, "task");
        q9.a.a.execute(task);
    }

    public final void f(int i5, CloseableReference closeableReference) {
        CloseableReference closeableReference2;
        CloseableReference f2;
        a b10 = b(i5);
        s9.a aVar = this.f17158b;
        if (b10 != null && (closeableReference2 = b10.f17150e) != null && (f2 = closeableReference2.f()) != null) {
            try {
                int i6 = b10.f17149d;
                if (i6 < i5) {
                    Object q5 = f2.q();
                    Intrinsics.checkNotNullExpressionValue(q5, "get(...)");
                    Bitmap bitmap = (Bitmap) q5;
                    if (closeableReference.r() && !Intrinsics.areEqual(closeableReference.q(), bitmap)) {
                        Canvas canvas = new Canvas((Bitmap) closeableReference.q());
                        canvas.drawColor(0, PorterDuff.Mode.CLEAR);
                        canvas.drawBitmap(bitmap, 0.0f, 0.0f, (Paint) null);
                    }
                    Iterator it = new IntRange(i6 + 1, i5, 1).iterator();
                    while (((yo.b) it).f20994i) {
                        int nextInt = ((r0) it).nextInt();
                        Object q6 = closeableReference.q();
                        Intrinsics.checkNotNullExpressionValue(q6, "get(...)");
                        aVar.m(nextInt, (Bitmap) q6);
                    }
                    f2.close();
                    return;
                }
                Unit unit = Unit.a;
                f2.close();
            } finally {
            }
        }
        if (closeableReference.r()) {
            new Canvas((Bitmap) closeableReference.q()).drawColor(0, PorterDuff.Mode.CLEAR);
        }
        Iterator it2 = new IntRange(0, i5, 1).iterator();
        while (((yo.b) it2).f20994i) {
            int nextInt2 = ((r0) it2).nextInt();
            Object q7 = closeableReference.q();
            Intrinsics.checkNotNullExpressionValue(q7, "get(...)");
            aVar.m(nextInt2, (Bitmap) q7);
        }
    }
}
