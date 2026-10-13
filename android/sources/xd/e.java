package xd;

import android.graphics.Color;
import android.text.SpannableString;
import android.text.SpannableStringBuilder;
import android.text.style.BackgroundColorSpan;
import android.text.style.ForegroundColorSpan;
import android.text.style.StyleSpan;
import android.text.style.UnderlineSpan;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class e {
    public static final int[] A;
    public static final boolean[] B;
    public static final int[] C;
    public static final int[] D;
    public static final int[] E;
    public static final int[] F;

    /* renamed from: w, reason: collision with root package name */
    public static final int f20362w = c(2, 2, 2, 0);

    /* renamed from: x, reason: collision with root package name */
    public static final int f20363x;

    /* renamed from: y, reason: collision with root package name */
    public static final int[] f20364y;

    /* renamed from: z, reason: collision with root package name */
    public static final int[] f20365z;
    public final ArrayList a = new ArrayList();

    /* renamed from: b, reason: collision with root package name */
    public final SpannableStringBuilder f20366b = new SpannableStringBuilder();

    /* renamed from: c, reason: collision with root package name */
    public boolean f20367c;

    /* renamed from: d, reason: collision with root package name */
    public boolean f20368d;

    /* renamed from: e, reason: collision with root package name */
    public int f20369e;

    /* renamed from: f, reason: collision with root package name */
    public boolean f20370f;

    /* renamed from: g, reason: collision with root package name */
    public int f20371g;

    /* renamed from: h, reason: collision with root package name */
    public int f20372h;

    /* renamed from: i, reason: collision with root package name */
    public int f20373i;
    public int j;
    public boolean k;

    /* renamed from: l, reason: collision with root package name */
    public int f20374l;

    /* renamed from: m, reason: collision with root package name */
    public int f20375m;

    /* renamed from: n, reason: collision with root package name */
    public int f20376n;

    /* renamed from: o, reason: collision with root package name */
    public int f20377o;

    /* renamed from: p, reason: collision with root package name */
    public int f20378p;

    /* renamed from: q, reason: collision with root package name */
    public int f20379q;

    /* renamed from: r, reason: collision with root package name */
    public int f20380r;

    /* renamed from: s, reason: collision with root package name */
    public int f20381s;

    /* renamed from: t, reason: collision with root package name */
    public int f20382t;

    /* renamed from: u, reason: collision with root package name */
    public int f20383u;

    /* renamed from: v, reason: collision with root package name */
    public int f20384v;

    static {
        int c6 = c(0, 0, 0, 0);
        f20363x = c6;
        int c8 = c(0, 0, 0, 3);
        f20364y = new int[]{0, 0, 0, 0, 0, 2, 0};
        f20365z = new int[]{0, 0, 0, 0, 0, 0, 2};
        A = new int[]{3, 3, 3, 3, 3, 3, 1};
        B = new boolean[]{false, false, false, true, true, true, false};
        C = new int[]{c6, c8, c6, c6, c8, c6, c6};
        D = new int[]{0, 1, 2, 3, 4, 3, 4};
        E = new int[]{0, 0, 0, 0, 0, 3, 3};
        F = new int[]{c6, c6, c6, c6, c6, c8, c8};
    }

    public e() {
        d();
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x0023  */
    /* JADX WARN: Removed duplicated region for block: B:12:0x0028  */
    /* JADX WARN: Removed duplicated region for block: B:14:0x002e  */
    /* JADX WARN: Removed duplicated region for block: B:18:0x002a  */
    /* JADX WARN: Removed duplicated region for block: B:19:0x0025  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static int c(int i5, int i6, int i10, int i11) {
        int i12;
        ke.b.j(i5, 4);
        ke.b.j(i6, 4);
        ke.b.j(i10, 4);
        ke.b.j(i11, 4);
        if (i11 != 0 && i11 != 1) {
            if (i11 == 2) {
                i12 = 127;
            } else if (i11 == 3) {
                i12 = 0;
            }
            return Color.argb(i12, i5 <= 1 ? 255 : 0, i6 <= 1 ? 255 : 0, i10 <= 1 ? 0 : 255);
        }
        i12 = 255;
        return Color.argb(i12, i5 <= 1 ? 255 : 0, i6 <= 1 ? 255 : 0, i10 <= 1 ? 0 : 255);
    }

    public final void a(char c6) {
        SpannableStringBuilder spannableStringBuilder = this.f20366b;
        if (c6 != '\n') {
            spannableStringBuilder.append(c6);
            return;
        }
        SpannableString b10 = b();
        ArrayList arrayList = this.a;
        arrayList.add(b10);
        spannableStringBuilder.clear();
        if (this.f20378p != -1) {
            this.f20378p = 0;
        }
        if (this.f20379q != -1) {
            this.f20379q = 0;
        }
        if (this.f20380r != -1) {
            this.f20380r = 0;
        }
        if (this.f20382t != -1) {
            this.f20382t = 0;
        }
        while (true) {
            if ((!this.k || arrayList.size() < this.j) && arrayList.size() < 15) {
                return;
            } else {
                arrayList.remove(0);
            }
        }
    }

    public final SpannableString b() {
        SpannableStringBuilder spannableStringBuilder = new SpannableStringBuilder(this.f20366b);
        int length = spannableStringBuilder.length();
        if (length > 0) {
            if (this.f20378p != -1) {
                spannableStringBuilder.setSpan(new StyleSpan(2), this.f20378p, length, 33);
            }
            if (this.f20379q != -1) {
                spannableStringBuilder.setSpan(new UnderlineSpan(), this.f20379q, length, 33);
            }
            if (this.f20380r != -1) {
                spannableStringBuilder.setSpan(new ForegroundColorSpan(this.f20381s), this.f20380r, length, 33);
            }
            if (this.f20382t != -1) {
                spannableStringBuilder.setSpan(new BackgroundColorSpan(this.f20383u), this.f20382t, length, 33);
            }
        }
        return new SpannableString(spannableStringBuilder);
    }

    public final void d() {
        this.a.clear();
        this.f20366b.clear();
        this.f20378p = -1;
        this.f20379q = -1;
        this.f20380r = -1;
        this.f20382t = -1;
        this.f20384v = 0;
        this.f20367c = false;
        this.f20368d = false;
        this.f20369e = 4;
        this.f20370f = false;
        this.f20371g = 0;
        this.f20372h = 0;
        this.f20373i = 0;
        this.j = 15;
        this.k = true;
        this.f20374l = 0;
        this.f20375m = 0;
        this.f20376n = 0;
        int i5 = f20363x;
        this.f20377o = i5;
        this.f20381s = f20362w;
        this.f20383u = i5;
    }

    public final void e(boolean z5, boolean z6) {
        int i5 = this.f20378p;
        SpannableStringBuilder spannableStringBuilder = this.f20366b;
        if (i5 != -1) {
            if (!z5) {
                spannableStringBuilder.setSpan(new StyleSpan(2), this.f20378p, spannableStringBuilder.length(), 33);
                this.f20378p = -1;
            }
        } else if (z5) {
            this.f20378p = spannableStringBuilder.length();
        }
        if (this.f20379q == -1) {
            if (z6) {
                this.f20379q = spannableStringBuilder.length();
            }
        } else {
            if (z6) {
                return;
            }
            spannableStringBuilder.setSpan(new UnderlineSpan(), this.f20379q, spannableStringBuilder.length(), 33);
            this.f20379q = -1;
        }
    }

    public final void f(int i5, int i6) {
        int i10 = this.f20380r;
        SpannableStringBuilder spannableStringBuilder = this.f20366b;
        if (i10 != -1 && this.f20381s != i5) {
            spannableStringBuilder.setSpan(new ForegroundColorSpan(this.f20381s), this.f20380r, spannableStringBuilder.length(), 33);
        }
        if (i5 != f20362w) {
            this.f20380r = spannableStringBuilder.length();
            this.f20381s = i5;
        }
        if (this.f20382t != -1 && this.f20383u != i6) {
            spannableStringBuilder.setSpan(new BackgroundColorSpan(this.f20383u), this.f20382t, spannableStringBuilder.length(), 33);
        }
        if (i6 != f20363x) {
            this.f20382t = spannableStringBuilder.length();
            this.f20383u = i6;
        }
    }
}
