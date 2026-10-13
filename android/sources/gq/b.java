package gq;

import java.util.LinkedHashMap;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.collections.c0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.x;

/* loaded from: classes3.dex */
public abstract class b {
    public static final String a = CollectionsKt.O(c0.g('k', 'o', 't', 'l', 'i', 'n'), "", null, null, null, 62);

    /* renamed from: b, reason: collision with root package name */
    public static final LinkedHashMap f9436b;

    static {
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        List g6 = c0.g("Boolean", "Z", "Char", "C", "Byte", "B", "Short", "S", "Int", "I", "Float", "F", "Long", "J", "Double", "D");
        int a10 = no.c.a(0, g6.size() - 1, 2);
        if (a10 >= 0) {
            int i5 = 0;
            while (true) {
                StringBuilder sb2 = new StringBuilder();
                String str = a;
                sb2.append(str);
                sb2.append('/');
                sb2.append((String) g6.get(i5));
                int i6 = i5 + 1;
                linkedHashMap.put(sb2.toString(), g6.get(i6));
                StringBuilder sb3 = new StringBuilder();
                sb3.append(str);
                sb3.append('/');
                linkedHashMap.put(com.discord.chat.bridge.botuikit.a.j(sb3, (String) g6.get(i5), "Array"), "[" + ((String) g6.get(i6)));
                if (i5 == a10) {
                    break;
                } else {
                    i5 += 2;
                }
            }
        }
        linkedHashMap.put(a + "/Unit", "V");
        a(linkedHashMap, "Any", "java/lang/Object");
        a(linkedHashMap, "Nothing", "java/lang/Void");
        a(linkedHashMap, "Annotation", "java/lang/annotation/Annotation");
        for (String str2 : c0.g("String", "CharSequence", "Throwable", "Cloneable", "Number", "Comparable", "Enum")) {
            a(linkedHashMap, str2, "java/lang/" + str2);
        }
        for (String str3 : c0.g("Iterator", "Collection", "List", "Set", "Map", "ListIterator")) {
            a(linkedHashMap, a3.e.k("collections/", str3), "java/util/" + str3);
            a(linkedHashMap, "collections/Mutable" + str3, "java/util/" + str3);
        }
        a(linkedHashMap, "collections/Iterable", "java/lang/Iterable");
        a(linkedHashMap, "collections/MutableIterable", "java/lang/Iterable");
        a(linkedHashMap, "collections/Map.Entry", "java/util/Map$Entry");
        a(linkedHashMap, "collections/MutableMap.MutableEntry", "java/util/Map$Entry");
        for (int i10 = 0; i10 < 23; i10++) {
            String i11 = k0.d.i(i10, "Function");
            StringBuilder sb4 = new StringBuilder();
            String str4 = a;
            sb4.append(str4);
            sb4.append("/jvm/functions/Function");
            sb4.append(i10);
            a(linkedHashMap, i11, sb4.toString());
            a(linkedHashMap, "reflect/KFunction" + i10, str4 + "/reflect/KFunction");
        }
        for (String str5 : c0.g("Char", "Byte", "Short", "Int", "Float", "Long", "Double", "String", "Enum")) {
            a(linkedHashMap, k0.d.k(str5, ".Companion"), com.discord.chat.bridge.botuikit.a.k(new StringBuilder(), a, "/jvm/internal/", str5, "CompanionObject"));
        }
        f9436b = linkedHashMap;
    }

    public static final void a(LinkedHashMap linkedHashMap, String str, String str2) {
        linkedHashMap.put(a + '/' + str, "L" + str2 + ';');
    }

    public static final String b(String classId) {
        Intrinsics.checkNotNullParameter(classId, "classId");
        String str = (String) f9436b.get(classId);
        if (str != null) {
            return str;
        }
        return "L" + x.m(classId, '.', '$') + ';';
    }
}
