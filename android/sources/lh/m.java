package lh;

import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.RectF;
import android.util.AttributeSet;
import android.util.TypedValue;
import android.view.ContextThemeWrapper;

/* loaded from: classes3.dex */
public final class m {
    public io.sentry.config.a a = new k();

    /* renamed from: b, reason: collision with root package name */
    public io.sentry.config.a f14016b = new k();

    /* renamed from: c, reason: collision with root package name */
    public io.sentry.config.a f14017c = new k();

    /* renamed from: d, reason: collision with root package name */
    public io.sentry.config.a f14018d = new k();

    /* renamed from: e, reason: collision with root package name */
    public d f14019e = new a(0.0f);

    /* renamed from: f, reason: collision with root package name */
    public d f14020f = new a(0.0f);

    /* renamed from: g, reason: collision with root package name */
    public d f14021g = new a(0.0f);

    /* renamed from: h, reason: collision with root package name */
    public d f14022h = new a(0.0f);

    /* renamed from: i, reason: collision with root package name */
    public f f14023i;
    public f j;
    public f k;

    /* renamed from: l, reason: collision with root package name */
    public f f14024l;

    public m() {
        int i5 = 0;
        this.f14023i = new f(i5);
        this.j = new f(i5);
        this.k = new f(i5);
        this.f14024l = new f(i5);
    }

    public static l a(Context context, int i5, int i6) {
        return b(context, i5, i6, new a(0));
    }

    public static l b(Context context, int i5, int i6, a aVar) {
        ContextThemeWrapper contextThemeWrapper = new ContextThemeWrapper(context, i5);
        if (i6 != 0) {
            contextThemeWrapper.getTheme().applyStyle(i6, true);
        }
        TypedArray obtainStyledAttributes = contextThemeWrapper.obtainStyledAttributes(lg.a.J);
        try {
            int i10 = obtainStyledAttributes.getInt(0, 0);
            int i11 = obtainStyledAttributes.getInt(3, i10);
            int i12 = obtainStyledAttributes.getInt(4, i10);
            int i13 = obtainStyledAttributes.getInt(2, i10);
            int i14 = obtainStyledAttributes.getInt(1, i10);
            d d6 = d(obtainStyledAttributes, 5, aVar);
            d d7 = d(obtainStyledAttributes, 8, d6);
            d d8 = d(obtainStyledAttributes, 9, d6);
            d d10 = d(obtainStyledAttributes, 7, d6);
            d d11 = d(obtainStyledAttributes, 6, d6);
            l lVar = new l();
            lVar.a = jb.a.f(i11);
            lVar.f14010e = d7;
            lVar.f14007b = jb.a.f(i12);
            lVar.f14011f = d8;
            lVar.f14008c = jb.a.f(i13);
            lVar.f14012g = d10;
            lVar.f14009d = jb.a.f(i14);
            lVar.f14013h = d11;
            return lVar;
        } finally {
            obtainStyledAttributes.recycle();
        }
    }

    public static l c(Context context, AttributeSet attributeSet, int i5, int i6) {
        a aVar = new a(0);
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, lg.a.A, i5, i6);
        int resourceId = obtainStyledAttributes.getResourceId(0, 0);
        int resourceId2 = obtainStyledAttributes.getResourceId(1, 0);
        obtainStyledAttributes.recycle();
        return b(context, resourceId, resourceId2, aVar);
    }

    public static d d(TypedArray typedArray, int i5, d dVar) {
        TypedValue peekValue = typedArray.peekValue(i5);
        if (peekValue != null) {
            int i6 = peekValue.type;
            if (i6 == 5) {
                return new a(TypedValue.complexToDimensionPixelSize(peekValue.data, typedArray.getResources().getDisplayMetrics()));
            }
            if (i6 == 6) {
                return new j(peekValue.getFraction(1.0f, 1.0f));
            }
        }
        return dVar;
    }

    public final boolean e() {
        return (this.f14016b instanceof k) && (this.a instanceof k) && (this.f14017c instanceof k) && (this.f14018d instanceof k);
    }

    public final boolean f(RectF rectF) {
        boolean z5 = this.f14024l.getClass().equals(f.class) && this.j.getClass().equals(f.class) && this.f14023i.getClass().equals(f.class) && this.k.getClass().equals(f.class);
        float a = this.f14019e.a(rectF);
        return z5 && ((this.f14020f.a(rectF) > a ? 1 : (this.f14020f.a(rectF) == a ? 0 : -1)) == 0 && (this.f14022h.a(rectF) > a ? 1 : (this.f14022h.a(rectF) == a ? 0 : -1)) == 0 && (this.f14021g.a(rectF) > a ? 1 : (this.f14021g.a(rectF) == a ? 0 : -1)) == 0) && e();
    }

    public final l g() {
        l lVar = new l();
        lVar.a = this.a;
        lVar.f14007b = this.f14016b;
        lVar.f14008c = this.f14017c;
        lVar.f14009d = this.f14018d;
        lVar.f14010e = this.f14019e;
        lVar.f14011f = this.f14020f;
        lVar.f14012g = this.f14021g;
        lVar.f14013h = this.f14022h;
        lVar.f14014i = this.f14023i;
        lVar.j = this.j;
        lVar.k = this.k;
        lVar.f14015l = this.f14024l;
        return lVar;
    }

    public final String toString() {
        return "[" + this.f14019e + ", " + this.f14020f + ", " + this.f14021g + ", " + this.f14022h + "]";
    }
}
