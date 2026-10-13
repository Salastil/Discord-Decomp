package tg;

import android.content.res.ColorStateList;
import android.graphics.PorterDuff;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.InsetDrawable;
import android.graphics.drawable.LayerDrawable;
import android.graphics.drawable.RippleDrawable;
import com.discord.R;
import com.google.android.material.button.MaterialButton;
import j2.i;
import lh.g;
import lh.m;
import lh.w;
import lh.z;

/* loaded from: classes3.dex */
public final class d {
    public final MaterialButton a;

    /* renamed from: b, reason: collision with root package name */
    public m f18372b;

    /* renamed from: c, reason: collision with root package name */
    public z f18373c;

    /* renamed from: d, reason: collision with root package name */
    public i f18374d;

    /* renamed from: e, reason: collision with root package name */
    public ni.a f18375e;

    /* renamed from: f, reason: collision with root package name */
    public int f18376f;

    /* renamed from: g, reason: collision with root package name */
    public int f18377g;

    /* renamed from: h, reason: collision with root package name */
    public int f18378h;

    /* renamed from: i, reason: collision with root package name */
    public int f18379i;
    public int j;
    public int k;

    /* renamed from: l, reason: collision with root package name */
    public PorterDuff.Mode f18380l;

    /* renamed from: m, reason: collision with root package name */
    public ColorStateList f18381m;

    /* renamed from: n, reason: collision with root package name */
    public ColorStateList f18382n;

    /* renamed from: o, reason: collision with root package name */
    public ColorStateList f18383o;

    /* renamed from: p, reason: collision with root package name */
    public lh.i f18384p;

    /* renamed from: t, reason: collision with root package name */
    public boolean f18388t;

    /* renamed from: v, reason: collision with root package name */
    public RippleDrawable f18390v;

    /* renamed from: w, reason: collision with root package name */
    public int f18391w;

    /* renamed from: q, reason: collision with root package name */
    public boolean f18385q = false;

    /* renamed from: r, reason: collision with root package name */
    public boolean f18386r = false;

    /* renamed from: s, reason: collision with root package name */
    public boolean f18387s = false;

    /* renamed from: u, reason: collision with root package name */
    public boolean f18389u = true;

    public d(MaterialButton materialButton, m mVar) {
        this.a = materialButton;
        this.f18372b = mVar;
    }

    public final lh.i a(boolean z5) {
        RippleDrawable rippleDrawable = this.f18390v;
        if (rippleDrawable == null || rippleDrawable.getNumberOfLayers() <= 0) {
            return null;
        }
        return (lh.i) ((LayerDrawable) ((InsetDrawable) this.f18390v.getDrawable(0)).getDrawable()).getDrawable(!z5 ? 1 : 0);
    }

    public final void b(int i5, int i6) {
        MaterialButton materialButton = this.a;
        int paddingStart = materialButton.getPaddingStart();
        int paddingTop = materialButton.getPaddingTop();
        int paddingEnd = materialButton.getPaddingEnd();
        int paddingBottom = materialButton.getPaddingBottom();
        int i10 = this.f18378h;
        int i11 = this.f18379i;
        this.f18379i = i6;
        this.f18378h = i5;
        if (!this.f18386r) {
            c();
        }
        materialButton.setPaddingRelative(paddingStart, (paddingTop + i5) - i10, paddingEnd, (paddingBottom + i6) - i11);
    }

