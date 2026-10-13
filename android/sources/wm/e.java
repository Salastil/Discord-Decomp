package wm;

import java.util.List;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class e {
    public final boolean a;

    /* renamed from: b, reason: collision with root package name */
    public final List f19906b;

    /* renamed from: c, reason: collision with root package name */
    public final boolean f19907c;

    /* renamed from: d, reason: collision with root package name */
    public final int f19908d;

    /* renamed from: e, reason: collision with root package name */
    public final float f19909e;

    /* renamed from: f, reason: collision with root package name */
    public final Integer f19910f;

    public e(boolean z5, List detents, boolean z6, int i5, float f2, Integer num) {
        Intrinsics.checkNotNullParameter(detents, "detents");
        this.a = z5;
        this.f19906b = detents;
        this.f19907c = z6;
        this.f19908d = i5;
        this.f19909e = f2;
        this.f19910f = num;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof e)) {
            return false;
        }
        e eVar = (e) obj;
        return this.a == eVar.a && Intrinsics.areEqual(this.f19906b, eVar.f19906b) && this.f19907c == eVar.f19907c && this.f19908d == eVar.f19908d && Float.compare(this.f19909e, eVar.f19909e) == 0 && Intrinsics.areEqual(this.f19910f, eVar.f19910f);
    }

    public final int hashCode() {
        int a = a3.e.a(com.discord.chat.bridge.botuikit.a.u(this.f19908d, k0.d.d(a3.e.e(this.f19906b, Boolean.hashCode(this.a) * 31, 31), 31, this.f19907c), 31), 31, this.f19909e);
        Integer num = this.f19910f;
        return a + (num == null ? 0 : num.hashCode());
    }

    public final String toString() {
        return "FormSheetConfig(isOpen=" + this.a + ", detents=" + this.f19906b + ", prefersGrabberVisible=" + this.f19907c + ", initialDetentIndex=" + this.f19908d + ", preferredCornerRadius=" + this.f19909e + ", nativeContainerBackgroundColor=" + this.f19910f + ")";
    }
}
