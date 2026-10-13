package c3;

import java.util.List;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class b {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final String f3287b;

    /* renamed from: c, reason: collision with root package name */
    public final String f3288c;

    /* renamed from: d, reason: collision with root package name */
    public final List f3289d;

    /* renamed from: e, reason: collision with root package name */
    public final List f3290e;

    public b(List columnNames, List referenceColumnNames, String referenceTable, String onDelete, String onUpdate) {
        Intrinsics.checkNotNullParameter(referenceTable, "referenceTable");
        Intrinsics.checkNotNullParameter(onDelete, "onDelete");
        Intrinsics.checkNotNullParameter(onUpdate, "onUpdate");
        Intrinsics.checkNotNullParameter(columnNames, "columnNames");
        Intrinsics.checkNotNullParameter(referenceColumnNames, "referenceColumnNames");
        this.a = referenceTable;
        this.f3287b = onDelete;
        this.f3288c = onUpdate;
        this.f3289d = columnNames;
        this.f3290e = referenceColumnNames;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof b)) {
            return false;
        }
        b bVar = (b) obj;
        if (Intrinsics.areEqual(this.a, bVar.a) && Intrinsics.areEqual(this.f3287b, bVar.f3287b) && Intrinsics.areEqual(this.f3288c, bVar.f3288c) && Intrinsics.areEqual(this.f3289d, bVar.f3289d)) {
            return Intrinsics.areEqual(this.f3290e, bVar.f3290e);
        }
        return false;
    }

    public final int hashCode() {
        return this.f3290e.hashCode() + a3.e.e(this.f3289d, a3.e.d(a3.e.d(this.a.hashCode() * 31, 31, this.f3287b), 31, this.f3288c), 31);
    }

    public final String toString() {
        return "ForeignKey{referenceTable='" + this.a + "', onDelete='" + this.f3287b + " +', onUpdate='" + this.f3288c + "', columnNames=" + this.f3289d + ", referenceColumnNames=" + this.f3290e + '}';
    }
}
