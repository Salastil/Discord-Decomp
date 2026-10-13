package ih;

import a1.n;
import a5.k0;
import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.content.res.XmlResourceParser;
import android.graphics.Typeface;
import android.os.Build;
import android.text.TextPaint;
import android.util.Log;
import android.util.TypedValue;
import android.util.Xml;

/* loaded from: classes3.dex */
public final class e {
    public final ColorStateList a;

    /* renamed from: b, reason: collision with root package name */
    public final String f10802b;

    /* renamed from: c, reason: collision with root package name */
    public final String f10803c;

    /* renamed from: d, reason: collision with root package name */
    public final int f10804d;

    /* renamed from: e, reason: collision with root package name */
    public final int f10805e;

    /* renamed from: f, reason: collision with root package name */
    public final float f10806f;

    /* renamed from: g, reason: collision with root package name */
    public final float f10807g;

    /* renamed from: h, reason: collision with root package name */
    public final float f10808h;

    /* renamed from: i, reason: collision with root package name */
    public final boolean f10809i;
    public final float j;
    public final ColorStateList k;

    /* renamed from: l, reason: collision with root package name */
    public float f10810l;

    /* renamed from: m, reason: collision with root package name */
    public final int f10811m;

    /* renamed from: n, reason: collision with root package name */
    public boolean f10812n = false;

    /* renamed from: o, reason: collision with root package name */
    public boolean f10813o = false;

    /* renamed from: p, reason: collision with root package name */
    public Typeface f10814p;

    public e(Context context, int i5) {
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(i5, h.a.f9466x);
        this.f10810l = obtainStyledAttributes.getDimension(0, 0.0f);
        this.k = k0.u(context, obtainStyledAttributes, 3);
        k0.u(context, obtainStyledAttributes, 4);
        k0.u(context, obtainStyledAttributes, 5);
        this.f10804d = obtainStyledAttributes.getInt(2, 0);
        this.f10805e = obtainStyledAttributes.getInt(1, 1);
        int i6 = obtainStyledAttributes.hasValue(12) ? 12 : 10;
        this.f10811m = obtainStyledAttributes.getResourceId(i6, 0);
        this.f10802b = obtainStyledAttributes.getString(i6);
        obtainStyledAttributes.getBoolean(14, false);
        this.a = k0.u(context, obtainStyledAttributes, 6);
        this.f10806f = obtainStyledAttributes.getFloat(7, 0.0f);
        this.f10807g = obtainStyledAttributes.getFloat(8, 0.0f);
        this.f10808h = obtainStyledAttributes.getFloat(9, 0.0f);
        obtainStyledAttributes.recycle();
        TypedArray obtainStyledAttributes2 = context.obtainStyledAttributes(i5, lg.a.C);
        this.f10809i = obtainStyledAttributes2.hasValue(0);
        this.j = obtainStyledAttributes2.getFloat(0, 0.0f);
        if (Build.VERSION.SDK_INT >= 26) {
            this.f10803c = obtainStyledAttributes2.getString(obtainStyledAttributes2.hasValue(3) ? 3 : 1);
        }
        obtainStyledAttributes2.recycle();
    }

    public final void a() {
        String str;
        Typeface typeface = this.f10814p;
        int i5 = this.f10804d;
        if (typeface == null && (str = this.f10802b) != null) {
            this.f10814p = Typeface.create(str, i5);
        }
        if (this.f10814p == null) {
            int i6 = this.f10805e;
            if (i6 == 1) {
                this.f10814p = Typeface.SANS_SERIF;
            } else if (i6 == 2) {
                this.f10814p = Typeface.SERIF;
            } else if (i6 != 3) {
                this.f10814p = Typeface.DEFAULT;
            } else {
                this.f10814p = Typeface.MONOSPACE;
            }
            this.f10814p = Typeface.create(this.f10814p, i5);
        }
    }

