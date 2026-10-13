package c3;

import java.util.ArrayList;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.x;

/* loaded from: classes.dex */
public final class d {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final boolean f3295b;

    /* renamed from: c, reason: collision with root package name */
    public final List f3296c;

    /* renamed from: d, reason: collision with root package name */
    public final List f3297d;

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r5v0, types: [java.lang.Object, java.util.Collection, java.util.List] */
    /* JADX WARN: Type inference failed for: r5v1, types: [java.util.List] */
    /* JADX WARN: Type inference failed for: r5v2, types: [java.util.ArrayList] */
    public d(String name, boolean z5, List columns, List orders) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(columns, "columns");
        Intrinsics.checkNotNullParameter(orders, "orders");
        this.a = name;
        this.f3295b = z5;
        this.f3296c = columns;
        this.f3297d = orders;
        if (orders.isEmpty()) {
            int size = columns.size();
            orders = new ArrayList(size);
            for (int i5 = 0; i5 < size; i5++) {
                orders.add("ASC");
            }
        }
        this.f3297d = orders;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof d) {
            d dVar = (d) obj;
            String str = dVar.a;
            if (this.f3295b == dVar.f3295b && Intrinsics.areEqual(this.f3296c, dVar.f3296c) && Intrinsics.areEqual(this.f3297d, dVar.f3297d)) {
                String str2 = this.a;
                return x.o(str2, "index_", false) ? x.o(str, "index_", false) : Intrinsics.areEqual(str2, str);
            }
        }
        return false;
    }

    public final int hashCode() {
        String str = this.a;
        return this.f3297d.hashCode() + a3.e.e(this.f3296c, (((x.o(str, "index_", false) ? -1184239155 : str.hashCode()) * 31) + (this.f3295b ? 1 : 0)) * 31, 31);
    }

    public final String toString() {
        return "Index{name='" + this.a + "', unique=" + this.f3295b + ", columns=" + this.f3296c + ", orders=" + this.f3297d + "'}";
    }
}
