package gn;

import a3.e;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class b {
    public final Integer a;

    /* renamed from: b, reason: collision with root package name */
    public final Integer f9375b;

    /* renamed from: c, reason: collision with root package name */
    public final String f9376c;

    /* renamed from: d, reason: collision with root package name */
    public final a f9377d;

    /* renamed from: e, reason: collision with root package name */
    public final a f9378e;

    /* renamed from: f, reason: collision with root package name */
    public final a f9379f;

    /* renamed from: g, reason: collision with root package name */
    public final a f9380g;

    /* renamed from: h, reason: collision with root package name */
    public final Integer f9381h;

    /* renamed from: i, reason: collision with root package name */
    public final Boolean f9382i;
    public final String j;
    public final Float k;

    /* renamed from: l, reason: collision with root package name */
    public final Float f9383l;

    /* renamed from: m, reason: collision with root package name */
    public final String f9384m;

    /* renamed from: n, reason: collision with root package name */
    public final String f9385n;

    /* renamed from: o, reason: collision with root package name */
    public final Integer f9386o;

    /* renamed from: p, reason: collision with root package name */
    public final Integer f9387p;

    public b(Integer num, Integer num2, String str, a aVar, a aVar2, a aVar3, a aVar4, Integer num3, Boolean bool, String str2, Float f2, Float f10, String str3, String str4, Integer num4, Integer num5) {
        this.a = num;
        this.f9375b = num2;
        this.f9376c = str;
        this.f9377d = aVar;
        this.f9378e = aVar2;
        this.f9379f = aVar3;
        this.f9380g = aVar4;
        this.f9381h = num3;
        this.f9382i = bool;
        this.j = str2;
        this.k = f2;
        this.f9383l = f10;
        this.f9384m = str3;
        this.f9385n = str4;
        this.f9386o = num4;
        this.f9387p = num5;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof b)) {
            return false;
        }
        b bVar = (b) obj;
        return Intrinsics.areEqual(this.a, bVar.a) && Intrinsics.areEqual(this.f9375b, bVar.f9375b) && Intrinsics.areEqual(this.f9376c, bVar.f9376c) && Intrinsics.areEqual(this.f9377d, bVar.f9377d) && Intrinsics.areEqual(this.f9378e, bVar.f9378e) && Intrinsics.areEqual(this.f9379f, bVar.f9379f) && Intrinsics.areEqual(this.f9380g, bVar.f9380g) && Intrinsics.areEqual(this.f9381h, bVar.f9381h) && Intrinsics.areEqual(this.f9382i, bVar.f9382i) && Intrinsics.areEqual(this.j, bVar.j) && Intrinsics.areEqual((Object) this.k, (Object) bVar.k) && Intrinsics.areEqual((Object) this.f9383l, (Object) bVar.f9383l) && Intrinsics.areEqual(this.f9384m, bVar.f9384m) && Intrinsics.areEqual(this.f9385n, bVar.f9385n) && Intrinsics.areEqual(this.f9386o, bVar.f9386o) && Intrinsics.areEqual(this.f9387p, bVar.f9387p);
    }

    public final int hashCode() {
        Integer num = this.a;
        int hashCode = (num == null ? 0 : num.hashCode()) * 31;
        Integer num2 = this.f9375b;
        int hashCode2 = (hashCode + (num2 == null ? 0 : num2.hashCode())) * 31;
        String str = this.f9376c;
        int hashCode3 = (hashCode2 + (str == null ? 0 : str.hashCode())) * 31;
        a aVar = this.f9377d;
        int hashCode4 = (hashCode3 + (aVar == null ? 0 : aVar.hashCode())) * 31;
        a aVar2 = this.f9378e;
        int hashCode5 = (hashCode4 + (aVar2 == null ? 0 : aVar2.hashCode())) * 31;
        a aVar3 = this.f9379f;
        int hashCode6 = (hashCode5 + (aVar3 == null ? 0 : aVar3.hashCode())) * 31;
        a aVar4 = this.f9380g;
        int hashCode7 = (hashCode6 + (aVar4 == null ? 0 : aVar4.hashCode())) * 31;
        Integer num3 = this.f9381h;
        int hashCode8 = (hashCode7 + (num3 == null ? 0 : num3.hashCode())) * 31;
        Boolean bool = this.f9382i;
        int hashCode9 = (hashCode8 + (bool == null ? 0 : bool.hashCode())) * 31;
        String str2 = this.j;
        int hashCode10 = (hashCode9 + (str2 == null ? 0 : str2.hashCode())) * 31;
        Float f2 = this.k;
        int hashCode11 = (hashCode10 + (f2 == null ? 0 : f2.hashCode())) * 31;
        Float f10 = this.f9383l;
        int hashCode12 = (hashCode11 + (f10 == null ? 0 : f10.hashCode())) * 31;
        String str3 = this.f9384m;
        int hashCode13 = (hashCode12 + (str3 == null ? 0 : str3.hashCode())) * 31;
        String str4 = this.f9385n;
        int hashCode14 = (hashCode13 + (str4 == null ? 0 : str4.hashCode())) * 31;
        Integer num4 = this.f9386o;
        int hashCode15 = (hashCode14 + (num4 == null ? 0 : num4.hashCode())) * 31;
        Integer num5 = this.f9387p;
        return hashCode15 + (num5 != null ? num5.hashCode() : 0);
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("TabsAppearance(tabBarBackgroundColor=");
        sb2.append(this.a);
        sb2.append(", tabBarItemRippleColor=");
        sb2.append(this.f9375b);
        sb2.append(", tabBarItemLabelVisibilityMode=");
        sb2.append(this.f9376c);
        sb2.append(", normal=");
        sb2.append(this.f9377d);
        sb2.append(", selected=");
        sb2.append(this.f9378e);
        sb2.append(", focused=");
        sb2.append(this.f9379f);
        sb2.append(", disabled=");
        sb2.append(this.f9380g);
        sb2.append(", tabBarItemActiveIndicatorColor=");
        sb2.append(this.f9381h);
        sb2.append(", tabBarItemActiveIndicatorEnabled=");
        sb2.append(this.f9382i);
        sb2.append(", tabBarItemTitleFontFamily=");
        sb2.append(this.j);
        sb2.append(", tabBarItemTitleSmallLabelFontSize=");
        sb2.append(this.k);
        sb2.append(", tabBarItemTitleLargeLabelFontSize=");
        sb2.append(this.f9383l);
        sb2.append(", tabBarItemTitleFontWeight=");
        e.A(sb2, this.f9384m, ", tabBarItemTitleFontStyle=", this.f9385n, ", tabBarItemBadgeBackgroundColor=");
        sb2.append(this.f9386o);
        sb2.append(", tabBarItemBadgeTextColor=");
        sb2.append(this.f9387p);
        sb2.append(")");
        return sb2.toString();
    }
}
