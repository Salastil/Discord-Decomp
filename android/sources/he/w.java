package he;

import android.content.Context;
import android.text.Layout;
import android.text.Spanned;
import android.text.style.AbsoluteSizeSpan;
import android.text.style.BackgroundColorSpan;
import android.text.style.ForegroundColorSpan;
import android.text.style.RelativeSizeSpan;
import android.text.style.StrikethroughSpan;
import android.text.style.StyleSpan;
import android.text.style.TypefaceSpan;
import android.text.style.UnderlineSpan;
import android.util.Base64;
import android.util.SparseArray;
import android.widget.FrameLayout;
import com.facebook.react.uimanager.ViewProps;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.regex.Pattern;
import ke.d0;

/* loaded from: classes3.dex */
public final class w extends FrameLayout implements p {

    /* renamed from: d, reason: collision with root package name */
    public final c f10012d;

    /* renamed from: e, reason: collision with root package name */
    public final u f10013e;

    /* renamed from: i, reason: collision with root package name */
    public List f10014i;

    /* renamed from: v, reason: collision with root package name */
    public d f10015v;

    /* renamed from: w, reason: collision with root package name */
    public float f10016w;

    /* renamed from: x, reason: collision with root package name */
    public float f10017x;

    public w(Context context) {
        super(context, null);
        this.f10014i = Collections.EMPTY_LIST;
        this.f10015v = d.f9967g;
        this.f10016w = 0.0533f;
        this.f10017x = 0.08f;
        c cVar = new c(context, 0);
        this.f10012d = cVar;
        u uVar = new u(context, null);
        this.f10013e = uVar;
        uVar.setBackgroundColor(0);
        addView(cVar);
        addView(uVar);
    }

    @Override // he.p
    public final void a(List list, d dVar, float f2, float f10) {
        this.f10015v = dVar;
        this.f10016w = f2;
        this.f10017x = f10;
        ArrayList arrayList = new ArrayList();
        ArrayList arrayList2 = new ArrayList();
        for (int i5 = 0; i5 < list.size(); i5++) {
            wd.b bVar = (wd.b) list.get(i5);
            if (bVar.f19805v != null) {
                arrayList.add(bVar);
            } else {
                arrayList2.add(bVar);
            }
        }
        if (!this.f10014i.isEmpty() || !arrayList2.isEmpty()) {
            this.f10014i = arrayList2;
            c();
        }
        this.f10012d.a(arrayList, dVar, f2, f10);
        invalidate();
    }

    public final String b(float f2, int i5) {
        float F = jb.a.F(i5, getHeight(), (getHeight() - getPaddingTop()) - getPaddingBottom(), f2);
        if (F == -3.4028235E38f) {
            return "unset";
        }
        Object[] objArr = {Float.valueOf(F / getContext().getResources().getDisplayMetrics().density)};
        int i6 = d0.a;
        return String.format(Locale.US, "%.2fpx", objArr);
    }

