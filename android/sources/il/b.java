package il;

import com.otaliastudios.zoom.OverPanRangeProvider;
import com.otaliastudios.zoom.ScaledPoint;
import com.otaliastudios.zoom.ZoomEngine;
import com.otaliastudios.zoom.ZoomLogger;
import el.g;
import kotlin.jvm.internal.Intrinsics;
import yo.j;

/* loaded from: classes3.dex */
public final class b extends bq.b {
    public static final ZoomLogger H;
    public int E;
    public OverPanRangeProvider F;
    public final ScaledPoint G;

    /* renamed from: i, reason: collision with root package name */
    public final ZoomEngine f10951i;

    /* renamed from: v, reason: collision with root package name */
    public boolean f10952v;

    /* renamed from: w, reason: collision with root package name */
    public boolean f10953w;

    /* renamed from: x, reason: collision with root package name */
    public boolean f10954x;

    /* renamed from: y, reason: collision with root package name */
    public boolean f10955y;

    static {
        String tag = b.class.getSimpleName();
        Intrinsics.checkNotNullExpressionValue(tag, "TAG");
        Intrinsics.checkNotNullParameter(tag, "tag");
        H = new ZoomLogger(tag);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b(ZoomEngine engine, g provider) {
        super(provider);
        Intrinsics.checkNotNullParameter(engine, "engine");
        Intrinsics.checkNotNullParameter(provider, "provider");
        this.f10951i = engine;
        this.f10952v = true;
        this.f10953w = true;
        this.f10954x = true;
        this.f10955y = true;
        this.E = 51;
        this.F = OverPanRangeProvider.f6617b;
        this.G = new ScaledPoint();
    }

    public static float z0(int i5, float f2, boolean z5) {
        int i6 = z5 ? i5 & 7 : i5 & 112;
        if (i6 != 1) {
            if (i6 == 3) {
                return 0.0f;
            }
            if (i6 != 5) {
                if (i6 != 16) {
                    if (i6 == 48 || i6 != 80) {
                        return 0.0f;
                    }
                }
            }
            return f2;
        }
        return f2 * 0.5f;
    }

    public final float A0(boolean z5, boolean z6) {
        float f2;
        hl.b x02 = x0();
        float f10 = z5 ? x02.f10086e.left : x02.f10086e.top;
        hl.b x03 = x0();
        float f11 = z5 ? x03.j : x03.k;
        hl.b x04 = x0();
        float width = z5 ? x04.f10086e.width() : x04.f10086e.height();
        float f12 = 0.0f;
        float D0 = ((z5 ? this.f10952v : this.f10953w) && z6) ? z5 ? D0() : E0() : 0.0f;
        int i5 = 3;
        if (z5) {
            int i6 = this.E & 240;
            if (i6 != 16) {
                i5 = i6 != 32 ? i6 != 48 ? 0 : 1 : 5;
            }
        } else {
            int i10 = this.E & (-241);
            i5 = i10 != 1 ? i10 != 2 ? i10 != 3 ? 0 : 16 : 80 : 48;
        }
        if (width <= f11) {
            f2 = f11 - width;
            if (i5 != 0) {
                f12 = z0(i5, f2, z5);
                f2 = f12;
            }
        } else {
            f12 = f11 - width;
            f2 = 0.0f;
        }
        return j.c(f10, f12 - D0, f2 + D0) - f10;
    }

    public final void B0(boolean z5, a output) {
        Intrinsics.checkNotNullParameter(output, "output");
        hl.b x02 = x0();
        int i5 = (int) (z5 ? x02.f10086e.left : x02.f10086e.top);
        hl.b x03 = x0();
        int i6 = (int) (z5 ? x03.j : x03.k);
        hl.b x04 = x0();
        int width = (int) (z5 ? x04.f10086e.width() : x04.f10086e.height());
        int A0 = (int) A0(z5, false);
        int i10 = z5 ? this.E & 240 : this.E & (-241);
        if (width > i6) {
            output.a = -(width - i6);
            output.f10949c = 0;
        } else if (i10 == 68 || i10 == 0 || i10 == 64 || i10 == 4) {
            output.a = 0;
            output.f10949c = i6 - width;
        } else {
            int i11 = i5 + A0;
            output.a = i11;
            output.f10949c = i11;
        }
        output.f10948b = i5;
        output.f10950d = A0 != 0;
    }

    public final ScaledPoint C0() {
        Float valueOf = Float.valueOf(A0(true, false));
        Float valueOf2 = Float.valueOf(A0(false, false));
        ScaledPoint scaledPoint = this.G;
        scaledPoint.a(valueOf, valueOf2);
        return scaledPoint;
    }

    public final float D0() {
        float b10 = this.F.b(this.f10951i, true);
        if (b10 < 0.0f) {
            H.getClass();
            Intrinsics.checkNotNullParameter("Received negative maxHorizontalOverPan value, coercing to 0", "message");
            if (b10 < 0.0f) {
                return 0.0f;
            }
        }
        return b10;
    }

    public final float E0() {
        float b10 = this.F.b(this.f10951i, false);
        if (b10 < 0.0f) {
            H.getClass();
            Intrinsics.checkNotNullParameter("Received negative maxVerticalOverPan value, coercing to 0", "message");
            if (b10 < 0.0f) {
                return 0.0f;
            }
        }
        return b10;
    }
}
