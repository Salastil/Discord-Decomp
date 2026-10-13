package v4;

import java.util.ArrayList;

/* loaded from: classes.dex */
public abstract class p {
    public static final e4.e a = e4.e.x("k");

    public static ArrayList a(w4.a aVar, l4.i iVar, float f2, d0 d0Var, boolean z5) {
        w4.a aVar2;
        l4.i iVar2;
        float f10;
        d0 d0Var2;
        boolean z6;
        ArrayList arrayList = new ArrayList();
        if (aVar.A() == 6) {
            iVar.a("Lottie doesn't support expressions.");
            return arrayList;
        }
        aVar.f();
        while (aVar.o()) {
            if (aVar.P(a) != 0) {
                aVar.R();
            } else if (aVar.A() == 1) {
                aVar.c();
                if (aVar.A() == 7) {
                    w4.a aVar3 = aVar;
                    l4.i iVar3 = iVar;
                    float f11 = f2;
                    d0 d0Var3 = d0Var;
                    boolean z7 = z5;
                    y4.a b10 = o.b(aVar3, iVar3, f11, d0Var3, false, z7);
                    aVar2 = aVar3;
                    iVar2 = iVar3;
                    f10 = f11;
                    d0Var2 = d0Var3;
                    z6 = z7;
                    arrayList.add(b10);
                } else {
                    aVar2 = aVar;
                    iVar2 = iVar;
                    f10 = f2;
                    d0Var2 = d0Var;
                    z6 = z5;
                    while (aVar2.o()) {
                        arrayList.add(o.b(aVar2, iVar2, f10, d0Var2, true, z6));
                    }
                }
                aVar2.g();
                aVar = aVar2;
                iVar = iVar2;
                f2 = f10;
                d0Var = d0Var2;
                z5 = z6;
            } else {
                w4.a aVar4 = aVar;
                arrayList.add(o.b(aVar4, iVar, f2, d0Var, false, z5));
                aVar = aVar4;
            }
        }
        aVar.i();
        b(arrayList);
        return arrayList;
    }

    public static void b(ArrayList arrayList) {
        int i5;
        Object obj;
        int size = arrayList.size();
        int i6 = 0;
        while (true) {
            i5 = size - 1;
            if (i6 >= i5) {
                break;
            }
            y4.a aVar = (y4.a) arrayList.get(i6);
            i6++;
            y4.a aVar2 = (y4.a) arrayList.get(i6);
            aVar.f20657h = Float.valueOf(aVar2.f20656g);
            if (aVar.f20652c == null && (obj = aVar2.f20651b) != null) {
                aVar.f20652c = obj;
                if (aVar instanceof o4.l) {
                    ((o4.l) aVar).d();
                }
            }
        }
        y4.a aVar3 = (y4.a) arrayList.get(i5);
        if ((aVar3.f20651b == null || aVar3.f20652c == null) && arrayList.size() > 1) {
            arrayList.remove(aVar3);
        }
    }
}
