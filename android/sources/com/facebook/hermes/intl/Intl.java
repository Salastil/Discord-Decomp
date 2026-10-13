package com.facebook.hermes.intl;

import android.icu.lang.UCharacter;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import y9.b0;
import ya.a;

@a
/* loaded from: classes3.dex */
public class Intl {
    @a
    public static List<String> getCanonicalLocales(List<String> list) {
        if (list.size() == 0) {
            return Collections.EMPTY_LIST;
        }
        ArrayList arrayList = new ArrayList();
        for (String str : list) {
            if (str == null) {
                throw new ap.a("Incorrect locale information provided", 9);
            }
            if (str.isEmpty()) {
                throw new ap.a("Incorrect locale information provided", 9);
            }
            String f2 = y9.a.g(str).f();
            if (!f2.isEmpty() && !arrayList.contains(f2)) {
                arrayList.add(f2);
            }
        }
        return arrayList;
    }

    @a
    public static String toLocaleLowerCase(List<String> list, String str) {
        b0 b0Var = (b0) y9.a.e((String[]) list.toArray(new String[list.size()])).f7959e;
        b0Var.b();
        return UCharacter.toLowerCase(b0Var.a, str);
    }

    @a
    public static String toLocaleUpperCase(List<String> list, String str) {
        b0 b0Var = (b0) y9.a.e((String[]) list.toArray(new String[list.size()])).f7959e;
        b0Var.b();
        return UCharacter.toUpperCase(b0Var.a, str);
    }
}
