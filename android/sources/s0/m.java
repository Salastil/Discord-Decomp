package s0;

import java.util.ArrayList;

/* loaded from: classes.dex */
public final class m {
    public p a;

    /* renamed from: b, reason: collision with root package name */
    public ArrayList f17720b;

    public static long a(g gVar, long j) {
        p pVar = gVar.f17712d;
        ArrayList arrayList = gVar.k;
        if (pVar instanceof k) {
            return j;
        }
        int size = arrayList.size();
        long j5 = j;
        for (int i5 = 0; i5 < size; i5++) {
            e eVar = (e) arrayList.get(i5);
            if (eVar instanceof g) {
                g gVar2 = (g) eVar;
                if (gVar2.f17712d != pVar) {
                    j5 = Math.min(j5, a(gVar2, gVar2.f17714f + j));
                }
            }
        }
        g gVar3 = pVar.f17734i;
        g gVar4 = pVar.f17733h;
        if (gVar != gVar3) {
            return j5;
        }
        long j7 = j - pVar.j();
        return Math.min(Math.min(j5, a(gVar4, j7)), j7 - gVar4.f17714f);
    }

    public static long b(g gVar, long j) {
        p pVar = gVar.f17712d;
        ArrayList arrayList = gVar.k;
        if (pVar instanceof k) {
            return j;
        }
        int size = arrayList.size();
        long j5 = j;
        for (int i5 = 0; i5 < size; i5++) {
            e eVar = (e) arrayList.get(i5);
            if (eVar instanceof g) {
                g gVar2 = (g) eVar;
                if (gVar2.f17712d != pVar) {
                    j5 = Math.max(j5, b(gVar2, gVar2.f17714f + j));
                }
            }
        }
        g gVar3 = pVar.f17733h;
        g gVar4 = pVar.f17734i;
        if (gVar != gVar3) {
            return j5;
        }
        long j7 = pVar.j() + j;
        return Math.max(Math.max(j5, b(gVar4, j7)), j7 - gVar4.f17714f);
    }
}
