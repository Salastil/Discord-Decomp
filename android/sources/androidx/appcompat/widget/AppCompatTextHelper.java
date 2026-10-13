package androidx.appcompat.widget;

import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.graphics.PorterDuff;
import android.graphics.Typeface;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.text.TextUtils;
import android.text.method.PasswordTransformationMethod;
import android.util.AttributeSet;
import android.util.DisplayMetrics;
import android.util.TypedValue;
import android.view.inputmethod.EditorInfo;
import android.view.inputmethod.InputConnection;
import android.widget.TextView;
import java.lang.ref.WeakReference;
import java.util.Arrays;

/* loaded from: classes.dex */
public final class AppCompatTextHelper {
    public final TextView a;

    /* renamed from: b, reason: collision with root package name */
    public m3 f858b;

    /* renamed from: c, reason: collision with root package name */
    public m3 f859c;

    /* renamed from: d, reason: collision with root package name */
    public m3 f860d;

    /* renamed from: e, reason: collision with root package name */
    public m3 f861e;

    /* renamed from: f, reason: collision with root package name */
    public m3 f862f;

    /* renamed from: g, reason: collision with root package name */
    public m3 f863g;

    /* renamed from: h, reason: collision with root package name */
    public m3 f864h;

    /* renamed from: i, reason: collision with root package name */
    public final g1 f865i;
    public int j = 0;
    public int k = -1;

    /* renamed from: l, reason: collision with root package name */
    public Typeface f866l;

    /* renamed from: m, reason: collision with root package name */
    public boolean f867m;

    public AppCompatTextHelper(TextView textView) {
        this.a = textView;
        this.f865i = new g1(textView);
    }

    public static m3 c(Context context, x xVar, int i5) {
        ColorStateList f2;
        synchronized (xVar) {
            f2 = xVar.a.f(context, i5);
        }
        if (f2 == null) {
            return null;
        }
        m3 m3Var = new m3();
        m3Var.f1036b = true;
        m3Var.f1037c = f2;
        return m3Var;
    }

    public static void h(EditorInfo editorInfo, InputConnection inputConnection, TextView textView) {
        int i5 = Build.VERSION.SDK_INT;
        if (i5 >= 30 || inputConnection == null) {
            return;
        }
        CharSequence text = textView.getText();
        if (i5 >= 30) {
            m1.a.a(editorInfo, text);
            return;
        }
        text.getClass();
        if (i5 >= 30) {
            m1.a.a(editorInfo, text);
            return;
        }
        int i6 = editorInfo.initialSelStart;
        int i10 = editorInfo.initialSelEnd;
        int i11 = i6 > i10 ? i10 : i6;
        if (i6 <= i10) {
            i6 = i10;
        }
        int length = text.length();
        if (i11 < 0 || i6 > length) {
            m1.b.c(editorInfo, null, 0, 0);
            return;
        }
        int i12 = editorInfo.inputType & 4095;
        if (i12 == 129 || i12 == 225 || i12 == 18) {
            m1.b.c(editorInfo, null, 0, 0);
            return;
        }
        if (length <= 2048) {
            m1.b.c(editorInfo, text, i11, i6);
            return;
        }
        int i13 = i6 - i11;
        int i14 = i13 > 1024 ? 0 : i13;
        int i15 = 2048 - i14;
        int min = Math.min(text.length() - i6, i15 - Math.min(i11, (int) (i15 * 0.8d)));
        int min2 = Math.min(i11, i15 - min);
        int i16 = i11 - min2;
        if (Character.isLowSurrogate(text.charAt(i16))) {
            i16++;
            min2--;
        }
        if (Character.isHighSurrogate(text.charAt((i6 + min) - 1))) {
            min--;
        }
        int i17 = min2 + i14;
        m1.b.c(editorInfo, i14 != i13 ? TextUtils.concat(text.subSequence(i16, i16 + min2), text.subSequence(i6, min + i6)) : text.subSequence(i16, i17 + min + i16), min2, i17);
    }

