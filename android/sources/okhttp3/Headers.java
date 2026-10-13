package okhttp3;

import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;
import io.sentry.e6;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.TreeMap;
import kotlin.Pair;
import kotlin.collections.h0;
import kotlin.collections.m0;
import kotlin.jvm.internal.ArrayIteratorKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.StringCompanionObject;
import kotlin.jvm.internal.markers.KMappedMarker;
import kotlin.text.x;

/* loaded from: classes3.dex */
public final class Headers implements Iterable, KMappedMarker {

    /* renamed from: d, reason: collision with root package name */
    public final String[] f16031d;

    public Headers(String[] strArr) {
        this.f16031d = strArr;
    }

    public final String a(String name) {
        Intrinsics.checkNotNullParameter(name, "name");
        String[] strArr = this.f16031d;
        int length = strArr.length - 2;
        int a = no.c.a(length, 0, -2);
        if (a > length) {
            return null;
        }
        while (true) {
            int i5 = length - 2;
            if (x.i(name, strArr[length], true)) {
                return strArr[length + 1];
            }
            if (length == a) {
                return null;
            }
            length = i5;
        }
    }

    public final String b(int i5) {
        return this.f16031d[i5 * 2];
    }

    public final e6 d() {
        e6 e6Var = new e6();
        h0.q(e6Var.a, this.f16031d);
        return e6Var;
    }

    public final TreeMap e() {
        Intrinsics.checkNotNullParameter(StringCompanionObject.INSTANCE, "<this>");
        Comparator CASE_INSENSITIVE_ORDER = String.CASE_INSENSITIVE_ORDER;
        Intrinsics.checkNotNullExpressionValue(CASE_INSENSITIVE_ORDER, "CASE_INSENSITIVE_ORDER");
        TreeMap treeMap = new TreeMap(CASE_INSENSITIVE_ORDER);
        int size = size();
        int i5 = 0;
        while (i5 < size) {
            int i6 = i5 + 1;
            String b10 = b(i5);
            Locale locale = Locale.US;
            String o6 = a3.e.o(locale, "US", b10, locale, "this as java.lang.String).toLowerCase(locale)");
            List list = (List) treeMap.get(o6);
            if (list == null) {
                list = new ArrayList(2);
                treeMap.put(o6, list);
            }
            list.add(h(i5));
            i5 = i6;
        }
        return treeMap;
    }

    public final boolean equals(Object obj) {
        if (obj instanceof Headers) {
            return Arrays.equals(this.f16031d, ((Headers) obj).f16031d);
        }
        return false;
    }

    public final String h(int i5) {
        return this.f16031d[(i5 * 2) + 1];
    }

    public final int hashCode() {
        return Arrays.hashCode(this.f16031d);
    }

    public final List i(String name) {
        Intrinsics.checkNotNullParameter(name, "name");
        int size = size();
        ArrayList arrayList = null;
        int i5 = 0;
        while (i5 < size) {
            int i6 = i5 + 1;
            if (x.i(name, b(i5), true)) {
                if (arrayList == null) {
                    arrayList = new ArrayList(2);
                }
                arrayList.add(h(i5));
            }
            i5 = i6;
        }
        if (arrayList == null) {
            return m0.f13512d;
        }
        List unmodifiableList = Collections.unmodifiableList(arrayList);
        Intrinsics.checkNotNullExpressionValue(unmodifiableList, "{\n      Collections.unmodifiableList(result)\n    }");
        return unmodifiableList;
    }

    @Override // java.lang.Iterable
    public final Iterator iterator() {
        int size = size();
        Pair[] pairArr = new Pair[size];
        for (int i5 = 0; i5 < size; i5++) {
            pairArr[i5] = new Pair(b(i5), h(i5));
        }
        return ArrayIteratorKt.iterator(pairArr);
    }

    public final int size() {
        return this.f16031d.length / 2;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder();
        int size = size();
        int i5 = 0;
        while (i5 < size) {
            int i6 = i5 + 1;
            String b10 = b(i5);
            String h6 = h(i5);
            sb2.append(b10);
            sb2.append(": ");
            if (qs.b.p(b10)) {
                h6 = "██";
            }
            sb2.append(h6);
            sb2.append(ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE);
            i5 = i6;
        }
        String sb3 = sb2.toString();
        Intrinsics.checkNotNullExpressionValue(sb3, "StringBuilder().apply(builderAction).toString()");
        return sb3;
    }
}
