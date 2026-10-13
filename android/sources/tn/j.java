package tn;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class j {
    public final i a;

    /* renamed from: b, reason: collision with root package name */
    public final i f18675b;

    /* renamed from: c, reason: collision with root package name */
    public final i f18676c;

    /* renamed from: d, reason: collision with root package name */
    public final i f18677d;

    public j(i top, i right, i bottom, i left) {
        Intrinsics.checkNotNullParameter(top, "top");
        Intrinsics.checkNotNullParameter(right, "right");
        Intrinsics.checkNotNullParameter(bottom, "bottom");
        Intrinsics.checkNotNullParameter(left, "left");
        this.a = top;
        this.f18675b = right;
        this.f18676c = bottom;
        this.f18677d = left;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof j)) {
            return false;
        }
        j jVar = (j) obj;
        return this.a == jVar.a && this.f18675b == jVar.f18675b && this.f18676c == jVar.f18676c && this.f18677d == jVar.f18677d;
    }

    public final int hashCode() {
        return this.f18677d.hashCode() + ((this.f18676c.hashCode() + ((this.f18675b.hashCode() + (this.a.hashCode() * 31)) * 31)) * 31);
    }

    public final String toString() {
        return "SafeAreaViewEdges(top=" + this.a + ", right=" + this.f18675b + ", bottom=" + this.f18676c + ", left=" + this.f18677d + ")";
    }
}
