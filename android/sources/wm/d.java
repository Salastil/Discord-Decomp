package wm;

import android.content.res.ColorStateList;
import android.os.Build;
import android.widget.FrameLayout;
import com.facebook.react.uimanager.PixelUtil;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class d {
    public final FrameLayout a;

    /* renamed from: b, reason: collision with root package name */
    public float f19899b = -1.0f;

    /* renamed from: c, reason: collision with root package name */
    public Integer f19900c;

    /* renamed from: d, reason: collision with root package name */
    public boolean f19901d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f19902e;

    /* renamed from: f, reason: collision with root package name */
    public lh.m f19903f;

    /* renamed from: g, reason: collision with root package name */
    public ColorStateList f19904g;

    /* renamed from: h, reason: collision with root package name */
    public final boolean f19905h;

    public d(FrameLayout frameLayout) {
        this.a = frameLayout;
        this.f19905h = Build.VERSION.SDK_INT >= 33;
    }

    public final void a(lh.i iVar) {
        if (this.f19904g == null) {
            this.f19904g = iVar.f14001e.f13985d;
        }
        Integer num = this.f19900c;
        if (num == null) {
            iVar.q(this.f19904g);
        } else {
            iVar.q(ColorStateList.valueOf(num.intValue()));
        }
    }

    public final void b(lh.i iVar) {
        FrameLayout frameLayout = this.a;
        if (frameLayout == null) {
            return;
        }
        if (this.f19903f == null) {
            this.f19903f = iVar.f14001e.a;
        }
        float f2 = this.f19899b;
        if (f2 == -1.0f) {
            lh.m mVar = this.f19903f;
            if (mVar != null) {
                iVar.setShapeAppearanceModel(mVar);
                return;
            }
            return;
        }
        Intrinsics.checkNotNullParameter(frameLayout, "<this>");
        float f10 = frameLayout.getResources().getDisplayMetrics().density;
        float pixelFromDIP = f10 > 0.0f ? f2 * f10 : PixelUtil.toPixelFromDIP(f2);
        lh.m mVar2 = this.f19903f;
        if (mVar2 == null) {
            mVar2 = iVar.f14001e.a;
            Intrinsics.checkNotNullExpressionValue(mVar2, "getShapeAppearanceModel(...)");
        }
        lh.l g6 = mVar2.g();
        g6.a = jb.a.f(0);
        g6.f14010e = new lh.a(pixelFromDIP);
        g6.f14007b = jb.a.f(0);
        g6.f14011f = new lh.a(pixelFromDIP);
        iVar.setShapeAppearanceModel(g6.a());
    }
}
