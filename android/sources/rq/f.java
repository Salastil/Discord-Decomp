package rq;

import java.lang.reflect.Field;
import java.lang.reflect.Modifier;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class f {

    /* renamed from: c, reason: collision with root package name */
    public static final m f17526c = new m();

    /* renamed from: d, reason: collision with root package name */
    public static final int f17527d;

    /* renamed from: e, reason: collision with root package name */
    public static final int f17528e;

    /* renamed from: f, reason: collision with root package name */
    public static final int f17529f;

    /* renamed from: g, reason: collision with root package name */
    public static final int f17530g;

    /* renamed from: h, reason: collision with root package name */
    public static final int f17531h;

    /* renamed from: i, reason: collision with root package name */
    public static final int f17532i;
    public static final int j;
    public static final int k;

    /* renamed from: l, reason: collision with root package name */
    public static final int f17533l;

    /* renamed from: m, reason: collision with root package name */
    public static final f f17534m;

    /* renamed from: n, reason: collision with root package name */
    public static final f f17535n;

    /* renamed from: o, reason: collision with root package name */
    public static final f f17536o;

    /* renamed from: p, reason: collision with root package name */
    public static final f f17537p;

    /* renamed from: q, reason: collision with root package name */
    public static final f f17538q;

    /* renamed from: r, reason: collision with root package name */
    public static final ArrayList f17539r;

    /* renamed from: s, reason: collision with root package name */
    public static final ArrayList f17540s;
    public final List a;

    /* renamed from: b, reason: collision with root package name */
    public final int f17541b;

    static {
        e eVar;
        int i5 = f17527d;
        int i6 = i5 << 1;
        f17528e = i5;
        int i10 = i5 << 2;
        f17529f = i6;
        int i11 = i5 << 3;
        f17530g = i10;
        int i12 = i5 << 4;
        f17531h = i11;
        int i13 = i5 << 5;
        f17532i = i12;
        j = i13;
        f17527d = i5 << 7;
        int i14 = (i5 << 6) - 1;
        k = i14;
        int i15 = i5 | i6 | i10;
        f17533l = i15;
        f17534m = new f(i14);
        f17535n = new f(i12 | i13);
        new f(i5);
        new f(i6);
        new f(i10);
        f17536o = new f(i15);
        new f(i11);
        f17537p = new f(i12);
        f17538q = new f(i13);
        new f(i6 | i12 | i13);
        Field[] fields = f.class.getFields();
        Intrinsics.checkNotNullExpressionValue(fields, "getFields(...)");
        ArrayList arrayList = new ArrayList();
        for (Field field : fields) {
            if (Modifier.isStatic(field.getModifiers())) {
                arrayList.add(field);
            }
        }
        ArrayList arrayList2 = new ArrayList();
        Iterator it = arrayList.iterator();
        while (true) {
            e eVar2 = null;
            if (!it.hasNext()) {
                break;
            }
            Field field2 = (Field) it.next();
            Object obj = field2.get(null);
            f fVar = obj instanceof f ? (f) obj : null;
            if (fVar != null) {
                int i16 = fVar.f17541b;
                String name = field2.getName();
                Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
                eVar2 = new e(i16, name);
            }
            if (eVar2 != null) {
                arrayList2.add(eVar2);
            }
        }
        f17539r = arrayList2;
        Field[] fields2 = f.class.getFields();
        Intrinsics.checkNotNullExpressionValue(fields2, "getFields(...)");
        ArrayList arrayList3 = new ArrayList();
        for (Field field3 : fields2) {
            if (Modifier.isStatic(field3.getModifiers())) {
                arrayList3.add(field3);
            }
        }
        ArrayList arrayList4 = new ArrayList();
        Iterator it2 = arrayList3.iterator();
        while (it2.hasNext()) {
            Object next = it2.next();
            if (Intrinsics.areEqual(((Field) next).getType(), Integer.TYPE)) {
                arrayList4.add(next);
            }
        }
        ArrayList arrayList5 = new ArrayList();
        Iterator it3 = arrayList4.iterator();
        while (it3.hasNext()) {
            Field field4 = (Field) it3.next();
            Object obj2 = field4.get(null);
            Intrinsics.checkNotNull(obj2, "null cannot be cast to non-null type kotlin.Int");
            int intValue = ((Integer) obj2).intValue();
            if (intValue == ((-intValue) & intValue)) {
                String name2 = field4.getName();
                Intrinsics.checkNotNullExpressionValue(name2, "getName(...)");
                eVar = new e(intValue, name2);
            } else {
                eVar = null;
            }
            if (eVar != null) {
                arrayList5.add(eVar);
            }
        }
        f17540s = arrayList5;
    }

    public f(int i5) {
        this(i5, m0.f13512d);
    }

    public final boolean a(int i5) {
        return (i5 & this.f17541b) != 0;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!Intrinsics.areEqual(f.class, obj != null ? obj.getClass() : null)) {
            return false;
        }
        Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type org.jetbrains.kotlin.resolve.scopes.DescriptorKindFilter");
        f fVar = (f) obj;
        return Intrinsics.areEqual(this.a, fVar.a) && this.f17541b == fVar.f17541b;
    }

    public final int hashCode() {
        return (this.a.hashCode() * 31) + this.f17541b;
    }

    public final String toString() {
        Object obj;
        Iterator it = f17539r.iterator();
        while (true) {
            if (!it.hasNext()) {
                obj = null;
                break;
            }
            obj = it.next();
            if (((e) obj).a == this.f17541b) {
                break;
            }
        }
        e eVar = (e) obj;
        String str = eVar != null ? eVar.f17525b : null;
        if (str == null) {
            ArrayList arrayList = new ArrayList();
            Iterator it2 = f17540s.iterator();
            while (it2.hasNext()) {
                e eVar2 = (e) it2.next();
                String str2 = a(eVar2.a) ? eVar2.f17525b : null;
                if (str2 != null) {
                    arrayList.add(str2);
                }
            }
            str = CollectionsKt.O(arrayList, " | ", null, null, null, 62);
        }
        StringBuilder m5 = com.discord.chat.bridge.botuikit.a.m("DescriptorKindFilter(", str, ", ");
        m5.append(this.a);
        m5.append(')');
        return m5.toString();
    }

    public f(int i5, List excludes) {
        Intrinsics.checkNotNullParameter(excludes, "excludes");
        this.a = excludes;
        Iterator it = excludes.iterator();
        while (it.hasNext()) {
            i5 &= ~((d) it.next()).a();
        }
        this.f17541b = i5;
    }
}
