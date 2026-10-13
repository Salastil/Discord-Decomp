package io.sentry;

import java.util.ArrayList;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import okhttp3.Headers;

/* loaded from: classes3.dex */
public final class e6 {
    public ArrayList a;

    public e6(List list) {
        this.a = new ArrayList(list == null ? new ArrayList(0) : list);
    }

    public void a(String name, String value) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(value, "value");
        d9.a.f(name);
        d9.a.g(value, name);
        c(name, value);
    }

    public void b(String line) {
        Intrinsics.checkNotNullParameter(line, "line");
        int I = StringsKt.I(line, ':', 1, 4);
        if (I != -1) {
            String substring = line.substring(0, I);
            Intrinsics.checkNotNullExpressionValue(substring, "this as java.lang.String…ing(startIndex, endIndex)");
            String substring2 = line.substring(I + 1);
            Intrinsics.checkNotNullExpressionValue(substring2, "this as java.lang.String).substring(startIndex)");
            c(substring, substring2);
            return;
        }
        if (line.charAt(0) != ':') {
            c("", line);
            return;
        }
        String substring3 = line.substring(1);
        Intrinsics.checkNotNullExpressionValue(substring3, "this as java.lang.String).substring(startIndex)");
        c("", substring3);
    }

    public void c(String name, String value) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(value, "value");
        ArrayList arrayList = this.a;
        arrayList.add(name);
        arrayList.add(StringsKt.b0(value).toString());
    }

    public Headers d() {
        Object[] array = this.a.toArray(new String[0]);
        if (array != null) {
            return new Headers((String[]) array);
        }
        throw new NullPointerException("null cannot be cast to non-null type kotlin.Array<T of kotlin.collections.ArraysKt__ArraysJVMKt.toTypedArray>");
    }

    public String e(String name) {
        Intrinsics.checkNotNullParameter(name, "name");
        ArrayList arrayList = this.a;
        int size = arrayList.size() - 2;
        int a = no.c.a(size, 0, -2);
        if (a > size) {
            return null;
        }
        while (true) {
            int i5 = size - 2;
            if (kotlin.text.x.i(name, (String) arrayList.get(size), true)) {
                return (String) arrayList.get(size + 1);
            }
            if (size == a) {
                return null;
            }
            size = i5;
        }
    }

    public void f(String name) {
        ArrayList arrayList = this.a;
        Intrinsics.checkNotNullParameter(name, "name");
        int i5 = 0;
        while (i5 < arrayList.size()) {
            if (kotlin.text.x.i(name, (String) arrayList.get(i5), true)) {
                arrayList.remove(i5);
                arrayList.remove(i5);
                i5 -= 2;
            }
            i5 += 2;
        }
    }

    public e6() {
        this.a = new ArrayList(20);
    }
}