    /* JADX WARN: Code restructure failed: missing block: B:263:0x01ed, code lost:
    
        if (r10 != 0) goto L88;
     */
    /* JADX WARN: Code restructure failed: missing block: B:264:0x01ef, code lost:
    
        r4 = com.facebook.react.uimanager.ViewProps.RIGHT;
     */
    /* JADX WARN: Code restructure failed: missing block: B:266:0x01f2, code lost:
    
        r4 = com.facebook.react.uimanager.ViewProps.LEFT;
     */
    /* JADX WARN: Code restructure failed: missing block: B:267:0x01f9, code lost:
    
        if (r10 != 0) goto L89;
     */
    /* JADX WARN: Removed duplicated region for block: B:100:0x0242  */
    /* JADX WARN: Removed duplicated region for block: B:120:0x046e  */
    /* JADX WARN: Removed duplicated region for block: B:140:0x04f1  */
    /* JADX WARN: Removed duplicated region for block: B:149:0x0523 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:267:0x01f9  */
    /* JADX WARN: Removed duplicated region for block: B:268:0x01cd  */
    /* JADX WARN: Removed duplicated region for block: B:270:0x01bb  */
    /* JADX WARN: Removed duplicated region for block: B:271:0x0197  */
    /* JADX WARN: Removed duplicated region for block: B:279:0x0185  */
    /* JADX WARN: Removed duplicated region for block: B:33:0x0172  */
    /* JADX WARN: Removed duplicated region for block: B:37:0x0192  */
    /* JADX WARN: Removed duplicated region for block: B:39:0x01b1  */
    /* JADX WARN: Removed duplicated region for block: B:44:0x01ca  */
    /* JADX WARN: Removed duplicated region for block: B:47:0x01e0  */
    /* JADX WARN: Removed duplicated region for block: B:54:0x01fe  */
    /* JADX WARN: Removed duplicated region for block: B:60:0x022e  */
    /* JADX WARN: Removed duplicated region for block: B:65:0x05c8  */
    /* JADX WARN: Removed duplicated region for block: B:77:0x0604  */
    /* JADX WARN: Removed duplicated region for block: B:86:0x0642  */
    /* JADX WARN: Removed duplicated region for block: B:96:0x0674  */
    /* JADX WARN: Removed duplicated region for block: B:99:0x0627  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void c() {
        String format;
        String format2;
        String str;
        int i5;
        Layout.Alignment alignment;
        int i6;
        String str2;
        int i10;
        String str3;
        String str4;
        Object obj;
        String str5;
        CharSequence charSequence;
        String str6;
        String str7;
        float f2;
        String str8;
        String str9;
        String str10;
        dg.b bVar;
        boolean z5;
        String str11;
        Object[] objArr;
        int i11;
        int i12;
        int i13;
        String format3;
        String str12;
        float f10;
        String str13;
        Layout.Alignment alignment2;
        int i14;
        String str14;
        StringBuilder sb2 = new StringBuilder();
        String L = io.sentry.config.a.L(this.f10015v.a);
        int i15 = 0;
        String b10 = b(this.f10016w, 0);
        float f11 = 1.2f;
        Float valueOf = Float.valueOf(1.2f);
        d dVar = this.f10015v;
        int i16 = dVar.f9970d;
        int i17 = dVar.f9971e;
        int i18 = 2;
        int i19 = 1;
        if (i16 == 1) {
            Object[] objArr2 = {io.sentry.config.a.L(i17)};
            int i20 = d0.a;
            format = String.format(Locale.US, "1px 1px 0 %1$s, 1px -1px 0 %1$s, -1px 1px 0 %1$s, -1px -1px 0 %1$s", objArr2);
        } else if (i16 == 2) {
            String L2 = io.sentry.config.a.L(i17);
            int i21 = d0.a;
            Locale locale = Locale.US;
            format = "0.1em 0.12em 0.15em ".concat(L2);
        } else if (i16 == 3) {
            String L3 = io.sentry.config.a.L(i17);
            int i22 = d0.a;
            Locale locale2 = Locale.US;
            format = "0.06em 0.08em 0.15em ".concat(L3);
        } else if (i16 != 4) {
            format = "unset";
        } else {
            String L4 = io.sentry.config.a.L(i17);
            int i23 = d0.a;
            Locale locale3 = Locale.US;
            format = "-0.05em -0.05em 0.15em ".concat(L4);
        }
        Object[] objArr3 = {L, b10, valueOf, format};
        int i24 = d0.a;
        sb2.append(String.format(Locale.US, "<body><div style='-webkit-user-select:none;position:fixed;top:0;bottom:0;left:0;right:0;color:%s;font-size:%s;line-height:%.2f;text-shadow:%s;'>", objArr3));
        HashMap hashMap = new HashMap();
        String L5 = io.sentry.config.a.L(this.f10015v.f9968b);
        String str15 = "background-color:";
        StringBuilder sb3 = new StringBuilder("background-color:");
        sb3.append(L5);
        String str16 = ";";
        sb3.append(";");
        hashMap.put(".default_bg,.default_bg *", sb3.toString());
        int i25 = 0;
        while (i25 < this.f10014i.size()) {
            wd.b bVar2 = (wd.b) this.f10014i.get(i25);
            float f12 = bVar2.E;
            int i26 = bVar2.f19808y;
            int i27 = bVar2.M;
            float f13 = f12 != -3.4028235E38f ? f12 * 100.0f : 50.0f;
            float f14 = f11;
            int i28 = bVar2.F;
            int i29 = -100;
            int i30 = i28 != i19 ? i28 != i18 ? i15 : -100 : -50;
            float f15 = bVar2.f19806w;
            if (f15 == -3.4028235E38f) {
                format2 = String.format(Locale.US, "%.2f%%", Float.valueOf((1.0f - this.f10017x) * 100.0f));
            } else if (bVar2.f19807x != i19) {
                format2 = String.format(Locale.US, "%.2f%%", Float.valueOf(f15 * 100.0f));
                i29 = i27 == i19 ? -(i26 != i19 ? i26 != 2 ? 0 : -100 : -50) : i26 != i19 ? i26 != 2 ? 0 : -100 : -50;
            } else {
                if (f15 >= 0.0f) {
                    str = String.format(Locale.US, "%.2fem", Float.valueOf(f15 * f14));
                    i5 = 0;
                } else {
                    str = String.format(Locale.US, "%.2fem", Float.valueOf(((-f15) - 1.0f) * f14));
                    i5 = i19;
                }
                i29 = 0;
                float f16 = bVar2.G;
                String format4 = f16 == -3.4028235E38f ? String.format(Locale.US, "%.2f%%", Float.valueOf(f16 * 100.0f)) : "fit-content";
                alignment = bVar2.f19803e;
                String str17 = ViewProps.END;
                if (alignment != null) {
                    i10 = i19;
                    str2 = "center";
                    i6 = 2;
                } else {
                    int i31 = v.a[alignment.ordinal()];
                    if (i31 != i19) {
                        i6 = 2;
                        str2 = i31 != 2 ? "center" : ViewProps.END;
                    } else {
                        i6 = 2;
                        str2 = ViewProps.START;
                    }
                    i10 = 1;
                }
                String str18 = i27 == i10 ? i27 != i6 ? "horizontal-tb" : "vertical-lr" : "vertical-rl";
                String b11 = b(bVar2.L, bVar2.K);
                String L6 = io.sentry.config.a.L(!bVar2.I ? bVar2.J : this.f10015v.f9969c);
                String str19 = ViewProps.TOP;
                if (i27 == 1) {
                    if (i27 != 2) {
                        if (i5 != 0) {
                            str19 = ViewProps.BOTTOM;
                        }
                        str4 = str19;
                        obj = ViewProps.LEFT;
                        if (i27 != 2 || i27 == 1) {
                            str5 = "height";
                            int i32 = i29;
                            i29 = i30;
                            i30 = i32;
                        } else {
                            str5 = "width";
                        }
                        String str20 = str5;
                        charSequence = bVar2.f19802d;
                        float f17 = getContext().getResources().getDisplayMetrics().density;
                        Pattern pattern = n.a;
                        int i33 = i30;
                        int i34 = i25;
                        if (charSequence == null) {
                            bVar = new dg.b("", 2);
                            str9 = str16;
                            str6 = "";
                        } else {
                            str6 = "";
                            if (charSequence instanceof Spanned) {
                                Spanned spanned = (Spanned) charSequence;
                                HashSet hashSet = new HashSet();
                                int length = spanned.length();
                                str7 = ViewProps.START;
                                f2 = f13;
                                BackgroundColorSpan[] backgroundColorSpanArr = (BackgroundColorSpan[]) spanned.getSpans(0, length, BackgroundColorSpan.class);
                                int length2 = backgroundColorSpanArr.length;
                                int i35 = 0;
                                while (i35 < length2) {
                                    hashSet.add(Integer.valueOf(backgroundColorSpanArr[i35].getBackgroundColor()));
                                    i35++;
                                    backgroundColorSpanArr = backgroundColorSpanArr;
                                }
                                HashMap hashMap2 = new HashMap();
                                Iterator it = hashSet.iterator();
                                while (it.hasNext()) {
                                    int intValue = ((Integer) it.next()).intValue();
                                    String i36 = k0.d.i(intValue, "bg_");
                                    Iterator it2 = it;
                                    String g6 = s4.h.g(".", i36, ",.", i36, " *");
                                    String L7 = io.sentry.config.a.L(intValue);
                                    int i37 = d0.a;
                                    Locale locale4 = Locale.US;
                                    hashMap2.put(g6, str15 + L7 + str16);
                                    it = it2;
                                    str17 = str17;
                                }
                                str8 = str17;
                                SparseArray sparseArray = new SparseArray();
                                Object[] spans = spanned.getSpans(0, spanned.length(), Object.class);
                                int length3 = spans.length;
                                int i38 = 0;
                                while (i38 < length3) {
                                    Object obj2 = spans[i38];
                                    String str21 = str16;
                                    boolean z6 = obj2 instanceof StrikethroughSpan;
                                    String str22 = null;
                                    if (z6) {
                                        z5 = z6;
                                        format3 = "<span style='text-decoration:line-through;'>";
                                        str11 = str15;
                                    } else {
                                        z5 = z6;
                                        if (obj2 instanceof ForegroundColorSpan) {
                                            String L8 = io.sentry.config.a.L(((ForegroundColorSpan) obj2).getForegroundColor());
                                            int i39 = d0.a;
                                            Locale locale5 = Locale.US;
                                            str11 = str15;
                                            format3 = s4.h.f("<span style='color:", L8, ";'>");
                                        } else {
                                            str11 = str15;
                                            if (obj2 instanceof BackgroundColorSpan) {
                                                int backgroundColor = ((BackgroundColorSpan) obj2).getBackgroundColor();
                                                int i40 = d0.a;
                                                Locale locale6 = Locale.US;
                                                objArr = spans;
                                                format3 = s4.h.e(backgroundColor, "<span class='bg_", "'>");
                                            } else {
                                                objArr = spans;
                                                if (obj2 instanceof ae.a) {
                                                    format3 = "<span style='text-combine-upright:all;'>";
                                                } else if (obj2 instanceof AbsoluteSizeSpan) {
                                                    Object[] objArr4 = {Float.valueOf(((AbsoluteSizeSpan) obj2).getDip() ? r3.getSize() : r3.getSize() / f17)};
                                                    int i41 = d0.a;
                                                    format3 = String.format(Locale.US, "<span style='font-size:%.2fpx;'>", objArr4);
                                                } else if (obj2 instanceof RelativeSizeSpan) {
                                                    Object[] objArr5 = {Float.valueOf(((RelativeSizeSpan) obj2).getSizeChange() * 100.0f)};
                                                    int i42 = d0.a;
                                                    format3 = String.format(Locale.US, "<span style='font-size:%.2f%%;'>", objArr5);
                                                } else {
                                                    if (obj2 instanceof TypefaceSpan) {
                                                        String family = ((TypefaceSpan) obj2).getFamily();
                                                        if (family != null) {
                                                            int i43 = d0.a;
                                                            Locale locale7 = Locale.US;
                                                            format3 = s4.h.f("<span style='font-family:\"", family, "\";'>");
                                                        }
                                                        i11 = length3;
                                                        i12 = i38;
                                                        format3 = null;
                                                    } else if (obj2 instanceof StyleSpan) {
                                                        int style = ((StyleSpan) obj2).getStyle();
                                                        if (style == 1) {
                                                            format3 = "<b>";
                                                        } else if (style != 2) {
                                                            if (style == 3) {
                                                                format3 = "<b><i>";
                                                            }
                                                            i11 = length3;
                                                            i12 = i38;
                                                            format3 = null;
                                                        } else {
                                                            format3 = "<i>";
                                                        }
                                                    } else if (obj2 instanceof ae.c) {
                                                        int i44 = ((ae.c) obj2).f529b;
                                                        if (i44 == -1) {
                                                            format3 = "<ruby style='ruby-position:unset;'>";
                                                        } else if (i44 != 1) {
                                                            if (i44 == 2) {
                                                                format3 = "<ruby style='ruby-position:under;'>";
                                                            }
                                                            i11 = length3;
                                                            i12 = i38;
                                                            format3 = null;
                                                        } else {
                                                            format3 = "<ruby style='ruby-position:over;'>";
                                                        }
                                                    } else if (obj2 instanceof UnderlineSpan) {
                                                        format3 = "<u>";
                                                    } else {
                                                        if (obj2 instanceof ae.d) {
                                                            ae.d dVar2 = (ae.d) obj2;
                                                            int i45 = dVar2.a;
                                                            int i46 = dVar2.f530b;
                                                            i11 = length3;
                                                            StringBuilder sb4 = new StringBuilder();
                                                            i12 = i38;
                                                            if (i46 != 1) {
                                                                i13 = 2;
                                                                if (i46 == 2) {
                                                                    sb4.append("open ");
                                                                }
                                                            } else {
                                                                i13 = 2;
                                                                sb4.append("filled ");
                                                            }
                                                            if (i45 == 0) {
                                                                sb4.append("none");
                                                            } else if (i45 == 1) {
                                                                sb4.append("circle");
                                                            } else if (i45 == i13) {
                                                                sb4.append("dot");
                                                            } else if (i45 != 3) {
                                                                sb4.append("unset");
                                                            } else {
                                                                sb4.append("sesame");
                                                            }
                                                            Object[] objArr6 = {sb4.toString(), dVar2.f531c != 2 ? "over right" : "under left"};
                                                            int i47 = d0.a;
                                                            format3 = String.format(Locale.US, "<span style='-webkit-text-emphasis-style:%1$s;text-emphasis-style:%1$s;-webkit-text-emphasis-position:%2$s;text-emphasis-position:%2$s;display:inline-block;'>", objArr6);
                                                        }
                                                        i11 = length3;
                                                        i12 = i38;
                                                        format3 = null;
                                                    }
                                                    if (!z5 || (obj2 instanceof ForegroundColorSpan) || (obj2 instanceof BackgroundColorSpan) || (obj2 instanceof ae.a) || (obj2 instanceof AbsoluteSizeSpan) || (obj2 instanceof RelativeSizeSpan) || (obj2 instanceof ae.d)) {
                                                        str12 = "</span>";
                                                    } else if (obj2 instanceof TypefaceSpan) {
                                                        str12 = ((TypefaceSpan) obj2).getFamily() != null ? "</span>" : null;
                                                    } else {
                                                        if (obj2 instanceof StyleSpan) {
                                                            int style2 = ((StyleSpan) obj2).getStyle();
                                                            if (style2 == 1) {
                                                                str22 = "</b>";
                                                            } else if (style2 == 2) {
                                                                str22 = "</i>";
                                                            } else if (style2 == 3) {
                                                                str22 = "</i></b>";
                                                            }
                                                        } else if (obj2 instanceof ae.c) {
                                                            str22 = "<rt>" + n.a(((ae.c) obj2).a) + "</rt></ruby>";
                                                        } else if (obj2 instanceof UnderlineSpan) {
                                                            str22 = "</u>";
                                                        }
                                                        str12 = str22;
                                                    }
                                                    int spanStart = spanned.getSpanStart(obj2);
                                                    int spanEnd = spanned.getSpanEnd(obj2);
                                                    if (format3 != null) {
                                                        str12.getClass();
                                                        l lVar = new l(spanStart, spanEnd, format3, str12);
                                                        m mVar = (m) sparseArray.get(spanStart);
                                                        if (mVar == null) {
                                                            mVar = new m();
                                                            sparseArray.put(spanStart, mVar);
                                                        }
                                                        mVar.a.add(lVar);
                                                        m mVar2 = (m) sparseArray.get(spanEnd);
                                                        if (mVar2 == null) {
                                                            mVar2 = new m();
                                                            sparseArray.put(spanEnd, mVar2);
                                                        }
                                                        mVar2.f9987b.add(lVar);
                                                    }
                                                    i38 = i12 + 1;
                                                    str16 = str21;
                                                    str15 = str11;
                                                    spans = objArr;
                                                    length3 = i11;
                                                }
                                            }
                                            i11 = length3;
                                            i12 = i38;
                                            if (z5) {
                                            }
                                            str12 = "</span>";
                                            int spanStart2 = spanned.getSpanStart(obj2);
                                            int spanEnd2 = spanned.getSpanEnd(obj2);
                                            if (format3 != null) {
                                            }
                                            i38 = i12 + 1;
                                            str16 = str21;
                                            str15 = str11;
                                            spans = objArr;
                                            length3 = i11;
                                        }
                                    }
                                    objArr = spans;
                                    i11 = length3;
                                    i12 = i38;
                                    if (z5) {
                                    }
                                    str12 = "</span>";
                                    int spanStart22 = spanned.getSpanStart(obj2);
                                    int spanEnd22 = spanned.getSpanEnd(obj2);
                                    if (format3 != null) {
                                    }
                                    i38 = i12 + 1;
                                    str16 = str21;
                                    str15 = str11;
                                    spans = objArr;
                                    length3 = i11;
                                }
                                str9 = str16;
                                str10 = str15;
                                StringBuilder sb5 = new StringBuilder(spanned.length());
                                int i48 = 0;
                                int i49 = 0;
                                while (i49 < sparseArray.size()) {
                                    int keyAt = sparseArray.keyAt(i49);
                                    sb5.append(n.a(spanned.subSequence(i48, keyAt)));
                                    m mVar3 = (m) sparseArray.get(keyAt);
                                    ArrayList arrayList = mVar3.f9987b;
                                    ArrayList arrayList2 = mVar3.a;
                                    SparseArray sparseArray2 = sparseArray;
                                    Collections.sort(arrayList, l.f9983f);
                                    Iterator it3 = mVar3.f9987b.iterator();
                                    while (it3.hasNext()) {
                                        sb5.append(((l) it3.next()).f9986d);
                                    }
                                    Collections.sort(arrayList2, l.f9982e);
                                    Iterator it4 = arrayList2.iterator();
                                    while (it4.hasNext()) {
                                        sb5.append(((l) it4.next()).f9985c);
                                    }
                                    i49++;
                                    i48 = keyAt;
                                    sparseArray = sparseArray2;
                                }
                                sb5.append(n.a(spanned.subSequence(i48, spanned.length())));
                                bVar = new dg.b(sb5.toString(), 2);
                                String str23 = bVar.a;
                                for (String str24 : hashMap.keySet()) {
                                    String str25 = (String) hashMap.put(str24, (String) hashMap.get(str24));
                                    ke.b.k(str25 == null || str25.equals(hashMap.get(str24)));
                                }
                                Integer valueOf2 = Integer.valueOf(i34);
                                Float valueOf3 = Float.valueOf(f2);
                                Integer valueOf4 = Integer.valueOf(i33);
                                Integer valueOf5 = Integer.valueOf(i29);
                                f10 = bVar2.N;
                                if (f10 == 0.0f) {
                                    Object[] objArr7 = {(i27 == 2 || i27 == 1) ? "skewY" : "skewX", Float.valueOf(f10)};
                                    int i50 = d0.a;
                                    str13 = String.format(Locale.US, "%s(%.2fdeg)", objArr7);
                                } else {
                                    str13 = str6;
                                }
                                sb2.append(String.format(Locale.US, "<div style='position:absolute;z-index:%s;%s:%.2f%%;%s:%s;%s:%s;text-align:%s;writing-mode:%s;font-size:%s;background-color:%s;transform:translate(%s%%,%s%%)%s;'>", valueOf2, obj, valueOf3, str4, str, str20, format4, str2, str18, b11, L6, valueOf4, valueOf5, str13));
                                sb2.append("<span class='default_bg'>");
                                alignment2 = bVar2.f19804i;
                                if (alignment2 == null) {
                                    int i51 = v.a[alignment2.ordinal()];
                                    if (i51 != 1) {
                                        i14 = 2;
                                        str14 = i51 != 2 ? "center" : str8;
                                    } else {
                                        i14 = 2;
                                        str14 = str7;
                                    }
                                    sb2.append("<span style='display:inline-block; text-align:" + str14 + ";'>");
                                    sb2.append(str23);
                                    sb2.append("</span>");
                                } else {
                                    i14 = 2;
                                    sb2.append(str23);
                                }
                                sb2.append("</span></div>");
                                i25 = i34 + 1;
                                i18 = i14;
                                f11 = f14;
                                str16 = str9;
                                str15 = str10;
                                i15 = 0;
                                i19 = 1;
                            } else {
                                str9 = str16;
                                bVar = new dg.b(n.a(charSequence), 2);
                            }
                        }
                        str10 = str15;
                        str7 = ViewProps.START;
                        f2 = f13;
                        str8 = ViewProps.END;
                        String str232 = bVar.a;
                        while (r4.hasNext()) {
                        }
                        Integer valueOf22 = Integer.valueOf(i34);
                        Float valueOf32 = Float.valueOf(f2);
                        Integer valueOf42 = Integer.valueOf(i33);
                        Integer valueOf52 = Integer.valueOf(i29);
                        f10 = bVar2.N;
                        if (f10 == 0.0f) {
                        }
                        sb2.append(String.format(Locale.US, "<div style='position:absolute;z-index:%s;%s:%.2f%%;%s:%s;%s:%s;text-align:%s;writing-mode:%s;font-size:%s;background-color:%s;transform:translate(%s%%,%s%%)%s;'>", valueOf22, obj, valueOf32, str4, str, str20, format4, str2, str18, b11, L6, valueOf42, valueOf52, str13));
                        sb2.append("<span class='default_bg'>");
                        alignment2 = bVar2.f19804i;
                        if (alignment2 == null) {
                        }
                        sb2.append("</span></div>");
                        i25 = i34 + 1;
                        i18 = i14;
                        f11 = f14;
                        str16 = str9;
                        str15 = str10;
                        i15 = 0;
                        i19 = 1;
                    }
                }
                str4 = str3;
                obj = ViewProps.TOP;
                if (i27 != 2) {
                }
                str5 = "height";
                int i322 = i29;
                i29 = i30;
                i30 = i322;
                String str202 = str5;
                charSequence = bVar2.f19802d;
                float f172 = getContext().getResources().getDisplayMetrics().density;
                Pattern pattern2 = n.a;
                int i332 = i30;
                int i342 = i25;
                if (charSequence == null) {
                }
                str10 = str15;
                str7 = ViewProps.START;
                f2 = f13;
                str8 = ViewProps.END;
                String str2322 = bVar.a;
                while (r4.hasNext()) {
                }
                Integer valueOf222 = Integer.valueOf(i342);
                Float valueOf322 = Float.valueOf(f2);
                Integer valueOf422 = Integer.valueOf(i332);
                Integer valueOf522 = Integer.valueOf(i29);
                f10 = bVar2.N;
                if (f10 == 0.0f) {
                }
                sb2.append(String.format(Locale.US, "<div style='position:absolute;z-index:%s;%s:%.2f%%;%s:%s;%s:%s;text-align:%s;writing-mode:%s;font-size:%s;background-color:%s;transform:translate(%s%%,%s%%)%s;'>", valueOf222, obj, valueOf322, str4, str, str202, format4, str2, str18, b11, L6, valueOf422, valueOf522, str13));
                sb2.append("<span class='default_bg'>");
                alignment2 = bVar2.f19804i;
                if (alignment2 == null) {
                }
                sb2.append("</span></div>");
                i25 = i342 + 1;
                i18 = i14;
                f11 = f14;
                str16 = str9;
                str15 = str10;
                i15 = 0;
                i19 = 1;
            }
            str = format2;
            i5 = 0;
            float f162 = bVar2.G;
            String format42 = f162 == -3.4028235E38f ? String.format(Locale.US, "%.2f%%", Float.valueOf(f162 * 100.0f)) : "fit-content";
            alignment = bVar2.f19803e;
            String str172 = ViewProps.END;
            if (alignment != null) {
            }
            String str182 = i27 == i10 ? i27 != i6 ? "horizontal-tb" : "vertical-lr" : "vertical-rl";
            String b112 = b(bVar2.L, bVar2.K);
            String L62 = io.sentry.config.a.L(!bVar2.I ? bVar2.J : this.f10015v.f9969c);
            String str192 = ViewProps.TOP;
            if (i27 == 1) {
            }
            str4 = str3;
            obj = ViewProps.TOP;
            if (i27 != 2) {
            }
            str5 = "height";
            int i3222 = i29;
            i29 = i30;
            i30 = i3222;
            String str2022 = str5;
            charSequence = bVar2.f19802d;
            float f1722 = getContext().getResources().getDisplayMetrics().density;
            Pattern pattern22 = n.a;
            int i3322 = i30;
            int i3422 = i25;
            if (charSequence == null) {
            }
            str10 = str15;
            str7 = ViewProps.START;
            f2 = f13;
            str8 = ViewProps.END;
            String str23222 = bVar.a;
            while (r4.hasNext()) {
            }
            Integer valueOf2222 = Integer.valueOf(i3422);
            Float valueOf3222 = Float.valueOf(f2);
            Integer valueOf4222 = Integer.valueOf(i3322);
            Integer valueOf5222 = Integer.valueOf(i29);
            f10 = bVar2.N;
            if (f10 == 0.0f) {
            }
            sb2.append(String.format(Locale.US, "<div style='position:absolute;z-index:%s;%s:%.2f%%;%s:%s;%s:%s;text-align:%s;writing-mode:%s;font-size:%s;background-color:%s;transform:translate(%s%%,%s%%)%s;'>", valueOf2222, obj, valueOf3222, str4, str, str2022, format42, str2, str182, b112, L62, valueOf4222, valueOf5222, str13));
            sb2.append("<span class='default_bg'>");
            alignment2 = bVar2.f19804i;
            if (alignment2 == null) {
            }
            sb2.append("</span></div>");
            i25 = i3422 + 1;
            i18 = i14;
            f11 = f14;
            str16 = str9;
            str15 = str10;
            i15 = 0;
            i19 = 1;
        }
        sb2.append("</div></body></html>");
        StringBuilder sb6 = new StringBuilder("<html><head><style>");
        for (String str26 : hashMap.keySet()) {
            sb6.append(str26);
            sb6.append("{");
            sb6.append((String) hashMap.get(str26));
            sb6.append("}");
        }
        sb6.append("</style></head>");
        sb2.insert(0, sb6.toString());
        this.f10013e.loadData(Base64.encodeToString(sb2.toString().getBytes(ei.d.f8100c), 1), "text/html", "base64");
    }

    @Override // android.widget.FrameLayout, android.view.ViewGroup, android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        super.onLayout(z5, i5, i6, i10, i11);
        if (!z5 || this.f10014i.isEmpty()) {
            return;
        }
        c();
    }
}
