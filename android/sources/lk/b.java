package lk;

import com.discord.R;
import com.henninghall.date_picker.pickers.AndroidNative;
import e4.p;
import gk.n;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import nk.c;
import nk.d;
import nk.e;
import nk.f;
import ve.i;

/* loaded from: classes3.dex */
public final class b {
    public final p a;

    /* renamed from: b, reason: collision with root package name */
    public final d f14070b;

    /* renamed from: c, reason: collision with root package name */
    public final c f14071c;

    /* renamed from: d, reason: collision with root package name */
    public final nk.a f14072d;

    /* renamed from: e, reason: collision with root package name */
    public final nk.a f14073e;

    /* renamed from: f, reason: collision with root package name */
    public final nk.b f14074f;

    /* renamed from: g, reason: collision with root package name */
    public final nk.a f14075g;

    /* renamed from: h, reason: collision with root package name */
    public final f f14076h;

    /* renamed from: i, reason: collision with root package name */
    public final n f14077i;
    public final i j;
    public final gk.i k;

    public b(p pVar, n nVar) {
        this.a = pVar;
        this.f14077i = nVar;
        this.j = new i(nVar);
        f fVar = new f(d(R.id.year), pVar);
        fVar.f15540f = 1900;
        fVar.f15541g = 2100;
        this.f14076h = fVar;
        nk.a aVar = new nk.a(d(R.id.month), pVar, 2);
        this.f14075g = aVar;
        nk.b bVar = new nk.b(d(R.id.date), pVar);
        this.f14074f = bVar;
        c cVar = new c(d(R.id.day), pVar);
        this.f14071c = cVar;
        nk.a aVar2 = new nk.a(d(R.id.minutes), pVar, 1);
        this.f14072d = aVar2;
        nk.a aVar3 = new nk.a(d(R.id.ampm), pVar, 0);
        this.f14073e = aVar3;
        d dVar = new d(d(R.id.hour), pVar);
        this.f14070b = dVar;
        gk.i iVar = new gk.i();
        iVar.put(ik.c.f10941d, cVar);
        iVar.put(ik.c.f10944v, fVar);
        iVar.put(ik.c.f10943i, aVar);
        iVar.put(ik.c.f10942e, bVar);
        iVar.put(ik.c.f10945w, dVar);
        iVar.put(ik.c.f10946x, aVar2);
        iVar.put(ik.c.f10947y, aVar3);
        this.k = iVar;
        dVar.f15538d.setOnValueChangeListenerInScrolling(new gj.c(22, this));
    }

    public final ArrayList a() {
        return new ArrayList(Arrays.asList(this.f14076h, this.f14075g, this.f14074f, this.f14071c, this.f14070b, this.f14072d, this.f14073e));
    }

    public final String b(int i5) {
        String e9;
        String str;
        StringBuilder sb2 = new StringBuilder();
        if (this.a.g() == ik.b.f10937d) {
            ArrayList c6 = c();
            StringBuilder sb3 = new StringBuilder();
            for (int i6 = 0; i6 < 3; i6++) {
                if (i6 != 0) {
                    sb3.append(" ");
                }
                e eVar = (e) c6.get(i6);
                if (eVar instanceof nk.b) {
                    if (eVar.h()) {
                        int size = eVar.f15537c.size();
                        str = (String) eVar.f15537c.get(((eVar.f15538d.getValue() + size) - i5) % size);
                    } else {
                        str = eVar.f15539e.format(eVar.f15536b.getTime());
                    }
                    sb3.append(str);
                } else {
                    sb3.append(eVar.e());
                }
            }
            e9 = sb3.toString();
        } else {
            e9 = this.f14071c.e();
        }
        sb2.append(e9);
        sb2.append(" ");
        sb2.append(this.f14070b.e() + " " + this.f14072d.e() + this.f14073e.e());
        return sb2.toString();
    }

    public final ArrayList c() {
        ArrayList arrayList = new ArrayList();
        Iterator it = ((gj.c) this.a.f7997n).L().iterator();
        while (it.hasNext()) {
            arrayList.add((e) this.k.get((ik.c) it.next()));
        }
        return arrayList;
    }

    public final jk.e d(int i5) {
        return (jk.e) this.f14077i.findViewById(i5);
    }

    public final boolean e() {
        Iterator it = a().iterator();
        while (it.hasNext()) {
            AndroidNative androidNative = (AndroidNative) ((e) it.next()).f15538d;
            if (androidNative.L0 || androidNative.J0) {
                return true;
            }
        }
        return false;
    }
}
