package il;

import com.otaliastudios.zoom.OverZoomRangeProvider;
import com.otaliastudios.zoom.ZoomEngine;
import com.otaliastudios.zoom.ZoomLogger;
import el.g;
import kotlin.jvm.internal.Intrinsics;
import yo.j;

/* loaded from: classes3.dex */
public final class c extends bq.b {
    public static final ZoomLogger I;
    public int E;
    public OverZoomRangeProvider F;
    public boolean G;
    public boolean H;

    /* renamed from: i, reason: collision with root package name */
    public final ZoomEngine f10956i;

    /* renamed from: v, reason: collision with root package name */
    public float f10957v;

    /* renamed from: w, reason: collision with root package name */
    public float f10958w;

    /* renamed from: x, reason: collision with root package name */
    public int f10959x;

    /* renamed from: y, reason: collision with root package name */
    public float f10960y;

    static {
        String tag = c.class.getSimpleName();
        Intrinsics.checkNotNullExpressionValue(tag, "TAG");
        Intrinsics.checkNotNullParameter(tag, "tag");
        I = new ZoomLogger(tag);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public c(ZoomEngine engine, g provider) {
        super(provider);
        Intrinsics.checkNotNullParameter(engine, "engine");
        Intrinsics.checkNotNullParameter(provider, "provider");
        this.f10956i = engine;
        this.f10958w = 0.8f;
        this.f10960y = 2.5f;
        this.F = OverZoomRangeProvider.f6618c;
        this.G = true;
        this.H = true;
    }

    public final float A0() {
        int i5 = this.E;
        if (i5 == 0) {
            return this.f10960y * this.f10957v;
        }
        if (i5 == 1) {
            return this.f10960y;
        }
        throw new IllegalArgumentException(Intrinsics.stringPlus("Unknown ZoomType ", Integer.valueOf(this.E)));
    }

    public final float B0() {
        int i5 = this.f10959x;
        if (i5 == 0) {
            return this.f10958w * this.f10957v;
        }
        if (i5 == 1) {
            return this.f10958w;
        }
        throw new IllegalArgumentException(Intrinsics.stringPlus("Unknown ZoomType ", Integer.valueOf(this.f10959x)));
    }

    /* JADX WARN: Code restructure failed: missing block: B:13:0x003d, code lost:
    
        if (r10 < 0.0f) goto L17;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final float z0(float f2, boolean z5) {
        float B0 = B0();
        float A0 = A0();
        if (z5 && this.H) {
            OverZoomRangeProvider overZoomRangeProvider = this.F;
            ZoomEngine zoomEngine = this.f10956i;
            float j = overZoomRangeProvider.j(zoomEngine);
            float f10 = 0.0f;
            ZoomLogger zoomLogger = I;
            if (j < 0.0f) {
                zoomLogger.getClass();
                Intrinsics.checkNotNullParameter("Received negative maxOverZoomOut value, coercing to 0", "message");
                if (j < 0.0f) {
                    j = 0.0f;
                }
            }
            B0 -= j;
            float j5 = this.F.j(zoomEngine);
            if (j5 < 0.0f) {
                zoomLogger.getClass();
                Intrinsics.checkNotNullParameter("Received negative maxOverZoomIn value, coercing to 0", "message");
            }
            f10 = j5;
            A0 += f10;
        }
        if (A0 < B0) {
            int i5 = this.E;
            if (i5 == this.f10959x) {
                throw new IllegalStateException("maxZoom is less than minZoom: " + A0 + " < " + B0);
            }
            if (i5 == 0) {
                B0 = A0;
            } else {
                A0 = B0;
            }
        }
        return j.c(f2, B0, A0);
    }
}