    public final void c() {
        lh.i iVar = new lh.i(this.f18372b);
        z zVar = this.f18373c;
        if (zVar != null) {
            iVar.t(zVar);
        }
        i iVar2 = this.f18374d;
        if (iVar2 != null) {
            iVar.o(iVar2);
        }
        ni.a aVar = this.f18375e;
        if (aVar != null) {
            iVar.f13999b0 = aVar;
        }
        MaterialButton materialButton = this.a;
        iVar.m(materialButton.getContext());
        iVar.setTintList(this.f18381m);
        PorterDuff.Mode mode = this.f18380l;
        if (mode != null) {
            iVar.setTintMode(mode);
        }
        float f2 = this.k;
        ColorStateList colorStateList = this.f18382n;
        iVar.f14001e.k = f2;
        iVar.invalidateSelf();
        g gVar = iVar.f14001e;
        if (gVar.f13986e != colorStateList) {
            gVar.f13986e = colorStateList;
            iVar.onStateChange(iVar.getState());
        }
        lh.i iVar3 = new lh.i(this.f18372b);
        z zVar2 = this.f18373c;
        if (zVar2 != null) {
            iVar3.t(zVar2);
        }
        i iVar4 = this.f18374d;
        if (iVar4 != null) {
            iVar3.o(iVar4);
        }
        iVar3.setTint(0);
        float f10 = this.k;
        int w5 = this.f18385q ? com.facebook.imagepipeline.nativecode.c.w(R.attr.colorSurface, materialButton) : 0;
        iVar3.f14001e.k = f10;
        iVar3.invalidateSelf();
        ColorStateList valueOf = ColorStateList.valueOf(w5);
        g gVar2 = iVar3.f14001e;
        if (gVar2.f13986e != valueOf) {
            gVar2.f13986e = valueOf;
            iVar3.onStateChange(iVar3.getState());
        }
        lh.i iVar5 = new lh.i(this.f18372b);
        this.f18384p = iVar5;
        z zVar3 = this.f18373c;
        if (zVar3 != null) {
            iVar5.t(zVar3);
        }
        i iVar6 = this.f18374d;
        if (iVar6 != null) {
            this.f18384p.o(iVar6);
        }
        this.f18384p.setTint(-1);
        RippleDrawable rippleDrawable = new RippleDrawable(jh.a.b(this.f18383o), new InsetDrawable((Drawable) new LayerDrawable(new Drawable[]{iVar3, iVar}), this.f18376f, this.f18378h, this.f18377g, this.f18379i), this.f18384p);
        this.f18390v = rippleDrawable;
        materialButton.setInternalBackground(rippleDrawable);
        lh.i a = a(false);
        if (a != null) {
            a.p(this.f18391w);
            a.setState(materialButton.getDrawableState());
        }
    }

    public final void d() {
        lh.i a = a(false);
        if (a != null) {
            z zVar = this.f18373c;
            if (zVar != null) {
                a.t(zVar);
            } else {
                a.setShapeAppearanceModel(this.f18372b);
            }
            i iVar = this.f18374d;
            if (iVar != null) {
                a.o(iVar);
            }
        }
        lh.i a10 = a(true);
        if (a10 != null) {
            z zVar2 = this.f18373c;
            if (zVar2 != null) {
                a10.t(zVar2);
            } else {
                a10.setShapeAppearanceModel(this.f18372b);
            }
            i iVar2 = this.f18374d;
            if (iVar2 != null) {
                a10.o(iVar2);
            }
        }
        RippleDrawable rippleDrawable = this.f18390v;
        w wVar = (rippleDrawable == null || rippleDrawable.getNumberOfLayers() <= 1) ? null : this.f18390v.getNumberOfLayers() > 2 ? (w) this.f18390v.getDrawable(2) : (w) this.f18390v.getDrawable(1);
        if (wVar != null) {
            wVar.setShapeAppearanceModel(this.f18372b);
            if (wVar instanceof lh.i) {
                lh.i iVar3 = (lh.i) wVar;
                z zVar3 = this.f18373c;
                if (zVar3 != null) {
                    iVar3.t(zVar3);
                }
                i iVar4 = this.f18374d;
                if (iVar4 != null) {
                    iVar3.o(iVar4);
                }
            }
        }
    }

    public final void e() {
        lh.i a = a(false);
        lh.i a10 = a(true);
        if (a != null) {
            float f2 = this.k;
            ColorStateList colorStateList = this.f18382n;
            a.f14001e.k = f2;
            a.invalidateSelf();
            g gVar = a.f14001e;
            if (gVar.f13986e != colorStateList) {
                gVar.f13986e = colorStateList;
                a.onStateChange(a.getState());
            }
            if (a10 != null) {
                float f10 = this.k;
                int w5 = this.f18385q ? com.facebook.imagepipeline.nativecode.c.w(R.attr.colorSurface, this.a) : 0;
                a10.f14001e.k = f10;
                a10.invalidateSelf();
                ColorStateList valueOf = ColorStateList.valueOf(w5);
                g gVar2 = a10.f14001e;
                if (gVar2.f13986e != valueOf) {
                    gVar2.f13986e = valueOf;
                    a10.onStateChange(a10.getState());
                }
            }
        }
    }
}
