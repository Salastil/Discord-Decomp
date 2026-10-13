package com.linecorp.apng;

import android.graphics.Canvas;
import android.graphics.ColorFilter;
import android.graphics.Paint;
import android.graphics.Rect;
import android.graphics.drawable.Animatable;
import android.graphics.drawable.Drawable;
import com.linecorp.apng.decoder.Apng;
import gh.c;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.collections.x;
import kotlin.jvm.internal.Intrinsics;
import ok.a;

/* loaded from: classes3.dex */
public final class ApngDrawable extends Drawable implements Animatable {
    public static final /* synthetic */ int L = 0;
    public final ArrayList E;
    public final int[] F;
    public final int G;
    public final int H;
    public boolean I;
    public long J;
    public Long K;

    /* renamed from: d, reason: collision with root package name */
    public a f6495d;

    /* renamed from: e, reason: collision with root package name */
    public final int f6496e;

    /* renamed from: i, reason: collision with root package name */
    public final int f6497i;

    /* renamed from: v, reason: collision with root package name */
    public final List f6498v;

    /* renamed from: w, reason: collision with root package name */
    public final int f6499w;

    /* renamed from: x, reason: collision with root package name */
    public final Paint f6500x;

    /* renamed from: y, reason: collision with root package name */
    public final ArrayList f6501y;

    public ApngDrawable(a apngState) {
        Intrinsics.checkNotNullParameter(apngState, "apngState");
        this.f6495d = apngState;
        this.f6496e = apngState.a.getDuration();
        int frameCount = this.f6495d.a.getFrameCount();
        this.f6497i = frameCount;
        this.f6498v = x.G(this.f6495d.a.getFrameDurations());
        this.f6495d.a.getByteCount();
        this.f6495d.a.getAllFrameByteCount();
        this.f6499w = this.f6495d.a.getLoopCount();
        this.f6495d.a.isRecycled();
        this.f6500x = new Paint(6);
        this.f6501y = new ArrayList();
        this.E = new ArrayList();
        this.F = new int[frameCount];
        a aVar = this.f6495d;
        this.G = aVar.f16000b;
        this.H = aVar.f16001c;
        for (int i5 = 1; i5 < frameCount; i5++) {
            int[] iArr = this.F;
            int i6 = i5 - 1;
            iArr[i5] = iArr[i6] + this.f6495d.a.getFrameDurations()[i6];
        }
        Rect bounds = getBounds();
        a aVar2 = this.f6495d;
        bounds.set(0, 0, aVar2.f16000b, aVar2.f16001c);
    }

    public final int a() {
        int i5;
        int i6 = this.f6496e;
        long j = i6 == 0 ? 0L : this.J % i6;
        int i10 = 0;
        int i11 = this.f6499w;
        if (i11 == 0 || b() <= i11 - 1) {
            i6 = 0;
        }
        long j5 = j + i6;
        int i12 = this.f6497i - 1;
        while (true) {
            i5 = (i10 + i12) / 2;
            int i13 = i5 + 1;
            if (this.F.length > i13 && j5 >= r5[i13]) {
                i10 = i13;
            } else {
                if (i10 == i12 || j5 >= r5[i5]) {
                    break;
                }
                i12 = i5;
            }
        }
        return i5;
    }

    public final int b() {
        int i5 = this.f6496e;
        if (i5 == 0) {
            return 0;
        }
        return (int) (this.J / i5);
    }

    @Override // android.graphics.drawable.Drawable
    public final void draw(Canvas canvas) {
        Intrinsics.checkNotNullParameter(canvas, "canvas");
        if (this.I) {
            int a = a();
            long longValue = ((Number) this.f6495d.f16003e.invoke()).longValue();
            Long l6 = this.K;
            this.J = l6 == null ? this.J : (this.J + longValue) - l6.longValue();
            this.K = Long.valueOf(longValue);
            boolean z5 = a() != a;
            boolean z6 = this.I;
            int i5 = this.f6499w;
            ArrayList arrayList = this.f6501y;
            if (z6) {
                if (a() == 0 && b() == 0 && l6 == null) {
                    Iterator it = CollectionsKt.i0(arrayList).iterator();
                    while (it.hasNext()) {
                        ((c) it.next()).b(this);
                    }
                } else if (a() == this.f6497i - 1 && ((i5 == 0 || b() < i5 - 1) && z5)) {
                    Iterator it2 = CollectionsKt.i0(this.E).iterator();
                    if (it2.hasNext()) {
                        if (it2.next() != null) {
                            throw new ClassCastException();
                        }
                        b();
                        throw null;
                    }
                }
            }
            if (i5 != 0 && b() > i5 - 1) {
                this.I = false;
                Iterator it3 = CollectionsKt.i0(arrayList).iterator();
                while (it3.hasNext()) {
                    ((c) it3.next()).a(this);
                }
            }
        }
        Apng apng = this.f6495d.a;
        int a10 = a();
        Rect bounds = getBounds();
        Intrinsics.checkNotNullExpressionValue(bounds, "getBounds(...)");
        apng.drawWithIndex(a10, canvas, null, bounds, this.f6500x);
        if (this.I) {
            invalidateSelf();
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final Drawable.ConstantState getConstantState() {
        return this.f6495d;
    }

    @Override // android.graphics.drawable.Drawable
    public final int getIntrinsicHeight() {
        return this.H;
    }

    @Override // android.graphics.drawable.Drawable
    public final int getIntrinsicWidth() {
        return this.G;
    }

    @Override // android.graphics.drawable.Drawable
    public final int getOpacity() {
        return -2;
    }

    @Override // android.graphics.drawable.Animatable
    public final boolean isRunning() {
        return this.I;
    }

    @Override // android.graphics.drawable.Drawable
    public final Drawable mutate() {
        this.f6495d = new a(this.f6495d);
        return this;
    }

    @Override // android.graphics.drawable.Drawable
    public final void setAlpha(int i5) {
        this.f6500x.setAlpha(i5);
    }

    @Override // android.graphics.drawable.Drawable
    public final void setColorFilter(ColorFilter colorFilter) {
        this.f6500x.setColorFilter(colorFilter);
    }

    @Override // android.graphics.drawable.Animatable
    public final void start() {
        this.I = true;
        this.K = null;
        invalidateSelf();
    }

    @Override // android.graphics.drawable.Animatable
    public final void stop() {
        this.I = false;
        invalidateSelf();
    }
}
