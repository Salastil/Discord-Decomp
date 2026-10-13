package xd;

import android.text.Layout;
import android.text.SpannableString;
import android.text.SpannableStringBuilder;
import android.text.style.ForegroundColorSpan;
import android.text.style.StyleSpan;
import android.text.style.UnderlineSpan;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class b {
    public final ArrayList a;

    /* renamed from: b, reason: collision with root package name */
    public final ArrayList f20335b;

    /* renamed from: c, reason: collision with root package name */
    public final StringBuilder f20336c;

    /* renamed from: d, reason: collision with root package name */
    public int f20337d;

    /* renamed from: e, reason: collision with root package name */
    public int f20338e;

    /* renamed from: f, reason: collision with root package name */
    public int f20339f;

    /* renamed from: g, reason: collision with root package name */
    public int f20340g;

    /* renamed from: h, reason: collision with root package name */
    public int f20341h;

    public b(int i5, int i6) {
        ArrayList arrayList = new ArrayList();
        this.a = arrayList;
        ArrayList arrayList2 = new ArrayList();
        this.f20335b = arrayList2;
        StringBuilder sb2 = new StringBuilder();
        this.f20336c = sb2;
        this.f20340g = i5;
        arrayList.clear();
        arrayList2.clear();
        sb2.setLength(0);
        this.f20337d = 15;
        this.f20338e = 0;
        this.f20339f = 0;
        this.f20341h = i6;
    }

    public final void a(char c6) {
        StringBuilder sb2 = this.f20336c;
        if (sb2.length() < 32) {
            sb2.append(c6);
        }
    }

    public final void b() {
        StringBuilder sb2 = this.f20336c;
        int length = sb2.length();
        if (length > 0) {
            sb2.delete(length - 1, length);
            ArrayList arrayList = this.a;
            for (int size = arrayList.size() - 1; size >= 0; size--) {
                a aVar = (a) arrayList.get(size);
                int i5 = aVar.f20334c;
                if (i5 != length) {
                    return;
                }
                aVar.f20334c = i5 - 1;
            }
        }
    }

    public final wd.b c(int i5) {
        float f2;
        SpannableStringBuilder spannableStringBuilder = new SpannableStringBuilder();
        int i6 = 0;
        while (true) {
            ArrayList arrayList = this.f20335b;
            if (i6 >= arrayList.size()) {
                break;
            }
            spannableStringBuilder.append((CharSequence) arrayList.get(i6));
            spannableStringBuilder.append('\n');
            i6++;
        }
        spannableStringBuilder.append((CharSequence) d());
        if (spannableStringBuilder.length() == 0) {
            return null;
        }
        int i10 = this.f20338e + this.f20339f;
        int length = (32 - i10) - spannableStringBuilder.length();
        int i11 = i10 - length;
        int i12 = i5 != Integer.MIN_VALUE ? i5 : (this.f20340g != 2 || (Math.abs(i11) >= 3 && length >= 0)) ? (this.f20340g != 2 || i11 <= 0) ? 0 : 2 : 1;
        if (i12 != 1) {
            if (i12 == 2) {
                i10 = 32 - length;
            }
            f2 = ((i10 / 32.0f) * 0.8f) + 0.1f;
        } else {
            f2 = 0.5f;
        }
        float f10 = f2;
        int i13 = this.f20337d;
        if (i13 > 7) {
            i13 -= 17;
        } else if (this.f20340g == 1) {
            i13 -= this.f20341h - 1;
        }
        return new wd.b(spannableStringBuilder, Layout.Alignment.ALIGN_NORMAL, null, null, i13, 1, Integer.MIN_VALUE, f10, i12, Integer.MIN_VALUE, -3.4028235E38f, -3.4028235E38f, -3.4028235E38f, false, -16777216, Integer.MIN_VALUE, 0.0f);
    }

    public final SpannableString d() {
        SpannableStringBuilder spannableStringBuilder = new SpannableStringBuilder(this.f20336c);
        int length = spannableStringBuilder.length();
        int i5 = -1;
        int i6 = -1;
        int i10 = -1;
        int i11 = -1;
        int i12 = 0;
        int i13 = 0;
        boolean z5 = false;
        while (true) {
            ArrayList arrayList = this.a;
            if (i12 >= arrayList.size()) {
                break;
            }
            a aVar = (a) arrayList.get(i12);
            boolean z6 = aVar.f20333b;
            int i14 = aVar.a;
            if (i14 != 8) {
                boolean z7 = i14 == 7;
                if (i14 != 7) {
                    i11 = c.A[i14];
                }
                z5 = z7;
            }
            int i15 = aVar.f20334c;
            i12++;
            if (i15 != (i12 < arrayList.size() ? ((a) arrayList.get(i12)).f20334c : length)) {
                if (i5 != -1 && !z6) {
                    spannableStringBuilder.setSpan(new UnderlineSpan(), i5, i15, 33);
                    i5 = -1;
                } else if (i5 == -1 && z6) {
                    i5 = i15;
                }
                if (i6 != -1 && !z5) {
                    spannableStringBuilder.setSpan(new StyleSpan(2), i6, i15, 33);
                    i6 = -1;
                } else if (i6 == -1 && z5) {
                    i6 = i15;
                }
                if (i11 != i10) {
                    if (i10 != -1) {
                        spannableStringBuilder.setSpan(new ForegroundColorSpan(i10), i13, i15, 33);
                    }
                    i10 = i11;
                    i13 = i15;
                }
            }
        }
        if (i5 != -1 && i5 != length) {
            spannableStringBuilder.setSpan(new UnderlineSpan(), i5, length, 33);
        }
        if (i6 != -1 && i6 != length) {
            spannableStringBuilder.setSpan(new StyleSpan(2), i6, length, 33);
        }
        if (i13 != length && i10 != -1) {
            spannableStringBuilder.setSpan(new ForegroundColorSpan(i10), i13, length, 33);
        }
        return new SpannableString(spannableStringBuilder);
    }

    public final boolean e() {
        return this.a.isEmpty() && this.f20335b.isEmpty() && this.f20336c.length() == 0;
    }
}
