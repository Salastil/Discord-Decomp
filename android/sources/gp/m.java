package gp;

import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import kotlin.collections.c0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.x;

/* loaded from: classes3.dex */
public final class m {

    /* renamed from: c, reason: collision with root package name */
    public static final m f9434c = new m(c0.g(g.f9428c, j.f9431c, h.f9429c, i.f9430c));
    public final List a;

    /* renamed from: b, reason: collision with root package name */
    public final LinkedHashMap f9435b;

    public m(List kinds) {
        Intrinsics.checkNotNullParameter(kinds, "kinds");
        this.a = kinds;
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        for (Object obj : kinds) {
            hq.c cVar = ((k) obj).a;
            Object obj2 = linkedHashMap.get(cVar);
            if (obj2 == null) {
                obj2 = new ArrayList();
                linkedHashMap.put(cVar, obj2);
            }
            ((List) obj2).add(obj);
        }
        this.f9435b = linkedHashMap;
    }

    /* JADX WARN: Removed duplicated region for block: B:13:0x0065 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:17:0x001a A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final l a(hq.c packageFqName, String className) {
        Integer valueOf;
        Intrinsics.checkNotNullParameter(packageFqName, "packageFqName");
        Intrinsics.checkNotNullParameter(className, "className");
        List<k> list = (List) this.f9435b.get(packageFqName);
        if (list != null) {
            for (k kVar : list) {
                if (x.o(className, kVar.f9432b, false)) {
                    String substring = className.substring(kVar.f9432b.length());
                    Intrinsics.checkNotNullExpressionValue(substring, "substring(...)");
                    if (substring.length() != 0) {
                        int length = substring.length();
                        int i5 = 0;
                        for (int i6 = 0; i6 < length; i6++) {
                            int charAt = substring.charAt(i6) - '0';
                            if (charAt >= 0 && charAt < 10) {
                                i5 = (i5 * 10) + charAt;
                            }
                        }
                        valueOf = Integer.valueOf(i5);
                        if (valueOf == null) {
                            return new l(kVar, valueOf.intValue());
                        }
                    }
                    valueOf = null;
                    if (valueOf == null) {
                    }
                }
            }
        }
        return null;
    }
}
