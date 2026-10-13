package iq;

import java.util.Iterator;
import java.util.Map;

/* loaded from: classes3.dex */
public abstract class j extends i implements u {

    /* renamed from: e, reason: collision with root package name */
    public h f12219e = h.f12209c;

    /* renamed from: i, reason: collision with root package name */
    public boolean f12220i;

    public final void f(k kVar) {
        y yVar;
        if (!this.f12220i) {
            this.f12219e = this.f12219e.clone();
            this.f12220i = true;
        }
        h hVar = this.f12219e;
        h hVar2 = kVar.f12228d;
        hVar.getClass();
        int i5 = 0;
        while (true) {
            yVar = hVar2.a;
            if (i5 >= yVar.f12252e.size()) {
                break;
            }
            hVar.g((Map.Entry) yVar.f12252e.get(i5));
            i5++;
        }
        Iterator it = yVar.c().iterator();
        while (it.hasNext()) {
            hVar.g((Map.Entry) it.next());
        }
    }
}
