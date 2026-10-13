package zr;

import bs.h1;
import bs.l;
import com.facebook.react.runtime.r;
import fo.u;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Set;
import kotlin.Pair;
import kotlin.collections.CollectionsKt;
import kotlin.collections.IndexedValue;
import kotlin.collections.d0;
import kotlin.collections.q0;
import kotlin.collections.v;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.descriptors.SerialDescriptor;

/* loaded from: classes3.dex */
public final class g implements SerialDescriptor, l {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final d9.a f21422b;

    /* renamed from: c, reason: collision with root package name */
    public final int f21423c;

    /* renamed from: d, reason: collision with root package name */
    public final List f21424d;

    /* renamed from: e, reason: collision with root package name */
    public final HashSet f21425e;

    /* renamed from: f, reason: collision with root package name */
    public final String[] f21426f;

    /* renamed from: g, reason: collision with root package name */
    public final SerialDescriptor[] f21427g;

    /* renamed from: h, reason: collision with root package name */
    public final List[] f21428h;

    /* renamed from: i, reason: collision with root package name */
    public final boolean[] f21429i;
    public final Map j;
    public final SerialDescriptor[] k;

    /* renamed from: l, reason: collision with root package name */
    public final u f21430l;

    public g(String serialName, d9.a kind, int i5, List typeParameters, a builder) {
        Intrinsics.checkNotNullParameter(serialName, "serialName");
        Intrinsics.checkNotNullParameter(kind, "kind");
        Intrinsics.checkNotNullParameter(typeParameters, "typeParameters");
        Intrinsics.checkNotNullParameter(builder, "builder");
        this.a = serialName;
        this.f21422b = kind;
        this.f21423c = i5;
        this.f21424d = builder.f21405b;
        ArrayList arrayList = builder.f21406c;
        this.f21425e = CollectionsKt.g0(arrayList);
        int i6 = 0;
        this.f21426f = (String[]) arrayList.toArray(new String[0]);
        this.f21427g = h1.c(builder.f21408e);
        this.f21428h = (List[]) builder.f21409f.toArray(new List[0]);
        ArrayList arrayList2 = builder.f21410g;
        Intrinsics.checkNotNullParameter(arrayList2, "<this>");
        boolean[] zArr = new boolean[arrayList2.size()];
        Iterator it = arrayList2.iterator();
        while (it.hasNext()) {
            zArr[i6] = ((Boolean) it.next()).booleanValue();
            i6++;
        }
        this.f21429i = zArr;
        String[] strArr = this.f21426f;
        Intrinsics.checkNotNullParameter(strArr, "<this>");
        v vVar = new v(new h8.a(5, strArr));
        ArrayList arrayList3 = new ArrayList(d0.l(vVar, 10));
        Iterator it2 = vVar.iterator();
        while (true) {
            q0 q0Var = (q0) it2;
            if (!q0Var.f13519e.hasNext()) {
                this.j = v0.m(arrayList3);
                this.k = h1.c(typeParameters);
                this.f21430l = fo.l.a(new h8.a(19, this));
                return;
            }
            IndexedValue indexedValue = (IndexedValue) q0Var.next();
            arrayList3.add(new Pair(indexedValue.f13483b, Integer.valueOf(indexedValue.a)));
        }
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final String a() {
        return this.a;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final d9.a b() {
        return this.f21422b;
    }

    @Override // bs.l
    public final Set c() {
        return this.f21425e;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final boolean d() {
        return false;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final int e(String name) {
        Intrinsics.checkNotNullParameter(name, "name");
        Integer num = (Integer) this.j.get(name);
        if (num != null) {
            return num.intValue();
        }
        return -3;
    }

    public final boolean equals(Object obj) {
        int i5;
        if (this == obj) {
            return true;
        }
        if (obj instanceof g) {
            SerialDescriptor serialDescriptor = (SerialDescriptor) obj;
            if (Intrinsics.areEqual(this.a, serialDescriptor.a()) && Arrays.equals(this.k, ((g) obj).k)) {
                int f2 = serialDescriptor.f();
                int i6 = this.f21423c;
                if (i6 == f2) {
                    for (0; i5 < i6; i5 + 1) {
                        SerialDescriptor[] serialDescriptorArr = this.f21427g;
                        i5 = (Intrinsics.areEqual(serialDescriptorArr[i5].a(), serialDescriptor.i(i5).a()) && Intrinsics.areEqual(serialDescriptorArr[i5].b(), serialDescriptor.i(i5).b())) ? i5 + 1 : 0;
                    }
                    return true;
                }
            }
        }
        return false;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final int f() {
        return this.f21423c;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final String g(int i5) {
        return this.f21426f[i5];
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final List getAnnotations() {
        return this.f21424d;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final List h(int i5) {
        return this.f21428h[i5];
    }

    public final int hashCode() {
        return ((Number) this.f21430l.getValue()).intValue();
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final SerialDescriptor i(int i5) {
        return this.f21427g[i5];
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final boolean isInline() {
        return false;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final boolean j(int i5) {
        return this.f21429i[i5];
    }

    public final String toString() {
        return CollectionsKt.O(yo.j.i(0, this.f21423c), ", ", s4.h.h(new StringBuilder(), this.a, '('), ")", new r(25, this), 24);
    }
}
