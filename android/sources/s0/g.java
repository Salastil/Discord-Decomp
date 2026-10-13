package s0;

import java.util.ArrayList;
import java.util.Iterator;

/* loaded from: classes.dex */
public class g implements e {

    /* renamed from: d, reason: collision with root package name */
    public final p f17712d;

    /* renamed from: f, reason: collision with root package name */
    public int f17714f;

    /* renamed from: g, reason: collision with root package name */
    public int f17715g;
    public p a = null;

    /* renamed from: b, reason: collision with root package name */
    public boolean f17710b = false;

    /* renamed from: c, reason: collision with root package name */
    public boolean f17711c = false;

    /* renamed from: e, reason: collision with root package name */
    public int f17713e = 1;

    /* renamed from: h, reason: collision with root package name */
    public int f17716h = 1;

    /* renamed from: i, reason: collision with root package name */
    public h f17717i = null;
    public boolean j = false;
    public final ArrayList k = new ArrayList();

    /* renamed from: l, reason: collision with root package name */
    public final ArrayList f17718l = new ArrayList();

    public g(p pVar) {
        this.f17712d = pVar;
    }

    @Override // s0.e
    public final void a(e eVar) {
        ArrayList arrayList = this.f17718l;
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            if (!((g) it.next()).j) {
                return;
            }
        }
        this.f17711c = true;
        p pVar = this.a;
        if (pVar != null) {
            pVar.a(this);
        }
        if (this.f17710b) {
            this.f17712d.a(this);
            return;
        }
        Iterator it2 = arrayList.iterator();
        g gVar = null;
        int i5 = 0;
        while (it2.hasNext()) {
            g gVar2 = (g) it2.next();
            if (!(gVar2 instanceof h)) {
                i5++;
                gVar = gVar2;
            }
        }
        if (gVar != null && i5 == 1 && gVar.j) {
            h hVar = this.f17717i;
            if (hVar != null) {
                if (!hVar.j) {
                    return;
                } else {
                    this.f17714f = this.f17716h * hVar.f17715g;
                }
            }
            d(gVar.f17715g + this.f17714f);
        }
        p pVar2 = this.a;
        if (pVar2 != null) {
            pVar2.a(this);
        }
    }

    public final void b(p pVar) {
        this.k.add(pVar);
        if (this.j) {
            pVar.a(pVar);
        }
    }

    public final void c() {
        this.f17718l.clear();
        this.k.clear();
        this.j = false;
        this.f17715g = 0;
        this.f17711c = false;
        this.f17710b = false;
    }

    public void d(int i5) {
        if (this.j) {
            return;
        }
        this.j = true;
        this.f17715g = i5;
        Iterator it = this.k.iterator();
        while (it.hasNext()) {
            e eVar = (e) it.next();
            eVar.a(eVar);
        }
    }

    public final String toString() {
        String str;
        StringBuilder sb2 = new StringBuilder();
        sb2.append(this.f17712d.f17727b.f1232g0);
        sb2.append(":");
        switch (this.f17713e) {
            case 1:
                str = "UNKNOWN";
                break;
            case 2:
                str = "HORIZONTAL_DIMENSION";
                break;
            case 3:
                str = "VERTICAL_DIMENSION";
                break;
            case 4:
                str = "LEFT";
                break;
            case 5:
                str = "RIGHT";
                break;
            case 6:
                str = "TOP";
                break;
            case 7:
                str = "BOTTOM";
                break;
            case 8:
                str = "BASELINE";
                break;
            default:
                str = "null";
                break;
        }
        sb2.append(str);
        sb2.append("(");
        sb2.append(this.j ? Integer.valueOf(this.f17715g) : "unresolved");
        sb2.append(") <t=");
        sb2.append(this.f17718l.size());
        sb2.append(":d=");
        sb2.append(this.k.size());
        sb2.append(">");
        return sb2.toString();
    }
}
