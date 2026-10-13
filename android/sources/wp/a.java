package wp;

import java.util.Set;
import kotlin.jvm.internal.Intrinsics;
import yq.c0;
import yq.x0;

/* loaded from: classes3.dex */
public final class a {
    public final x0 a;

    /* renamed from: b, reason: collision with root package name */
    public final b f19974b;

    /* renamed from: c, reason: collision with root package name */
    public final boolean f19975c;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f19976d;

    /* renamed from: e, reason: collision with root package name */
    public final Set f19977e;

    /* renamed from: f, reason: collision with root package name */
    public final c0 f19978f;

    public /* synthetic */ a(x0 x0Var, boolean z5, boolean z6, Set set, int i5) {
        this(x0Var, b.f19979d, (i5 & 4) != 0 ? false : z5, (i5 & 8) != 0 ? false : z6, (i5 & 16) != 0 ? null : set, null);
    }

    public static a a(a aVar, b bVar, boolean z5, Set set, c0 c0Var, int i5) {
        x0 howThisTypeIsUsed = aVar.a;
        if ((i5 & 2) != 0) {
            bVar = aVar.f19974b;
        }
        b flexibility = bVar;
        if ((i5 & 4) != 0) {
            z5 = aVar.f19975c;
        }
        boolean z6 = z5;
        boolean z7 = aVar.f19976d;
        if ((i5 & 16) != 0) {
            set = aVar.f19977e;
        }
        Set set2 = set;
        if ((i5 & 32) != 0) {
            c0Var = aVar.f19978f;
        }
        aVar.getClass();
        Intrinsics.checkNotNullParameter(howThisTypeIsUsed, "howThisTypeIsUsed");
        Intrinsics.checkNotNullParameter(flexibility, "flexibility");
        return new a(howThisTypeIsUsed, flexibility, z6, z7, set2, c0Var);
    }

    public final a b(b flexibility) {
        Intrinsics.checkNotNullParameter(flexibility, "flexibility");
        return a(this, flexibility, false, null, null, 61);
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof a)) {
            return false;
        }
        a aVar = (a) obj;
        return Intrinsics.areEqual(aVar.f19978f, this.f19978f) && aVar.a == this.a && aVar.f19974b == this.f19974b && aVar.f19975c == this.f19975c && aVar.f19976d == this.f19976d;
    }

    public final int hashCode() {
        c0 c0Var = this.f19978f;
        int hashCode = c0Var != null ? c0Var.hashCode() : 0;
        int hashCode2 = this.a.hashCode() + (hashCode * 31) + hashCode;
        int hashCode3 = this.f19974b.hashCode() + (hashCode2 * 31) + hashCode2;
        int i5 = (hashCode3 * 31) + (this.f19975c ? 1 : 0) + hashCode3;
        return (i5 * 31) + (this.f19976d ? 1 : 0) + i5;
    }

    public final String toString() {
        return "JavaTypeAttributes(howThisTypeIsUsed=" + this.a + ", flexibility=" + this.f19974b + ", isRaw=" + this.f19975c + ", isForAnnotationParameter=" + this.f19976d + ", visitedTypeParameters=" + this.f19977e + ", defaultType=" + this.f19978f + ')';
    }

    public a(x0 howThisTypeIsUsed, b flexibility, boolean z5, boolean z6, Set set, c0 c0Var) {
        Intrinsics.checkNotNullParameter(howThisTypeIsUsed, "howThisTypeIsUsed");
        Intrinsics.checkNotNullParameter(flexibility, "flexibility");
        Intrinsics.checkNotNullParameter(howThisTypeIsUsed, "howThisTypeIsUsed");
        this.a = howThisTypeIsUsed;
        this.f19974b = flexibility;
        this.f19975c = z5;
        this.f19976d = z6;
        this.f19977e = set;
        this.f19978f = c0Var;
    }
}
