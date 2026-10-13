package lh;

import android.content.res.ColorStateList;
import android.graphics.Paint;
import android.graphics.PorterDuff;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;

/* loaded from: classes3.dex */
public class g extends Drawable.ConstantState {
    public m a;

    /* renamed from: b, reason: collision with root package name */
    public z f13983b;

    /* renamed from: c, reason: collision with root package name */
    public bh.a f13984c;

    /* renamed from: d, reason: collision with root package name */
    public ColorStateList f13985d;

    /* renamed from: e, reason: collision with root package name */
    public ColorStateList f13986e;

    /* renamed from: f, reason: collision with root package name */
    public ColorStateList f13987f;

    /* renamed from: g, reason: collision with root package name */
    public PorterDuff.Mode f13988g;

    /* renamed from: h, reason: collision with root package name */
    public Rect f13989h;

    /* renamed from: i, reason: collision with root package name */
    public final float f13990i;
    public float j;
    public float k;

    /* renamed from: l, reason: collision with root package name */
    public int f13991l;

    /* renamed from: m, reason: collision with root package name */
    public float f13992m;

    /* renamed from: n, reason: collision with root package name */
    public float f13993n;

    /* renamed from: o, reason: collision with root package name */
    public int f13994o;

    /* renamed from: p, reason: collision with root package name */
    public int f13995p;

    /* renamed from: q, reason: collision with root package name */
    public final Paint.Style f13996q;

    public g(m mVar) {
        this.f13985d = null;
        this.f13986e = null;
        this.f13987f = null;
        this.f13988g = PorterDuff.Mode.SRC_IN;
        this.f13989h = null;
        this.f13990i = 1.0f;
        this.j = 1.0f;
        this.f13991l = 255;
        this.f13992m = 0.0f;
        this.f13993n = 0.0f;
        this.f13994o = 0;
        this.f13995p = 0;
        this.f13996q = Paint.Style.FILL_AND_STROKE;
        this.a = mVar;
        this.f13984c = null;
    }

    @Override // android.graphics.drawable.Drawable.ConstantState
    public final int getChangingConfigurations() {
        return 0;
    }

    @Override // android.graphics.drawable.Drawable.ConstantState
    public Drawable newDrawable() {
        i iVar = new i(this);
        iVar.f14005x = true;
        iVar.f14006y = true;
        return iVar;
    }

    public g(g gVar) {
        this.f13985d = null;
        this.f13986e = null;
        this.f13987f = null;
        this.f13988g = PorterDuff.Mode.SRC_IN;
        this.f13989h = null;
        this.f13990i = 1.0f;
        this.j = 1.0f;
        this.f13991l = 255;
        this.f13992m = 0.0f;
        this.f13993n = 0.0f;
        this.f13994o = 0;
        this.f13995p = 0;
        this.f13996q = Paint.Style.FILL_AND_STROKE;
        this.a = gVar.a;
        this.f13983b = gVar.f13983b;
        this.f13984c = gVar.f13984c;
        this.k = gVar.k;
        this.f13985d = gVar.f13985d;
        this.f13986e = gVar.f13986e;
        this.f13988g = gVar.f13988g;
        this.f13987f = gVar.f13987f;
        this.f13991l = gVar.f13991l;
        this.f13990i = gVar.f13990i;
        this.f13995p = gVar.f13995p;
        this.j = gVar.j;
        this.f13992m = gVar.f13992m;
        this.f13993n = gVar.f13993n;
        this.f13994o = gVar.f13994o;
        this.f13996q = gVar.f13996q;
        if (gVar.f13989h != null) {
            this.f13989h = new Rect(gVar.f13989h);
        }
    }
}
