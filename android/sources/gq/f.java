package gq;

import fo.n;
import fq.h;
import fq.i;
import fq.j;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Set;
import kotlin.collections.CollectionsKt;
import kotlin.collections.IndexedValue;
import kotlin.collections.c0;
import kotlin.collections.d0;
import kotlin.collections.o0;
import kotlin.collections.q0;
import kotlin.collections.u0;
import kotlin.collections.v;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.x;

/* loaded from: classes3.dex */
public final class f implements eq.g {

    /* renamed from: v, reason: collision with root package name */
    public static final List f9441v;

    /* renamed from: d, reason: collision with root package name */
    public final String[] f9442d;

    /* renamed from: e, reason: collision with root package name */
    public final Set f9443e;

    /* renamed from: i, reason: collision with root package name */
    public final ArrayList f9444i;

    static {
        String O = CollectionsKt.O(c0.g('k', 'o', 't', 'l', 'i', 'n'), "", null, null, null, 62);
        List g6 = c0.g(k0.d.k(O, "/Any"), k0.d.k(O, "/Nothing"), k0.d.k(O, "/Unit"), k0.d.k(O, "/Throwable"), k0.d.k(O, "/Number"), k0.d.k(O, "/Byte"), k0.d.k(O, "/Double"), k0.d.k(O, "/Float"), k0.d.k(O, "/Int"), k0.d.k(O, "/Long"), k0.d.k(O, "/Short"), k0.d.k(O, "/Boolean"), k0.d.k(O, "/Char"), k0.d.k(O, "/CharSequence"), k0.d.k(O, "/String"), k0.d.k(O, "/Comparable"), k0.d.k(O, "/Enum"), k0.d.k(O, "/Array"), k0.d.k(O, "/ByteArray"), k0.d.k(O, "/DoubleArray"), k0.d.k(O, "/FloatArray"), k0.d.k(O, "/IntArray"), k0.d.k(O, "/LongArray"), k0.d.k(O, "/ShortArray"), k0.d.k(O, "/BooleanArray"), k0.d.k(O, "/CharArray"), k0.d.k(O, "/Cloneable"), k0.d.k(O, "/Annotation"), k0.d.k(O, "/collections/Iterable"), k0.d.k(O, "/collections/MutableIterable"), k0.d.k(O, "/collections/Collection"), k0.d.k(O, "/collections/MutableCollection"), k0.d.k(O, "/collections/List"), k0.d.k(O, "/collections/MutableList"), k0.d.k(O, "/collections/Set"), k0.d.k(O, "/collections/MutableSet"), k0.d.k(O, "/collections/Map"), k0.d.k(O, "/collections/MutableMap"), k0.d.k(O, "/collections/Map.Entry"), k0.d.k(O, "/collections/MutableMap.MutableEntry"), k0.d.k(O, "/collections/Iterator"), k0.d.k(O, "/collections/MutableIterator"), k0.d.k(O, "/collections/ListIterator"), k0.d.k(O, "/collections/MutableListIterator"));
        f9441v = g6;
        v m02 = CollectionsKt.m0(g6);
        int a = u0.a(d0.l(m02, 10));
        if (a < 16) {
            a = 16;
        }
        LinkedHashMap linkedHashMap = new LinkedHashMap(a);
        Iterator it = m02.iterator();
        while (true) {
            q0 q0Var = (q0) it;
            if (!q0Var.f13519e.hasNext()) {
                return;
            }
            IndexedValue indexedValue = (IndexedValue) q0Var.next();
            linkedHashMap.put((String) indexedValue.f13483b, Integer.valueOf(indexedValue.a));
        }
    }

    public f(j types, String[] strings) {
        Set localNameIndices;
        Intrinsics.checkNotNullParameter(types, "types");
        Intrinsics.checkNotNullParameter(strings, "strings");
        List list = types.f8990i;
        if (list.isEmpty()) {
            localNameIndices = o0.f13515d;
        } else {
            Intrinsics.checkNotNull(list);
            localNameIndices = CollectionsKt.l0(list);
        }
        List<i> list2 = types.f8989e;
        Intrinsics.checkNotNullExpressionValue(list2, "getRecordList(...)");
        Intrinsics.checkNotNullParameter(list2, "<this>");
        ArrayList records = new ArrayList();
        records.ensureCapacity(list2.size());
        for (i iVar : list2) {
            int i5 = iVar.f8982i;
            for (int i6 = 0; i6 < i5; i6++) {
                records.add(iVar);
            }
        }
        records.trimToSize();
        Intrinsics.checkNotNullParameter(strings, "strings");
        Intrinsics.checkNotNullParameter(localNameIndices, "localNameIndices");
        Intrinsics.checkNotNullParameter(records, "records");
        this.f9442d = strings;
        this.f9443e = localNameIndices;
        this.f9444i = records;
    }

    @Override // eq.g
    public final String getString(int i5) {
        String str;
        i iVar = (i) this.f9444i.get(i5);
        int i6 = iVar.f8981e;
        if ((i6 & 4) == 4) {
            Object obj = iVar.f8984w;
            if (obj instanceof String) {
                str = (String) obj;
            } else {
                iq.d dVar = (iq.d) obj;
                String u5 = dVar.u();
                if (dVar.j()) {
                    iVar.f8984w = u5;
                }
                str = u5;
            }
        } else {
            if ((i6 & 2) == 2) {
                List list = f9441v;
                int size = list.size();
                int i10 = iVar.f8983v;
                if (i10 >= 0 && i10 < size) {
                    str = (String) list.get(i10);
                }
            }
            str = this.f9442d[i5];
        }
        if (iVar.f8986y.size() >= 2) {
            List list2 = iVar.f8986y;
            Intrinsics.checkNotNull(list2);
            Integer num = (Integer) list2.get(0);
            Integer num2 = (Integer) list2.get(1);
            if (num.intValue() >= 0 && num.intValue() <= num2.intValue() && num2.intValue() <= str.length()) {
                Intrinsics.checkNotNull(str);
                Intrinsics.checkNotNull(num);
                int intValue = num.intValue();
                Intrinsics.checkNotNull(num2);
                str = str.substring(intValue, num2.intValue());
                Intrinsics.checkNotNullExpressionValue(str, "substring(...)");
            }
        }
        if (iVar.F.size() >= 2) {
            List list3 = iVar.F;
            Intrinsics.checkNotNull(list3);
            Integer num3 = (Integer) list3.get(0);
            Integer num4 = (Integer) list3.get(1);
            Intrinsics.checkNotNull(str);
            str = x.m(str, (char) num3.intValue(), (char) num4.intValue());
        }
        h hVar = iVar.f8985x;
        if (hVar == null) {
            hVar = h.NONE;
        }
        int ordinal = hVar.ordinal();
        if (ordinal != 0) {
            if (ordinal == 1) {
                Intrinsics.checkNotNull(str);
                str = x.m(str, '$', '.');
            } else {
                if (ordinal != 2) {
                    throw new n();
                }
                if (str.length() >= 2) {
                    Intrinsics.checkNotNull(str);
                    str = str.substring(1, str.length() - 1);
                    Intrinsics.checkNotNullExpressionValue(str, "substring(...)");
                }
                Intrinsics.checkNotNull(str);
                str = x.m(str, '$', '.');
            }
        }
        Intrinsics.checkNotNull(str);
        return str;
    }

    @Override // eq.g
    public final String h(int i5) {
        return getString(i5);
    }

    @Override // eq.g
    public final boolean l(int i5) {
        return this.f9443e.contains(Integer.valueOf(i5));
    }
}
