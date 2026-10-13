package bn;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class i {
    public final d a;

    /* renamed from: b, reason: collision with root package name */
    public final d f3061b;

    /* renamed from: c, reason: collision with root package name */
    public final d f3062c;

    /* renamed from: d, reason: collision with root package name */
    public final d f3063d;

    /* renamed from: e, reason: collision with root package name */
    public final Boolean f3064e;

    /* renamed from: f, reason: collision with root package name */
    public final Boolean f3065f;

    /* renamed from: g, reason: collision with root package name */
    public final q f3066g;

    /* renamed from: h, reason: collision with root package name */
    public final d f3067h;

    /* renamed from: i, reason: collision with root package name */
    public final d f3068i;
    public final d j;
    public final d k;

    /* renamed from: l, reason: collision with root package name */
    public final d f3069l;

    /* renamed from: m, reason: collision with root package name */
    public final Boolean f3070m;

    /* renamed from: n, reason: collision with root package name */
    public final d f3071n;

    public i(d dVar, d dVar2, d dVar3, d dVar4, Boolean bool, Boolean bool2, q qVar, d dVar5, d dVar6, d dVar7, d dVar8, d dVar9, Boolean bool3, d dVar10) {
        this.a = dVar;
        this.f3061b = dVar2;
        this.f3062c = dVar3;
        this.f3063d = dVar4;
        this.f3064e = bool;
        this.f3065f = bool2;
        this.f3066g = qVar;
        this.f3067h = dVar5;
        this.f3068i = dVar6;
        this.j = dVar7;
        this.k = dVar8;
        this.f3069l = dVar9;
        this.f3070m = bool3;
        this.f3071n = dVar10;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof i)) {
            return false;
        }
        i iVar = (i) obj;
        return Intrinsics.areEqual(this.a, iVar.a) && Intrinsics.areEqual(this.f3061b, iVar.f3061b) && Intrinsics.areEqual(this.f3062c, iVar.f3062c) && Intrinsics.areEqual(this.f3063d, iVar.f3063d) && Intrinsics.areEqual(this.f3064e, iVar.f3064e) && Intrinsics.areEqual(this.f3065f, iVar.f3065f) && this.f3066g == iVar.f3066g && Intrinsics.areEqual(this.f3067h, iVar.f3067h) && Intrinsics.areEqual(this.f3068i, iVar.f3068i) && Intrinsics.areEqual(this.j, iVar.j) && Intrinsics.areEqual(this.k, iVar.k) && Intrinsics.areEqual(this.f3069l, iVar.f3069l) && Intrinsics.areEqual(this.f3070m, iVar.f3070m) && Intrinsics.areEqual(this.f3071n, iVar.f3071n);
    }

    public final int hashCode() {
        d dVar = this.a;
        int hashCode = (dVar == null ? 0 : dVar.hashCode()) * 31;
        d dVar2 = this.f3061b;
        int hashCode2 = (hashCode + (dVar2 == null ? 0 : dVar2.hashCode())) * 31;
        d dVar3 = this.f3062c;
        int hashCode3 = (hashCode2 + (dVar3 == null ? 0 : dVar3.hashCode())) * 31;
        d dVar4 = this.f3063d;
        int hashCode4 = (hashCode3 + (dVar4 == null ? 0 : dVar4.hashCode())) * 31;
        Boolean bool = this.f3064e;
        int hashCode5 = (hashCode4 + (bool == null ? 0 : bool.hashCode())) * 31;
        Boolean bool2 = this.f3065f;
        int hashCode6 = (hashCode5 + (bool2 == null ? 0 : bool2.hashCode())) * 31;
        q qVar = this.f3066g;
        int hashCode7 = (hashCode6 + (qVar == null ? 0 : qVar.hashCode())) * 31;
        d dVar5 = this.f3067h;
        int hashCode8 = (hashCode7 + (dVar5 == null ? 0 : dVar5.hashCode())) * 31;
        d dVar6 = this.f3068i;
        int hashCode9 = (hashCode8 + (dVar6 == null ? 0 : dVar6.hashCode())) * 31;
        d dVar7 = this.j;
        int hashCode10 = (hashCode9 + (dVar7 == null ? 0 : dVar7.hashCode())) * 31;
        d dVar8 = this.k;
        int hashCode11 = (hashCode10 + (dVar8 == null ? 0 : dVar8.hashCode())) * 31;
        d dVar9 = this.f3069l;
        int hashCode12 = (hashCode11 + (dVar9 == null ? 0 : dVar9.hashCode())) * 31;
        Boolean bool3 = this.f3070m;
        int hashCode13 = (hashCode12 + (bool3 == null ? 0 : bool3.hashCode())) * 31;
        d dVar10 = this.f3071n;
        return hashCode13 + (dVar10 != null ? dVar10.hashCode() : 0);
    }

    public final String toString() {
        return "StackHeaderToolbarMenuElementOptions(title=" + this.a + ", titleCondensed=" + this.f3061b + ", tooltipText=" + this.f3062c + ", accessibilityLabel=" + this.f3063d + ", hidden=" + this.f3064e + ", disabled=" + this.f3065f + ", showAsAction=" + this.f3066g + ", icon=" + this.f3067h + ", iconTintColorNormal=" + this.f3068i + ", iconTintColorPressed=" + this.j + ", iconTintColorFocused=" + this.k + ", iconTintColorDisabled=" + this.f3069l + ", checked=" + this.f3070m + ", menuTitle=" + this.f3071n + ")";
    }
}