    public final void b(Context context, android.support.v4.media.session.b bVar) {
        if (!c(context)) {
            a();
        }
        int i5 = this.f10811m;
        if (i5 == 0) {
            this.f10812n = true;
        }
        if (this.f10812n) {
            bVar.t(this.f10814p, true);
            return;
        }
        try {
            c cVar = new c(this, bVar);
            ThreadLocal threadLocal = n.a;
            if (context.isRestricted()) {
                cVar.a(-4);
            } else {
                n.a(context, i5, new TypedValue(), 0, cVar, false, false);
            }
        } catch (Resources.NotFoundException unused) {
            this.f10812n = true;
            bVar.s(1);
        } catch (Exception e9) {
            Log.d("TextAppearance", "Error loading font " + this.f10802b, e9);
            this.f10812n = true;
            bVar.s(-3);
        }
    }

    public final boolean c(Context context) {
        Context context2;
        Typeface a;
        String str;
        Typeface create;
        if (this.f10812n) {
            return true;
        }
        int i5 = this.f10811m;
        if (i5 != 0) {
            ThreadLocal threadLocal = n.a;
            Typeface typeface = null;
            if (context.isRestricted()) {
                context2 = context;
                a = null;
            } else {
                context2 = context;
                a = n.a(context2, i5, new TypedValue(), 0, null, false, true);
            }
            if (a != null) {
                this.f10814p = a;
                this.f10812n = true;
                return true;
            }
            if (!this.f10813o) {
                this.f10813o = true;
                Resources resources = context2.getResources();
                int i6 = this.f10811m;
                if (i6 != 0 && resources.getResourceTypeName(i6).equals("font")) {
                    try {
                        XmlResourceParser xml = resources.getXml(i6);
                        while (xml.getEventType() != 1) {
                            if (xml.getEventType() == 2 && xml.getName().equals("font-family")) {
                                TypedArray obtainAttributes = resources.obtainAttributes(Xml.asAttributeSet(xml), w0.a.f19597b);
                                str = obtainAttributes.getString(7);
                                obtainAttributes.recycle();
                                break;
                            }
                            xml.next();
                        }
                    } catch (Throwable unused) {
                    }
                }
                str = null;
                if (str != null && (create = Typeface.create(str, 0)) != Typeface.DEFAULT) {
                    typeface = Typeface.create(create, this.f10804d);
                }
            }
            if (typeface != null) {
                this.f10814p = typeface;
                this.f10812n = true;
                return true;
            }
        }
        return false;
    }

    public final void d(Context context, TextPaint textPaint, android.support.v4.media.session.b bVar) {
        e(context, textPaint, bVar);
        ColorStateList colorStateList = this.k;
        textPaint.setColor(colorStateList != null ? colorStateList.getColorForState(textPaint.drawableState, colorStateList.getDefaultColor()) : -16777216);
        ColorStateList colorStateList2 = this.a;
        textPaint.setShadowLayer(this.f10808h, this.f10806f, this.f10807g, colorStateList2 != null ? colorStateList2.getColorForState(textPaint.drawableState, colorStateList2.getDefaultColor()) : 0);
    }

    public final void e(Context context, TextPaint textPaint, android.support.v4.media.session.b bVar) {
        Typeface typeface;
        if (c(context) && this.f10812n && (typeface = this.f10814p) != null) {
            f(context, textPaint, typeface);
            return;
        }
        a();
        f(context, textPaint, this.f10814p);
        b(context, new d(this, context, textPaint, bVar));
    }

    public final void f(Context context, TextPaint textPaint, Typeface typeface) {
        Typeface a = f.a(context.getResources().getConfiguration(), typeface);
        if (a != null) {
            typeface = a;
        }
        textPaint.setTypeface(typeface);
        int i5 = (~typeface.getStyle()) & this.f10804d;
        textPaint.setFakeBoldText((i5 & 1) != 0);
        textPaint.setTextSkewX((i5 & 2) != 0 ? -0.25f : 0.0f);
        textPaint.setTextSize(this.f10810l);
        if (Build.VERSION.SDK_INT >= 26) {
            textPaint.setFontVariationSettings(this.f10803c);
        }
        if (this.f10809i) {
            textPaint.setLetterSpacing(this.j);
        }
    }
}