    public final void a(Drawable drawable, m3 m3Var) {
        if (drawable == null || m3Var == null) {
            return;
        }
        x.e(drawable, m3Var, this.a.getDrawableState());
    }

    public final void b() {
        m3 m3Var = this.f858b;
        TextView textView = this.a;
        if (m3Var != null || this.f859c != null || this.f860d != null || this.f861e != null) {
            Drawable[] compoundDrawables = textView.getCompoundDrawables();
            a(compoundDrawables[0], this.f858b);
            a(compoundDrawables[1], this.f859c);
            a(compoundDrawables[2], this.f860d);
            a(compoundDrawables[3], this.f861e);
        }
        if (this.f862f == null && this.f863g == null) {
            return;
        }
        Drawable[] compoundDrawablesRelative = textView.getCompoundDrawablesRelative();
        a(compoundDrawablesRelative[0], this.f862f);
        a(compoundDrawablesRelative[2], this.f863g);
    }

    public final ColorStateList d() {
        m3 m3Var = this.f864h;
        if (m3Var != null) {
            return (ColorStateList) m3Var.f1037c;
        }
        return null;
    }

    public final PorterDuff.Mode e() {
        m3 m3Var = this.f864h;
        if (m3Var != null) {
            return (PorterDuff.Mode) m3Var.f1038d;
        }
        return null;
    }

