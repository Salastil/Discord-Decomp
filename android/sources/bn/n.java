package bn;

import android.graphics.drawable.Drawable;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class n {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final String f3079b;

    /* renamed from: c, reason: collision with root package name */
    public final String f3080c;

    /* renamed from: d, reason: collision with root package name */
    public final String f3081d;

    /* renamed from: e, reason: collision with root package name */
    public final String f3082e;

    /* renamed from: f, reason: collision with root package name */
    public final boolean f3083f;

    /* renamed from: g, reason: collision with root package name */
    public final boolean f3084g;

    /* renamed from: h, reason: collision with root package name */
    public final q f3085h;

    /* renamed from: i, reason: collision with root package name */
    public final Drawable f3086i;
    public final Integer j;
    public final Integer k;

    /* renamed from: l, reason: collision with root package name */
    public final Integer f3087l;

    /* renamed from: m, reason: collision with root package name */
    public final Integer f3088m;

    /* renamed from: n, reason: collision with root package name */
    public final String f3089n;

    /* renamed from: o, reason: collision with root package name */
    public final r f3090o;

    /* renamed from: p, reason: collision with root package name */
    public final boolean f3091p;

    public n(String id2, String str, String str2, String str3, String str4, boolean z5, boolean z6, q showAsAction, Drawable drawable, Integer num, Integer num2, Integer num3, Integer num4, String str5, r itemType, boolean z7) {
        Intrinsics.checkNotNullParameter(id2, "id");
        Intrinsics.checkNotNullParameter(showAsAction, "showAsAction");
        Intrinsics.checkNotNullParameter(itemType, "itemType");
        this.a = id2;
        this.f3079b = str;
        this.f3080c = str2;
        this.f3081d = str3;
        this.f3082e = str4;
        this.f3083f = z5;
        this.f3084g = z6;
        this.f3085h = showAsAction;
        this.f3086i = drawable;
        this.j = num;
        this.k = num2;
        this.f3087l = num3;
        this.f3088m = num4;
        this.f3089n = str5;
        this.f3090o = itemType;
        this.f3091p = z7;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof n)) {
            return false;
        }
        n nVar = (n) obj;
        return Intrinsics.areEqual(this.a, nVar.a) && Intrinsics.areEqual(this.f3079b, nVar.f3079b) && Intrinsics.areEqual(this.f3080c, nVar.f3080c) && Intrinsics.areEqual(this.f3081d, nVar.f3081d) && Intrinsics.areEqual(this.f3082e, nVar.f3082e) && this.f3083f == nVar.f3083f && this.f3084g == nVar.f3084g && this.f3085h == nVar.f3085h && Intrinsics.areEqual(this.f3086i, nVar.f3086i) && Intrinsics.areEqual(this.j, nVar.j) && Intrinsics.areEqual(this.k, nVar.k) && Intrinsics.areEqual(this.f3087l, nVar.f3087l) && Intrinsics.areEqual(this.f3088m, nVar.f3088m) && Intrinsics.areEqual(this.f3089n, nVar.f3089n) && this.f3090o == nVar.f3090o && this.f3091p == nVar.f3091p;
    }

    public final int hashCode() {
        int hashCode = this.a.hashCode() * 31;
        String str = this.f3079b;
        int hashCode2 = (hashCode + (str == null ? 0 : str.hashCode())) * 31;
        String str2 = this.f3080c;
        int hashCode3 = (hashCode2 + (str2 == null ? 0 : str2.hashCode())) * 31;
        String str3 = this.f3081d;
        int hashCode4 = (hashCode3 + (str3 == null ? 0 : str3.hashCode())) * 31;
        String str4 = this.f3082e;
        int hashCode5 = (this.f3085h.hashCode() + k0.d.d(k0.d.d((hashCode4 + (str4 == null ? 0 : str4.hashCode())) * 31, 31, this.f3083f), 31, this.f3084g)) * 31;
        Drawable drawable = this.f3086i;
        int hashCode6 = (hashCode5 + (drawable == null ? 0 : drawable.hashCode())) * 31;
        Integer num = this.j;
        int hashCode7 = (hashCode6 + (num == null ? 0 : num.hashCode())) * 31;
        Integer num2 = this.k;
        int hashCode8 = (hashCode7 + (num2 == null ? 0 : num2.hashCode())) * 31;
        Integer num3 = this.f3087l;
        int hashCode9 = (hashCode8 + (num3 == null ? 0 : num3.hashCode())) * 31;
        Integer num4 = this.f3088m;
        int hashCode10 = (hashCode9 + (num4 == null ? 0 : num4.hashCode())) * 31;
        String str5 = this.f3089n;
        int hashCode11 = str5 != null ? str5.hashCode() : 0;
        return Boolean.hashCode(this.f3091p) + ((this.f3090o.hashCode() + ((hashCode10 + hashCode11) * 31)) * 31);
    }

    public final String toString() {
        StringBuilder t5 = a3.e.t("StackHeaderToolbarMenuItemConfig(id=", this.a, ", title=", this.f3079b, ", titleCondensed=");
        a3.e.A(t5, this.f3080c, ", tooltipText=", this.f3081d, ", accessibilityLabel=");
        t5.append(this.f3082e);
        t5.append(", hidden=");
        t5.append(this.f3083f);
        t5.append(", disabled=");
        t5.append(this.f3084g);
        t5.append(", showAsAction=");
        t5.append(this.f3085h);
        t5.append(", icon=");
        t5.append(this.f3086i);
        t5.append(", iconTintColorNormal=");
        t5.append(this.j);
        t5.append(", iconTintColorPressed=");
        k0.d.s(t5, this.k, ", iconTintColorFocused=", this.f3087l, ", iconTintColorDisabled=");
        k0.d.r(this.f3088m, ", groupId=", this.f3089n, ", itemType=", t5);
        t5.append(this.f3090o);
        t5.append(", initialToggleState=");
        t5.append(this.f3091p);
        t5.append(")");
        return t5.toString();
    }
}
