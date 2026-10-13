package w3;

import androidx.work.impl.WorkDatabase;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* loaded from: classes.dex */
public abstract class i {
    public static final String a = v3.p.f("Schedulers");

    public static void a(e4.p pVar, v3.r rVar, ArrayList arrayList) {
        if (arrayList.size() > 0) {
            rVar.getClass();
            long currentTimeMillis = System.currentTimeMillis();
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                pVar.p(currentTimeMillis, ((e4.o) it.next()).a);
            }
        }
    }

    public static void b(v3.b bVar, WorkDatabase workDatabase, List list) {
        if (list == null || list.size() == 0) {
            return;
        }
        e4.p t5 = workDatabase.t();
        workDatabase.c();
        try {
            ArrayList e9 = t5.e();
            a(t5, bVar.f19184c, e9);
            ArrayList d6 = t5.d(bVar.j);
            a(t5, bVar.f19184c, d6);
            d6.addAll(e9);
            ArrayList c6 = t5.c();
            workDatabase.o();
            workDatabase.k();
            if (d6.size() > 0) {
                e4.o[] oVarArr = (e4.o[]) d6.toArray(new e4.o[d6.size()]);
                Iterator it = list.iterator();
                while (it.hasNext()) {
                    g gVar = (g) it.next();
                    if (gVar.a()) {
                        gVar.d(oVarArr);
                    }
                }
            }
            if (c6.size() > 0) {
                e4.o[] oVarArr2 = (e4.o[]) c6.toArray(new e4.o[c6.size()]);
                Iterator it2 = list.iterator();
                while (it2.hasNext()) {
                    g gVar2 = (g) it2.next();
                    if (!gVar2.a()) {
                        gVar2.d(oVarArr2);
                    }
                }
            }
        } catch (Throwable th2) {
            workDatabase.k();
            throw th2;
        }
    }
}
