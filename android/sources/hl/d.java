package hl;

import com.otaliastudios.zoom.AbsolutePoint;
import com.otaliastudios.zoom.ScaledPoint;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class d {
    public static final /* synthetic */ int k = 0;
    public final float a;

    /* renamed from: b, reason: collision with root package name */
    public final boolean f10104b;

    /* renamed from: c, reason: collision with root package name */
    public final AbsolutePoint f10105c;

    /* renamed from: d, reason: collision with root package name */
    public final ScaledPoint f10106d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f10107e;

    /* renamed from: f, reason: collision with root package name */
    public final boolean f10108f;

    /* renamed from: g, reason: collision with root package name */
    public final Float f10109g;

    /* renamed from: h, reason: collision with root package name */
    public final Float f10110h;

    /* renamed from: i, reason: collision with root package name */
    public final boolean f10111i;
    public final boolean j;

    static {
        String tag = d.class.getSimpleName();
        Intrinsics.checkNotNullExpressionValue(tag, "TAG");
        Intrinsics.checkNotNullParameter(tag, "tag");
    }

    public d(float f2, boolean z5, AbsolutePoint absolutePoint, ScaledPoint scaledPoint, boolean z6, boolean z7, Float f10, Float f11, boolean z8) {
        this.a = f2;
        this.f10104b = z5;
        this.f10105c = absolutePoint;
        this.f10106d = scaledPoint;
        this.f10107e = z6;
        this.f10108f = z7;
        this.f10109g = f10;
        this.f10110h = f11;
        this.f10111i = z8;
        if (absolutePoint != null && scaledPoint != null) {
            throw new IllegalStateException("Can only use either pan or scaledPan");
        }
        this.j = (absolutePoint == null && scaledPoint == null) ? false : true;
    }
}
