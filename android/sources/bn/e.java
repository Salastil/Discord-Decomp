package bn;

import android.graphics.drawable.Drawable;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class e {
    public final List a;

    /* renamed from: b, reason: collision with root package name */
    public final List f3058b;

    public e(List groups, List children) {
        Intrinsics.checkNotNullParameter(groups, "groups");
        Intrinsics.checkNotNullParameter(children, "children");
        this.a = groups;
        this.f3058b = children;
    }

    public static e a(e eVar, List children) {
        List groups = eVar.a;
        eVar.getClass();
        Intrinsics.checkNotNullParameter(groups, "groups");
        Intrinsics.checkNotNullParameter(children, "children");
        return new e(groups, children);
    }

    /* JADX WARN: Removed duplicated region for block: B:13:0x00dd A[LOOP:0: B:2:0x0009->B:13:0x00dd, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:14:0x00d3 A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static List b(List list, String str, Drawable drawable) {
        int i5;
        h hVar;
        String str2;
        h a;
        String str3 = str;
        Iterator it = list.iterator();
        int i6 = 0;
        while (it.hasNext()) {
            int i10 = i6 + 1;
            h hVar2 = (h) it.next();
            if (!Intrinsics.areEqual(hVar2.getItem().a, str3)) {
                i5 = i6;
                hVar = hVar2;
                if (hVar instanceof g) {
                    g gVar = (g) hVar;
                    e eVar = gVar.f3059b;
                    str2 = str;
                    List b10 = b(eVar.f3058b, str2, drawable);
                    if (b10 != eVar.f3058b) {
                        a = g.a(gVar, null, a(eVar, b10), 5);
                        if (a != hVar) {
                        }
                    }
                }
                str2 = str;
            } else if (drawable != hVar2.getItem().f3086i) {
                n item = hVar2.getItem();
                String id2 = item.a;
                String str4 = item.f3079b;
                String str5 = item.f3080c;
                String str6 = item.f3081d;
                String str7 = item.f3082e;
                boolean z5 = item.f3083f;
                boolean z6 = item.f3084g;
                q showAsAction = item.f3085h;
                Integer num = item.j;
                Integer num2 = item.k;
                Integer num3 = item.f3087l;
                Integer num4 = item.f3088m;
                String str8 = item.f3089n;
                int i11 = i6;
                r itemType = item.f3090o;
                boolean z7 = item.f3091p;
                Intrinsics.checkNotNullParameter(id2, "id");
                Intrinsics.checkNotNullParameter(showAsAction, "showAsAction");
                Intrinsics.checkNotNullParameter(itemType, "itemType");
                hVar = hVar2;
                i5 = i11;
                n item2 = new n(id2, str4, str5, str6, str7, z5, z6, showAsAction, drawable, num, num2, num3, num4, str8, itemType, z7);
                if (hVar instanceof f) {
                    Intrinsics.checkNotNullParameter(item2, "item");
                    a = new f(item2);
                } else {
                    if (!(hVar instanceof g)) {
                        throw new fo.n();
                    }
                    a = g.a((g) hVar, item2, null, 6);
                }
                str2 = str;
                if (a != hVar) {
                    ArrayList j02 = CollectionsKt.j0(list);
                    j02.set(i5, a);
                    return j02;
                }
                str3 = str2;
                i6 = i10;
            } else {
                i5 = i6;
                hVar = hVar2;
                str2 = str;
            }
            a = hVar;
            if (a != hVar) {
            }
        }
        return list;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof e)) {
            return false;
        }
        e eVar = (e) obj;
        return Intrinsics.areEqual(this.a, eVar.a) && Intrinsics.areEqual(this.f3058b, eVar.f3058b);
    }

    public final int hashCode() {
        return this.f3058b.hashCode() + (this.a.hashCode() * 31);
    }

    public final String toString() {
        return "StackHeaderToolbarMenuConfig(groups=" + this.a + ", children=" + this.f3058b + ")";
    }
}