    /* JADX WARN: Removed duplicated region for block: B:169:0x03a4  */
    /* JADX WARN: Removed duplicated region for block: B:171:0x03a9  */
    /* JADX WARN: Removed duplicated region for block: B:174:0x03b0  */
    /* JADX WARN: Removed duplicated region for block: B:184:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void f(AttributeSet attributeSet, int i5) {
        boolean z5;
        boolean z6;
        String str;
        String str2;
        int i6;
        float f2;
        int i10;
        ColorStateList colorStateList;
        int resourceId;
        int i11;
        int resourceId2;
        TextView textView = this.a;
        Context context = textView.getContext();
        x a = x.a();
        int[] iArr = h.a.f9452h;
        e4.m b02 = e4.m.b0(context, attributeSet, iArr, i5);
        androidx.core.view.s0.o(textView, textView.getContext(), iArr, attributeSet, (TypedArray) b02.f7964i, i5, 0);
        TypedArray typedArray = (TypedArray) b02.f7964i;
        int resourceId3 = typedArray.getResourceId(0, -1);
        if (typedArray.hasValue(3)) {
            this.f858b = c(context, a, typedArray.getResourceId(3, 0));
        }
        if (typedArray.hasValue(1)) {
            this.f859c = c(context, a, typedArray.getResourceId(1, 0));
        }
        if (typedArray.hasValue(4)) {
            this.f860d = c(context, a, typedArray.getResourceId(4, 0));
        }
        if (typedArray.hasValue(2)) {
            this.f861e = c(context, a, typedArray.getResourceId(2, 0));
        }
        if (typedArray.hasValue(5)) {
            this.f862f = c(context, a, typedArray.getResourceId(5, 0));
        }
        if (typedArray.hasValue(6)) {
            this.f863g = c(context, a, typedArray.getResourceId(6, 0));
        }
        b02.e0();
        boolean z7 = textView.getTransformationMethod() instanceof PasswordTransformationMethod;
        int[] iArr2 = h.a.f9466x;
        if (resourceId3 != -1) {
            TypedArray obtainStyledAttributes = context.obtainStyledAttributes(resourceId3, iArr2);
            e4.m mVar = new e4.m(context, obtainStyledAttributes);
            if (z7 || !obtainStyledAttributes.hasValue(14)) {
                z5 = false;
                z6 = false;
            } else {
                z6 = obtainStyledAttributes.getBoolean(14, false);
                z5 = true;
            }
            n(context, mVar);
            int i12 = Build.VERSION.SDK_INT;
            str2 = obtainStyledAttributes.hasValue(15) ? obtainStyledAttributes.getString(15) : null;
            str = (i12 < 26 || !obtainStyledAttributes.hasValue(13)) ? null : obtainStyledAttributes.getString(13);
            mVar.e0();
        } else {
            z5 = false;
            z6 = false;
            str = null;
            str2 = null;
        }
        TypedArray obtainStyledAttributes2 = context.obtainStyledAttributes(attributeSet, iArr2, i5, 0);
        e4.m mVar2 = new e4.m(context, obtainStyledAttributes2);
        if (!z7 && obtainStyledAttributes2.hasValue(14)) {
            z6 = obtainStyledAttributes2.getBoolean(14, false);
            z5 = true;
        }
        boolean z8 = z6;
        int i13 = Build.VERSION.SDK_INT;
        if (obtainStyledAttributes2.hasValue(15)) {
            str2 = obtainStyledAttributes2.getString(15);
        }
        if (i13 >= 26 && obtainStyledAttributes2.hasValue(13)) {
            str = obtainStyledAttributes2.getString(13);
        }
        if (i13 >= 28 && obtainStyledAttributes2.hasValue(0) && obtainStyledAttributes2.getDimensionPixelSize(0, -1) == 0) {
            textView.setTextSize(0, 0.0f);
        }
        n(context, mVar2);
        mVar2.e0();
        if (!z7 && z5) {
            textView.setAllCaps(z8);
        }
        Typeface typeface = this.f866l;
        if (typeface != null) {
            if (this.k == -1) {
                textView.setTypeface(typeface, this.j);
            } else {
                textView.setTypeface(typeface);
            }
        }
        if (str != null) {
            x0.d(textView, str);
        }
        if (str2 != null) {
            w0.b(textView, w0.a(str2));
        }
        g1 g1Var = this.f865i;
        Context context2 = g1Var.j;
        int[] iArr3 = h.a.f9453i;
        TypedArray obtainStyledAttributes3 = context2.obtainStyledAttributes(attributeSet, iArr3, i5, 0);
        TextView textView2 = g1Var.f990i;
        androidx.core.view.s0.o(textView2, textView2.getContext(), iArr3, attributeSet, obtainStyledAttributes3, i5, 0);
        if (obtainStyledAttributes3.hasValue(5)) {
            g1Var.a = obtainStyledAttributes3.getInt(5, 0);
        }
        float dimension = obtainStyledAttributes3.hasValue(4) ? obtainStyledAttributes3.getDimension(4, -1.0f) : -1.0f;
        float dimension2 = obtainStyledAttributes3.hasValue(2) ? obtainStyledAttributes3.getDimension(2, -1.0f) : -1.0f;
        float dimension3 = obtainStyledAttributes3.hasValue(1) ? obtainStyledAttributes3.getDimension(1, -1.0f) : -1.0f;
        if (obtainStyledAttributes3.hasValue(3) && (resourceId2 = obtainStyledAttributes3.getResourceId(3, 0)) > 0) {
            TypedArray obtainTypedArray = obtainStyledAttributes3.getResources().obtainTypedArray(resourceId2);
            int length = obtainTypedArray.length();
            int[] iArr4 = new int[length];
            if (length > 0) {
                for (int i14 = 0; i14 < length; i14++) {
                    iArr4[i14] = obtainTypedArray.getDimensionPixelSize(i14, -1);
                }
                g1Var.f987f = g1.b(iArr4);
                g1Var.i();
            }
            obtainTypedArray.recycle();
        }
        obtainStyledAttributes3.recycle();
        if (!g1Var.j()) {
            g1Var.a = 0;
        } else if (g1Var.a == 1) {
            if (!g1Var.f988g) {
                DisplayMetrics displayMetrics = context2.getResources().getDisplayMetrics();
                if (dimension2 == -1.0f) {
                    i11 = 2;
                    dimension2 = TypedValue.applyDimension(2, 12.0f, displayMetrics);
                } else {
                    i11 = 2;
                }
                if (dimension3 == -1.0f) {
                    dimension3 = TypedValue.applyDimension(i11, 112.0f, displayMetrics);
                }
                float f10 = dimension3;
                if (dimension == -1.0f) {
                    dimension = 1.0f;
                }
                g1Var.k(dimension2, f10, dimension);
            }
            g1Var.h();
        }
        if (f4.f979c && g1Var.a != 0) {
            int[] iArr5 = g1Var.f987f;
            if (iArr5.length > 0) {
                if (x0.a(textView) != -1.0f) {
                    x0.b(textView, Math.round(g1Var.f985d), Math.round(g1Var.f986e), Math.round(g1Var.f984c), 0);
                } else {
                    x0.c(textView, iArr5, 0);
                }
            }
        }
        TypedArray obtainStyledAttributes4 = context.obtainStyledAttributes(attributeSet, iArr3);
        int resourceId4 = obtainStyledAttributes4.getResourceId(8, -1);
        Drawable b10 = resourceId4 != -1 ? a.b(context, resourceId4) : null;
        int resourceId5 = obtainStyledAttributes4.getResourceId(13, -1);
        Drawable b11 = resourceId5 != -1 ? a.b(context, resourceId5) : null;
        int resourceId6 = obtainStyledAttributes4.getResourceId(9, -1);
        Drawable b12 = resourceId6 != -1 ? a.b(context, resourceId6) : null;
        int resourceId7 = obtainStyledAttributes4.getResourceId(6, -1);
        Drawable b13 = resourceId7 != -1 ? a.b(context, resourceId7) : null;
        int resourceId8 = obtainStyledAttributes4.getResourceId(10, -1);
        Drawable b14 = resourceId8 != -1 ? a.b(context, resourceId8) : null;
        int resourceId9 = obtainStyledAttributes4.getResourceId(7, -1);
        Drawable b15 = resourceId9 != -1 ? a.b(context, resourceId9) : null;
        if (b14 != null || b15 != null) {
            Drawable[] compoundDrawablesRelative = textView.getCompoundDrawablesRelative();
            if (b14 == null) {
                b14 = compoundDrawablesRelative[0];
            }
            if (b11 == null) {
                b11 = compoundDrawablesRelative[1];
            }
            if (b15 == null) {
                b15 = compoundDrawablesRelative[2];
            }
            if (b13 == null) {
                b13 = compoundDrawablesRelative[3];
            }
            textView.setCompoundDrawablesRelativeWithIntrinsicBounds(b14, b11, b15, b13);
        } else if (b10 != null || b11 != null || b12 != null || b13 != null) {
            Drawable[] compoundDrawablesRelative2 = textView.getCompoundDrawablesRelative();
            Drawable drawable = compoundDrawablesRelative2[0];
            if (drawable == null && compoundDrawablesRelative2[2] == null) {
                Drawable[] compoundDrawables = textView.getCompoundDrawables();
                if (b10 == null) {
                    b10 = compoundDrawables[0];
                }
                if (b11 == null) {
                    b11 = compoundDrawables[1];
                }
                if (b12 == null) {
                    b12 = compoundDrawables[2];
                }
                if (b13 == null) {
                    b13 = compoundDrawables[3];
                }
                textView.setCompoundDrawablesWithIntrinsicBounds(b10, b11, b12, b13);
            } else {
                if (b11 == null) {
                    b11 = compoundDrawablesRelative2[1];
                }
                if (b13 == null) {
                    b13 = compoundDrawablesRelative2[3];
                }
                textView.setCompoundDrawablesRelativeWithIntrinsicBounds(drawable, b11, compoundDrawablesRelative2[2], b13);
            }
        }
        if (obtainStyledAttributes4.hasValue(11)) {
            if (!obtainStyledAttributes4.hasValue(11) || (resourceId = obtainStyledAttributes4.getResourceId(11, 0)) == 0 || (colorStateList = y0.b.c(context, resourceId)) == null) {
                colorStateList = obtainStyledAttributes4.getColorStateList(11);
            }
            textView.setCompoundDrawableTintList(colorStateList);
        }
        if (obtainStyledAttributes4.hasValue(12)) {
            textView.setCompoundDrawableTintMode(n1.c(obtainStyledAttributes4.getInt(12, -1), null));
        }
        int dimensionPixelSize = obtainStyledAttributes4.getDimensionPixelSize(15, -1);
        int dimensionPixelSize2 = obtainStyledAttributes4.getDimensionPixelSize(18, -1);
        if (obtainStyledAttributes4.hasValue(19)) {
            TypedValue peekValue = obtainStyledAttributes4.peekValue(19);
            if (peekValue != null && peekValue.type == 5) {
                int i15 = peekValue.data;
                int i16 = i15 & 15;
                f2 = TypedValue.complexToFloat(i15);
                i10 = i16;
                i6 = -1;
                obtainStyledAttributes4.recycle();
                if (dimensionPixelSize != i6) {
                    androidx.core.widget.h.b(dimensionPixelSize, textView);
                }
                if (dimensionPixelSize2 != i6) {
                    androidx.core.widget.h.c(dimensionPixelSize2, textView);
                }
                if (f2 == -1.0f) {
                    if (i10 == i6) {
                        androidx.core.widget.h.d((int) f2, textView);
                        return;
                    } else if (Build.VERSION.SDK_INT >= 34) {
                        a2.a.m(textView, i10, f2);
                        return;
                    } else {
                        androidx.core.widget.h.d(Math.round(TypedValue.applyDimension(i10, f2, textView.getResources().getDisplayMetrics())), textView);
                        return;
                    }
                }
                return;
            }
            i6 = -1;
            f2 = obtainStyledAttributes4.getDimensionPixelSize(19, -1);
        } else {
            i6 = -1;
            f2 = -1.0f;
        }
        i10 = i6;
        obtainStyledAttributes4.recycle();
        if (dimensionPixelSize != i6) {
        }
        if (dimensionPixelSize2 != i6) {
        }
        if (f2 == -1.0f) {
        }
    }

    public final void g(Context context, int i5) {
        String string;
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(i5, h.a.f9466x);
        e4.m mVar = new e4.m(context, obtainStyledAttributes);
        boolean hasValue = obtainStyledAttributes.hasValue(14);
        TextView textView = this.a;
        if (hasValue) {
            textView.setAllCaps(obtainStyledAttributes.getBoolean(14, false));
        }
        int i6 = Build.VERSION.SDK_INT;
        if (obtainStyledAttributes.hasValue(0) && obtainStyledAttributes.getDimensionPixelSize(0, -1) == 0) {
            textView.setTextSize(0, 0.0f);
        }
        n(context, mVar);
        if (i6 >= 26 && obtainStyledAttributes.hasValue(13) && (string = obtainStyledAttributes.getString(13)) != null) {
            x0.d(textView, string);
        }
        mVar.e0();
        Typeface typeface = this.f866l;
        if (typeface != null) {
            textView.setTypeface(typeface, this.j);
        }
    }

    public final void i(int i5, int i6, int i10, int i11) {
        g1 g1Var = this.f865i;
        if (g1Var.j()) {
            DisplayMetrics displayMetrics = g1Var.j.getResources().getDisplayMetrics();
            g1Var.k(TypedValue.applyDimension(i11, i5, displayMetrics), TypedValue.applyDimension(i11, i6, displayMetrics), TypedValue.applyDimension(i11, i10, displayMetrics));
            if (g1Var.h()) {
                g1Var.a();
            }
        }
    }

    public final void j(int[] iArr, int i5) {
        g1 g1Var = this.f865i;
        if (g1Var.j()) {
            int length = iArr.length;
            if (length > 0) {
                int[] iArr2 = new int[length];
                if (i5 == 0) {
                    iArr2 = Arrays.copyOf(iArr, length);
                } else {
                    DisplayMetrics displayMetrics = g1Var.j.getResources().getDisplayMetrics();
                    for (int i6 = 0; i6 < length; i6++) {
                        iArr2[i6] = Math.round(TypedValue.applyDimension(i5, iArr[i6], displayMetrics));
                    }
                }
                g1Var.f987f = g1.b(iArr2);
                if (!g1Var.i()) {
                    throw new IllegalArgumentException("None of the preset sizes is valid: " + Arrays.toString(iArr));
                }
            } else {
                g1Var.f988g = false;
            }
            if (g1Var.h()) {
                g1Var.a();
            }
        }
    }

    public final void k(int i5) {
        g1 g1Var = this.f865i;
        if (g1Var.j()) {
            if (i5 == 0) {
                g1Var.a = 0;
                g1Var.f985d = -1.0f;
                g1Var.f986e = -1.0f;
                g1Var.f984c = -1.0f;
                g1Var.f987f = new int[0];
                g1Var.f983b = false;
                return;
            }
            if (i5 != 1) {
                throw new IllegalArgumentException(k0.d.i(i5, "Unknown auto-size text type: "));
            }
            DisplayMetrics displayMetrics = g1Var.j.getResources().getDisplayMetrics();
            g1Var.k(TypedValue.applyDimension(2, 12.0f, displayMetrics), TypedValue.applyDimension(2, 112.0f, displayMetrics), 1.0f);
            if (g1Var.h()) {
                g1Var.a();
            }
        }
    }

    public final void l(ColorStateList colorStateList) {
        if (this.f864h == null) {
            this.f864h = new m3();
        }
        m3 m3Var = this.f864h;
        m3Var.f1037c = colorStateList;
        m3Var.f1036b = colorStateList != null;
        this.f858b = m3Var;
        this.f859c = m3Var;
        this.f860d = m3Var;
        this.f861e = m3Var;
        this.f862f = m3Var;
        this.f863g = m3Var;
    }

    public final void m(PorterDuff.Mode mode) {
        if (this.f864h == null) {
            this.f864h = new m3();
        }
        m3 m3Var = this.f864h;
        m3Var.f1038d = mode;
        m3Var.a = mode != null;
        this.f858b = m3Var;
        this.f859c = m3Var;
        this.f860d = m3Var;
        this.f861e = m3Var;
        this.f862f = m3Var;
        this.f863g = m3Var;
    }

    public final void n(Context context, e4.m mVar) {
        String string;
        int i5 = this.j;
        TypedArray typedArray = (TypedArray) mVar.f7964i;
        this.j = typedArray.getInt(2, i5);
        int i6 = Build.VERSION.SDK_INT;
        if (i6 >= 28) {
            int i10 = typedArray.getInt(11, -1);
            this.k = i10;
            if (i10 != -1) {
                this.j &= 2;
            }
        }
        if (!typedArray.hasValue(10) && !typedArray.hasValue(12)) {
            if (typedArray.hasValue(1)) {
                this.f867m = false;
                int i11 = typedArray.getInt(1, 1);
                if (i11 == 1) {
                    this.f866l = Typeface.SANS_SERIF;
                    return;
                } else if (i11 == 2) {
                    this.f866l = Typeface.SERIF;
                    return;
                } else {
                    if (i11 != 3) {
                        return;
                    }
                    this.f866l = Typeface.MONOSPACE;
                    return;
                }
            }
            return;
        }
        this.f866l = null;
        int i12 = typedArray.hasValue(12) ? 12 : 10;
        int i13 = this.k;
        int i14 = this.j;
        if (!context.isRestricted()) {
            try {
                Typeface W = mVar.W(i12, this.j, new u0(this, i13, i14, new WeakReference(this.a)));
                if (W != null) {
                    if (i6 < 28 || this.k == -1) {
                        this.f866l = W;
                    } else {
                        this.f866l = y0.a(Typeface.create(W, 0), this.k, (this.j & 2) != 0);
                    }
                }
                this.f867m = this.f866l == null;
            } catch (Resources.NotFoundException | UnsupportedOperationException unused) {
            }
        }
        if (this.f866l != null || (string = typedArray.getString(i12)) == null) {
            return;
        }
        if (Build.VERSION.SDK_INT < 28 || this.k == -1) {
            this.f866l = Typeface.create(string, this.j);
        } else {
            this.f866l = y0.a(Typeface.create(string, 0), this.k, (this.j & 2) != 0);
        }
    }
}
